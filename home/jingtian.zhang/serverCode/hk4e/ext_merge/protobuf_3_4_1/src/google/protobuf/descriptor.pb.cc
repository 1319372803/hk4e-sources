// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/descriptor.pb.cc

// Line 630: range 000000000C92AF90-000000000C92B07B
__int64 __fastcall google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors(google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::_anonymous_namespace_ *__hidden this);

// Line 644: range 000000000C92AEA0-000000000C92AF00
void google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_RegisterTypes()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptors;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::protobuf_AssignDescriptorsOnce(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
  google::protobuf::internal::RegisterAllTypes(
    google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::file_level_metadata,
    26);
};

// Line 650: range 000000000C93A160-000000000C93A3F7
void __cdecl google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl()
{
  const char *v0; // rcx

  google::protobuf::internal::VerifyVersion(
    (google::protobuf::internal *)0x2DD660,
    3004000,
    "google/protobuf/descriptor.pb.cc",
    v0);
  google::protobuf::internal::InitProtobufDefaults((google::protobuf::internal *)0x2DD660);
  google::protobuf::FileDescriptorSet::FileDescriptorSet((google::protobuf::FileDescriptorSet *)&google::protobuf::_FileDescriptorSet_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_FileDescriptorSet_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::FileDescriptorProto::FileDescriptorProto((google::protobuf::FileDescriptorProto *)&google::protobuf::_FileDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_FileDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange((google::protobuf::DescriptorProto_ExtensionRange *)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange((google::protobuf::DescriptorProto_ReservedRange *)&google::protobuf::_DescriptorProto_ReservedRange_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_DescriptorProto_ReservedRange_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::DescriptorProto::DescriptorProto((google::protobuf::DescriptorProto *)&google::protobuf::_DescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_DescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions((google::protobuf::ExtensionRangeOptions *)&google::protobuf::_ExtensionRangeOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_ExtensionRangeOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::FieldDescriptorProto::FieldDescriptorProto((google::protobuf::FieldDescriptorProto *)&google::protobuf::_FieldDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_FieldDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::OneofDescriptorProto::OneofDescriptorProto((google::protobuf::OneofDescriptorProto *)&google::protobuf::_OneofDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_OneofDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::EnumDescriptorProto::EnumDescriptorProto((google::protobuf::EnumDescriptorProto *)&google::protobuf::_EnumDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_EnumDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto((google::protobuf::EnumValueDescriptorProto *)&google::protobuf::_EnumValueDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_EnumValueDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto((google::protobuf::ServiceDescriptorProto *)&google::protobuf::_ServiceDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_ServiceDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::MethodDescriptorProto::MethodDescriptorProto((google::protobuf::MethodDescriptorProto *)&google::protobuf::_MethodDescriptorProto_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_MethodDescriptorProto_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::FileOptions::FileOptions((google::protobuf::FileOptions *)&google::protobuf::_FileOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_FileOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::MessageOptions::MessageOptions((google::protobuf::MessageOptions *)&google::protobuf::_MessageOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_MessageOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::FieldOptions::FieldOptions((google::protobuf::FieldOptions *)&google::protobuf::_FieldOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_FieldOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::OneofOptions::OneofOptions((google::protobuf::OneofOptions *)&google::protobuf::_OneofOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_OneofOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::EnumOptions::EnumOptions((google::protobuf::EnumOptions *)&google::protobuf::_EnumOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_EnumOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::EnumValueOptions::EnumValueOptions((google::protobuf::EnumValueOptions *)&google::protobuf::_EnumValueOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_EnumValueOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::ServiceOptions::ServiceOptions((google::protobuf::ServiceOptions *)&google::protobuf::_ServiceOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_ServiceOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::MethodOptions::MethodOptions((google::protobuf::MethodOptions *)&google::protobuf::_MethodOptions_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_MethodOptions_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart((google::protobuf::UninterpretedOption_NamePart *)&google::protobuf::_UninterpretedOption_NamePart_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_UninterpretedOption_NamePart_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::UninterpretedOption::UninterpretedOption((google::protobuf::UninterpretedOption *)&google::protobuf::_UninterpretedOption_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_UninterpretedOption_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location((google::protobuf::SourceCodeInfo_Location *)&google::protobuf::_SourceCodeInfo_Location_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_SourceCodeInfo_Location_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::SourceCodeInfo::SourceCodeInfo((google::protobuf::SourceCodeInfo *)&google::protobuf::_SourceCodeInfo_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_SourceCodeInfo_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation((google::protobuf::GeneratedCodeInfo_Annotation *)&google::protobuf::_GeneratedCodeInfo_Annotation_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_GeneratedCodeInfo_Annotation_default_instance_,
    (const void *)0x2DD660);
  google::protobuf::GeneratedCodeInfo::GeneratedCodeInfo((google::protobuf::GeneratedCodeInfo *)&google::protobuf::_GeneratedCodeInfo_default_instance_);
  google::protobuf::internal::OnShutdownDestroyMessage(
    (google::protobuf::internal *)&google::protobuf::_GeneratedCodeInfo_default_instance_,
    (const void *)0x2DD660);
  *((_QWORD *)&google::protobuf::_FileDescriptorProto_default_instance_._instance.union_.align_to_ptr + 25) = &google::protobuf::_FileOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_FileDescriptorProto_default_instance_._instance.union_.align_to_ptr + 26) = &google::protobuf::_SourceCodeInfo_default_instance_;
  *((_QWORD *)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_._instance.union_.align_to_ptr + 3) = &google::protobuf::_ExtensionRangeOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_DescriptorProto_default_instance_._instance.union_.align_to_ptr + 28) = &google::protobuf::_MessageOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_FieldDescriptorProto_default_instance_._instance.union_.align_to_ptr + 8) = &google::protobuf::_FieldOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_OneofDescriptorProto_default_instance_._instance.union_.align_to_ptr + 4) = &google::protobuf::_OneofOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_EnumDescriptorProto_default_instance_._instance.union_.align_to_ptr + 7) = &google::protobuf::_EnumOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_EnumValueDescriptorProto_default_instance_._instance.union_.align_to_ptr + 4) = &google::protobuf::_EnumValueOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_ServiceDescriptorProto_default_instance_._instance.union_.align_to_ptr + 7) = &google::protobuf::_ServiceOptions_default_instance_;
  *((_QWORD *)&google::protobuf::_MethodDescriptorProto_default_instance_._instance.union_.align_to_ptr + 6) = &google::protobuf::_MethodOptions_default_instance_;
};

// Line 733: range 000000000C92AF10-000000000C92AF80
__int64 __fastcall google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::AddDescriptorsImpl(google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::_anonymous_namespace_ *__hidden this);

// Line 908: range 000000000C92B180-000000000C92B189
bool __fastcall google::protobuf::FieldDescriptorProto_Type_IsValid(int value)
{
  return (unsigned int)(value - 1) <= 0x11;
};

// Line 961: range 000000000C92B1F0-000000000C92B1F9
bool __fastcall google::protobuf::FieldDescriptorProto_Label_IsValid(int value)
{
  return (unsigned int)(value - 1) <= 2;
};

// Line 1007: range 000000000C92B2D0-000000000C92B2D6
bool __fastcall google::protobuf::FieldOptions_CType_IsValid(int value)
{
  return (unsigned int)value <= 2;
};

// Line 1078: range 000000000C932BC0-000000000C932C5C
void __fastcall google::protobuf::FileDescriptorSet::FileDescriptorSet(google::protobuf::FileDescriptorSet *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17F8F0;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->file_.arena_ = 0LL;
  *(_QWORD *)&this->file_.current_size_ = 0LL;
  this->file_.rep_ = 0LL;
  if ( this == (google::protobuf::FileDescriptorSet *)&google::protobuf::_FileDescriptorSet_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once == 2 )
  {
    this->_cached_size_ = 0;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    this->_cached_size_ = 0;
  }
};

// Line 1086: range 000000000C93F510-000000000C93F5FD
void __fastcall google::protobuf::FileDescriptorSet::FileDescriptorSet(
        google::protobuf::FileDescriptorSet *this,
        const google::protobuf::FileDescriptorSet *a2)
{
  google::protobuf::uint32 v2; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rbp
  google::protobuf::UnknownFieldSet *v8; // rdi
  void **elements; // r14
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v12; // r12d

  v2 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->file_.current_size_ = 0LL;
  current_size = a2->file_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A17F8F0;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v2;
  this->file_.arena_ = 0LL;
  this->file_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->file_.rep_->elements;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->file_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(
      &this->file_,
      v10,
      elements,
      current_size,
      this->file_.rep_->allocated_size - this->file_.current_size_);
    rep = this->file_.rep_;
    v12 = this->file_.current_size_ + current_size;
    this->file_.current_size_ = v12;
    if ( v12 > rep->allocated_size )
      rep->allocated_size = v12;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
  }
};

// Line 1097: range 000000000C92B3C0-000000000C92B3C7
void __fastcall google::protobuf::FileDescriptorSet::SharedCtor(google::protobuf::FileDescriptorSet *const this)
{
  this->_cached_size_ = 0;
};

// Line 1100: range 000000000C932CC0-000000000C932CDA
void __fastcall google::protobuf::FileDescriptorSet::~FileDescriptorSet(
        google::protobuf::FileDescriptorSet *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto> *p_file; // rdi

  p_file = &this->file_;
  p_file[-1].arena_ = (google::protobuf::Arena *)off_1A17F8F0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(p_file);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 1100: range 000000000C932CE0-000000000C932D07
void __fastcall google::protobuf::FileDescriptorSet::~FileDescriptorSet(
        google::protobuf::FileDescriptorSet *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto> *p_file; // rdi

  p_file = &this->file_;
  p_file[-1].arena_ = (google::protobuf::Arena *)off_1A17F8F0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(p_file);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x30uLL);
};

// Line 1106: range 000000000C92B3D0-000000000C92B438
void __fastcall google::protobuf::FileDescriptorSet::SharedDtor(google::protobuf::FileDescriptorSet *const this)
{
  ;
};

// Line 1110: range 000000000C923FD0-000000000C923FD3
void __fastcall google::protobuf::FileDescriptorSet::SetCachedSize(
        const google::protobuf::FileDescriptorSet *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 1123: range 000000000C932C70-000000000C932CAD
google::protobuf::FileDescriptorSet *__fastcall google::protobuf::FileDescriptorSet::New(
        google::protobuf::FileDescriptorSet *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FileDescriptorSet *v2; // r12

  v2 = (google::protobuf::FileDescriptorSet *)operator new(0x30uLL);
  google::protobuf::FileDescriptorSet::FileDescriptorSet(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::FileDescriptorSet>(a2, v2);
  return v2;
};

// Line 1124: range 000000000C731274-000000000C731284
void __fastcall __noreturn google::protobuf::FileDescriptorSet::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 1131: range 000000000C931B80-000000000C931BDE
void __fastcall google::protobuf::FileDescriptorSet::Clear(google::protobuf::FileDescriptorSet *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::FileDescriptorProto **elements; // rbp
  __int64 v5; // r12
  google::protobuf::FileDescriptorProto *v6; // rdi
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v8; // rdi

  current_size = this->file_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->file_.rep_;
    elements = (google::protobuf::FileDescriptorProto **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::FileDescriptorProto::Clear(v6);
    }
    while ( elements != (google::protobuf::FileDescriptorProto **)v5 );
    this->file_.current_size_ = 0;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v8->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v8);
  }
};

// Line 1143: range 000000000C939D80-000000000C939FB2
__int64 __fastcall google::protobuf::FileDescriptorSet::MergePartialFromCodedStream(
        google::protobuf::FileDescriptorSet *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  google::protobuf::FileDescriptorProto *AlignedAndAddCleanup; // r13
  __int64 v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = a2->buffer_;
      if ( a2->buffer_ >= a2->buffer_end_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = buffer + 1;
          goto LABEL_10;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_10:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_4;
      rep = this->file_.rep_;
      if ( !rep )
      {
        total_size = this->file_.total_size_;
        goto LABEL_34;
      }
      current_size = this->file_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size >= rep->allocated_size )
      {
        total_size = this->file_.total_size_;
        if ( allocated_size != total_size )
        {
          arena = this->file_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
            goto LABEL_16;
LABEL_35:
          AlignedAndAddCleanup = (google::protobuf::FileDescriptorProto *)operator new(0xD8uLL);
          google::protobuf::FileDescriptorProto::FileDescriptorProto(AlignedAndAddCleanup);
          goto LABEL_19;
        }
LABEL_34:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->file_, total_size + 1);
        arena = this->file_.arena_;
        ++this->file_.rep_->allocated_size;
        if ( !arena )
          goto LABEL_35;
LABEL_16:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::FileDescriptorProto,
            0xD8uLL);
        AlignedAndAddCleanup = (google::protobuf::FileDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                          &arena->impl_,
                                                                          0xD8uLL,
                                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::FileDescriptorProto>);
        google::protobuf::FileDescriptorProto::FileDescriptorProto(AlignedAndAddCleanup);
LABEL_19:
        v15 = this->file_.current_size_;
        v16 = this->file_.rep_;
        this->file_.current_size_ = v15 + 1;
        v16->elements[v15] = AlignedAndAddCleanup;
        goto LABEL_20;
      }
      AlignedAndAddCleanup = (google::protobuf::FileDescriptorProto *)rep->elements[current_size];
      this->file_.current_size_ = current_size + 1;
LABEL_20:
      v17 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v17, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v17 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          return 0LL;
      }
      v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v20.first;
      if ( v20.second < 0
        || !(unsigned __int8)google::protobuf::FileDescriptorProto::MergePartialFromCodedStream(
                               AlignedAndAddCleanup,
                               a2)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        return 0LL;
      }
    }
    if ( !TagFallback )
      return 1LL;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
  }
};

// Line 1185: range 000000000C9241C0-000000000C924232
void __fastcall google::protobuf::FileDescriptorSet::SerializeWithCachedSizes(
        const google::protobuf::FileDescriptorSet *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  current_size = this->file_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        1,
        (const google::protobuf::MessageLite *)this->file_.rep_->elements[v4],
        output);
    }
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 1205: range 000000000C929D80-000000000C929E1F
google::protobuf::uint8 *__fastcall google::protobuf::FileDescriptorSet::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FileDescriptorSet *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebp
  google::protobuf::uint8 *v5; // r12
  int i; // r14d
  const google::protobuf::FileDescriptorProto *v7; // rdi
  _BYTE *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  unsigned __int64 ptr; // rax

  current_size = this->file_.current_size_;
  if ( current_size )
  {
    v5 = target;
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::FileDescriptorProto *)this->file_.rep_->elements[i];
      *v5 = 10;
      v8 = v5 + 1;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      v5 = google::protobuf::FileDescriptorProto::InternalSerializeWithCachedSizesToArray(v7, deterministic, v8 + 1);
    }
  }
  else
  {
    v5 = target;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v5);
  else
    return v5;
};

// Line 1227: range 000000000C928EB0-000000000C928F2F
size_t __fastcall google::protobuf::FileDescriptorSet::ByteSizeLong(
        const google::protobuf::FileDescriptorSet *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->file_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::FileDescriptorProto::ByteSizeLong((const google::protobuf::FileDescriptorProto *const)this->file_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 1254: range 000000000C93F430-000000000C93F47D
void __fastcall google::protobuf::FileDescriptorSet::MergeFrom(
        google::protobuf::FileDescriptorSet *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FileDescriptorSet *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FileDescriptorSet *)__dynamic_cast(
                                                      from,
                                                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::FileDescriptorSet,
                                                      0LL);
  if ( v2 )
    google::protobuf::FileDescriptorSet::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 1269: range 000000000C93F370-000000000C93F42A
void __fastcall google::protobuf::FileDescriptorSet::MergeFrom(
        google::protobuf::FileDescriptorSet *const this,
        const google::protobuf::FileDescriptorSet *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->file_.current_size_;
  if ( current_size )
  {
    rep = from->file_.rep_;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->file_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(
      &this->file_,
      v10,
      rep->elements,
      current_size,
      this->file_.rep_->allocated_size - this->file_.current_size_);
    v11 = this->file_.rep_;
    v12 = this->file_.current_size_ + current_size;
    this->file_.current_size_ = v12;
    if ( v12 > v11->allocated_size )
      v11->allocated_size = v12;
  }
};

// Line 1281: range 000000000C93F490-000000000C93F4C0
void __fastcall google::protobuf::FileDescriptorSet::CopyFrom(
        google::protobuf::FileDescriptorSet *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::FileDescriptorSet::Clear(this);
    google::protobuf::FileDescriptorSet::MergeFrom(this, from);
  }
};

// Line 1288: range 000000000C93F4D0-000000000C93F500
void __fastcall google::protobuf::FileDescriptorSet::CopyFrom(
        google::protobuf::FileDescriptorSet *const this,
        const google::protobuf::FileDescriptorSet *from)
{
  if ( from != this )
  {
    google::protobuf::FileDescriptorSet::Clear(this);
    google::protobuf::FileDescriptorSet::MergeFrom(this, from);
  }
};

// Line 1293: range 000000000C92DE20-000000000C92DE55
bool __fastcall google::protobuf::FileDescriptorSet::IsInitialized(
        const google::protobuf::FileDescriptorSet *const this)
{
  int current_size; // ebx
  bool result; // al

  current_size = this->file_.current_size_;
  while ( --current_size >= 0 )
  {
    result = google::protobuf::FileDescriptorProto::IsInitialized((const google::protobuf::FileDescriptorProto *const)this->file_.rep_->elements[current_size]);
    if ( !result )
      return result;
  }
  return 1;
};

// Line 1299: range 000000000C92EFA0-000000000C92EFB0
void __fastcall google::protobuf::FileDescriptorSet::Swap(
        google::protobuf::FileDescriptorSet *const this,
        google::protobuf::FileDescriptorSet *other)
{
  if ( other != this )
    google::protobuf::FileDescriptorSet::InternalSwap(this, other);
};

// Line 1302: range 000000000C92EEE0-000000000C92EF9B
void __fastcall google::protobuf::FileDescriptorSet::InternalSwap(
        google::protobuf::FileDescriptorSet *const this,
        google::protobuf::FileDescriptorSet *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  _QWORD *v12; // [rsp+0h] [rbp-18h]

  rep = this->file_.rep_;
  this->file_.rep_ = other->file_.rep_;
  current_size = other->file_.current_size_;
  other->file_.rep_ = rep;
  LODWORD(rep) = this->file_.current_size_;
  this->file_.current_size_ = current_size;
  total_size = other->file_.total_size_;
  other->file_.current_size_ = (int)rep;
  LODWORD(rep) = this->file_.total_size_;
  this->file_.total_size_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->file_.total_size_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v12 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v12;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 1367: range 000000000C933330-000000000C933480
void __fastcall google::protobuf::FileDescriptorProto::FileDescriptorProto(google::protobuf::FileDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17F9C8;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->dependency_.arena_ = 0LL;
  *(_QWORD *)&this->dependency_.current_size_ = 0LL;
  this->dependency_.rep_ = 0LL;
  this->message_type_.arena_ = 0LL;
  *(_QWORD *)&this->message_type_.current_size_ = 0LL;
  this->message_type_.rep_ = 0LL;
  this->enum_type_.arena_ = 0LL;
  *(_QWORD *)&this->enum_type_.current_size_ = 0LL;
  this->enum_type_.rep_ = 0LL;
  this->service_.arena_ = 0LL;
  *(_QWORD *)&this->service_.current_size_ = 0LL;
  this->service_.rep_ = 0LL;
  this->extension_.arena_ = 0LL;
  *(_QWORD *)&this->extension_.current_size_ = 0LL;
  this->extension_.rep_ = 0LL;
  *(_QWORD *)&this->public_dependency_.current_size_ = 0LL;
  this->public_dependency_.rep_ = 0LL;
  *(_QWORD *)&this->weak_dependency_.current_size_ = 0LL;
  this->weak_dependency_.rep_ = 0LL;
  if ( this != (google::protobuf::FileDescriptorProto *)&google::protobuf::_FileDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->syntax_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_OWORD *)&this->options_ = 0LL;
};

// Line 1375: range 000000000C93F7F0-000000000C93FD7A
__int64 __fastcall google::protobuf::FileDescriptorProto::FileDescriptorProto(
        google::protobuf::FileDescriptorProto *this,
        const google::protobuf::FileDescriptorProto *a2)
{
  google::protobuf::uint32 v4; // eax
  int current_size; // r12d
  int v6; // r12d
  int v7; // r12d
  int v8; // r12d
  int v9; // r12d
  int v10; // esi
  int v11; // esi
  unsigned __int64 ptr; // rax
  unsigned __int64 v13; // rdi
  google::protobuf::UnknownFieldSet *v14; // rdi
  __int64 result; // rax
  std::string *v16; // rsi
  std::string *v17; // rsi
  std::string *v18; // rsi
  void **v19; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v20; // rax
  int v21; // r12d
  void **v22; // r15
  void **v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rax
  int v25; // r12d
  void **v26; // r14
  void **v27; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v28; // rax
  int v29; // r12d
  void **v30; // r13
  void **v31; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v32; // rax
  int v33; // r12d
  void **elements; // r13
  void **v35; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v37; // r12d
  google::protobuf::SourceCodeInfo *v38; // r12
  google::protobuf::FileOptions *v39; // r12
  google::protobuf::UnknownFieldSet *other; // [rsp+18h] [rbp-40h]
  google::protobuf::UnknownFieldSet *othera; // [rsp+18h] [rbp-40h]

  v4 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->dependency_.current_size_ = 0LL;
  current_size = a2->dependency_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A17F9C8;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = v4;
  this->_cached_size_ = 0;
  this->dependency_.arena_ = 0LL;
  this->dependency_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->dependency_.rep_->elements;
    v35 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->dependency_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->dependency_,
      v35,
      elements,
      current_size,
      this->dependency_.rep_->allocated_size - this->dependency_.current_size_);
    rep = this->dependency_.rep_;
    v37 = this->dependency_.current_size_ + current_size;
    this->dependency_.current_size_ = v37;
    if ( v37 > rep->allocated_size )
      rep->allocated_size = v37;
  }
  *(_QWORD *)&this->message_type_.current_size_ = 0LL;
  v6 = a2->message_type_.current_size_;
  this->message_type_.arena_ = 0LL;
  this->message_type_.rep_ = 0LL;
  if ( v6 )
  {
    v30 = a2->message_type_.rep_->elements;
    v31 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->message_type_, v6);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
      &this->message_type_,
      v31,
      v30,
      v6,
      this->message_type_.rep_->allocated_size - this->message_type_.current_size_);
    v32 = this->message_type_.rep_;
    v33 = this->message_type_.current_size_ + v6;
    this->message_type_.current_size_ = v33;
    if ( v33 > v32->allocated_size )
      v32->allocated_size = v33;
  }
  *(_QWORD *)&this->enum_type_.current_size_ = 0LL;
  v7 = a2->enum_type_.current_size_;
  this->enum_type_.arena_ = 0LL;
  this->enum_type_.rep_ = 0LL;
  if ( v7 )
  {
    v26 = a2->enum_type_.rep_->elements;
    v27 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enum_type_, v7);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
      &this->enum_type_,
      v27,
      v26,
      v7,
      this->enum_type_.rep_->allocated_size - this->enum_type_.current_size_);
    v28 = this->enum_type_.rep_;
    v29 = this->enum_type_.current_size_ + v7;
    this->enum_type_.current_size_ = v29;
    if ( v29 > v28->allocated_size )
      v28->allocated_size = v29;
  }
  *(_QWORD *)&this->service_.current_size_ = 0LL;
  v8 = a2->service_.current_size_;
  this->service_.arena_ = 0LL;
  this->service_.rep_ = 0LL;
  if ( v8 )
  {
    v22 = a2->service_.rep_->elements;
    v23 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->service_, v8);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(
      &this->service_,
      v23,
      v22,
      v8,
      this->service_.rep_->allocated_size - this->service_.current_size_);
    v24 = this->service_.rep_;
    v25 = this->service_.current_size_ + v8;
    this->service_.current_size_ = v25;
    if ( v25 > v24->allocated_size )
      v24->allocated_size = v25;
  }
  *(_QWORD *)&this->extension_.current_size_ = 0LL;
  v9 = a2->extension_.current_size_;
  this->extension_.arena_ = 0LL;
  this->extension_.rep_ = 0LL;
  if ( v9 )
  {
    othera = (google::protobuf::UnknownFieldSet *)a2->extension_.rep_->elements;
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_, v9);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
      &this->extension_,
      v19,
      (void **)&othera->fields_,
      v9,
      this->extension_.rep_->allocated_size - this->extension_.current_size_);
    v20 = this->extension_.rep_;
    v21 = this->extension_.current_size_ + v9;
    this->extension_.current_size_ = v21;
    if ( v21 > v20->allocated_size )
      v20->allocated_size = v21;
  }
  v10 = a2->public_dependency_.current_size_;
  *(_QWORD *)&this->public_dependency_.current_size_ = 0LL;
  this->public_dependency_.rep_ = 0LL;
  if ( v10 )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->public_dependency_, v10);
    memcpy(
      this->public_dependency_.rep_->elements,
      a2->public_dependency_.rep_->elements,
      4LL * a2->public_dependency_.current_size_);
    this->public_dependency_.current_size_ = a2->public_dependency_.current_size_;
  }
  v11 = a2->weak_dependency_.current_size_;
  *(_QWORD *)&this->weak_dependency_.current_size_ = 0LL;
  this->weak_dependency_.rep_ = 0LL;
  if ( v11 )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->weak_dependency_, v11);
    memcpy(
      this->weak_dependency_.rep_->elements,
      a2->weak_dependency_.rep_->elements,
      4LL * a2->weak_dependency_.current_size_);
    this->weak_dependency_.current_size_ = a2->weak_dependency_.current_size_;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v13 = (unsigned __int64)this->_internal_metadata_.ptr_;
    other = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v13 & 1) != 0 )
      v14 = (google::protobuf::UnknownFieldSet *)(v13 & 0xFFFFFFFFFFFFFFFELL);
    else
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v14, other);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  result = a2->_has_bits_.has_bits_[0];
  if ( (result & 1) != 0 )
  {
    v16 = a2->name_.ptr_;
    if ( v16 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v16);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 2) != 0 )
  {
    v17 = a2->package_.ptr_;
    if ( v17 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->package_,
        (unsigned __int8 **)v17);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->syntax_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 4) != 0 )
  {
    v18 = a2->syntax_.ptr_;
    if ( v18 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->syntax_,
        (unsigned __int8 **)v18);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 8) != 0 )
  {
    v39 = (google::protobuf::FileOptions *)operator new(0xB8uLL);
    google::protobuf::FileOptions::FileOptions(v39, a2->options_);
    this->options_ = v39;
    result = a2->_has_bits_.has_bits_[0];
  }
  else
  {
    this->options_ = 0LL;
  }
  if ( (result & 0x10) != 0 )
  {
    v38 = (google::protobuf::SourceCodeInfo *)operator new(0x30uLL);
    result = google::protobuf::SourceCodeInfo::SourceCodeInfo(v38, a2->source_code_info_);
    this->source_code_info_ = v38;
  }
  else
  {
    this->source_code_info_ = 0LL;
  }
  return result;
};

// Line 1401: range 000000000C731E16-000000000C731E98
void __fastcall __noreturn google::protobuf::FileDescriptorProto::FileDescriptorProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::internal::RepeatedPtrFieldBase *a7,
        google::protobuf::internal::RepeatedPtrFieldBase *a8)
{
  __int64 v8; // rbx
  struct _Unwind_Exception *v9; // rbp
  void *v10; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v11; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v12; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // r15
  int v14; // edx
  google::protobuf::RepeatedField<int> *v15; // rdi
  google::protobuf::RepeatedField<int> *v16; // rdi

  operator delete(v10, 0xB8uLL);
  v15 = *(google::protobuf::RepeatedField<int> **)(v8 + 168);
  if ( v15 && !*(_QWORD *)&v15->current_size_ )
    google::protobuf::RepeatedField<int>::InternalDeallocate(
      v15,
      (google::protobuf::RepeatedField<int>::Rep *)*(unsigned int *)(v8 + 164),
      v14);
  v16 = *(google::protobuf::RepeatedField<int> **)(v8 + 152);
  if ( v16 )
  {
    if ( !*(_QWORD *)&v16->current_size_ )
      google::protobuf::RepeatedField<int>::InternalDeallocate(
        v16,
        (google::protobuf::RepeatedField<int>::Rep *)*(unsigned int *)(v8 + 148),
        v14);
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(v13);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(v12);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(v11);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(a8);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(a7);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase((google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *const)(v8 + 8));
  _Unwind_Resume(v9);
};

// Line 1418: range 000000000C92B4A0-000000000C92B4D3
void __fastcall google::protobuf::FileDescriptorProto::SharedCtor(google::protobuf::FileDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->syntax_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_OWORD *)&this->options_ = 0LL;
};

// Line 1423: range 000000000C9334E0-000000000C933584
void __fastcall google::protobuf::FileDescriptorProto::~FileDescriptorProto(
        google::protobuf::FileDescriptorProto *const this)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rdi
  google::protobuf::RepeatedField<int>::Rep *v3; // rdi

  this->_vptr_MessageLite = (int (**)(...))off_1A17F9C8;
  google::protobuf::FileDescriptorProto::SharedDtor(this);
  rep = this->weak_dependency_.rep_;
  if ( rep && !rep->arena )
    operator delete(rep, 4LL * this->weak_dependency_.total_size_ + 8);
  v3 = this->public_dependency_.rep_;
  if ( v3 && !v3->arena )
    operator delete(v3, 4LL * this->public_dependency_.total_size_ + 8);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(&this->extension_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(&this->service_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(&this->enum_type_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(&this->message_type_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&this->dependency_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 1423: range 000000000C933590-000000000C9335A2
void __fastcall google::protobuf::FileDescriptorProto::~FileDescriptorProto(
        google::protobuf::FileDescriptorProto *const this)
{
  google::protobuf::FileDescriptorProto::~FileDescriptorProto(this);
  operator delete(this, 0xD8uLL);
};

// Line 1428: range 000000000C92B4E0-000000000C92B5C6
void __fastcall google::protobuf::FileDescriptorProto::SharedDtor(google::protobuf::FileDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v4; // rbp
  google::protobuf::FileOptions *options; // rdi
  google::protobuf::SourceCodeInfo *source_code_info; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->package_.ptr_;
  if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
  {
    if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
      operator delete(v3->union_.align_to_ptr);
    operator delete(v3, 0x20uLL);
  }
  v4 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->syntax_.ptr_;
  if ( v4 && v4 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    if ( (void **)v4->union_.align_to_int64 != &v4->union_.align_to_ptr + 2 )
      operator delete(v4->union_.align_to_ptr);
    operator delete(v4, 0x20uLL);
  }
  if ( this != (google::protobuf::FileDescriptorProto *const)&google::protobuf::_FileDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::FileOptions *))options->_vptr_MessageLite + 1))(options);
    source_code_info = this->source_code_info_;
    if ( source_code_info )
      (*((void (__fastcall **)(google::protobuf::SourceCodeInfo *))source_code_info->_vptr_MessageLite + 1))(source_code_info);
  }
};

// Line 1438: range 000000000C923FE0-000000000C923FE3
void __fastcall google::protobuf::FileDescriptorProto::SetCachedSize(
        const google::protobuf::FileDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 1451: range 000000000C933490-000000000C9334CD
google::protobuf::FileDescriptorProto *__fastcall google::protobuf::FileDescriptorProto::New(
        google::protobuf::FileDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FileDescriptorProto *v2; // r12

  v2 = (google::protobuf::FileDescriptorProto *)operator new(0xD8uLL);
  google::protobuf::FileDescriptorProto::FileDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::FileDescriptorProto>(a2, v2);
  return v2;
};

// Line 1452: range 000000000C7313CC-000000000C7313DC
void __fastcall __noreturn google::protobuf::FileDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0xD8uLL);
  _Unwind_Resume(v0);
};

// Line 1459: range 000000000C931A00-000000000C931B71
void __fastcall google::protobuf::FileDescriptorProto::Clear(google::protobuf::FileDescriptorProto *const this)
{
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  void **elements; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rdx
  google::protobuf::ServiceDescriptorProto **v9; // rbx
  __int64 v10; // r12
  google::protobuf::ServiceDescriptorProto *v11; // rdi
  google::protobuf::uint32 v12; // ebx
  std::string *ptr; // rax
  std::string *v14; // rax
  std::string *v15; // rax
  unsigned __int64 v16; // rdi
  google::protobuf::UnknownFieldSet *v17; // rdi

  current_size = this->dependency_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->dependency_.rep_;
    elements = rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = (__int64)*elements++;
      *(_QWORD *)(v6 + 8) = 0LL;
      **(_BYTE **)v6 = 0;
    }
    while ( (void **)v5 != elements );
    this->dependency_.current_size_ = 0;
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->message_type_.current_size_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->enum_type_.current_size_);
  v7 = this->service_.current_size_;
  if ( v7 > 0 )
  {
    v8 = this->service_.rep_;
    v9 = (google::protobuf::ServiceDescriptorProto **)v8->elements;
    v10 = (__int64)&v8[1] + 8 * (unsigned int)(v7 - 1);
    do
    {
      v11 = *v9++;
      google::protobuf::ServiceDescriptorProto::Clear(v11);
    }
    while ( (google::protobuf::ServiceDescriptorProto **)v10 != v9 );
    this->service_.current_size_ = 0;
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->extension_.current_size_);
  v12 = this->_has_bits_.has_bits_[0];
  this->public_dependency_.current_size_ = 0;
  this->weak_dependency_.current_size_ = 0;
  if ( (v12 & 0x1F) != 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v12 & 2) != 0 )
    {
      v14 = this->package_.ptr_;
      v14->_M_string_length = 0LL;
      *v14->_M_dataplus._M_p = 0;
    }
    if ( (v12 & 4) != 0 )
    {
      v15 = this->syntax_.ptr_;
      v15->_M_string_length = 0LL;
      *v15->_M_dataplus._M_p = 0;
    }
    if ( (v12 & 8) == 0 )
    {
      if ( (v12 & 0x10) == 0 )
        goto LABEL_18;
      goto LABEL_22;
    }
    google::protobuf::FileOptions::Clear(this->options_);
    if ( (v12 & 0x10) != 0 )
LABEL_22:
      google::protobuf::SourceCodeInfo::Clear(this->source_code_info_);
  }
LABEL_18:
  v16 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v16 & 1) != 0 )
  {
    v17 = (google::protobuf::UnknownFieldSet *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( v17->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v17);
  }
};

// Line 1500: range 000000000C939150-000000000C939D73
__int64 __fastcall google::protobuf::FileDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::FileDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  __int64 **p_syntax; // r13
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v9; // rdx
  google::protobuf::UnknownFieldSet *v10; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  google::protobuf::EnumDescriptorProto *v14; // r14
  const google::protobuf::uint8 *v15; // rax
  int v16; // esi
  std::string *ptr; // rsi
  google::protobuf::SourceCodeInfo *source_code_info; // r14
  const google::protobuf::uint8 *v20; // rax
  int v21; // esi
  std::pair<int,int> v22; // rax
  int first; // r15d
  google::protobuf::FileOptions *options; // r14
  const google::protobuf::uint8 *v25; // rax
  int v26; // esi
  std::pair<int,int> v27; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  google::protobuf::FieldDescriptorProto *v31; // r14
  const google::protobuf::uint8 *v32; // rax
  int v33; // esi
  std::pair<int,int> v34; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v35; // rax
  __int64 v36; // rcx
  int v37; // edx
  google::protobuf::ServiceDescriptorProto *v38; // r14
  const google::protobuf::uint8 *v39; // rax
  int v40; // esi
  std::pair<int,int> v41; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  google::protobuf::DescriptorProto *v45; // r14
  const google::protobuf::uint8 *v46; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v48; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  std::pair<int,int> v52; // rax
  const google::protobuf::uint8 *v53; // rax
  google::protobuf::uint32 v54; // r14d
  google::protobuf::int64 v55; // rax
  __int64 v56; // rax
  google::protobuf::RepeatedField<int>::Rep *v57; // rdx
  int v58; // r14d
  google::protobuf::uint32 v59; // esi
  google::protobuf::int64 v60; // rax
  __int64 v61; // rcx
  google::protobuf::RepeatedField<int>::Rep *v62; // rdi
  const google::protobuf::uint8 *v63; // rax
  google::protobuf::uint32 v64; // r14d
  google::protobuf::int64 Varint32Fallback; // rax
  __int64 v66; // rax
  google::protobuf::RepeatedField<int>::Rep *v67; // rdx
  int v68; // r14d
  google::protobuf::uint32 v69; // esi
  google::protobuf::int64 v70; // rax
  __int64 v71; // rcx
  google::protobuf::RepeatedField<int>::Rep *v72; // rdi
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  std::string *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v76; // rdx
  __int64 v77; // rax
  int v78; // ecx
  google::protobuf::Arena *v79; // rdi
  __int64 v80; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v81; // rdx
  int v82; // ecx
  google::protobuf::Arena *v83; // rdi
  __int64 v84; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v85; // rdx
  int v86; // ecx
  google::protobuf::Arena *v87; // rdi
  __int64 v88; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v89; // rdx
  int v90; // ecx
  google::protobuf::Arena *v91; // rdi
  __int64 v92; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v93; // rdx

  p_syntax = (__int64 **)&this->syntax_;
  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
LABEL_2:
  if ( buffer >= buffer_end )
    goto LABEL_10;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      a2->buffer_ = buffer + 1;
      goto LABEL_12;
    }
LABEL_4:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      break;
LABEL_12:
    if ( TagFallback > 0x67 )
      break;
    switch ( TagFallback >> 3 )
    {
      case 0u:
        goto handle_unusual_19;
      case 1u:
        if ( TagFallback != 10 )
          goto LABEL_6;
        ptr = this->name_.ptr_;
        this->_has_bits_.has_bits_[0] |= 1u;
        if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          ptr = this->name_.ptr_;
        }
        goto LABEL_26;
      case 2u:
        if ( TagFallback != 18 )
          goto LABEL_6;
        ptr = this->package_.ptr_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->package_,
            (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          ptr = this->package_.ptr_;
        }
        goto LABEL_26;
      case 3u:
        if ( TagFallback != 26 )
          goto LABEL_6;
        rep = this->dependency_.rep_;
        if ( !rep )
        {
          total_size = this->dependency_.total_size_;
LABEL_166:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->dependency_, total_size + 1);
          rep = this->dependency_.rep_;
          allocated_size = rep->allocated_size;
          goto LABEL_129;
        }
        current_size = this->dependency_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          ptr = (std::string *)rep->elements[current_size];
          this->dependency_.current_size_ = current_size + 1;
          goto LABEL_26;
        }
        total_size = this->dependency_.total_size_;
        if ( allocated_size == total_size )
          goto LABEL_166;
LABEL_129:
        arena = this->dependency_.arena_;
        rep->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'std::string,
              0x20uLL);
          AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                  &arena->impl_,
                                                  0x20uLL,
                                                  google::protobuf::internal::arena_destruct_object<std::string>);
        }
        else
        {
          AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
        }
        ptr = AlignedAndAddCleanup;
        AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
        v76 = this->dependency_.rep_;
        AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
        v77 = this->dependency_.current_size_;
        ptr->_M_string_length = 0LL;
        this->dependency_.current_size_ = v77 + 1;
        v76->elements[v77] = ptr;
LABEL_26:
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
          return 0LL;
        goto LABEL_9;
      case 4u:
        if ( TagFallback != 34 )
          goto LABEL_6;
        v42 = this->message_type_.rep_;
        if ( !v42 )
        {
          v90 = this->message_type_.total_size_;
LABEL_168:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->message_type_, v90 + 1);
          v42 = this->message_type_.rep_;
          v44 = v42->allocated_size;
          goto LABEL_153;
        }
        v43 = this->message_type_.current_size_;
        v44 = v42->allocated_size;
        if ( (int)v43 < v42->allocated_size )
        {
          v45 = (google::protobuf::DescriptorProto *)v42->elements[v43];
          this->message_type_.current_size_ = v43 + 1;
          goto LABEL_79;
        }
        v90 = this->message_type_.total_size_;
        if ( v44 == v90 )
          goto LABEL_168;
LABEL_153:
        v91 = this->message_type_.arena_;
        v42->allocated_size = v44 + 1;
        if ( v91 )
        {
          if ( v91->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v91,
              (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
              0xE8uLL);
          v45 = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                       &v91->impl_,
                                                       0xE8uLL,
                                                       google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
          google::protobuf::DescriptorProto::DescriptorProto(v45);
        }
        else
        {
          v45 = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
          google::protobuf::DescriptorProto::DescriptorProto(v45);
        }
        v92 = this->message_type_.current_size_;
        v93 = this->message_type_.rep_;
        this->message_type_.current_size_ = v92 + 1;
        v93->elements[v92] = v45;
LABEL_79:
        v46 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v46, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v46 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v48 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v48.first;
        if ( v48.second >= 0 && (unsigned __int8)google::protobuf::DescriptorProto::MergePartialFromCodedStream(v45, a2) )
          goto LABEL_40;
        return 0LL;
      case 5u:
        if ( TagFallback != 42 )
          goto LABEL_6;
        v11 = this->enum_type_.rep_;
        if ( !v11 )
        {
          v86 = this->enum_type_.total_size_;
LABEL_164:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->enum_type_, v86 + 1);
          v11 = this->enum_type_.rep_;
          v13 = v11->allocated_size;
          goto LABEL_147;
        }
        v12 = this->enum_type_.current_size_;
        v13 = v11->allocated_size;
        if ( (int)v12 < v11->allocated_size )
        {
          v14 = (google::protobuf::EnumDescriptorProto *)v11->elements[v12];
          this->enum_type_.current_size_ = v12 + 1;
          goto LABEL_18;
        }
        v86 = this->enum_type_.total_size_;
        if ( v13 == v86 )
          goto LABEL_164;
LABEL_147:
        v87 = this->enum_type_.arena_;
        v11->allocated_size = v13 + 1;
        if ( v87 )
        {
          if ( v87->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v87,
              (const std::type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
              0x40uLL);
          v14 = (google::protobuf::EnumDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                           &v87->impl_,
                                                           0x40uLL,
                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>);
          google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v14);
        }
        else
        {
          v14 = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
          google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v14);
        }
        v88 = this->enum_type_.current_size_;
        v89 = this->enum_type_.rep_;
        this->enum_type_.current_size_ = v88 + 1;
        v89->elements[v88] = v14;
LABEL_18:
        v15 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v16 = *v15, (unsigned int)v16 <= 0x7F) )
        {
          a2->buffer_ = v15 + 1;
        }
        else
        {
          v16 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v16 < 0 )
            return 0LL;
        }
        v52 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v16);
        first = v52.first;
        if ( v52.second >= 0
          && (unsigned __int8)google::protobuf::EnumDescriptorProto::MergePartialFromCodedStream(v14, a2) )
        {
          goto LABEL_40;
        }
        return 0LL;
      case 6u:
        if ( TagFallback != 50 )
          goto LABEL_6;
        v35 = this->service_.rep_;
        if ( !v35 )
        {
          v82 = this->service_.total_size_;
LABEL_170:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->service_, v82 + 1);
          v35 = this->service_.rep_;
          v37 = v35->allocated_size;
          goto LABEL_141;
        }
        v36 = this->service_.current_size_;
        v37 = v35->allocated_size;
        if ( (int)v36 < v35->allocated_size )
        {
          v38 = (google::protobuf::ServiceDescriptorProto *)v35->elements[v36];
          this->service_.current_size_ = v36 + 1;
          goto LABEL_69;
        }
        v82 = this->service_.total_size_;
        if ( v37 == v82 )
          goto LABEL_170;
LABEL_141:
        v83 = this->service_.arena_;
        v35->allocated_size = v37 + 1;
        if ( v83 )
        {
          if ( v83->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v83,
              (const std::type_info *)&`typeinfo for'google::protobuf::ServiceDescriptorProto,
              0x40uLL);
          v38 = (google::protobuf::ServiceDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                              &v83->impl_,
                                                              0x40uLL,
                                                              google::protobuf::internal::arena_destruct_object<google::protobuf::ServiceDescriptorProto>);
          google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(v38);
        }
        else
        {
          v38 = (google::protobuf::ServiceDescriptorProto *)operator new(0x40uLL);
          google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(v38);
        }
        v84 = this->service_.current_size_;
        v85 = this->service_.rep_;
        this->service_.current_size_ = v84 + 1;
        v85->elements[v84] = v38;
LABEL_69:
        v39 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v40 = *v39, (unsigned int)v40 <= 0x7F) )
        {
          a2->buffer_ = v39 + 1;
        }
        else
        {
          v40 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v40 < 0 )
            return 0LL;
        }
        v41 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v40);
        first = v41.first;
        if ( v41.second >= 0
          && (unsigned __int8)google::protobuf::ServiceDescriptorProto::MergePartialFromCodedStream(v38, a2) )
        {
          goto LABEL_40;
        }
        return 0LL;
      case 7u:
        if ( TagFallback != 58 )
          goto LABEL_6;
        v28 = this->extension_.rep_;
        if ( !v28 )
        {
          v78 = this->extension_.total_size_;
LABEL_172:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->extension_, v78 + 1);
          v28 = this->extension_.rep_;
          v30 = v28->allocated_size;
          goto LABEL_135;
        }
        v29 = this->extension_.current_size_;
        v30 = v28->allocated_size;
        if ( (int)v29 < v28->allocated_size )
        {
          v31 = (google::protobuf::FieldDescriptorProto *)v28->elements[v29];
          this->extension_.current_size_ = v29 + 1;
          goto LABEL_59;
        }
        v78 = this->extension_.total_size_;
        if ( v30 == v78 )
          goto LABEL_172;
LABEL_135:
        v79 = this->extension_.arena_;
        v28->allocated_size = v30 + 1;
        if ( v79 )
        {
          if ( v79->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v79,
              (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
              0x58uLL);
          v31 = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                            &v79->impl_,
                                                            0x58uLL,
                                                            google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
          google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v31);
        }
        else
        {
          v31 = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
          google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v31);
        }
        v80 = this->extension_.current_size_;
        v81 = this->extension_.rep_;
        this->extension_.current_size_ = v80 + 1;
        v81->elements[v80] = v31;
LABEL_59:
        v32 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v33 = *v32, (unsigned int)v33 <= 0x7F) )
        {
          a2->buffer_ = v32 + 1;
        }
        else
        {
          v33 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v33 < 0 )
            return 0LL;
        }
        v34 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v33);
        first = v34.first;
        if ( v34.second < 0
          || !(unsigned __int8)google::protobuf::FieldDescriptorProto::MergePartialFromCodedStream(v31, a2) )
        {
          return 0LL;
        }
LABEL_40:
        if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          return 0LL;
        goto LABEL_9;
      case 8u:
        if ( TagFallback != 66 )
          goto LABEL_6;
        options = this->options_;
        this->_has_bits_.has_bits_[0] |= 8u;
        if ( !options )
        {
          options = (google::protobuf::FileOptions *)operator new(0xB8uLL);
          google::protobuf::FileOptions::FileOptions(options);
          this->options_ = options;
        }
        v25 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v26 = *v25, (unsigned int)v26 <= 0x7F) )
        {
          a2->buffer_ = v25 + 1;
        }
        else
        {
          v26 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v26 < 0 )
            return 0LL;
        }
        v27 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v26);
        first = v27.first;
        if ( v27.second >= 0 && (unsigned __int8)google::protobuf::FileOptions::MergePartialFromCodedStream(options, a2) )
          goto LABEL_40;
        return 0LL;
      case 9u:
        if ( TagFallback != 74 )
          goto LABEL_6;
        source_code_info = this->source_code_info_;
        this->_has_bits_.has_bits_[0] |= 0x10u;
        if ( !source_code_info )
        {
          source_code_info = (google::protobuf::SourceCodeInfo *)operator new(0x30uLL);
          google::protobuf::SourceCodeInfo::SourceCodeInfo(source_code_info);
          this->source_code_info_ = source_code_info;
        }
        v20 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v21 = *v20, (unsigned int)v21 <= 0x7F) )
        {
          a2->buffer_ = v20 + 1;
        }
        else
        {
          v21 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v21 < 0 )
            return 0LL;
        }
        v22 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v21);
        first = v22.first;
        if ( v22.second >= 0
          && (unsigned __int8)google::protobuf::SourceCodeInfo::MergePartialFromCodedStream(source_code_info, a2) )
        {
          goto LABEL_40;
        }
        return 0LL;
      case 0xAu:
        if ( TagFallback == 80 )
        {
          v63 = a2->buffer_;
          if ( a2->buffer_ >= a2->buffer_end_ )
          {
            v64 = 0;
            goto LABEL_116;
          }
          v64 = *v63;
          if ( *(char *)v63 >= 0 )
          {
            a2->buffer_ = v63 + 1;
          }
          else
          {
LABEL_116:
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v64);
            v64 = Varint32Fallback;
            if ( Varint32Fallback < 0 )
              return 0LL;
          }
          v66 = this->public_dependency_.current_size_;
          if ( (_DWORD)v66 == this->public_dependency_.total_size_ )
          {
            google::protobuf::RepeatedField<int>::Reserve(&this->public_dependency_, v66 + 1);
            v66 = this->public_dependency_.current_size_;
          }
          v67 = this->public_dependency_.rep_;
          this->public_dependency_.current_size_ = v66 + 1;
          v67->elements[v66] = v64;
          v68 = this->public_dependency_.total_size_ - this->public_dependency_.current_size_;
          buffer_end = a2->buffer_end_;
          buffer = a2->buffer_;
          if ( v68 > 0 )
          {
            while ( 2 )
            {
              if ( buffer >= buffer_end )
                goto LABEL_10;
              if ( *buffer != 80 )
                goto LABEL_2;
              a2->buffer_ = buffer + 1;
              if ( buffer + 1 >= buffer_end )
              {
                v69 = 0;
LABEL_124:
                v70 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v69);
                v69 = v70;
                if ( v70 < 0 )
                  return 0LL;
                buffer_end = a2->buffer_end_;
                buffer = a2->buffer_;
              }
              else
              {
                v69 = buffer[1];
                if ( *((char *)buffer + 1) < 0 )
                  goto LABEL_124;
                buffer += 2;
                a2->buffer_ = buffer;
              }
              v71 = this->public_dependency_.current_size_;
              v72 = this->public_dependency_.rep_;
              this->public_dependency_.current_size_ = v71 + 1;
              v72->elements[v71] = v69;
              if ( !--v68 )
                goto LABEL_2;
              continue;
            }
          }
          goto LABEL_2;
        }
        if ( TagFallback == 82 )
        {
          if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  a2,
                  &this->public_dependency_) )
            return 0LL;
          goto LABEL_9;
        }
LABEL_6:
        v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
        if ( (v9 & 1) != 0 )
          v10 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
        else
          v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
        if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v10) )
          return 0LL;
LABEL_9:
        buffer = a2->buffer_;
        if ( a2->buffer_ >= a2->buffer_end_ )
        {
LABEL_10:
          TagFallback = 0;
          goto LABEL_4;
        }
        break;
      case 0xBu:
        if ( TagFallback == 88 )
        {
          v53 = a2->buffer_;
          if ( a2->buffer_ >= a2->buffer_end_ )
          {
            v54 = 0;
            goto LABEL_102;
          }
          v54 = *v53;
          if ( *(char *)v53 >= 0 )
          {
            a2->buffer_ = v53 + 1;
          }
          else
          {
LABEL_102:
            v55 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v54);
            v54 = v55;
            if ( v55 < 0 )
              return 0LL;
          }
          v56 = this->weak_dependency_.current_size_;
          if ( (_DWORD)v56 == this->weak_dependency_.total_size_ )
          {
            google::protobuf::RepeatedField<int>::Reserve(&this->weak_dependency_, v56 + 1);
            v56 = this->weak_dependency_.current_size_;
          }
          v57 = this->weak_dependency_.rep_;
          this->weak_dependency_.current_size_ = v56 + 1;
          v57->elements[v56] = v54;
          v58 = this->weak_dependency_.total_size_ - this->weak_dependency_.current_size_;
          buffer_end = a2->buffer_end_;
          buffer = a2->buffer_;
          if ( v58 <= 0 )
            goto LABEL_2;
          while ( 2 )
          {
            if ( buffer >= buffer_end )
              goto LABEL_10;
            if ( *buffer != 88 )
              goto LABEL_2;
            a2->buffer_ = buffer + 1;
            if ( buffer + 1 >= buffer_end )
            {
              v59 = 0;
LABEL_110:
              v60 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v59);
              v59 = v60;
              if ( v60 < 0 )
                return 0LL;
              buffer_end = a2->buffer_end_;
              buffer = a2->buffer_;
            }
            else
            {
              v59 = buffer[1];
              if ( *((char *)buffer + 1) < 0 )
                goto LABEL_110;
              buffer += 2;
              a2->buffer_ = buffer;
            }
            v61 = this->weak_dependency_.current_size_;
            v62 = this->weak_dependency_.rep_;
            this->weak_dependency_.current_size_ = v61 + 1;
            v62->elements[v61] = v59;
            if ( !--v58 )
              goto LABEL_2;
            continue;
          }
        }
        if ( TagFallback != 90 )
          goto LABEL_6;
        if ( !google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                a2,
                &this->weak_dependency_) )
          return 0LL;
        goto LABEL_9;
      case 0xCu:
        if ( TagFallback != 98 )
          goto LABEL_6;
        ptr = this->syntax_.ptr_;
        this->_has_bits_.has_bits_[0] |= 4u;
        if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            p_syntax,
            (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          ptr = this->syntax_.ptr_;
        }
        goto LABEL_26;
    }
  }
handle_unusual_19:
  if ( TagFallback )
    goto LABEL_6;
  return 1LL;
};

// Line 1705: range 000000000C924AB0-000000000C924D24
void __fastcall google::protobuf::FileDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::FileDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r13d
  int current_size; // r14d
  int i; // r12d
  __int64 v5; // rdx
  int v6; // r14d
  int j; // r12d
  __int64 v8; // rdx
  int v9; // r14d
  int k; // r12d
  __int64 v11; // rdx
  int v12; // r14d
  int m; // r12d
  __int64 v14; // rdx
  int v15; // r14d
  int n; // r12d
  __int64 v17; // rdx
  int v18; // r14d
  int ii; // r12d
  __int64 v20; // rdx
  int v21; // r14d
  int jj; // r12d
  __int64 v23; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
    if ( (v2 & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, this->package_.ptr_, output);
LABEL_3:
  current_size = this->dependency_.current_size_;
  if ( current_size > 0 )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteString(3LL, this->dependency_.rep_->elements[v5], output);
    }
  }
  v6 = this->message_type_.current_size_;
  if ( v6 )
  {
    for ( j = 0; j != v6; ++j )
    {
      v8 = j;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        4,
        (const google::protobuf::MessageLite *)this->message_type_.rep_->elements[v8],
        output);
    }
  }
  v9 = this->enum_type_.current_size_;
  if ( v9 )
  {
    for ( k = 0; k != v9; ++k )
    {
      v11 = k;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        5,
        (const google::protobuf::MessageLite *)this->enum_type_.rep_->elements[v11],
        output);
    }
  }
  v12 = this->service_.current_size_;
  if ( v12 )
  {
    for ( m = 0; m != v12; ++m )
    {
      v14 = m;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        6,
        (const google::protobuf::MessageLite *)this->service_.rep_->elements[v14],
        output);
    }
  }
  v15 = this->extension_.current_size_;
  if ( v15 )
  {
    for ( n = 0; n != v15; ++n )
    {
      v17 = n;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        7,
        (const google::protobuf::MessageLite *)this->extension_.rep_->elements[v17],
        output);
    }
  }
  if ( (v2 & 8) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(8, this->options_, output);
  if ( (v2 & 0x10) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(9, this->source_code_info_, output);
  v18 = this->public_dependency_.current_size_;
  if ( v18 > 0 )
  {
    for ( ii = 0; ii != v18; ++ii )
    {
      v20 = ii;
      google::protobuf::internal::WireFormatLite::WriteInt32(10, this->public_dependency_.rep_->elements[v20], output);
    }
  }
  v21 = this->weak_dependency_.current_size_;
  if ( v21 > 0 )
  {
    for ( jj = 0; jj != v21; ++jj )
    {
      v23 = jj;
      google::protobuf::internal::WireFormatLite::WriteInt32(11, this->weak_dependency_.rep_->elements[v23], output);
    }
  }
  if ( (v2 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(12LL, this->syntax_.ptr_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 1811: range 000000000C929990-000000000C929D71
google::protobuf::uint8 *__fastcall google::protobuf::FileDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FileDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v4; // ebp
  int current_size; // r13d
  int v6; // r12d
  __int64 v7; // rcx
  const std::string *v8; // rdi
  int v9; // r12d
  int i; // r15d
  google::protobuf::uint8 *v11; // rdx
  const google::protobuf::DescriptorProto *v12; // rdi
  unsigned int j; // eax
  char v14; // cl
  int v15; // r12d
  int k; // r15d
  google::protobuf::uint8 *v17; // rdx
  const google::protobuf::EnumDescriptorProto *v18; // rdi
  unsigned int m; // eax
  char v20; // cl
  int v21; // r12d
  int n; // r15d
  google::protobuf::uint8 *v23; // rdx
  const google::protobuf::ServiceDescriptorProto *v24; // rdi
  unsigned int ii; // eax
  char v26; // cl
  int v27; // r12d
  int jj; // r15d
  google::protobuf::uint8 *v29; // rdx
  const google::protobuf::FieldDescriptorProto *v30; // rdi
  unsigned int kk; // eax
  char v32; // cl
  google::protobuf::FileOptions *options; // rdi
  google::protobuf::uint8 *v34; // rdx
  unsigned int mm; // eax
  char v36; // cl
  google::protobuf::SourceCodeInfo *source_code_info; // rdi
  google::protobuf::uint8 *v38; // rdx
  unsigned int nn; // eax
  char v40; // cl
  int v41; // edi
  int v42; // edi
  unsigned __int64 v43; // rax
  google::protobuf::RepeatedField<int>::Rep *rep; // r8
  __int64 v46; // rsi
  unsigned __int64 v47; // rax
  google::protobuf::uint8 *v48; // rdx
  char v49; // cl
  google::protobuf::RepeatedField<int>::Rep *v50; // r8
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  google::protobuf::uint8 *v53; // rdx
  char v54; // cl
  std::string *v55; // rdi
  std::string *v56; // rdi
  std::string *ptr; // rdi

  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 1) != 0 )
  {
    ptr = this->name_.ptr_;
    *target = 10;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  if ( (v4 & 2) != 0 )
  {
    v56 = this->package_.ptr_;
    *target = 18;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v56, target + 1);
  }
  current_size = this->dependency_.current_size_;
  if ( current_size > 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = (const std::string *)this->dependency_.rep_->elements[v7];
      *target = 26;
      target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v8, target + 1);
    }
    while ( v6 != current_size );
  }
  v9 = this->message_type_.current_size_;
  if ( v9 )
  {
    for ( i = 0; i != v9; ++i )
    {
      v11 = target + 1;
      v12 = (const google::protobuf::DescriptorProto *)this->message_type_.rep_->elements[i];
      *(v11 - 1) = 34;
      for ( j = v12->_cached_size_; j > 0x7F; *(v11 - 1) = v14 | 0x80 )
      {
        v14 = j;
        j >>= 7;
        ++v11;
      }
      *v11 = j;
      target = google::protobuf::DescriptorProto::InternalSerializeWithCachedSizesToArray(v12, deterministic, v11 + 1);
    }
  }
  v15 = this->enum_type_.current_size_;
  if ( v15 )
  {
    for ( k = 0; k != v15; ++k )
    {
      v17 = target + 1;
      v18 = (const google::protobuf::EnumDescriptorProto *)this->enum_type_.rep_->elements[k];
      *(v17 - 1) = 42;
      for ( m = v18->_cached_size_; m > 0x7F; *(v17 - 1) = v20 | 0x80 )
      {
        v20 = m;
        m >>= 7;
        ++v17;
      }
      *v17 = m;
      target = google::protobuf::EnumDescriptorProto::InternalSerializeWithCachedSizesToArray(
                 v18,
                 deterministic,
                 v17 + 1);
    }
  }
  v21 = this->service_.current_size_;
  if ( v21 )
  {
    for ( n = 0; n != v21; ++n )
    {
      v23 = target + 1;
      v24 = (const google::protobuf::ServiceDescriptorProto *)this->service_.rep_->elements[n];
      *(v23 - 1) = 50;
      for ( ii = v24->_cached_size_; ii > 0x7F; *(v23 - 1) = v26 | 0x80 )
      {
        v26 = ii;
        ii >>= 7;
        ++v23;
      }
      *v23 = ii;
      target = google::protobuf::ServiceDescriptorProto::InternalSerializeWithCachedSizesToArray(
                 v24,
                 deterministic,
                 v23 + 1);
    }
  }
  v27 = this->extension_.current_size_;
  if ( v27 )
  {
    for ( jj = 0; jj != v27; ++jj )
    {
      v29 = target + 1;
      v30 = (const google::protobuf::FieldDescriptorProto *)this->extension_.rep_->elements[jj];
      *(v29 - 1) = 58;
      for ( kk = v30->_cached_size_; kk > 0x7F; *(v29 - 1) = v32 | 0x80 )
      {
        v32 = kk;
        kk >>= 7;
        ++v29;
      }
      *v29 = kk;
      target = google::protobuf::FieldDescriptorProto::InternalSerializeWithCachedSizesToArray(
                 v30,
                 deterministic,
                 v29 + 1);
    }
  }
  if ( (v4 & 8) != 0 )
  {
    options = this->options_;
    *target = 66;
    v34 = target + 1;
    for ( mm = options->_cached_size_; mm > 0x7F; *(v34 - 1) = v36 | 0x80 )
    {
      v36 = mm;
      mm >>= 7;
      ++v34;
    }
    *v34 = mm;
    target = google::protobuf::FileOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v34 + 1);
  }
  if ( (v4 & 0x10) != 0 )
  {
    source_code_info = this->source_code_info_;
    *target = 74;
    v38 = target + 1;
    for ( nn = source_code_info->_cached_size_; nn > 0x7F; *(v38 - 1) = v40 | 0x80 )
    {
      v40 = nn;
      nn >>= 7;
      ++v38;
    }
    *v38 = nn;
    target = google::protobuf::SourceCodeInfo::InternalSerializeWithCachedSizesToArray(
               source_code_info,
               deterministic,
               v38 + 1);
  }
  v41 = this->public_dependency_.current_size_;
  if ( v41 )
  {
    rep = this->public_dependency_.rep_;
    v46 = 0LL;
    do
    {
      v47 = rep->elements[v46];
      v48 = target + 1;
      for ( *(v48 - 1) = 80; v47 > 0x7F; *(v48 - 1) = v49 | 0x80 )
      {
        v49 = v47;
        v47 >>= 7;
        ++v48;
      }
      ++v46;
      *v48 = v47;
      target = v48 + 1;
    }
    while ( v41 > (int)v46 );
    v42 = this->weak_dependency_.current_size_;
    if ( !v42 )
    {
LABEL_38:
      if ( (v4 & 4) == 0 )
        goto LABEL_39;
      goto LABEL_52;
    }
  }
  else
  {
    v42 = this->weak_dependency_.current_size_;
    if ( !v42 )
      goto LABEL_38;
  }
  v50 = this->weak_dependency_.rep_;
  v51 = 0LL;
  do
  {
    v52 = v50->elements[v51];
    v53 = target + 1;
    for ( *(v53 - 1) = 88; v52 > 0x7F; *(v53 - 1) = v54 | 0x80 )
    {
      v54 = v52;
      v52 >>= 7;
      ++v53;
    }
    ++v51;
    *v53 = v52;
    target = v53 + 1;
  }
  while ( v42 > (int)v51 );
  if ( (v4 & 4) != 0 )
  {
LABEL_52:
    v55 = this->syntax_.ptr_;
    *target = 98;
    target = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v55, target + 1);
  }
LABEL_39:
  v43 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v43 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v43 & 0xFFFFFFFFFFFFFFFELL),
             target);
  else
    return target;
};

// Line 1923: range 000000000C928BC0-000000000C928EA8
size_t __fastcall google::protobuf::FileDescriptorProto::ByteSizeLong(
        const google::protobuf::FileDescriptorProto *const this)
{
  size_t v1; // rax
  unsigned __int64 ptr; // rdx
  __int64 current_size; // rbx
  size_t v5; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  void **elements; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rbp
  size_t v12; // rbx
  int v13; // r13d
  __int64 v14; // rdx
  size_t v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rbx
  int v19; // r13d
  __int64 v20; // rdx
  size_t v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // rbx
  int v25; // r13d
  __int64 v26; // rdx
  size_t v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rbp
  __int64 v30; // rbx
  int v31; // r13d
  __int64 v32; // rdx
  size_t v33; // rdx
  unsigned int v34; // eax
  size_t v35; // rax
  __int64 v36; // r13
  size_t v37; // r13
  google::protobuf::uint32 v38; // eax
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  size_t v43; // rdx
  unsigned int v44; // eax
  size_t v45; // rdx
  unsigned int v46; // eax

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->dependency_.current_size_;
  v5 = current_size + v1;
  if ( (int)current_size > 0 )
  {
    rep = this->dependency_.rep_;
    elements = rep->elements;
    v8 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v9 = (__int64)*elements++;
      _BitScanReverse(&v10, *(_QWORD *)(v9 + 8) | 1);
      v5 += *(_QWORD *)(v9 + 8) + ((9 * v10 + 73) >> 6);
    }
    while ( (void **)v8 != elements );
  }
  v11 = (unsigned int)this->message_type_.current_size_;
  v12 = v5 + v11;
  if ( (_DWORD)v11 )
  {
    v13 = 0;
    do
    {
      v14 = v13++;
      v15 = google::protobuf::DescriptorProto::ByteSizeLong((const google::protobuf::DescriptorProto *const)this->message_type_.rep_->elements[v14]);
      _BitScanReverse(&v16, v15 | 1);
      v12 += v15 + ((9 * v16 + 73) >> 6);
    }
    while ( (_DWORD)v11 != v13 );
  }
  v17 = (unsigned int)this->enum_type_.current_size_;
  v18 = v17 + v12;
  if ( (_DWORD)v17 )
  {
    v19 = 0;
    do
    {
      v20 = v19++;
      v21 = google::protobuf::EnumDescriptorProto::ByteSizeLong((const google::protobuf::EnumDescriptorProto *const)this->enum_type_.rep_->elements[v20]);
      _BitScanReverse(&v22, v21 | 1);
      v18 += v21 + ((9 * v22 + 73) >> 6);
    }
    while ( (_DWORD)v17 != v19 );
  }
  v23 = (unsigned int)this->service_.current_size_;
  v24 = v23 + v18;
  if ( (_DWORD)v23 )
  {
    v25 = 0;
    do
    {
      v26 = v25++;
      v27 = google::protobuf::ServiceDescriptorProto::ByteSizeLong((const google::protobuf::ServiceDescriptorProto *const)this->service_.rep_->elements[v26]);
      _BitScanReverse(&v28, v27 | 1);
      v24 += v27 + ((9 * v28 + 73) >> 6);
    }
    while ( (_DWORD)v23 != v25 );
  }
  v29 = (unsigned int)this->extension_.current_size_;
  v30 = v29 + v24;
  if ( (_DWORD)v29 )
  {
    v31 = 0;
    do
    {
      v32 = v31++;
      v33 = google::protobuf::FieldDescriptorProto::ByteSizeLong((const google::protobuf::FieldDescriptorProto *const)this->extension_.rep_->elements[v32]);
      _BitScanReverse(&v34, v33 | 1);
      v30 += v33 + ((9 * v34 + 73) >> 6);
    }
    while ( (_DWORD)v29 != v31 );
  }
  v35 = google::protobuf::internal::WireFormatLite::Int32Size(&this->public_dependency_);
  v36 = (unsigned int)this->public_dependency_.current_size_;
  v37 = google::protobuf::internal::WireFormatLite::Int32Size(&this->weak_dependency_)
      + v35
      + v36
      + (unsigned int)this->weak_dependency_.current_size_
      + v30;
  v38 = this->_has_bits_.has_bits_[0];
  if ( (v38 & 0x1F) != 0 )
  {
    if ( (v38 & 1) != 0 )
    {
      _BitScanReverse(&v39, this->name_.ptr_->_M_string_length | 1);
      v37 += this->name_.ptr_->_M_string_length + 1 + ((9 * v39 + 73) >> 6);
    }
    if ( (v38 & 2) != 0 )
    {
      _BitScanReverse(&v40, this->package_.ptr_->_M_string_length | 1);
      v37 += this->package_.ptr_->_M_string_length + 1 + ((9 * v40 + 73) >> 6);
    }
    if ( (v38 & 4) != 0 )
    {
      _BitScanReverse(&v41, this->syntax_.ptr_->_M_string_length | 1);
      v37 += this->syntax_.ptr_->_M_string_length + 1 + ((9 * v41 + 73) >> 6);
    }
    if ( (v38 & 8) != 0 )
    {
      v45 = google::protobuf::FileOptions::ByteSizeLong(this->options_);
      _BitScanReverse(&v46, v45 | 1);
      v37 += v45 + 1 + ((9 * v46 + 73) >> 6);
      if ( (this->_has_bits_.has_bits_[0] & 0x10) == 0 )
        goto LABEL_27;
    }
    else if ( (v38 & 0x10) == 0 )
    {
      goto LABEL_27;
    }
    v43 = google::protobuf::SourceCodeInfo::ByteSizeLong(this->source_code_info_);
    _BitScanReverse(&v44, v43 | 1);
    v37 += v43 + 1 + ((9 * v44 + 73) >> 6);
  }
LABEL_27:
  this->_cached_size_ = v37;
  return v37;
};

// Line 2046: range 000000000C93F610-000000000C93F65D
void __fastcall google::protobuf::FileDescriptorProto::MergeFrom(
        google::protobuf::FileDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FileDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FileDescriptorProto *)__dynamic_cast(
                                                        from,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::FileDescriptorProto,
                                                        0LL);
  if ( v2 )
    google::protobuf::FileDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 2061: range 000000000C93EE50-000000000C93F364
void __fastcall google::protobuf::FileDescriptorProto::MergeFrom(
        google::protobuf::FileDescriptorProto *this,
        const google::protobuf::FileDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  int v9; // r12d
  int v10; // r12d
  int v11; // r12d
  int v12; // r12d
  int v13; // esi
  int v14; // esi
  google::protobuf::uint32 v15; // r12d
  std::string *v16; // rdi
  std::string *v17; // rsi
  std::string *v18; // rdi
  std::string *v19; // rsi
  std::string *v20; // rdi
  std::string *v21; // rsi
  void **v22; // r13
  void **v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rax
  int v25; // r12d
  void **v26; // r13
  void **v27; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v28; // rax
  int v29; // r12d
  void **v30; // r13
  void **v31; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v32; // rax
  int v33; // r12d
  void **v34; // r13
  void **v35; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v36; // rax
  int v37; // r12d
  void **elements; // r13
  void **v39; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v41; // r12d
  google::protobuf::SourceCodeInfo *source_code_info; // r12
  google::protobuf::SourceCodeInfo *v43; // rsi
  google::protobuf::FileOptions *options; // r13
  google::protobuf::FileOptions *v45; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = a2->dependency_.current_size_;
  if ( current_size )
  {
    elements = a2->dependency_.rep_->elements;
    v39 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->dependency_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->dependency_,
      v39,
      elements,
      current_size,
      this->dependency_.rep_->allocated_size - this->dependency_.current_size_);
    rep = this->dependency_.rep_;
    v41 = this->dependency_.current_size_ + current_size;
    this->dependency_.current_size_ = v41;
    if ( v41 > rep->allocated_size )
      rep->allocated_size = v41;
  }
  v9 = a2->message_type_.current_size_;
  if ( v9
    && (v22 = a2->message_type_.rep_->elements,
        v23 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->message_type_, v9),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
          &this->message_type_,
          v23,
          v22,
          v9,
          this->message_type_.rep_->allocated_size - this->message_type_.current_size_),
        v24 = this->message_type_.rep_,
        v25 = this->message_type_.current_size_ + v9,
        this->message_type_.current_size_ = v25,
        v25 > v24->allocated_size) )
  {
    v24->allocated_size = v25;
    v10 = a2->enum_type_.current_size_;
    if ( !v10 )
      goto LABEL_8;
  }
  else
  {
    v10 = a2->enum_type_.current_size_;
    if ( !v10 )
      goto LABEL_8;
  }
  v26 = a2->enum_type_.rep_->elements;
  v27 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enum_type_, v10);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
    &this->enum_type_,
    v27,
    v26,
    v10,
    this->enum_type_.rep_->allocated_size - this->enum_type_.current_size_);
  v28 = this->enum_type_.rep_;
  v29 = this->enum_type_.current_size_ + v10;
  this->enum_type_.current_size_ = v29;
  if ( v29 <= v28->allocated_size )
  {
LABEL_8:
    v11 = a2->service_.current_size_;
    if ( !v11 )
      goto LABEL_9;
    goto LABEL_32;
  }
  v28->allocated_size = v29;
  v11 = a2->service_.current_size_;
  if ( !v11 )
    goto LABEL_9;
LABEL_32:
  v30 = a2->service_.rep_->elements;
  v31 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->service_, v11);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(
    &this->service_,
    v31,
    v30,
    v11,
    this->service_.rep_->allocated_size - this->service_.current_size_);
  v32 = this->service_.rep_;
  v33 = this->service_.current_size_ + v11;
  this->service_.current_size_ = v33;
  if ( v33 <= v32->allocated_size )
  {
LABEL_9:
    v12 = a2->extension_.current_size_;
    if ( !v12 )
      goto LABEL_10;
    goto LABEL_34;
  }
  v32->allocated_size = v33;
  v12 = a2->extension_.current_size_;
  if ( !v12 )
    goto LABEL_10;
LABEL_34:
  v34 = a2->extension_.rep_->elements;
  v35 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_, v12);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
    &this->extension_,
    v35,
    v34,
    v12,
    this->extension_.rep_->allocated_size - this->extension_.current_size_);
  v36 = this->extension_.rep_;
  v37 = this->extension_.current_size_ + v12;
  this->extension_.current_size_ = v37;
  if ( v37 <= v36->allocated_size )
  {
LABEL_10:
    v13 = a2->public_dependency_.current_size_;
    if ( v13 )
      goto LABEL_36;
    goto LABEL_11;
  }
  v36->allocated_size = v37;
  v13 = a2->public_dependency_.current_size_;
  if ( v13 )
  {
LABEL_36:
    google::protobuf::RepeatedField<int>::Reserve(
      &this->public_dependency_,
      this->public_dependency_.current_size_ + v13);
    memcpy(
      &this->public_dependency_.rep_->elements[this->public_dependency_.current_size_],
      a2->public_dependency_.rep_->elements,
      4LL * a2->public_dependency_.current_size_);
    this->public_dependency_.current_size_ += a2->public_dependency_.current_size_;
    v14 = a2->weak_dependency_.current_size_;
    if ( !v14 )
      goto LABEL_12;
    goto LABEL_37;
  }
LABEL_11:
  v14 = a2->weak_dependency_.current_size_;
  if ( !v14 )
    goto LABEL_12;
LABEL_37:
  google::protobuf::RepeatedField<int>::Reserve(&this->weak_dependency_, this->weak_dependency_.current_size_ + v14);
  memcpy(
    &this->weak_dependency_.rep_->elements[this->weak_dependency_.current_size_],
    a2->weak_dependency_.rep_->elements,
    4LL * a2->weak_dependency_.current_size_);
  this->weak_dependency_.current_size_ += a2->weak_dependency_.current_size_;
LABEL_12:
  v15 = a2->_has_bits_.has_bits_[0];
  if ( (v15 & 0x1F) != 0 )
  {
    if ( (v15 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v16 = this->name_.ptr_;
      v17 = a2->name_.ptr_;
      if ( v17 != v16 )
      {
        if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v17);
        else
          std::string::_M_assign(v16, v17);
      }
    }
    if ( (v15 & 2) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 2u;
      v18 = this->package_.ptr_;
      v19 = a2->package_.ptr_;
      if ( v19 != v18 )
      {
        if ( v18 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->package_,
            (unsigned __int8 **)v19);
        else
          std::string::_M_assign(v18, v19);
      }
    }
    if ( (v15 & 4) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 4u;
      v20 = this->syntax_.ptr_;
      v21 = a2->syntax_.ptr_;
      if ( v21 != v20 )
      {
        if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->syntax_,
            (unsigned __int8 **)v21);
        else
          std::string::_M_assign(v20, v21);
      }
    }
    if ( (v15 & 8) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 8u;
      if ( !options )
      {
        options = (google::protobuf::FileOptions *)operator new(0xB8uLL);
        google::protobuf::FileOptions::FileOptions(options);
        this->options_ = options;
      }
      v45 = a2->options_;
      if ( !v45 )
        v45 = (google::protobuf::FileOptions *)&google::protobuf::_FileOptions_default_instance_;
      google::protobuf::FileOptions::MergeFrom(options, v45);
    }
    if ( (v15 & 0x10) != 0 )
    {
      source_code_info = this->source_code_info_;
      this->_has_bits_.has_bits_[0] |= 0x10u;
      if ( !source_code_info )
      {
        source_code_info = (google::protobuf::SourceCodeInfo *)operator new(0x30uLL);
        google::protobuf::SourceCodeInfo::SourceCodeInfo(source_code_info);
        this->source_code_info_ = source_code_info;
      }
      v43 = a2->source_code_info_;
      if ( !v43 )
        v43 = (google::protobuf::SourceCodeInfo *)&google::protobuf::_SourceCodeInfo_default_instance_;
      google::protobuf::SourceCodeInfo::MergeFrom(source_code_info, v43);
    }
  }
};

// Line 2100: range 000000000C93F670-000000000C93F6A0
void __fastcall google::protobuf::FileDescriptorProto::CopyFrom(
        google::protobuf::FileDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::FileDescriptorProto::Clear(this);
    google::protobuf::FileDescriptorProto::MergeFrom(this, from);
  }
};

// Line 2107: range 000000000C93F6B0-000000000C93F6E0
void __fastcall google::protobuf::FileDescriptorProto::CopyFrom(
        google::protobuf::FileDescriptorProto *const this,
        const google::protobuf::FileDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::FileDescriptorProto::Clear(this);
    google::protobuf::FileDescriptorProto::MergeFrom(this, from);
  }
};

// Line 2112: range 000000000C92DD80-000000000C92DE18
bool __fastcall google::protobuf::FileDescriptorProto::IsInitialized(
        const google::protobuf::FileDescriptorProto *const this)
{
  int current_size; // ebx
  int v2; // ebx
  int v3; // ebx
  bool result; // al

  current_size = this->message_type_.current_size_;
  while ( --current_size >= 0 )
  {
    if ( !google::protobuf::DescriptorProto::IsInitialized((const google::protobuf::DescriptorProto *const)this->message_type_.rep_->elements[current_size]) )
      return 0;
  }
  v2 = this->enum_type_.current_size_;
  while ( --v2 >= 0 )
  {
    if ( !google::protobuf::EnumDescriptorProto::IsInitialized((const google::protobuf::EnumDescriptorProto *const)this->enum_type_.rep_->elements[v2]) )
      return 0;
  }
  v3 = this->service_.current_size_;
  while ( --v3 >= 0 )
  {
    if ( !google::protobuf::ServiceDescriptorProto::IsInitialized((const google::protobuf::ServiceDescriptorProto *const)this->service_.rep_->elements[v3]) )
      return 0;
  }
  result = google::protobuf::internal::AllAreInitialized<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>>(&this->extension_);
  if ( !result )
    return 0;
  if ( (this->_has_bits_.has_bits_[0] & 8) != 0 )
    return google::protobuf::FileOptions::IsInitialized(this->options_);
  return result;
};

// Line 2124: range 000000000C930A40-000000000C930A50
void __fastcall google::protobuf::FileDescriptorProto::Swap(
        google::protobuf::FileDescriptorProto *const this,
        google::protobuf::FileDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::FileDescriptorProto::InternalSwap(this, other);
};

// Line 2127: range 000000000C930790-000000000C930A3B
void __fastcall google::protobuf::FileDescriptorProto::InternalSwap(
        google::protobuf::FileDescriptorProto *const this,
        google::protobuf::FileDescriptorProto *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rax
  google::protobuf::RepeatedField<int>::Rep *v13; // rdx
  google::protobuf::RepeatedField<int>::Rep *v14; // rax
  google::protobuf::RepeatedField<int>::Rep *v15; // rdx
  google::protobuf::RepeatedField<int>::Rep *v16; // rax
  std::string *ptr; // rdx
  std::string *v18; // rax
  std::string *v19; // rdx
  std::string *v20; // rax
  std::string *v21; // rdx
  std::string *v22; // rax
  google::protobuf::FileOptions *options; // rax
  google::protobuf::SourceCodeInfo *source_code_info; // rdx
  google::protobuf::SourceCodeInfo *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rcx
  int cached_size; // eax
  _QWORD *v32; // [rsp+0h] [rbp-18h]

  rep = this->dependency_.rep_;
  this->dependency_.rep_ = other->dependency_.rep_;
  current_size = other->dependency_.current_size_;
  other->dependency_.rep_ = rep;
  LODWORD(rep) = this->dependency_.current_size_;
  this->dependency_.current_size_ = current_size;
  total_size = other->dependency_.total_size_;
  other->dependency_.current_size_ = (int)rep;
  LODWORD(rep) = this->dependency_.total_size_;
  this->dependency_.total_size_ = total_size;
  v5 = other->message_type_.rep_;
  other->dependency_.total_size_ = (int)rep;
  v6 = this->message_type_.rep_;
  this->message_type_.rep_ = v5;
  LODWORD(v5) = other->message_type_.current_size_;
  other->message_type_.rep_ = v6;
  LODWORD(v6) = this->message_type_.current_size_;
  this->message_type_.current_size_ = (int)v5;
  LODWORD(v5) = other->message_type_.total_size_;
  other->message_type_.current_size_ = (int)v6;
  LODWORD(v6) = this->message_type_.total_size_;
  this->message_type_.total_size_ = (int)v5;
  v7 = other->enum_type_.rep_;
  other->message_type_.total_size_ = (int)v6;
  v8 = this->enum_type_.rep_;
  this->enum_type_.rep_ = v7;
  LODWORD(v7) = other->enum_type_.current_size_;
  other->enum_type_.rep_ = v8;
  LODWORD(v8) = this->enum_type_.current_size_;
  this->enum_type_.current_size_ = (int)v7;
  LODWORD(v7) = other->enum_type_.total_size_;
  other->enum_type_.current_size_ = (int)v8;
  LODWORD(v8) = this->enum_type_.total_size_;
  this->enum_type_.total_size_ = (int)v7;
  v9 = other->service_.rep_;
  other->enum_type_.total_size_ = (int)v8;
  v10 = this->service_.rep_;
  this->service_.rep_ = v9;
  LODWORD(v9) = other->service_.current_size_;
  other->service_.rep_ = v10;
  LODWORD(v10) = this->service_.current_size_;
  this->service_.current_size_ = (int)v9;
  LODWORD(v9) = other->service_.total_size_;
  other->service_.current_size_ = (int)v10;
  LODWORD(v10) = this->service_.total_size_;
  this->service_.total_size_ = (int)v9;
  v11 = other->extension_.rep_;
  other->service_.total_size_ = (int)v10;
  v12 = this->extension_.rep_;
  this->extension_.rep_ = v11;
  LODWORD(v11) = other->extension_.current_size_;
  other->extension_.rep_ = v12;
  LODWORD(v12) = this->extension_.current_size_;
  this->extension_.current_size_ = (int)v11;
  LODWORD(v11) = other->extension_.total_size_;
  other->extension_.current_size_ = (int)v12;
  LODWORD(v12) = this->extension_.total_size_;
  this->extension_.total_size_ = (int)v11;
  v13 = other->public_dependency_.rep_;
  other->extension_.total_size_ = (int)v12;
  v14 = this->public_dependency_.rep_;
  this->public_dependency_.rep_ = v13;
  other->public_dependency_.rep_ = v14;
  LODWORD(v14) = this->public_dependency_.current_size_;
  this->public_dependency_.current_size_ = other->public_dependency_.current_size_;
  LODWORD(v13) = other->public_dependency_.total_size_;
  other->public_dependency_.current_size_ = (int)v14;
  LODWORD(v14) = this->public_dependency_.total_size_;
  this->public_dependency_.total_size_ = (int)v13;
  v15 = other->weak_dependency_.rep_;
  other->public_dependency_.total_size_ = (int)v14;
  v16 = this->weak_dependency_.rep_;
  this->weak_dependency_.rep_ = v15;
  LODWORD(v15) = other->weak_dependency_.current_size_;
  other->weak_dependency_.rep_ = v16;
  LODWORD(v16) = this->weak_dependency_.current_size_;
  this->weak_dependency_.current_size_ = (int)v15;
  LODWORD(v15) = other->weak_dependency_.total_size_;
  other->weak_dependency_.current_size_ = (int)v16;
  LODWORD(v16) = this->weak_dependency_.total_size_;
  this->weak_dependency_.total_size_ = (int)v15;
  ptr = other->name_.ptr_;
  other->weak_dependency_.total_size_ = (int)v16;
  v18 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  v19 = other->package_.ptr_;
  other->name_.ptr_ = v18;
  v20 = this->package_.ptr_;
  this->package_.ptr_ = v19;
  v21 = other->syntax_.ptr_;
  other->package_.ptr_ = v20;
  v22 = this->syntax_.ptr_;
  this->syntax_.ptr_ = v21;
  other->syntax_.ptr_ = v22;
  options = this->options_;
  this->options_ = other->options_;
  source_code_info = other->source_code_info_;
  other->options_ = options;
  v25 = this->source_code_info_;
  this->source_code_info_ = source_code_info;
  LODWORD(source_code_info) = other->_has_bits_.has_bits_[0];
  other->source_code_info_ = v25;
  LODWORD(v25) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)source_code_info;
  v26 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v25;
  v27 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v27 & 1) != 0 )
  {
    if ( (v26 & 1) == 0 )
    {
      v28 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v27 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v26 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v28 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v27 & 1) != 0 )
  {
    v29 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v32 = v28;
    v29 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v28 = v32;
  }
  v30 = *v29;
  *v29 = *v28;
  *v28 = v30;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 2694: range 000000000C92D450-000000000C92D4D0
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(
        google::protobuf::DescriptorProto_ExtensionRange *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FAA0;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::DescriptorProto_ExtensionRange *)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  *(_OWORD *)&this->options_ = 0LL;
};

// Line 2702: range 000000000C93B7C0-000000000C93B86A
__int64 __fastcall google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(
        google::protobuf::DescriptorProto_ExtensionRange *this,
        const google::protobuf::DescriptorProto_ExtensionRange *a2)
{
  google::protobuf::uint32 v2; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v4; // r12
  google::protobuf::UnknownFieldSet *v5; // rax
  __int64 result; // rax
  google::protobuf::ExtensionRangeOptions *v7; // r12

  v2 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FAA0;
  this->_has_bits_.has_bits_[0] = v2;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v4 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v5 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v5, v4);
  }
  if ( (a2->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    v7 = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
    google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(v7, a2->options_);
    this->options_ = v7;
  }
  else
  {
    this->options_ = 0LL;
  }
  result = *(_QWORD *)&a2->start_;
  *(_QWORD *)&this->start_ = result;
  return result;
};

// Line 2709: range 000000000C731B36-000000000C731B4E
void __fastcall __noreturn google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x68uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 2721: range 000000000C92B690-000000000C92B69F
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::SharedCtor(
        google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  this->_cached_size_ = 0;
  *(_OWORD *)&this->options_ = 0LL;
};

// Line 2726: range 000000000C92D510-000000000C92D522
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::~DescriptorProto_ExtensionRange(
        google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  google::protobuf::DescriptorProto_ExtensionRange::~DescriptorProto_ExtensionRange(this);
  operator delete(this, 0x28uLL);
};

// Line 2726: range 000000000C92D4E0-000000000C92D508
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::~DescriptorProto_ExtensionRange(
        google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  google::protobuf::ExtensionRangeOptions *options; // rdi

  this->_vptr_MessageLite = (int (**)(...))off_1A17FAA0;
  if ( this != (google::protobuf::DescriptorProto_ExtensionRange *const)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::ExtensionRangeOptions *))options->_vptr_MessageLite + 1))(options);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 2732: range 000000000C92B6A0-000000000C92B6C0
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::SharedDtor(
        google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  google::protobuf::ExtensionRangeOptions *options; // rdi

  if ( this != (google::protobuf::DescriptorProto_ExtensionRange *const)&google::protobuf::_DescriptorProto_ExtensionRange_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::ExtensionRangeOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 2737: range 000000000C923FF0-000000000C923FF3
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::SetCachedSize(
        const google::protobuf::DescriptorProto_ExtensionRange *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 2750: range 000000000C92DE60-000000000C92DE9D
google::protobuf::DescriptorProto_ExtensionRange *__fastcall google::protobuf::DescriptorProto_ExtensionRange::New(
        google::protobuf::DescriptorProto_ExtensionRange *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::DescriptorProto_ExtensionRange *v2; // r12

  v2 = (google::protobuf::DescriptorProto_ExtensionRange *)operator new(0x28uLL);
  google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::DescriptorProto_ExtensionRange>(a2, v2);
  return v2;
};

// Line 2751: range 000000000C73112E-000000000C73113E
void __fastcall __noreturn google::protobuf::DescriptorProto_ExtensionRange::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 2758: range 000000000C930F90-000000000C930FEC
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::Clear(
        google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  google::protobuf::uint32 v1; // eax
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v4; // rdi

  v1 = this->_has_bits_.has_bits_[0];
  if ( (v1 & 1) != 0 )
  {
    google::protobuf::ExtensionRangeOptions::Clear(this->options_);
    v1 = this->_has_bits_.has_bits_[0];
  }
  if ( (v1 & 6) != 0 )
    *(_QWORD *)&this->start_ = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v4 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v4->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v4);
  }
};

// Line 2779: range 000000000C935400-000000000C935653
__int64 __fastcall google::protobuf::DescriptorProto_ExtensionRange::MergePartialFromCodedStream(
        google::protobuf::DescriptorProto_ExtensionRange *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  google::protobuf::uint32 v8; // eax
  const google::protobuf::uint8 *v9; // rax
  google::protobuf::uint32 v10; // esi
  google::protobuf::int64 v11; // rax
  google::protobuf::ExtensionRangeOptions *options; // r13
  const google::protobuf::uint8 *v14; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v16; // rax
  int first; // r14d
  const google::protobuf::uint8 *v18; // rax
  google::protobuf::uint32 v19; // esi
  google::protobuf::int64 Varint32Fallback; // rax

  buffer = a2->buffer_;
  buffer_end = a2->buffer_end_;
LABEL_2:
  while ( 2 )
  {
    if ( buffer >= buffer_end )
      goto LABEL_10;
LABEL_3:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      a2->buffer_ = buffer + 1;
      goto LABEL_12;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        goto handle_unusual_18;
LABEL_12:
      v8 = TagFallback >> 3;
      if ( TagFallback >> 3 == 2 )
      {
        if ( TagFallback == 16 )
        {
          v18 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 4u;
          if ( v18 >= buffer_end )
          {
            v19 = 0;
LABEL_33:
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v19);
            v19 = Varint32Fallback;
            if ( Varint32Fallback < 0 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          else
          {
            v19 = *v18;
            if ( *(char *)v18 < 0 )
              goto LABEL_33;
            buffer = v18 + 1;
            a2->buffer_ = buffer;
          }
          this->end_ = v19;
          goto LABEL_2;
        }
        goto LABEL_6;
      }
      if ( v8 != 3 )
        break;
      if ( TagFallback != 26 )
        goto LABEL_6;
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( !options )
      {
        options = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
        google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(options);
        this->options_ = options;
      }
      v14 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v14, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v14 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          return 0LL;
      }
      v16 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v16.first;
      if ( v16.second < 0
        || !(unsigned __int8)google::protobuf::ExtensionRangeOptions::MergePartialFromCodedStream(options, a2)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        return 0LL;
      }
LABEL_9:
      buffer = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ )
        goto LABEL_3;
LABEL_10:
      TagFallback = 0;
    }
    if ( v8 == 1 )
    {
      if ( TagFallback == 8 )
      {
        v9 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( v9 >= buffer_end )
        {
          v10 = 0;
LABEL_18:
          v11 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v10);
          v10 = v11;
          if ( v11 < 0 )
            return 0LL;
          buffer = a2->buffer_;
          buffer_end = a2->buffer_end_;
        }
        else
        {
          v10 = *v9;
          if ( *(char *)v9 < 0 )
            goto LABEL_18;
          buffer = v9 + 1;
          a2->buffer_ = buffer;
        }
        this->start_ = v10;
        continue;
      }
      goto LABEL_6;
    }
    break;
  }
handle_unusual_18:
  if ( TagFallback )
  {
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
    goto LABEL_9;
  }
  return 1LL;
};

// Line 2849: range 000000000C924920-000000000C9249A8
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::SerializeWithCachedSizes(
        const google::protobuf::DescriptorProto_ExtensionRange *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(1, this->start_, output);
  if ( (v2 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(2, this->end_, output);
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, this->options_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 2879: range 000000000C925470-000000000C92556A
google::protobuf::uint8 *__fastcall google::protobuf::DescriptorProto_ExtensionRange::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::DescriptorProto_ExtensionRange *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::uint32 v5; // edi
  unsigned __int64 start; // rax
  google::protobuf::uint8 *v7; // rdx
  char v8; // cl
  unsigned __int64 end; // rax
  _BYTE *v10; // rdx
  char v11; // cl
  google::protobuf::ExtensionRangeOptions *options; // rdi
  _BYTE *v13; // rdx
  unsigned int i; // eax
  char v15; // cl
  unsigned __int64 ptr; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 2) != 0 )
  {
    start = this->start_;
    v7 = target + 1;
    for ( *(v7 - 1) = 8; start > 0x7F; *(v7 - 1) = v8 | 0x80 )
    {
      v8 = start;
      start >>= 7;
      ++v7;
    }
    *v7 = start;
    v3 = v7 + 1;
  }
  if ( (v5 & 4) != 0 )
  {
    end = this->end_;
    v10 = v3 + 1;
    for ( *v3 = 16; end > 0x7F; *(v10 - 1) = v11 | 0x80 )
    {
      v11 = end;
      end >>= 7;
      ++v10;
    }
    *v10 = end;
    v3 = v10 + 1;
  }
  if ( (v5 & 1) != 0 )
  {
    options = this->options_;
    *v3 = 26;
    v13 = v3 + 1;
    for ( i = options->_cached_size_; i > 0x7F; *(v13 - 1) = v15 | 0x80 )
    {
      v15 = i;
      i >>= 7;
      ++v13;
    }
    *v13 = i;
    v3 = google::protobuf::ExtensionRangeOptions::InternalSerializeWithCachedSizesToArray(
           options,
           deterministic,
           v13 + 1);
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 2911: range 000000000C927A20-000000000C927AE5
size_t __fastcall google::protobuf::DescriptorProto_ExtensionRange::ByteSizeLong(
        const google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  size_t v1; // r12
  unsigned __int64 ptr; // rdi
  google::protobuf::uint32 v4; // eax
  google::protobuf::int32 start; // edx
  __int64 v6; // rdx
  google::protobuf::int32 end; // eax
  __int64 v8; // rax
  size_t v10; // rax
  unsigned int v11; // edx

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 7) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      v10 = google::protobuf::ExtensionRangeOptions::ByteSizeLong(this->options_);
      _BitScanReverse(&v11, v10 | 1);
      v1 += v10 + 1 + ((9 * v11 + 73) >> 6);
      v4 = this->_has_bits_.has_bits_[0];
    }
    if ( (v4 & 2) != 0 )
    {
      start = this->start_;
      if ( start < 0 )
      {
        v6 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&start, start | 1);
        v6 = (unsigned int)(9 * start + 73) >> 6;
      }
      v1 += v6 + 1;
    }
    if ( (v4 & 4) != 0 )
    {
      end = this->end_;
      if ( end < 0 )
      {
        v8 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&end, end | 1);
        v8 = (unsigned int)(9 * end + 73) >> 6;
      }
      v1 += v8 + 1;
    }
  }
  this->_cached_size_ = v1;
  return v1;
};

// Line 2950: range 000000000C93AA80-000000000C93AACD
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(
        google::protobuf::DescriptorProto_ExtensionRange *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::DescriptorProto_ExtensionRange *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::DescriptorProto_ExtensionRange *)__dynamic_cast(
                                                                   from,
                                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ExtensionRange,
                                                                   0LL);
  if ( v2 )
    google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 2965: range 000000000C93A990-000000000C93AA6E
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(
        google::protobuf::DescriptorProto_ExtensionRange *this,
        const google::protobuf::DescriptorProto_ExtensionRange *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // r12d
  google::protobuf::uint32 v9; // eax
  google::protobuf::ExtensionRangeOptions *options; // r13
  google::protobuf::ExtensionRangeOptions *v11; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = a2->_has_bits_.has_bits_[0];
  if ( (v8 & 7) != 0 )
  {
    v9 = this->_has_bits_.has_bits_[0];
    if ( (v8 & 1) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] = v9 | 1;
      if ( !options )
      {
        options = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
        google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(options);
        this->options_ = options;
      }
      v11 = a2->options_;
      if ( !v11 )
        v11 = (google::protobuf::ExtensionRangeOptions *)&google::protobuf::_ExtensionRangeOptions_default_instance_;
      google::protobuf::ExtensionRangeOptions::MergeFrom(options, v11);
      v9 = this->_has_bits_.has_bits_[0];
    }
    if ( (v8 & 2) != 0 )
      this->start_ = a2->start_;
    if ( (v8 & 4) != 0 )
      this->end_ = a2->end_;
    this->_has_bits_.has_bits_[0] = v9 | v8;
  }
};

// Line 2989: range 000000000C93AAE0-000000000C93AB10
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::CopyFrom(
        google::protobuf::DescriptorProto_ExtensionRange *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::DescriptorProto_ExtensionRange::Clear(this);
    google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(this, from);
  }
};

// Line 2996: range 000000000C93AB20-000000000C93AB50
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::CopyFrom(
        google::protobuf::DescriptorProto_ExtensionRange *const this,
        const google::protobuf::DescriptorProto_ExtensionRange *from)
{
  if ( from != this )
  {
    google::protobuf::DescriptorProto_ExtensionRange::Clear(this);
    google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(this, from);
  }
};

// Line 3002: range 000000000C928F90-000000000C928FA4
bool __fastcall google::protobuf::DescriptorProto_ExtensionRange::IsInitialized(
        const google::protobuf::DescriptorProto_ExtensionRange *const this)
{
  return (this->_has_bits_.has_bits_[0] & 1) == 0
      || google::protobuf::ExtensionRangeOptions::IsInitialized(this->options_);
};

// Line 3009: range 000000000C92EEC0-000000000C92EED0
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::Swap(
        google::protobuf::DescriptorProto_ExtensionRange *const this,
        google::protobuf::DescriptorProto_ExtensionRange *other)
{
  if ( other != this )
    google::protobuf::DescriptorProto_ExtensionRange::InternalSwap(this, other);
};

// Line 3012: range 000000000C92EE00-000000000C92EEBB
void __fastcall google::protobuf::DescriptorProto_ExtensionRange::InternalSwap(
        google::protobuf::DescriptorProto_ExtensionRange *const this,
        google::protobuf::DescriptorProto_ExtensionRange *other)
{
  google::protobuf::ExtensionRangeOptions *options; // rax
  google::protobuf::int32 start; // edx
  google::protobuf::int32 end; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  _QWORD *v12; // [rsp+0h] [rbp-18h]

  options = this->options_;
  this->options_ = other->options_;
  start = other->start_;
  other->options_ = options;
  LODWORD(options) = this->start_;
  this->start_ = start;
  end = other->end_;
  other->start_ = (int)options;
  LODWORD(options) = this->end_;
  this->end_ = end;
  v5 = other->_has_bits_.has_bits_[0];
  other->end_ = (int)options;
  LODWORD(options) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)options;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v12 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v12;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 3133: range 000000000C92D530-000000000C92D5B0
void __fastcall google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(
        google::protobuf::DescriptorProto_ReservedRange *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FB78;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::DescriptorProto_ReservedRange *)&google::protobuf::_DescriptorProto_ReservedRange_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  *(_QWORD *)&this->start_ = 0LL;
};

// Line 3141: range 000000000C9301B0-000000000C930237
__int64 __fastcall google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(
        google::protobuf::DescriptorProto_ReservedRange *this,
        const google::protobuf::DescriptorProto_ReservedRange *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  __int64 result; // rax

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FB78;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    p_internal_metadata = &this->_internal_metadata_;
    if ( (ptr & 1) != 0 )
    {
      v8 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v6 = google::protobuf::UnknownFieldSet::default_instance((google::protobuf::UnknownFieldSet *)this);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      v8 = (const google::protobuf::UnknownFieldSet *)v6;
      if ( (v7 & 1) != 0 )
      {
        v9 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
LABEL_5:
        google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
        goto LABEL_6;
      }
    }
    v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    goto LABEL_5;
  }
LABEL_6:
  result = *(_QWORD *)&a2->start_;
  *(_QWORD *)&this->start_ = result;
  return result;
};

// Line 3154: range 000000000C92B790-000000000C92B79F
void __fastcall google::protobuf::DescriptorProto_ReservedRange::SharedCtor(
        google::protobuf::DescriptorProto_ReservedRange *const this)
{
  this->_cached_size_ = 0;
  *(_QWORD *)&this->start_ = 0LL;
};

// Line 3160: range 000000000C92D5C0-000000000C92D5CB
void __fastcall google::protobuf::DescriptorProto_ReservedRange::~DescriptorProto_ReservedRange(
        google::protobuf::DescriptorProto_ReservedRange *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FB78;
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 3160: range 000000000C92D5D0-000000000C92D5EE
void __fastcall google::protobuf::DescriptorProto_ReservedRange::~DescriptorProto_ReservedRange(
        google::protobuf::DescriptorProto_ReservedRange *const this)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdi

  p_internal_metadata = &this->_internal_metadata_;
  p_internal_metadata[-1].ptr_ = off_1A17FB78;
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(p_internal_metadata);
  operator delete(this, 0x20uLL);
};

// Line 3170: range 000000000C924000-000000000C924003
void __fastcall google::protobuf::DescriptorProto_ReservedRange::SetCachedSize(
        const google::protobuf::DescriptorProto_ReservedRange *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 3183: range 000000000C92DEB0-000000000C92DEED
google::protobuf::DescriptorProto_ReservedRange *__fastcall google::protobuf::DescriptorProto_ReservedRange::New(
        google::protobuf::DescriptorProto_ReservedRange *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::DescriptorProto_ReservedRange *v2; // r12

  v2 = (google::protobuf::DescriptorProto_ReservedRange *)operator new(0x20uLL);
  google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::DescriptorProto_ReservedRange>(a2, v2);
  return v2;
};

// Line 3184: range 000000000C731144-000000000C731154
void __fastcall __noreturn google::protobuf::DescriptorProto_ReservedRange::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x20uLL);
  _Unwind_Resume(v0);
};

// Line 3191: range 000000000C930A60-000000000C930AA8
void __fastcall google::protobuf::DescriptorProto_ReservedRange::Clear(
        google::protobuf::DescriptorProto_ReservedRange *const this)
{
  unsigned __int64 ptr; // rax

  if ( (this->_has_bits_.has_bits_[0] & 3) != 0 )
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    *(_QWORD *)&this->start_ = 0LL;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (ptr & 1) == 0 )
      return;
  }
  else
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (ptr & 1) == 0 )
      return;
  }
  if ( *(_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL) )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(ptr & 0xFFFFFFFFFFFFFFFELL));
};

// Line 3208: range 000000000C92E0E0-000000000C92E257
bool __fastcall google::protobuf::DescriptorProto_ReservedRange::MergePartialFromCodedStream(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *v8; // rax
  google::protobuf::uint32 v9; // esi
  google::protobuf::int64 v10; // rax
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint32 v13; // esi
  google::protobuf::int64 Varint32Fallback; // rax

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
LABEL_2:
  if ( buffer >= buffer_end )
    goto LABEL_10;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    input->buffer_ = buffer + 1;
LABEL_12:
    if ( TagFallback >> 3 == 1 )
    {
      if ( TagFallback == 8 )
      {
        v12 = input->buffer_;
        buffer_end = input->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 1u;
        if ( v12 >= buffer_end )
        {
          v13 = 0;
LABEL_22:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v13);
          v13 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
        }
        else
        {
          v13 = *v12;
          if ( *(char *)v12 < 0 )
            goto LABEL_22;
          buffer = v12 + 1;
          input->buffer_ = buffer;
        }
        this->start_ = v13;
        goto LABEL_2;
      }
    }
    else
    {
      if ( TagFallback >> 3 != 2 )
        goto handle_unusual;
      if ( TagFallback == 16 )
      {
        v8 = input->buffer_;
        buffer_end = input->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( v8 >= buffer_end )
        {
          v9 = 0;
LABEL_17:
          v10 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v9);
          v9 = v10;
          if ( v10 < 0 )
            return 0;
          buffer = input->buffer_;
          buffer_end = input->buffer_end_;
        }
        else
        {
          v9 = *v8;
          if ( *(char *)v8 < 0 )
            goto LABEL_17;
          buffer = v8 + 1;
          input->buffer_ = buffer;
        }
        this->end_ = v9;
        goto LABEL_2;
      }
    }
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
      return 0;
    buffer = input->buffer_;
    if ( input->buffer_ >= input->buffer_end_ )
    {
LABEL_10:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_12;
handle_unusual:
  if ( TagFallback )
    goto LABEL_6;
  return 1;
};

// Line 3266: range 000000000C9249B0-000000000C924A18
void __fastcall google::protobuf::DescriptorProto_ReservedRange::SerializeWithCachedSizes(
        const google::protobuf::DescriptorProto_ReservedRange *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(1, this->start_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(2, this->end_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 3290: range 000000000C924340-000000000C9243D5
google::protobuf::uint8 *__fastcall google::protobuf::DescriptorProto_ReservedRange::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::DescriptorProto_ReservedRange *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v3; // esi
  google::protobuf::uint8 *v4; // r12
  unsigned __int64 start; // rax
  google::protobuf::uint8 *v6; // rdx
  char v7; // cl
  unsigned __int64 end; // rax
  _BYTE *v9; // rdx
  char v10; // cl
  unsigned __int64 ptr; // rdi

  v3 = this->_has_bits_.has_bits_[0];
  v4 = target;
  if ( (v3 & 1) != 0 )
  {
    start = this->start_;
    v6 = target + 1;
    for ( *(v6 - 1) = 8; start > 0x7F; *(v6 - 1) = v7 | 0x80 )
    {
      v7 = start;
      start >>= 7;
      ++v6;
    }
    *v6 = start;
    v4 = v6 + 1;
  }
  if ( (v3 & 2) != 0 )
  {
    end = this->end_;
    v9 = v4 + 1;
    for ( *v4 = 16; end > 0x7F; *(v9 - 1) = v10 | 0x80 )
    {
      v10 = end;
      end >>= 7;
      ++v9;
    }
    *v9 = end;
    v4 = v9 + 1;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v4);
  else
    return v4;
};

// Line 3315: range 000000000C9243E0-000000000C924465
size_t __fastcall google::protobuf::DescriptorProto_ReservedRange::ByteSizeLong(
        const google::protobuf::DescriptorProto_ReservedRange *const this)
{
  unsigned __int64 ptr; // rdi
  size_t result; // rax
  google::protobuf::uint32 v4; // edx
  google::protobuf::int32 end; // edx
  __int64 v6; // rdx
  google::protobuf::int32 start; // ecx
  __int64 v8; // rcx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  result = 0LL;
  if ( (ptr & 1) != 0 )
    result = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 3) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      start = this->start_;
      if ( start < 0 )
      {
        v8 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&start, start | 1);
        v8 = (unsigned int)(9 * start + 73) >> 6;
      }
      result += v8 + 1;
    }
    if ( (v4 & 2) != 0 )
    {
      end = this->end_;
      if ( end < 0 )
      {
        v6 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&end, end | 1);
        v6 = (unsigned int)(9 * end + 73) >> 6;
      }
      result += v6 + 1;
    }
  }
  this->_cached_size_ = result;
  return result;
};

// Line 3347: range 000000000C9302B0-000000000C9302FD
void __fastcall google::protobuf::DescriptorProto_ReservedRange::MergeFrom(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::DescriptorProto_ReservedRange *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::DescriptorProto_ReservedRange *)__dynamic_cast(
                                                                  from,
                                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ReservedRange,
                                                                  0LL);
  if ( v2 )
    google::protobuf::DescriptorProto_ReservedRange::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 3362: range 000000000C930240-000000000C9302AE
void __fastcall google::protobuf::DescriptorProto_ReservedRange::MergeFrom(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        const google::protobuf::DescriptorProto_ReservedRange *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // eax

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = from->_has_bits_.has_bits_[0];
  if ( (v8 & 3) != 0 )
  {
    if ( (v8 & 1) != 0 )
      this->start_ = from->start_;
    if ( (v8 & 2) != 0 )
      this->end_ = from->end_;
    this->_has_bits_.has_bits_[0] |= v8;
  }
};

// Line 3383: range 000000000C930AB0-000000000C930AE0
void __fastcall google::protobuf::DescriptorProto_ReservedRange::CopyFrom(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::DescriptorProto_ReservedRange::Clear(this);
    google::protobuf::DescriptorProto_ReservedRange::MergeFrom(this, from);
  }
};

// Line 3390: range 000000000C930AF0-000000000C930B20
void __fastcall google::protobuf::DescriptorProto_ReservedRange::CopyFrom(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        const google::protobuf::DescriptorProto_ReservedRange *from)
{
  if ( from != this )
  {
    google::protobuf::DescriptorProto_ReservedRange::Clear(this);
    google::protobuf::DescriptorProto_ReservedRange::MergeFrom(this, from);
  }
};

// Line 3397: range 000000000C924010-000000000C924015
bool __fastcall google::protobuf::DescriptorProto_ReservedRange::IsInitialized(
        const google::protobuf::DescriptorProto_ReservedRange *const this)
{
  return 1;
};

// Line 3400: range 000000000C92EC30-000000000C92EC40
void __fastcall google::protobuf::DescriptorProto_ReservedRange::Swap(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        google::protobuf::DescriptorProto_ReservedRange *other)
{
  if ( other != this )
    google::protobuf::DescriptorProto_ReservedRange::InternalSwap(this, other);
};

// Line 3403: range 000000000C92EB80-000000000C92EC2B
void __fastcall google::protobuf::DescriptorProto_ReservedRange::InternalSwap(
        google::protobuf::DescriptorProto_ReservedRange *const this,
        google::protobuf::DescriptorProto_ReservedRange *other)
{
  google::protobuf::int32 start; // eax
  google::protobuf::int32 end; // edx
  google::protobuf::int32 v4; // eax
  google::protobuf::uint32 v5; // edx
  google::protobuf::uint32 v6; // eax
  unsigned __int64 ptr; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  int cached_size; // eax
  _QWORD *v13; // [rsp+0h] [rbp-18h]

  start = this->start_;
  this->start_ = other->start_;
  end = other->end_;
  other->start_ = start;
  v4 = this->end_;
  this->end_ = end;
  v5 = other->_has_bits_.has_bits_[0];
  other->end_ = v4;
  v6 = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = v6;
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v8 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v9 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v8 & 1) != 0 )
  {
    v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v13 = v9;
    v10 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v9 = v13;
  }
  v11 = *v10;
  *v10 = *v9;
  *v9 = v11;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 3485: range 000000000C9335B0-000000000C933720
void __fastcall google::protobuf::DescriptorProto::DescriptorProto(google::protobuf::DescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FC50;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->field_.arena_ = 0LL;
  *(_QWORD *)&this->field_.current_size_ = 0LL;
  this->field_.rep_ = 0LL;
  this->nested_type_.arena_ = 0LL;
  *(_QWORD *)&this->nested_type_.current_size_ = 0LL;
  this->nested_type_.rep_ = 0LL;
  this->enum_type_.arena_ = 0LL;
  *(_QWORD *)&this->enum_type_.current_size_ = 0LL;
  this->enum_type_.rep_ = 0LL;
  this->extension_range_.arena_ = 0LL;
  *(_QWORD *)&this->extension_range_.current_size_ = 0LL;
  this->extension_range_.rep_ = 0LL;
  this->extension_.arena_ = 0LL;
  *(_QWORD *)&this->extension_.current_size_ = 0LL;
  this->extension_.rep_ = 0LL;
  this->oneof_decl_.arena_ = 0LL;
  *(_QWORD *)&this->oneof_decl_.current_size_ = 0LL;
  this->oneof_decl_.rep_ = 0LL;
  this->reserved_range_.arena_ = 0LL;
  *(_QWORD *)&this->reserved_range_.current_size_ = 0LL;
  this->reserved_range_.rep_ = 0LL;
  this->reserved_name_.arena_ = 0LL;
  *(_QWORD *)&this->reserved_name_.current_size_ = 0LL;
  this->reserved_name_.rep_ = 0LL;
  if ( this != (google::protobuf::DescriptorProto *)&google::protobuf::_DescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 3493: range 000000000C93DC30-000000000C93E205
__int64 __fastcall google::protobuf::DescriptorProto::DescriptorProto(
        google::protobuf::DescriptorProto *this,
        const google::protobuf::DescriptorProto *a2)
{
  google::protobuf::uint32 v4; // eax
  int current_size; // r12d
  int v6; // r12d
  int v7; // r12d
  int v8; // r12d
  int v9; // r12d
  int v10; // r12d
  int v11; // r12d
  int v12; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v14; // rdi
  const google::protobuf::UnknownFieldSet *v15; // r12
  google::protobuf::UnknownFieldSet *v16; // rdi
  __int64 result; // rax
  std::string *v18; // rsi
  void **v19; // r15
  void **v20; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v21; // rax
  int v22; // r12d
  void **v23; // r14
  void **v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rax
  int v26; // r12d
  void **v27; // r13
  void **v28; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v29; // rax
  int v30; // r12d
  void **v31; // r13
  void **v32; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rax
  int v34; // r12d
  void **v35; // r13
  void **v36; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v37; // rax
  int v38; // r12d
  void **v39; // r13
  void **v40; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v41; // rax
  int v42; // r12d
  void **v43; // r13
  void **v44; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v45; // rax
  int v46; // r12d
  void **elements; // r13
  void **v48; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v50; // r12d
  google::protobuf::MessageOptions *v51; // r12

  v4 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->field_.current_size_ = 0LL;
  current_size = a2->field_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FC50;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = v4;
  this->_cached_size_ = 0;
  this->field_.arena_ = 0LL;
  this->field_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->field_.rep_->elements;
    v48 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->field_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
      &this->field_,
      v48,
      elements,
      current_size,
      this->field_.rep_->allocated_size - this->field_.current_size_);
    rep = this->field_.rep_;
    v50 = this->field_.current_size_ + current_size;
    this->field_.current_size_ = v50;
    if ( v50 > rep->allocated_size )
      rep->allocated_size = v50;
  }
  *(_QWORD *)&this->nested_type_.current_size_ = 0LL;
  v6 = a2->nested_type_.current_size_;
  this->nested_type_.arena_ = 0LL;
  this->nested_type_.rep_ = 0LL;
  if ( v6 )
  {
    v43 = a2->nested_type_.rep_->elements;
    v44 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->nested_type_, v6);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
      &this->nested_type_,
      v44,
      v43,
      v6,
      this->nested_type_.rep_->allocated_size - this->nested_type_.current_size_);
    v45 = this->nested_type_.rep_;
    v46 = this->nested_type_.current_size_ + v6;
    this->nested_type_.current_size_ = v46;
    if ( v46 > v45->allocated_size )
      v45->allocated_size = v46;
  }
  *(_QWORD *)&this->enum_type_.current_size_ = 0LL;
  v7 = a2->enum_type_.current_size_;
  this->enum_type_.arena_ = 0LL;
  this->enum_type_.rep_ = 0LL;
  if ( v7 )
  {
    v39 = a2->enum_type_.rep_->elements;
    v40 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enum_type_, v7);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
      &this->enum_type_,
      v40,
      v39,
      v7,
      this->enum_type_.rep_->allocated_size - this->enum_type_.current_size_);
    v41 = this->enum_type_.rep_;
    v42 = this->enum_type_.current_size_ + v7;
    this->enum_type_.current_size_ = v42;
    if ( v42 > v41->allocated_size )
      v41->allocated_size = v42;
  }
  *(_QWORD *)&this->extension_range_.current_size_ = 0LL;
  v8 = a2->extension_range_.current_size_;
  this->extension_range_.arena_ = 0LL;
  this->extension_range_.rep_ = 0LL;
  if ( v8 )
  {
    v35 = a2->extension_range_.rep_->elements;
    v36 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_range_, v8);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(
      &this->extension_range_,
      v36,
      v35,
      v8,
      this->extension_range_.rep_->allocated_size - this->extension_range_.current_size_);
    v37 = this->extension_range_.rep_;
    v38 = this->extension_range_.current_size_ + v8;
    this->extension_range_.current_size_ = v38;
    if ( v38 > v37->allocated_size )
      v37->allocated_size = v38;
  }
  *(_QWORD *)&this->extension_.current_size_ = 0LL;
  v9 = a2->extension_.current_size_;
  this->extension_.arena_ = 0LL;
  this->extension_.rep_ = 0LL;
  if ( v9 )
  {
    v31 = a2->extension_.rep_->elements;
    v32 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_, v9);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
      &this->extension_,
      v32,
      v31,
      v9,
      this->extension_.rep_->allocated_size - this->extension_.current_size_);
    v33 = this->extension_.rep_;
    v34 = this->extension_.current_size_ + v9;
    this->extension_.current_size_ = v34;
    if ( v34 > v33->allocated_size )
      v33->allocated_size = v34;
  }
  *(_QWORD *)&this->oneof_decl_.current_size_ = 0LL;
  v10 = a2->oneof_decl_.current_size_;
  this->oneof_decl_.arena_ = 0LL;
  this->oneof_decl_.rep_ = 0LL;
  if ( v10 )
  {
    v27 = a2->oneof_decl_.rep_->elements;
    v28 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->oneof_decl_, v10);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(
      &this->oneof_decl_,
      v28,
      v27,
      v10,
      this->oneof_decl_.rep_->allocated_size - this->oneof_decl_.current_size_);
    v29 = this->oneof_decl_.rep_;
    v30 = this->oneof_decl_.current_size_ + v10;
    this->oneof_decl_.current_size_ = v30;
    if ( v30 > v29->allocated_size )
      v29->allocated_size = v30;
  }
  *(_QWORD *)&this->reserved_range_.current_size_ = 0LL;
  v11 = a2->reserved_range_.current_size_;
  this->reserved_range_.arena_ = 0LL;
  this->reserved_range_.rep_ = 0LL;
  if ( v11 )
  {
    v23 = a2->reserved_range_.rep_->elements;
    v24 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->reserved_range_, v11);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(
      &this->reserved_range_,
      v24,
      v23,
      v11,
      this->reserved_range_.rep_->allocated_size - this->reserved_range_.current_size_);
    v25 = this->reserved_range_.rep_;
    v26 = this->reserved_range_.current_size_ + v11;
    this->reserved_range_.current_size_ = v26;
    if ( v26 > v25->allocated_size )
      v25->allocated_size = v26;
  }
  *(_QWORD *)&this->reserved_name_.current_size_ = 0LL;
  v12 = a2->reserved_name_.current_size_;
  this->reserved_name_.arena_ = 0LL;
  this->reserved_name_.rep_ = 0LL;
  if ( v12 )
  {
    v19 = a2->reserved_name_.rep_->elements;
    v20 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->reserved_name_, v12);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->reserved_name_,
      v20,
      v19,
      v12,
      this->reserved_name_.rep_->allocated_size - this->reserved_name_.current_size_);
    v21 = this->reserved_name_.rep_;
    v22 = this->reserved_name_.current_size_ + v12;
    this->reserved_name_.current_size_ = v22;
    if ( v22 > v21->allocated_size )
      v21->allocated_size = v22;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v15 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v14 & 1) != 0 )
      v16 = (google::protobuf::UnknownFieldSet *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    else
      v16 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v16, v15);
  }
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  result = a2->_has_bits_.has_bits_[0];
  if ( (result & 1) != 0 )
  {
    v18 = a2->name_.ptr_;
    if ( v18 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v18);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 2) != 0 )
  {
    v51 = (google::protobuf::MessageOptions *)operator new(0x70uLL);
    result = google::protobuf::MessageOptions::MessageOptions(v51, a2->options_);
    this->options_ = v51;
  }
  else
  {
    this->options_ = 0LL;
  }
  return result;
};

// Line 3512: range 000000000C731D30-000000000C731D97
void __fastcall __noreturn google::protobuf::DescriptorProto::DescriptorProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        google::protobuf::internal::RepeatedPtrFieldBase *a7,
        google::protobuf::internal::RepeatedPtrFieldBase *a8,
        google::protobuf::internal::RepeatedPtrFieldBase *a9,
        google::protobuf::internal::RepeatedPtrFieldBase *a10,
        google::protobuf::internal::RepeatedPtrFieldBase *a11)
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v11; // rbx
  struct _Unwind_Exception *v12; // rbp
  void *v13; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v14; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v15; // r14
  google::protobuf::internal::RepeatedPtrFieldBase *retaddr; // [rsp+0h] [rbp+0h]

  operator delete(v13, 0x70uLL);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(v15);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(v14);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(a11);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(a10);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(a9);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(a8);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(a7);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(retaddr);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v11 + 1);
  _Unwind_Resume(v12);
};

// Line 3520: range 000000000C92B870-000000000C92B88D
void __fastcall google::protobuf::DescriptorProto::SharedCtor(google::protobuf::DescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 3525: range 000000000C933780-000000000C9337E6
void __fastcall google::protobuf::DescriptorProto::~DescriptorProto(google::protobuf::DescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FC50;
  google::protobuf::DescriptorProto::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&this->reserved_name_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(&this->reserved_range_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(&this->oneof_decl_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(&this->extension_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(&this->extension_range_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(&this->enum_type_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(&this->nested_type_);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(&this->field_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 3525: range 000000000C9337F0-000000000C933802
void __fastcall google::protobuf::DescriptorProto::~DescriptorProto(google::protobuf::DescriptorProto *const this)
{
  google::protobuf::DescriptorProto::~DescriptorProto(this);
  operator delete(this, 0xE8uLL);
};

// Line 3530: range 000000000C92B890-000000000C92B8FE
void __fastcall google::protobuf::DescriptorProto::SharedDtor(google::protobuf::DescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::MessageOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  if ( this != (google::protobuf::DescriptorProto *const)&google::protobuf::_DescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::MessageOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 3537: range 000000000C924020-000000000C924023
void __fastcall google::protobuf::DescriptorProto::SetCachedSize(
        const google::protobuf::DescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 3550: range 000000000C933730-000000000C93376D
google::protobuf::DescriptorProto *__fastcall google::protobuf::DescriptorProto::New(
        google::protobuf::DescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::DescriptorProto *v2; // r12

  v2 = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
  google::protobuf::DescriptorProto::DescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::DescriptorProto>(a2, v2);
  return v2;
};

// Line 3551: range 000000000C73144C-000000000C73145C
void __fastcall __noreturn google::protobuf::DescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0xE8uLL);
  _Unwind_Resume(v0);
};

// Line 3558: range 000000000C931800-000000000C9319A4
void __fastcall google::protobuf::DescriptorProto::Clear(google::protobuf::DescriptorProto *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::DescriptorProto_ExtensionRange **elements; // rbp
  __int64 v5; // r12
  google::protobuf::DescriptorProto_ExtensionRange *v6; // rdi
  int v7; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rdx
  google::protobuf::OneofDescriptorProto **v9; // rbp
  __int64 v10; // r12
  google::protobuf::OneofDescriptorProto *v11; // rdi
  int v12; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v13; // rdx
  google::protobuf::DescriptorProto_ReservedRange **v14; // rbp
  __int64 v15; // r12
  google::protobuf::DescriptorProto_ReservedRange *v16; // rdi
  int v17; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rcx
  void **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  google::protobuf::uint32 v22; // eax
  std::string *ptr; // rdx
  unsigned __int64 v24; // rdi
  google::protobuf::UnknownFieldSet *v25; // rdi

  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->field_.current_size_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->nested_type_.current_size_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->enum_type_.current_size_);
  current_size = this->extension_range_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->extension_range_.rep_;
    elements = (google::protobuf::DescriptorProto_ExtensionRange **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::DescriptorProto_ExtensionRange::Clear(v6);
    }
    while ( elements != (google::protobuf::DescriptorProto_ExtensionRange **)v5 );
    this->extension_range_.current_size_ = 0;
  }
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->extension_.current_size_);
  v7 = this->oneof_decl_.current_size_;
  if ( v7 > 0 )
  {
    v8 = this->oneof_decl_.rep_;
    v9 = (google::protobuf::OneofDescriptorProto **)v8->elements;
    v10 = (__int64)&v8[1] + 8 * (unsigned int)(v7 - 1);
    do
    {
      v11 = *v9++;
      google::protobuf::OneofDescriptorProto::Clear(v11);
    }
    while ( v9 != (google::protobuf::OneofDescriptorProto **)v10 );
    this->oneof_decl_.current_size_ = 0;
  }
  v12 = this->reserved_range_.current_size_;
  if ( v12 > 0 )
  {
    v13 = this->reserved_range_.rep_;
    v14 = (google::protobuf::DescriptorProto_ReservedRange **)v13->elements;
    v15 = (__int64)&v13[1] + 8 * (unsigned int)(v12 - 1);
    do
    {
      v16 = *v14++;
      google::protobuf::DescriptorProto_ReservedRange::Clear(v16);
    }
    while ( v14 != (google::protobuf::DescriptorProto_ReservedRange **)v15 );
    this->reserved_range_.current_size_ = 0;
  }
  v17 = this->reserved_name_.current_size_;
  if ( v17 > 0 )
  {
    v18 = this->reserved_name_.rep_;
    v19 = v18->elements;
    v20 = (__int64)&v18[1] + 8 * (unsigned int)(v17 - 1);
    do
    {
      v21 = (__int64)*v19++;
      *(_QWORD *)(v21 + 8) = 0LL;
      **(_BYTE **)v21 = 0;
    }
    while ( (void **)v20 != v19 );
    this->reserved_name_.current_size_ = 0;
  }
  v22 = this->_has_bits_.has_bits_[0];
  if ( (v22 & 3) != 0 )
  {
    if ( (v22 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v22 & 2) != 0 )
      google::protobuf::MessageOptions::Clear(this->options_);
  }
  v24 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v24 & 1) != 0 )
  {
    v25 = (google::protobuf::UnknownFieldSet *)(v24 & 0xFFFFFFFFFFFFFFFELL);
    if ( v25->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v25);
  }
};

// Line 3588: range 000000000C938420-000000000C939047
__int64 __fastcall google::protobuf::DescriptorProto::MergePartialFromCodedStream(
        google::protobuf::DescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v8; // rdx
  __int64 result; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  std::string *v13; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  google::protobuf::DescriptorProto_ReservedRange *v17; // r13
  const google::protobuf::uint8 *v18; // rax
  int v19; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  google::protobuf::OneofDescriptorProto *v25; // r13
  const google::protobuf::uint8 *v26; // rax
  int v27; // esi
  std::pair<int,int> v28; // rax
  google::protobuf::MessageOptions *options; // r13
  const google::protobuf::uint8 *v30; // rax
  int v31; // esi
  std::pair<int,int> v32; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  google::protobuf::FieldDescriptorProto *AlignedAndAddCleanup; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  google::protobuf::DescriptorProto_ExtensionRange *v40; // r13
  const google::protobuf::uint8 *v41; // rax
  int v42; // esi
  std::pair<int,int> v43; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  google::protobuf::EnumDescriptorProto *v47; // r13
  const google::protobuf::uint8 *v48; // rax
  int v49; // esi
  std::pair<int,int> v50; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v51; // rax
  __int64 v52; // rcx
  int v53; // edx
  google::protobuf::DescriptorProto *v54; // r13
  const google::protobuf::uint8 *v55; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v57; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  const google::protobuf::uint8 *v61; // rax
  int v62; // esi
  std::pair<int,int> v63; // rax
  int v64; // ecx
  google::protobuf::Arena *v65; // rdi
  __int64 v66; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v67; // rdx
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  __int64 v70; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v71; // rdx
  int v72; // ecx
  google::protobuf::Arena *v73; // rdi
  __int64 v74; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v75; // rdx
  int v76; // ecx
  google::protobuf::Arena *v77; // rdi
  __int64 v78; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v79; // rdx
  int v80; // ecx
  google::protobuf::Arena *v81; // rdi
  __int64 v82; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v83; // rdx
  int v84; // ecx
  google::protobuf::Arena *v85; // rdi
  __int64 v86; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v87; // rdx
  int v88; // ecx
  google::protobuf::Arena *v89; // rdi
  __int64 v90; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v91; // rdx
  int v92; // ecx
  google::protobuf::Arena *v93; // rdi
  std::string *v94; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v95; // rdx
  __int64 v96; // rax

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
LABEL_2:
    buffer = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
    {
LABEL_28:
      TagFallback = 0;
    }
    else
    {
LABEL_3:
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        a2->buffer_ = buffer + 1;
        goto LABEL_11;
      }
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 > 0x7E )
      goto handle_unusual_17;
LABEL_11:
    if ( TagFallback <= 0x57 )
      break;
handle_unusual_17:
    if ( !TagFallback )
      return 1LL;
LABEL_6:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
      goto LABEL_9;
  }
  switch ( TagFallback >> 3 )
  {
    case 0u:
      goto handle_unusual_17;
    case 1u:
      if ( TagFallback != 10 )
        goto LABEL_6;
      v13 = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( v13 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->name_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v13 = this->name_.ptr_;
      }
      goto LABEL_95;
    case 2u:
      if ( TagFallback != 18 )
        goto LABEL_6;
      rep = this->field_.rep_;
      if ( !rep )
      {
        total_size = this->field_.total_size_;
LABEL_157:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->field_, total_size + 1);
        rep = this->field_.rep_;
        allocated_size = rep->allocated_size;
        goto LABEL_107;
      }
      current_size = this->field_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size < rep->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)rep->elements[current_size];
        this->field_.current_size_ = current_size + 1;
        goto LABEL_86;
      }
      total_size = this->field_.total_size_;
      if ( allocated_size == total_size )
        goto LABEL_157;
LABEL_107:
      arena = this->field_.arena_;
      rep->allocated_size = allocated_size + 1;
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
            0x58uLL);
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                           &arena->impl_,
                                                                           0x58uLL,
                                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
      }
      v70 = this->field_.current_size_;
      v71 = this->field_.rep_;
      this->field_.current_size_ = v70 + 1;
      v71->elements[v70] = AlignedAndAddCleanup;
      goto LABEL_86;
    case 3u:
      if ( TagFallback != 26 )
        goto LABEL_6;
      v51 = this->nested_type_.rep_;
      if ( !v51 )
      {
        v84 = this->nested_type_.total_size_;
LABEL_159:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->nested_type_, v84 + 1);
        v51 = this->nested_type_.rep_;
        v53 = v51->allocated_size;
        goto LABEL_131;
      }
      v52 = this->nested_type_.current_size_;
      v53 = v51->allocated_size;
      if ( (int)v52 < v51->allocated_size )
      {
        v54 = (google::protobuf::DescriptorProto *)v51->elements[v52];
        this->nested_type_.current_size_ = v52 + 1;
        goto LABEL_76;
      }
      v84 = this->nested_type_.total_size_;
      if ( v53 == v84 )
        goto LABEL_159;
LABEL_131:
      v85 = this->nested_type_.arena_;
      v51->allocated_size = v53 + 1;
      if ( v85 )
      {
        if ( v85->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v85,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
            0xE8uLL);
        v54 = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                     &v85->impl_,
                                                     0xE8uLL,
                                                     google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
        google::protobuf::DescriptorProto::DescriptorProto(v54);
      }
      else
      {
        v54 = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
        google::protobuf::DescriptorProto::DescriptorProto(v54);
      }
      v86 = this->nested_type_.current_size_;
      v87 = this->nested_type_.rep_;
      this->nested_type_.current_size_ = v86 + 1;
      v87->elements[v86] = v54;
LABEL_76:
      v55 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v55, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v55 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          goto LABEL_9;
      }
      v57 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v57.first;
      if ( v57.second >= 0 && (unsigned __int8)google::protobuf::DescriptorProto::MergePartialFromCodedStream(v54, a2) )
        goto LABEL_26;
      goto LABEL_9;
    case 4u:
      if ( TagFallback != 34 )
        goto LABEL_6;
      v44 = this->enum_type_.rep_;
      if ( !v44 )
      {
        v72 = this->enum_type_.total_size_;
LABEL_155:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->enum_type_, v72 + 1);
        v44 = this->enum_type_.rep_;
        v46 = v44->allocated_size;
        goto LABEL_113;
      }
      v45 = this->enum_type_.current_size_;
      v46 = v44->allocated_size;
      if ( (int)v45 < v44->allocated_size )
      {
        v47 = (google::protobuf::EnumDescriptorProto *)v44->elements[v45];
        this->enum_type_.current_size_ = v45 + 1;
        goto LABEL_66;
      }
      v72 = this->enum_type_.total_size_;
      if ( v46 == v72 )
        goto LABEL_155;
LABEL_113:
      v73 = this->enum_type_.arena_;
      v44->allocated_size = v46 + 1;
      if ( v73 )
      {
        if ( v73->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v73,
            (const std::type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
            0x40uLL);
        v47 = (google::protobuf::EnumDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                         &v73->impl_,
                                                         0x40uLL,
                                                         google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>);
        google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v47);
      }
      else
      {
        v47 = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
        google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v47);
      }
      v74 = this->enum_type_.current_size_;
      v75 = this->enum_type_.rep_;
      this->enum_type_.current_size_ = v74 + 1;
      v75->elements[v74] = v47;
LABEL_66:
      v48 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v49 = *v48, (unsigned int)v49 <= 0x7F) )
      {
        a2->buffer_ = v48 + 1;
      }
      else
      {
        v49 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v49 < 0 )
          goto LABEL_9;
      }
      v50 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v49);
      first = v50.first;
      if ( v50.second >= 0
        && (unsigned __int8)google::protobuf::EnumDescriptorProto::MergePartialFromCodedStream(v47, a2) )
      {
        goto LABEL_26;
      }
      goto LABEL_9;
    case 5u:
      if ( TagFallback != 42 )
        goto LABEL_6;
      v37 = this->extension_range_.rep_;
      if ( !v37 )
      {
        v80 = this->extension_range_.total_size_;
LABEL_163:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->extension_range_, v80 + 1);
        v37 = this->extension_range_.rep_;
        v39 = v37->allocated_size;
        goto LABEL_125;
      }
      v38 = this->extension_range_.current_size_;
      v39 = v37->allocated_size;
      if ( (int)v38 < v37->allocated_size )
      {
        v40 = (google::protobuf::DescriptorProto_ExtensionRange *)v37->elements[v38];
        this->extension_range_.current_size_ = v38 + 1;
        goto LABEL_56;
      }
      v80 = this->extension_range_.total_size_;
      if ( v39 == v80 )
        goto LABEL_163;
LABEL_125:
      v81 = this->extension_range_.arena_;
      v37->allocated_size = v39 + 1;
      if ( v81 )
      {
        if ( v81->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v81,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ExtensionRange,
            0x28uLL);
        v40 = (google::protobuf::DescriptorProto_ExtensionRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                    &v81->impl_,
                                                                    0x28uLL,
                                                                    google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ExtensionRange>);
        google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(v40);
      }
      else
      {
        v40 = (google::protobuf::DescriptorProto_ExtensionRange *)operator new(0x28uLL);
        google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(v40);
      }
      v82 = this->extension_range_.current_size_;
      v83 = this->extension_range_.rep_;
      this->extension_range_.current_size_ = v82 + 1;
      v83->elements[v82] = v40;
LABEL_56:
      v41 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v42 = *v41, (unsigned int)v42 <= 0x7F) )
      {
        a2->buffer_ = v41 + 1;
      }
      else
      {
        v42 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v42 < 0 )
          goto LABEL_9;
      }
      v43 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v42);
      first = v43.first;
      if ( v43.second >= 0
        && (unsigned __int8)google::protobuf::DescriptorProto_ExtensionRange::MergePartialFromCodedStream(v40, a2) )
      {
        goto LABEL_26;
      }
      goto LABEL_9;
    case 6u:
      if ( TagFallback != 50 )
        goto LABEL_6;
      v33 = this->extension_.rep_;
      if ( !v33 )
      {
        v64 = this->extension_.total_size_;
LABEL_169:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->extension_, v64 + 1);
        v33 = this->extension_.rep_;
        v35 = v33->allocated_size;
        goto LABEL_101;
      }
      v34 = this->extension_.current_size_;
      v35 = v33->allocated_size;
      if ( (int)v34 < v33->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)v33->elements[v34];
        this->extension_.current_size_ = v34 + 1;
        goto LABEL_86;
      }
      v64 = this->extension_.total_size_;
      if ( v35 == v64 )
        goto LABEL_169;
LABEL_101:
      v65 = this->extension_.arena_;
      v33->allocated_size = v35 + 1;
      if ( v65 )
      {
        if ( v65->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v65,
            (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
            0x58uLL);
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                           &v65->impl_,
                                                                           0x58uLL,
                                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
      }
      v66 = this->extension_.current_size_;
      v67 = this->extension_.rep_;
      this->extension_.current_size_ = v66 + 1;
      v67->elements[v66] = AlignedAndAddCleanup;
LABEL_86:
      v61 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v62 = *v61, (unsigned int)v62 <= 0x7F) )
      {
        a2->buffer_ = v61 + 1;
      }
      else
      {
        v62 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v62 < 0 )
          goto LABEL_9;
      }
      v63 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v62);
      first = v63.first;
      if ( v63.second >= 0
        && (unsigned __int8)google::protobuf::FieldDescriptorProto::MergePartialFromCodedStream(
                              AlignedAndAddCleanup,
                              a2) )
      {
        goto LABEL_26;
      }
      goto LABEL_9;
    case 7u:
      if ( TagFallback != 58 )
        goto LABEL_6;
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::MessageOptions *)operator new(0x70uLL);
        google::protobuf::MessageOptions::MessageOptions(options);
        this->options_ = options;
      }
      v30 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v31 = *v30, (unsigned int)v31 <= 0x7F) )
      {
        a2->buffer_ = v30 + 1;
      }
      else
      {
        v31 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v31 < 0 )
          goto LABEL_9;
      }
      v32 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v31);
      first = v32.first;
      if ( v32.second >= 0
        && (unsigned __int8)google::protobuf::MessageOptions::MergePartialFromCodedStream(options, a2) )
      {
        goto LABEL_26;
      }
      goto LABEL_9;
    case 8u:
      if ( TagFallback != 66 )
        goto LABEL_6;
      v22 = this->oneof_decl_.rep_;
      if ( !v22 )
      {
        v88 = this->oneof_decl_.total_size_;
LABEL_167:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->oneof_decl_, v88 + 1);
        v22 = this->oneof_decl_.rep_;
        v24 = v22->allocated_size;
        goto LABEL_137;
      }
      v23 = this->oneof_decl_.current_size_;
      v24 = v22->allocated_size;
      if ( (int)v23 < v22->allocated_size )
      {
        v25 = (google::protobuf::OneofDescriptorProto *)v22->elements[v23];
        this->oneof_decl_.current_size_ = v23 + 1;
        goto LABEL_33;
      }
      v88 = this->oneof_decl_.total_size_;
      if ( v24 == v88 )
        goto LABEL_167;
LABEL_137:
      v89 = this->oneof_decl_.arena_;
      v22->allocated_size = v24 + 1;
      if ( v89 )
      {
        if ( v89->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v89,
            (const std::type_info *)&`typeinfo for'google::protobuf::OneofDescriptorProto,
            0x28uLL);
        v25 = (google::protobuf::OneofDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                          &v89->impl_,
                                                          0x28uLL,
                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::OneofDescriptorProto>);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(v25);
      }
      else
      {
        v25 = (google::protobuf::OneofDescriptorProto *)operator new(0x28uLL);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(v25);
      }
      v90 = this->oneof_decl_.current_size_;
      v91 = this->oneof_decl_.rep_;
      this->oneof_decl_.current_size_ = v90 + 1;
      v91->elements[v90] = v25;
LABEL_33:
      v26 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v27 = *v26, (unsigned int)v27 <= 0x7F) )
      {
        a2->buffer_ = v26 + 1;
      }
      else
      {
        v27 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v27 < 0 )
          goto LABEL_9;
      }
      v28 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v27);
      first = v28.first;
      if ( v28.second >= 0
        && (unsigned __int8)google::protobuf::OneofDescriptorProto::MergePartialFromCodedStream(v25, a2) )
      {
        goto LABEL_26;
      }
      goto LABEL_9;
    case 9u:
      if ( TagFallback != 74 )
        goto LABEL_6;
      v14 = this->reserved_range_.rep_;
      if ( !v14 )
      {
        v76 = this->reserved_range_.total_size_;
LABEL_161:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->reserved_range_, v76 + 1);
        v14 = this->reserved_range_.rep_;
        v16 = v14->allocated_size;
        goto LABEL_119;
      }
      v15 = this->reserved_range_.current_size_;
      v16 = v14->allocated_size;
      if ( (int)v15 < v14->allocated_size )
      {
        v17 = (google::protobuf::DescriptorProto_ReservedRange *)v14->elements[v15];
        this->reserved_range_.current_size_ = v15 + 1;
        goto LABEL_21;
      }
      v76 = this->reserved_range_.total_size_;
      if ( v16 == v76 )
        goto LABEL_161;
LABEL_119:
      v77 = this->reserved_range_.arena_;
      v14->allocated_size = v16 + 1;
      if ( v77 )
      {
        if ( v77->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v77,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ReservedRange,
            0x20uLL);
        v17 = (google::protobuf::DescriptorProto_ReservedRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                   &v77->impl_,
                                                                   0x20uLL,
                                                                   google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ReservedRange>);
        google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(v17);
      }
      else
      {
        v17 = (google::protobuf::DescriptorProto_ReservedRange *)operator new(0x20uLL);
        google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(v17);
      }
      v78 = this->reserved_range_.current_size_;
      v79 = this->reserved_range_.rep_;
      this->reserved_range_.current_size_ = v78 + 1;
      v79->elements[v78] = v17;
LABEL_21:
      v18 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ && (v19 = *v18, (unsigned int)v19 <= 0x7F) )
      {
        a2->buffer_ = v18 + 1;
      }
      else
      {
        v19 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( v19 < 0 )
          goto LABEL_9;
      }
      v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v19);
      first = v20.first;
      if ( v20.second < 0 || !google::protobuf::DescriptorProto_ReservedRange::MergePartialFromCodedStream(v17, a2) )
        goto LABEL_9;
LABEL_26:
      if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
        goto LABEL_9;
      buffer = a2->buffer_;
      if ( a2->buffer_end_ <= a2->buffer_ )
        goto LABEL_28;
      goto LABEL_3;
    case 0xAu:
      if ( TagFallback != 82 )
        goto LABEL_6;
      v10 = this->reserved_name_.rep_;
      if ( !v10 )
      {
        v92 = this->reserved_name_.total_size_;
LABEL_165:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->reserved_name_, v92 + 1);
        v10 = this->reserved_name_.rep_;
        v12 = v10->allocated_size;
        goto LABEL_143;
      }
      v11 = this->reserved_name_.current_size_;
      v12 = v10->allocated_size;
      if ( (int)v11 < v10->allocated_size )
      {
        v13 = (std::string *)v10->elements[v11];
        this->reserved_name_.current_size_ = v11 + 1;
        goto LABEL_95;
      }
      v92 = this->reserved_name_.total_size_;
      if ( v12 == v92 )
        goto LABEL_165;
LABEL_143:
      v93 = this->reserved_name_.arena_;
      v10->allocated_size = v12 + 1;
      if ( v93 )
      {
        if ( v93->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v93, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
        v94 = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &v93->impl_,
                               0x20uLL,
                               google::protobuf::internal::arena_destruct_object<std::string>);
      }
      else
      {
        v94 = (std::string *)operator new(0x20uLL);
      }
      v13 = v94;
      v94->_anon_0._M_local_buf[0] = 0;
      v95 = this->reserved_name_.rep_;
      v94->_M_dataplus._M_p = v94->_anon_0._M_local_buf;
      v96 = this->reserved_name_.current_size_;
      v13->_M_string_length = 0LL;
      this->reserved_name_.current_size_ = v96 + 1;
      v95->elements[v96] = v13;
LABEL_95:
      if ( google::protobuf::internal::WireFormatLite::ReadBytes(a2, v13) )
        goto LABEL_2;
LABEL_9:
      result = 0LL;
      break;
  }
  return result;
};

// Line 3747: range 000000000C9246D0-000000000C92490C
void __fastcall google::protobuf::DescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::DescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r13d
  int current_size; // r14d
  int i; // r12d
  __int64 v5; // rdx
  int v6; // r14d
  int j; // r12d
  __int64 v8; // rdx
  int v9; // r14d
  int k; // r12d
  __int64 v11; // rdx
  int v12; // r14d
  int m; // r12d
  __int64 v14; // rdx
  int v15; // r14d
  int n; // r12d
  __int64 v17; // rdx
  int v18; // r13d
  int ii; // r12d
  __int64 v20; // rdx
  int v21; // r13d
  int jj; // r12d
  __int64 v23; // rdx
  int v24; // r13d
  int kk; // r12d
  __int64 v26; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  current_size = this->field_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->field_.rep_->elements[v5],
        output);
    }
  }
  v6 = this->nested_type_.current_size_;
  if ( v6 )
  {
    for ( j = 0; j != v6; ++j )
    {
      v8 = j;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        3,
        (const google::protobuf::MessageLite *)this->nested_type_.rep_->elements[v8],
        output);
    }
  }
  v9 = this->enum_type_.current_size_;
  if ( v9 )
  {
    for ( k = 0; k != v9; ++k )
    {
      v11 = k;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        4,
        (const google::protobuf::MessageLite *)this->enum_type_.rep_->elements[v11],
        output);
    }
  }
  v12 = this->extension_range_.current_size_;
  if ( v12 )
  {
    for ( m = 0; m != v12; ++m )
    {
      v14 = m;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        5,
        (const google::protobuf::MessageLite *)this->extension_range_.rep_->elements[v14],
        output);
    }
  }
  v15 = this->extension_.current_size_;
  if ( v15 )
  {
    for ( n = 0; n != v15; ++n )
    {
      v17 = n;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        6,
        (const google::protobuf::MessageLite *)this->extension_.rep_->elements[v17],
        output);
    }
  }
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(7, this->options_, output);
  v18 = this->oneof_decl_.current_size_;
  if ( v18 )
  {
    for ( ii = 0; ii != v18; ++ii )
    {
      v20 = ii;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        8,
        (const google::protobuf::MessageLite *)this->oneof_decl_.rep_->elements[v20],
        output);
    }
  }
  v21 = this->reserved_range_.current_size_;
  if ( v21 )
  {
    for ( jj = 0; jj != v21; ++jj )
    {
      v23 = jj;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        9,
        (const google::protobuf::MessageLite *)this->reserved_range_.rep_->elements[v23],
        output);
    }
  }
  v24 = this->reserved_name_.current_size_;
  if ( v24 > 0 )
  {
    for ( kk = 0; kk != v24; ++kk )
    {
      v26 = kk;
      google::protobuf::internal::WireFormatLite::WriteString(10LL, this->reserved_name_.rep_->elements[v26], output);
    }
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 3836: range 000000000C926300-000000000C9266B5
google::protobuf::uint8 *__fastcall google::protobuf::DescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::DescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // rax
  google::protobuf::uint32 v5; // ebp
  int current_size; // r13d
  int i; // r15d
  const google::protobuf::FieldDescriptorProto *v8; // rdi
  _BYTE *v9; // rdx
  unsigned int j; // eax
  char v11; // cl
  int v12; // r13d
  google::protobuf::uint8 *v13; // rdx
  int k; // r15d
  _BYTE *v15; // rdx
  const google::protobuf::DescriptorProto *v16; // rdi
  unsigned int m; // ecx
  char v18; // al
  int v19; // r13d
  int n; // r15d
  _BYTE *v21; // rdx
  const google::protobuf::EnumDescriptorProto *v22; // rdi
  unsigned int ii; // eax
  char v24; // cl
  int v25; // r13d
  int jj; // r15d
  _BYTE *v27; // rdx
  const google::protobuf::DescriptorProto_ExtensionRange *v28; // rdi
  unsigned int kk; // eax
  char v30; // cl
  int v31; // r13d
  int mm; // r15d
  _BYTE *v33; // rdx
  const google::protobuf::FieldDescriptorProto *v34; // rdi
  unsigned int nn; // eax
  char v36; // cl
  google::protobuf::MessageOptions *options; // rdi
  _BYTE *v38; // rdx
  unsigned int i1; // ecx
  char v40; // al
  int v41; // ebp
  int i2; // r14d
  _BYTE *v43; // rdx
  const google::protobuf::OneofDescriptorProto *v44; // rdi
  unsigned int i3; // eax
  char v46; // cl
  int v47; // ebp
  int i4; // r13d
  _BYTE *v49; // rdx
  const google::protobuf::DescriptorProto_ReservedRange *v50; // rdi
  unsigned int i5; // eax
  char v52; // cl
  int v53; // ebp
  int v54; // ebx
  __int64 v55; // rcx
  const std::string *v56; // rdi
  unsigned __int64 v57; // rax
  std::string *ptr; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ptr = this->name_.ptr_;
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  current_size = this->field_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v8 = (const google::protobuf::FieldDescriptorProto *)this->field_.rep_->elements[i];
      *v3 = 18;
      v9 = v3 + 1;
      for ( j = v8->_cached_size_; j > 0x7F; *(v9 - 1) = v11 | 0x80 )
      {
        v11 = j;
        j >>= 7;
        ++v9;
      }
      *v9 = j;
      v3 = google::protobuf::FieldDescriptorProto::InternalSerializeWithCachedSizesToArray(v8, deterministic, v9 + 1);
    }
  }
  v12 = this->nested_type_.current_size_;
  v13 = v3;
  if ( v12 )
  {
    for ( k = 0; k != v12; ++k )
    {
      v15 = v13 + 1;
      v16 = (const google::protobuf::DescriptorProto *)this->nested_type_.rep_->elements[k];
      *(v15 - 1) = 26;
      for ( m = v16->_cached_size_; m > 0x7F; *(v15 - 1) = v18 | 0x80 )
      {
        v18 = m;
        m >>= 7;
        ++v15;
      }
      *v15 = m;
      v13 = google::protobuf::DescriptorProto::InternalSerializeWithCachedSizesToArray(v16, deterministic, v15 + 1);
    }
  }
  v19 = this->enum_type_.current_size_;
  if ( v19 )
  {
    for ( n = 0; n != v19; ++n )
    {
      v21 = v13 + 1;
      v22 = (const google::protobuf::EnumDescriptorProto *)this->enum_type_.rep_->elements[n];
      *(v21 - 1) = 34;
      for ( ii = v22->_cached_size_; ii > 0x7F; *(v21 - 1) = v24 | 0x80 )
      {
        v24 = ii;
        ii >>= 7;
        ++v21;
      }
      *v21 = ii;
      v13 = google::protobuf::EnumDescriptorProto::InternalSerializeWithCachedSizesToArray(v22, deterministic, v21 + 1);
    }
  }
  v25 = this->extension_range_.current_size_;
  if ( v25 )
  {
    for ( jj = 0; jj != v25; ++jj )
    {
      v27 = v13 + 1;
      v28 = (const google::protobuf::DescriptorProto_ExtensionRange *)this->extension_range_.rep_->elements[jj];
      *(v27 - 1) = 42;
      for ( kk = v28->_cached_size_; kk > 0x7F; *(v27 - 1) = v30 | 0x80 )
      {
        v30 = kk;
        kk >>= 7;
        ++v27;
      }
      *v27 = kk;
      v13 = google::protobuf::DescriptorProto_ExtensionRange::InternalSerializeWithCachedSizesToArray(
              v28,
              deterministic,
              v27 + 1);
    }
  }
  v31 = this->extension_.current_size_;
  if ( v31 )
  {
    for ( mm = 0; mm != v31; ++mm )
    {
      v33 = v13 + 1;
      v34 = (const google::protobuf::FieldDescriptorProto *)this->extension_.rep_->elements[mm];
      *(v33 - 1) = 50;
      for ( nn = v34->_cached_size_; nn > 0x7F; *(v33 - 1) = v36 | 0x80 )
      {
        v36 = nn;
        nn >>= 7;
        ++v33;
      }
      *v33 = nn;
      v13 = google::protobuf::FieldDescriptorProto::InternalSerializeWithCachedSizesToArray(v34, deterministic, v33 + 1);
    }
  }
  if ( (v5 & 2) != 0 )
  {
    options = this->options_;
    *v13 = 58;
    v38 = v13 + 1;
    for ( i1 = options->_cached_size_; i1 > 0x7F; *(v38 - 1) = v40 | 0x80 )
    {
      v40 = i1;
      i1 >>= 7;
      ++v38;
    }
    *v38 = i1;
    v13 = google::protobuf::MessageOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v38 + 1);
  }
  v41 = this->oneof_decl_.current_size_;
  if ( v41 )
  {
    for ( i2 = 0; i2 != v41; ++i2 )
    {
      v43 = v13 + 1;
      v44 = (const google::protobuf::OneofDescriptorProto *)this->oneof_decl_.rep_->elements[i2];
      *(v43 - 1) = 66;
      for ( i3 = v44->_cached_size_; i3 > 0x7F; *(v43 - 1) = v46 | 0x80 )
      {
        v46 = i3;
        i3 >>= 7;
        ++v43;
      }
      *v43 = i3;
      v13 = google::protobuf::OneofDescriptorProto::InternalSerializeWithCachedSizesToArray(v44, deterministic, v43 + 1);
    }
  }
  v47 = this->reserved_range_.current_size_;
  if ( v47 )
  {
    for ( i4 = 0; i4 != v47; ++i4 )
    {
      v49 = v13 + 1;
      v50 = (const google::protobuf::DescriptorProto_ReservedRange *)this->reserved_range_.rep_->elements[i4];
      *(v49 - 1) = 74;
      for ( i5 = v50->_cached_size_; i5 > 0x7F; *(v49 - 1) = v52 | 0x80 )
      {
        v52 = i5;
        i5 >>= 7;
        ++v49;
      }
      *v49 = i5;
      v13 = google::protobuf::DescriptorProto_ReservedRange::InternalSerializeWithCachedSizesToArray(
              v50,
              deterministic,
              v49 + 1);
    }
  }
  v53 = this->reserved_name_.current_size_;
  if ( v53 > 0 )
  {
    v54 = 0;
    do
    {
      v55 = v54++;
      v56 = (const std::string *)this->reserved_name_.rep_->elements[v55];
      *v13 = 82;
      v13 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v56, v13 + 1);
    }
    while ( v54 != v53 );
  }
  v57 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v57 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v57 & 0xFFFFFFFFFFFFFFFELL),
             v13);
  else
    return v13;
};

// Line 3935: range 000000000C928590-000000000C928864
size_t __fastcall google::protobuf::DescriptorProto::ByteSizeLong(const google::protobuf::DescriptorProto *const this)
{
  size_t v1; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // r12
  size_t v5; // rbp
  int v6; // r13d
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r12
  size_t v11; // rbp
  int v12; // r13d
  __int64 v13; // rdx
  size_t v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rbp
  int v18; // r13d
  __int64 v19; // rdx
  size_t v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rbp
  int v24; // r13d
  __int64 v25; // rdx
  size_t v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rbp
  int v30; // r13d
  __int64 v31; // rdx
  size_t v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r12
  __int64 v35; // rbp
  int v36; // r13d
  __int64 v37; // rdx
  size_t v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // r12
  __int64 v41; // rbp
  int v42; // r13d
  __int64 v43; // rdx
  size_t v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rax
  size_t v47; // r12
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rcx
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned int v52; // edx
  google::protobuf::uint32 v53; // eax
  unsigned int v54; // edx
  size_t v56; // rdx
  unsigned int v57; // eax

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->field_.current_size_;
  v5 = v1 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::FieldDescriptorProto::ByteSizeLong((const google::protobuf::FieldDescriptorProto *const)this->field_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  v10 = (unsigned int)this->nested_type_.current_size_;
  v11 = v10 + v5;
  if ( (_DWORD)v10 )
  {
    v12 = 0;
    do
    {
      v13 = v12++;
      v14 = google::protobuf::DescriptorProto::ByteSizeLong((const google::protobuf::DescriptorProto *const)this->nested_type_.rep_->elements[v13]);
      _BitScanReverse(&v15, v14 | 1);
      v11 += v14 + ((9 * v15 + 73) >> 6);
    }
    while ( (_DWORD)v10 != v12 );
  }
  v16 = (unsigned int)this->enum_type_.current_size_;
  v17 = v16 + v11;
  if ( (_DWORD)v16 )
  {
    v18 = 0;
    do
    {
      v19 = v18++;
      v20 = google::protobuf::EnumDescriptorProto::ByteSizeLong((const google::protobuf::EnumDescriptorProto *const)this->enum_type_.rep_->elements[v19]);
      _BitScanReverse(&v21, v20 | 1);
      v17 += v20 + ((9 * v21 + 73) >> 6);
    }
    while ( (_DWORD)v16 != v18 );
  }
  v22 = (unsigned int)this->extension_range_.current_size_;
  v23 = v22 + v17;
  if ( (_DWORD)v22 )
  {
    v24 = 0;
    do
    {
      v25 = v24++;
      v26 = google::protobuf::DescriptorProto_ExtensionRange::ByteSizeLong((const google::protobuf::DescriptorProto_ExtensionRange *const)this->extension_range_.rep_->elements[v25]);
      _BitScanReverse(&v27, v26 | 1);
      v23 += v26 + ((9 * v27 + 73) >> 6);
    }
    while ( (_DWORD)v22 != v24 );
  }
  v28 = (unsigned int)this->extension_.current_size_;
  v29 = v28 + v23;
  if ( (_DWORD)v28 )
  {
    v30 = 0;
    do
    {
      v31 = v30++;
      v32 = google::protobuf::FieldDescriptorProto::ByteSizeLong((const google::protobuf::FieldDescriptorProto *const)this->extension_.rep_->elements[v31]);
      _BitScanReverse(&v33, v32 | 1);
      v29 += v32 + ((9 * v33 + 73) >> 6);
    }
    while ( (_DWORD)v28 != v30 );
  }
  v34 = (unsigned int)this->oneof_decl_.current_size_;
  v35 = v34 + v29;
  if ( (_DWORD)v34 )
  {
    v36 = 0;
    do
    {
      v37 = v36++;
      v38 = google::protobuf::OneofDescriptorProto::ByteSizeLong((const google::protobuf::OneofDescriptorProto *const)this->oneof_decl_.rep_->elements[v37]);
      _BitScanReverse(&v39, v38 | 1);
      v35 += v38 + ((9 * v39 + 73) >> 6);
    }
    while ( (_DWORD)v34 != v36 );
  }
  v40 = (unsigned int)this->reserved_range_.current_size_;
  v41 = v40 + v35;
  if ( (_DWORD)v40 )
  {
    v42 = 0;
    do
    {
      v43 = v42++;
      v44 = google::protobuf::DescriptorProto_ReservedRange::ByteSizeLong((const google::protobuf::DescriptorProto_ReservedRange *const)this->reserved_range_.rep_->elements[v43]);
      _BitScanReverse(&v45, v44 | 1);
      v41 += v44 + ((9 * v45 + 73) >> 6);
    }
    while ( (_DWORD)v40 != v42 );
  }
  v46 = (unsigned int)this->reserved_name_.current_size_;
  v47 = v41 + v46;
  if ( (int)v46 > 0 )
  {
    rep = this->reserved_name_.rep_;
    elements = rep->elements;
    v50 = (__int64)&rep[1] + 8 * (unsigned int)(v46 - 1);
    do
    {
      v51 = (__int64)*elements++;
      _BitScanReverse(&v52, *(_QWORD *)(v51 + 8) | 1);
      v47 += *(_QWORD *)(v51 + 8) + ((9 * v52 + 73) >> 6);
    }
    while ( (void **)v50 != elements );
  }
  v53 = this->_has_bits_.has_bits_[0];
  if ( (v53 & 3) != 0 )
  {
    if ( (v53 & 1) != 0 )
    {
      _BitScanReverse(&v54, this->name_.ptr_->_M_string_length | 1);
      v47 += ((9 * v54 + 73) >> 6) + this->name_.ptr_->_M_string_length + 1;
    }
    if ( (v53 & 2) != 0 )
    {
      v56 = google::protobuf::MessageOptions::ByteSizeLong(this->options_);
      _BitScanReverse(&v57, v56 | 1);
      v47 += ((9 * v57 + 73) >> 6) + v56 + 1;
    }
  }
  this->_cached_size_ = v47;
  return v47;
};

// Line 4052: range 000000000C93E210-000000000C93E25D
void __fastcall google::protobuf::DescriptorProto::MergeFrom(
        google::protobuf::DescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::DescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::DescriptorProto *)__dynamic_cast(
                                                    from,
                                                    (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                    (const struct __class_type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
                                                    0LL);
  if ( v2 )
    google::protobuf::DescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 4067: range 000000000C93D790-000000000C93DC21
void __fastcall google::protobuf::DescriptorProto::MergeFrom(
        google::protobuf::DescriptorProto *this,
        const google::protobuf::DescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  int v9; // r12d
  int v10; // r12d
  int v11; // r12d
  int v12; // r12d
  int v13; // r12d
  int v14; // r12d
  int v15; // r12d
  google::protobuf::uint32 v16; // r12d
  std::string *v17; // rdi
  std::string *v18; // rsi
  void **v19; // r13
  void **v20; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v21; // rax
  int v22; // r12d
  void **v23; // r13
  void **v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rax
  int v26; // r12d
  void **v27; // r13
  void **v28; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v29; // rax
  int v30; // r12d
  void **v31; // r13
  void **v32; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rax
  int v34; // r12d
  void **v35; // r13
  void **v36; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v37; // rax
  int v38; // r12d
  void **v39; // r13
  void **v40; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v41; // rax
  int v42; // r12d
  void **v43; // r13
  void **v44; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v45; // rax
  int v46; // r12d
  void **elements; // r13
  void **v48; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v50; // r12d
  google::protobuf::MessageOptions *options; // r12
  google::protobuf::MessageOptions *v52; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = a2->field_.current_size_;
  if ( current_size )
  {
    elements = a2->field_.rep_->elements;
    v48 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->field_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
      &this->field_,
      v48,
      elements,
      current_size,
      this->field_.rep_->allocated_size - this->field_.current_size_);
    rep = this->field_.rep_;
    v50 = this->field_.current_size_ + current_size;
    this->field_.current_size_ = v50;
    if ( v50 > rep->allocated_size )
      rep->allocated_size = v50;
  }
  v9 = a2->nested_type_.current_size_;
  if ( v9
    && (v27 = a2->nested_type_.rep_->elements,
        v28 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->nested_type_, v9),
        google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
          &this->nested_type_,
          v28,
          v27,
          v9,
          this->nested_type_.rep_->allocated_size - this->nested_type_.current_size_),
        v29 = this->nested_type_.rep_,
        v30 = this->nested_type_.current_size_ + v9,
        this->nested_type_.current_size_ = v30,
        v30 > v29->allocated_size) )
  {
    v29->allocated_size = v30;
    v10 = a2->enum_type_.current_size_;
    if ( !v10 )
      goto LABEL_8;
  }
  else
  {
    v10 = a2->enum_type_.current_size_;
    if ( !v10 )
      goto LABEL_8;
  }
  v31 = a2->enum_type_.rep_->elements;
  v32 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->enum_type_, v10);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
    &this->enum_type_,
    v32,
    v31,
    v10,
    this->enum_type_.rep_->allocated_size - this->enum_type_.current_size_);
  v33 = this->enum_type_.rep_;
  v34 = this->enum_type_.current_size_ + v10;
  this->enum_type_.current_size_ = v34;
  if ( v34 <= v33->allocated_size )
  {
LABEL_8:
    v11 = a2->extension_range_.current_size_;
    if ( !v11 )
      goto LABEL_9;
    goto LABEL_28;
  }
  v33->allocated_size = v34;
  v11 = a2->extension_range_.current_size_;
  if ( !v11 )
    goto LABEL_9;
LABEL_28:
  v35 = a2->extension_range_.rep_->elements;
  v36 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_range_, v11);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(
    &this->extension_range_,
    v36,
    v35,
    v11,
    this->extension_range_.rep_->allocated_size - this->extension_range_.current_size_);
  v37 = this->extension_range_.rep_;
  v38 = this->extension_range_.current_size_ + v11;
  this->extension_range_.current_size_ = v38;
  if ( v38 <= v37->allocated_size )
  {
LABEL_9:
    v12 = a2->extension_.current_size_;
    if ( !v12 )
      goto LABEL_10;
    goto LABEL_30;
  }
  v37->allocated_size = v38;
  v12 = a2->extension_.current_size_;
  if ( !v12 )
    goto LABEL_10;
LABEL_30:
  v39 = a2->extension_.rep_->elements;
  v40 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->extension_, v12);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
    &this->extension_,
    v40,
    v39,
    v12,
    this->extension_.rep_->allocated_size - this->extension_.current_size_);
  v41 = this->extension_.rep_;
  v42 = this->extension_.current_size_ + v12;
  this->extension_.current_size_ = v42;
  if ( v42 <= v41->allocated_size )
  {
LABEL_10:
    v13 = a2->oneof_decl_.current_size_;
    if ( !v13 )
      goto LABEL_11;
    goto LABEL_32;
  }
  v41->allocated_size = v42;
  v13 = a2->oneof_decl_.current_size_;
  if ( !v13 )
    goto LABEL_11;
LABEL_32:
  v43 = a2->oneof_decl_.rep_->elements;
  v44 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->oneof_decl_, v13);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(
    &this->oneof_decl_,
    v44,
    v43,
    v13,
    this->oneof_decl_.rep_->allocated_size - this->oneof_decl_.current_size_);
  v45 = this->oneof_decl_.rep_;
  v46 = this->oneof_decl_.current_size_ + v13;
  this->oneof_decl_.current_size_ = v46;
  if ( v46 > v45->allocated_size )
    v45->allocated_size = v46;
LABEL_11:
  v14 = a2->reserved_range_.current_size_;
  if ( v14 )
  {
    v23 = a2->reserved_range_.rep_->elements;
    v24 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->reserved_range_, v14);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(
      &this->reserved_range_,
      v24,
      v23,
      v14,
      this->reserved_range_.rep_->allocated_size - this->reserved_range_.current_size_);
    v25 = this->reserved_range_.rep_;
    v26 = this->reserved_range_.current_size_ + v14;
    this->reserved_range_.current_size_ = v26;
    if ( v26 > v25->allocated_size )
      v25->allocated_size = v26;
  }
  v15 = a2->reserved_name_.current_size_;
  if ( v15 )
  {
    v19 = a2->reserved_name_.rep_->elements;
    v20 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->reserved_name_, v15);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->reserved_name_,
      v20,
      v19,
      v15,
      this->reserved_name_.rep_->allocated_size - this->reserved_name_.current_size_);
    v21 = this->reserved_name_.rep_;
    v22 = this->reserved_name_.current_size_ + v15;
    this->reserved_name_.current_size_ = v22;
    if ( v22 > v21->allocated_size )
      v21->allocated_size = v22;
  }
  v16 = a2->_has_bits_.has_bits_[0];
  if ( (v16 & 3) != 0 )
  {
    if ( (v16 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v17 = this->name_.ptr_;
      v18 = a2->name_.ptr_;
      if ( v18 != v17 )
      {
        if ( v17 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v18);
        else
          std::string::_M_assign(v17, v18);
      }
    }
    if ( (v16 & 2) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::MessageOptions *)operator new(0x70uLL);
        google::protobuf::MessageOptions::MessageOptions(options);
        this->options_ = options;
      }
      v52 = a2->options_;
      if ( !v52 )
        v52 = (google::protobuf::MessageOptions *)&google::protobuf::_MessageOptions_default_instance_;
      google::protobuf::MessageOptions::MergeFrom(options, v52);
    }
  }
};

// Line 4096: range 000000000C93E270-000000000C93E2A0
void __fastcall google::protobuf::DescriptorProto::CopyFrom(
        google::protobuf::DescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::DescriptorProto::Clear(this);
    google::protobuf::DescriptorProto::MergeFrom(this, from);
  }
};

// Line 4103: range 000000000C93E2B0-000000000C93E2E0
void __fastcall google::protobuf::DescriptorProto::CopyFrom(
        google::protobuf::DescriptorProto *const this,
        const google::protobuf::DescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::DescriptorProto::Clear(this);
    google::protobuf::DescriptorProto::MergeFrom(this, from);
  }
};

// Line 4108: range 000000000C92DC60-000000000C92DD76
bool __fastcall google::protobuf::DescriptorProto::IsInitialized(const google::protobuf::DescriptorProto *const this)
{
  bool v1; // r12
  int current_size; // ebp
  int v4; // ebp
  int v5; // ebp
  void *v6; // rax
  int v7; // ebp
  void *v8; // rax

  if ( !google::protobuf::internal::AllAreInitialized<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>>(&this->field_) )
    return 0;
  current_size = this->nested_type_.current_size_;
  while ( --current_size >= 0 )
  {
    if ( !google::protobuf::DescriptorProto::IsInitialized((const google::protobuf::DescriptorProto *const)this->nested_type_.rep_->elements[current_size]) )
      return 0;
  }
  v4 = this->enum_type_.current_size_;
  while ( --v4 >= 0 )
  {
    if ( !google::protobuf::EnumDescriptorProto::IsInitialized((const google::protobuf::EnumDescriptorProto *const)this->enum_type_.rep_->elements[v4]) )
      return 0;
  }
  v5 = this->extension_range_.current_size_ - 1;
  if ( v5 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = this->extension_range_.rep_->elements[v5];
        if ( (*((_BYTE *)v6 + 16) & 1) != 0 )
          break;
        if ( --v5 == -1 )
          goto LABEL_16;
      }
      if ( !google::protobuf::ExtensionRangeOptions::IsInitialized(*((const google::protobuf::ExtensionRangeOptions *const *)v6
                                                                   + 3)) )
        return 0;
    }
    while ( --v5 != -1 );
  }
LABEL_16:
  v1 = google::protobuf::internal::AllAreInitialized<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>>(&this->extension_);
  if ( !v1 )
    return 0;
  v7 = this->oneof_decl_.current_size_ - 1;
  if ( v7 >= 0 )
  {
    do
    {
      v8 = this->oneof_decl_.rep_->elements[v7];
      if ( (*((_BYTE *)v8 + 16) & 2) != 0
        && !google::protobuf::OneofOptions::IsInitialized(*((const google::protobuf::OneofOptions *const *)v8 + 4)) )
      {
        return 0;
      }
    }
    while ( --v7 != -1 );
  }
  if ( (this->_has_bits_.has_bits_[0] & 2) == 0 )
    return v1;
  return google::protobuf::MessageOptions::IsInitialized(this->options_);
};

// Line 4122: range 000000000C92E500-000000000C92E510
void __fastcall google::protobuf::DescriptorProto::Swap(
        google::protobuf::DescriptorProto *const this,
        google::protobuf::DescriptorProto *other)
{
  if ( other != this )
    google::protobuf::DescriptorProto::InternalSwap(this, other);
};

// Line 4125: range 000000000C92E260-000000000C92E4FB
void __fastcall google::protobuf::DescriptorProto::InternalSwap(
        google::protobuf::DescriptorProto *const this,
        google::protobuf::DescriptorProto *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v9; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v13; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v15; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v17; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rax
  std::string *ptr; // rax
  google::protobuf::MessageOptions *options; // rdx
  google::protobuf::MessageOptions *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rcx
  int cached_size; // eax
  _QWORD *v28; // [rsp+0h] [rbp-18h]

  rep = this->field_.rep_;
  this->field_.rep_ = other->field_.rep_;
  current_size = other->field_.current_size_;
  other->field_.rep_ = rep;
  LODWORD(rep) = this->field_.current_size_;
  this->field_.current_size_ = current_size;
  total_size = other->field_.total_size_;
  other->field_.current_size_ = (int)rep;
  LODWORD(rep) = this->field_.total_size_;
  this->field_.total_size_ = total_size;
  v5 = other->nested_type_.rep_;
  other->field_.total_size_ = (int)rep;
  v6 = this->nested_type_.rep_;
  this->nested_type_.rep_ = v5;
  LODWORD(v5) = other->nested_type_.current_size_;
  other->nested_type_.rep_ = v6;
  LODWORD(v6) = this->nested_type_.current_size_;
  this->nested_type_.current_size_ = (int)v5;
  LODWORD(v5) = other->nested_type_.total_size_;
  other->nested_type_.current_size_ = (int)v6;
  LODWORD(v6) = this->nested_type_.total_size_;
  this->nested_type_.total_size_ = (int)v5;
  v7 = other->enum_type_.rep_;
  other->nested_type_.total_size_ = (int)v6;
  v8 = this->enum_type_.rep_;
  this->enum_type_.rep_ = v7;
  LODWORD(v7) = other->enum_type_.current_size_;
  other->enum_type_.rep_ = v8;
  LODWORD(v8) = this->enum_type_.current_size_;
  this->enum_type_.current_size_ = (int)v7;
  LODWORD(v7) = other->enum_type_.total_size_;
  other->enum_type_.current_size_ = (int)v8;
  LODWORD(v8) = this->enum_type_.total_size_;
  this->enum_type_.total_size_ = (int)v7;
  v9 = other->extension_range_.rep_;
  other->enum_type_.total_size_ = (int)v8;
  v10 = this->extension_range_.rep_;
  this->extension_range_.rep_ = v9;
  LODWORD(v9) = other->extension_range_.current_size_;
  other->extension_range_.rep_ = v10;
  LODWORD(v10) = this->extension_range_.current_size_;
  this->extension_range_.current_size_ = (int)v9;
  LODWORD(v9) = other->extension_range_.total_size_;
  other->extension_range_.current_size_ = (int)v10;
  LODWORD(v10) = this->extension_range_.total_size_;
  this->extension_range_.total_size_ = (int)v9;
  v11 = other->extension_.rep_;
  other->extension_range_.total_size_ = (int)v10;
  v12 = this->extension_.rep_;
  this->extension_.rep_ = v11;
  LODWORD(v11) = other->extension_.current_size_;
  other->extension_.rep_ = v12;
  LODWORD(v12) = this->extension_.current_size_;
  this->extension_.current_size_ = (int)v11;
  LODWORD(v11) = other->extension_.total_size_;
  other->extension_.current_size_ = (int)v12;
  LODWORD(v12) = this->extension_.total_size_;
  this->extension_.total_size_ = (int)v11;
  v13 = other->oneof_decl_.rep_;
  other->extension_.total_size_ = (int)v12;
  v14 = this->oneof_decl_.rep_;
  this->oneof_decl_.rep_ = v13;
  other->oneof_decl_.rep_ = v14;
  LODWORD(v14) = this->oneof_decl_.current_size_;
  this->oneof_decl_.current_size_ = other->oneof_decl_.current_size_;
  LODWORD(v13) = other->oneof_decl_.total_size_;
  other->oneof_decl_.current_size_ = (int)v14;
  LODWORD(v14) = this->oneof_decl_.total_size_;
  this->oneof_decl_.total_size_ = (int)v13;
  v15 = other->reserved_range_.rep_;
  other->oneof_decl_.total_size_ = (int)v14;
  v16 = this->reserved_range_.rep_;
  this->reserved_range_.rep_ = v15;
  LODWORD(v15) = other->reserved_range_.current_size_;
  other->reserved_range_.rep_ = v16;
  LODWORD(v16) = this->reserved_range_.current_size_;
  this->reserved_range_.current_size_ = (int)v15;
  LODWORD(v15) = other->reserved_range_.total_size_;
  other->reserved_range_.current_size_ = (int)v16;
  LODWORD(v16) = this->reserved_range_.total_size_;
  this->reserved_range_.total_size_ = (int)v15;
  v17 = other->reserved_name_.rep_;
  other->reserved_range_.total_size_ = (int)v16;
  v18 = this->reserved_name_.rep_;
  this->reserved_name_.rep_ = v17;
  LODWORD(v17) = other->reserved_name_.current_size_;
  other->reserved_name_.rep_ = v18;
  LODWORD(v18) = this->reserved_name_.current_size_;
  this->reserved_name_.current_size_ = (int)v17;
  LODWORD(v17) = other->reserved_name_.total_size_;
  other->reserved_name_.current_size_ = (int)v18;
  LODWORD(v18) = this->reserved_name_.total_size_;
  this->reserved_name_.total_size_ = (int)v17;
  other->reserved_name_.total_size_ = (int)v18;
  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  options = other->options_;
  other->name_.ptr_ = ptr;
  v21 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->options_ = v21;
  LODWORD(v21) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v22 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v21;
  v23 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v23 & 1) != 0 )
  {
    if ( (v22 & 1) == 0 )
    {
      v24 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v23 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v22 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v23 & 1) != 0 )
  {
    v25 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v28 = v24;
    v25 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v24 = v28;
  }
  v26 = *v25;
  *v25 = *v24;
  *v24 = v26;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 4546: range 000000000C933810-000000000C9338BE
void __fastcall google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(
        google::protobuf::ExtensionRangeOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FD28;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this == (google::protobuf::ExtensionRangeOptions *)&google::protobuf::_ExtensionRangeOptions_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once == 2 )
  {
    this->_cached_size_ = 0;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    this->_cached_size_ = 0;
  }
};

// Line 4554: range 000000000C93B690-000000000C93B7AF
void __fastcall google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(
        google::protobuf::ExtensionRangeOptions *this,
        const google::protobuf::ExtensionRangeOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  void **elements; // r15
  void **v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v14; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FD28;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v12 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v12,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v14 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v14;
    if ( v14 > rep->allocated_size )
      rep->allocated_size = v14;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
};

// Line 4566: range 000000000C92B9C0-000000000C92B9C7
void __fastcall google::protobuf::ExtensionRangeOptions::SharedCtor(
        google::protobuf::ExtensionRangeOptions *const this)
{
  this->_cached_size_ = 0;
};

// Line 4569: range 000000000C933920-000000000C933943
void __fastcall google::protobuf::ExtensionRangeOptions::~ExtensionRangeOptions(
        google::protobuf::ExtensionRangeOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A17FD28;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 4569: range 000000000C933950-000000000C933962
void __fastcall google::protobuf::ExtensionRangeOptions::~ExtensionRangeOptions(
        google::protobuf::ExtensionRangeOptions *const this)
{
  google::protobuf::ExtensionRangeOptions::~ExtensionRangeOptions(this);
  operator delete(this, 0x68uLL);
};

// Line 4579: range 000000000C924030-000000000C924033
void __fastcall google::protobuf::ExtensionRangeOptions::SetCachedSize(
        const google::protobuf::ExtensionRangeOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 4592: range 000000000C9338D0-000000000C93390D
google::protobuf::ExtensionRangeOptions *__fastcall google::protobuf::ExtensionRangeOptions::New(
        google::protobuf::ExtensionRangeOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ExtensionRangeOptions *v2; // r12

  v2 = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
  google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::ExtensionRangeOptions>(a2, v2);
  return v2;
};

// Line 4593: range 000000000C73148C-000000000C73149C
void __fastcall __noreturn google::protobuf::ExtensionRangeOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x68uLL);
  _Unwind_Resume(v0);
};

// Line 4600: range 000000000C930F50-000000000C930F8B
void __fastcall google::protobuf::ExtensionRangeOptions::Clear(google::protobuf::ExtensionRangeOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 4613: range 000000000C935130-000000000C9353F5
__int64 __fastcall google::protobuf::ExtensionRangeOptions::MergePartialFromCodedStream(
        google::protobuf::ExtensionRangeOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rcx
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  int v9; // edx
  unsigned __int64 ptr; // r8
  unsigned __int64 v11; // rax
  google::protobuf::UnknownFieldSet *v12; // rdx
  google::protobuf::UnknownFieldSet *v14; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *v19; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v21; // rax
  int first; // r14d
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v25; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v26; // rdx

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = a2->buffer_;
      buffer_end = a2->buffer_end_;
      if ( buffer_end <= a2->buffer_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        v8 = buffer + 1;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = v8;
          goto LABEL_9;
        }
        if ( buffer_end > v8 )
        {
          v9 = buffer[1];
          if ( (int)(TagFallback & ~v9) > 127 )
          {
            a2->buffer_ = buffer + 2;
            TagFallback = TagFallback + (v9 << 7) - 128;
            goto LABEL_7;
          }
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x3FFE )
        break;
LABEL_7:
      if ( TagFallback >> 3 != 999 )
        break;
      if ( (_BYTE)TagFallback == 58 )
      {
        rep = this->uninterpreted_option_.rep_;
        if ( rep )
        {
          current_size = this->uninterpreted_option_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
            this->uninterpreted_option_.current_size_ = current_size + 1;
            goto LABEL_27;
          }
          total_size = this->uninterpreted_option_.total_size_;
          if ( allocated_size != total_size )
          {
            arena = this->uninterpreted_option_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
              goto LABEL_38;
            goto LABEL_44;
          }
        }
        else
        {
          total_size = this->uninterpreted_option_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
        arena = this->uninterpreted_option_.arena_;
        ++this->uninterpreted_option_.rep_->allocated_size;
        if ( arena )
        {
LABEL_38:
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
              0x60uLL);
          AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                            &arena->impl_,
                                                                            0x60uLL,
                                                                            google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
          google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
          goto LABEL_41;
        }
LABEL_44:
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
        google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
LABEL_41:
        v25 = this->uninterpreted_option_.current_size_;
        v26 = this->uninterpreted_option_.rep_;
        this->uninterpreted_option_.current_size_ = v25 + 1;
        v26->elements[v25] = AlignedAndAddCleanup;
LABEL_27:
        v19 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v19, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v19 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v21 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v21.first;
        if ( v21.second < 0
          || !(unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
                                 AlignedAndAddCleanup,
                                 a2)
          || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
        {
          return 0LL;
        }
      }
      else
      {
LABEL_9:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v11 = ptr & 1;
LABEL_10:
        if ( v11 )
          v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        else
          v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
        if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v12) )
          return 0LL;
      }
    }
    if ( !TagFallback )
      return 1LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = ptr & 1;
    if ( TagFallback <= 0x1F3F )
      goto LABEL_10;
    if ( (ptr & 1) != 0 )
      v14 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                             &this->_extensions_,
                             TagFallback,
                             a2,
                             (const google::protobuf::Message *)&google::protobuf::_ExtensionRangeOptions_default_instance_,
                             v14) )
      return 0LL;
  }
};

// Line 4661: range 000000000C925290-000000000C92531A
void __fastcall google::protobuf::ExtensionRangeOptions::SerializeWithCachedSizes(
        const google::protobuf::ExtensionRangeOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v4],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 4685: range 000000000C9253B0-000000000C92546D
google::protobuf::uint8 *__fastcall google::protobuf::ExtensionRangeOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::ExtensionRangeOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v7; // rdi
  google::protobuf::uint8 *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  google::protobuf::uint8 *v11; // r12
  unsigned __int64 ptr; // rax

  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)target = 16058;
      v8 = target + 2;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v7, deterministic, v8 + 1);
    }
  }
  v11 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v11);
  else
    return v11;
};

// Line 4711: range 000000000C927990-000000000C927A17
size_t __fastcall google::protobuf::ExtensionRangeOptions::ByteSizeLong(
        const google::protobuf::ExtensionRangeOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 4740: range 000000000C93A8B0-000000000C93A8FD
void __fastcall google::protobuf::ExtensionRangeOptions::MergeFrom(
        google::protobuf::ExtensionRangeOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::ExtensionRangeOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::ExtensionRangeOptions *)__dynamic_cast(
                                                          from,
                                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::ExtensionRangeOptions,
                                                          0LL);
  if ( v2 )
    google::protobuf::ExtensionRangeOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 4755: range 000000000C93A7E0-000000000C93A8AA
void __fastcall google::protobuf::ExtensionRangeOptions::MergeFrom(
        google::protobuf::ExtensionRangeOptions *const this,
        const google::protobuf::ExtensionRangeOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    rep = from->uninterpreted_option_.rep_;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v10,
      rep->elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    v11 = this->uninterpreted_option_.rep_;
    v12 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v12;
    if ( v12 > v11->allocated_size )
      v11->allocated_size = v12;
  }
};

// Line 4768: range 000000000C93A910-000000000C93A940
void __fastcall google::protobuf::ExtensionRangeOptions::CopyFrom(
        google::protobuf::ExtensionRangeOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::ExtensionRangeOptions::Clear(this);
    google::protobuf::ExtensionRangeOptions::MergeFrom(this, from);
  }
};

// Line 4775: range 000000000C93A950-000000000C93A980
void __fastcall google::protobuf::ExtensionRangeOptions::CopyFrom(
        google::protobuf::ExtensionRangeOptions *const this,
        const google::protobuf::ExtensionRangeOptions *from)
{
  if ( from != this )
  {
    google::protobuf::ExtensionRangeOptions::Clear(this);
    google::protobuf::ExtensionRangeOptions::MergeFrom(this, from);
  }
};

// Line 4780: range 000000000C928F30-000000000C928F89
bool __fastcall google::protobuf::ExtensionRangeOptions::IsInitialized(
        const google::protobuf::ExtensionRangeOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 4790: range 000000000C92F340-000000000C92F350
void __fastcall google::protobuf::ExtensionRangeOptions::Swap(
        google::protobuf::ExtensionRangeOptions *const this,
        google::protobuf::ExtensionRangeOptions *other)
{
  if ( other != this )
    google::protobuf::ExtensionRangeOptions::InternalSwap(this, other);
};

// Line 4793: range 000000000C92F270-000000000C92F33B
void __fastcall google::protobuf::ExtensionRangeOptions::InternalSwap(
        google::protobuf::ExtensionRangeOptions *const this,
        google::protobuf::ExtensionRangeOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->uninterpreted_option_.total_size_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 4857: range 000000000C92D600-000000000C92D6B8
__int64 __fastcall google::protobuf::FieldDescriptorProto::FieldDescriptorProto(
        google::protobuf::FieldDescriptorProto *this)
{
  __int64 result; // rax
  google::protobuf::internal::FunctionClosure0 v2[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FE00;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::FieldDescriptorProto *)&google::protobuf::_FieldDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v2[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  this->_cached_size_ = 0;
  result = 0x100000001LL;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->extendee_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->type_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->label_ = 0x100000001LL;
  *(_OWORD *)&this->options_ = 0LL;
  return result;
};

// Line 4865: range 000000000C93CF90-000000000C93D0FA
__int64 __fastcall google::protobuf::FieldDescriptorProto::FieldDescriptorProto(
        google::protobuf::FieldDescriptorProto *this,
        const google::protobuf::FieldDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v5; // r12
  google::protobuf::UnknownFieldSet *v6; // rax
  __int64 result; // rax
  std::string *v8; // rsi
  std::string *v9; // rsi
  std::string *v10; // rsi
  std::string *v11; // rsi
  std::string *v12; // rsi
  google::protobuf::FieldOptions *v13; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FE00;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v5 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v6, v5);
  }
  result = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 1) != 0 )
  {
    v8 = a2->name_.ptr_;
    if ( v8 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v8);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->extendee_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 2) != 0 )
  {
    v9 = a2->extendee_.ptr_;
    if ( v9 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->extendee_,
        (unsigned __int8 **)v9);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->type_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 4) != 0 )
  {
    v10 = a2->type_name_.ptr_;
    if ( v10 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->type_name_,
        (unsigned __int8 **)v10);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 8) != 0 )
  {
    v11 = a2->default_value_.ptr_;
    if ( v11 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->default_value_,
        (unsigned __int8 **)v11);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 0x10) != 0 )
  {
    v12 = a2->json_name_.ptr_;
    if ( v12 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->json_name_,
        (unsigned __int8 **)v12);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 0x20) != 0 )
  {
    v13 = (google::protobuf::FieldOptions *)operator new(0x78uLL);
    result = google::protobuf::FieldOptions::FieldOptions(v13, a2->options_);
    this->options_ = v13;
  }
  else
  {
    this->options_ = 0LL;
  }
  *(__m128i *)&this->number_ = _mm_loadu_si128((const __m128i *)&a2->number_);
  return result;
};

// Line 4892: range 000000000C731CE6-000000000C731CFE
void __fastcall __noreturn google::protobuf::FieldDescriptorProto::FieldDescriptorProto()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x78uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 4909: range 000000000C92BAA0-000000000C92BAE5
void __fastcall google::protobuf::FieldDescriptorProto::SharedCtor(google::protobuf::FieldDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->extendee_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->type_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->default_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->json_name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->label_ = 0x100000001LL;
  *(_OWORD *)&this->options_ = 0LL;
};

// Line 4916: range 000000000C92D9F0-000000000C92DA12
void __fastcall google::protobuf::FieldDescriptorProto::~FieldDescriptorProto(
        google::protobuf::FieldDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FE00;
  google::protobuf::FieldDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x58uLL);
};

// Line 4916: range 000000000C92D9D0-000000000C92D9E5
void __fastcall google::protobuf::FieldDescriptorProto::~FieldDescriptorProto(
        google::protobuf::FieldDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FE00;
  google::protobuf::FieldDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 4921: range 000000000C92BAF0-000000000C92BC16
void __fastcall google::protobuf::FieldDescriptorProto::SharedDtor(google::protobuf::FieldDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v4; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v5; // rbp
  google::protobuf::FieldOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr && ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->extendee_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
  v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->type_name_.ptr_;
  if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
  {
    if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
      operator delete(v3->union_.align_to_ptr);
    operator delete(v3, 0x20uLL);
  }
  v4 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->default_value_.ptr_;
  if ( v4 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v4 )
  {
    if ( (void **)v4->union_.align_to_int64 != &v4->union_.align_to_ptr + 2 )
      operator delete(v4->union_.align_to_ptr);
    operator delete(v4, 0x20uLL);
  }
  v5 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->json_name_.ptr_;
  if ( v5 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v5 )
  {
    if ( (void **)v5->union_.align_to_int64 != &v5->union_.align_to_ptr + 2 )
      operator delete(v5->union_.align_to_ptr);
    operator delete(v5, 0x20uLL);
  }
  if ( this != (google::protobuf::FieldDescriptorProto *const)&google::protobuf::_FieldDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::FieldOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 4932: range 000000000C924040-000000000C924043
void __fastcall google::protobuf::FieldDescriptorProto::SetCachedSize(
        const google::protobuf::FieldDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 4945: range 000000000C92DF00-000000000C92DF3D
google::protobuf::FieldDescriptorProto *__fastcall google::protobuf::FieldDescriptorProto::New(
        google::protobuf::FieldDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FieldDescriptorProto *v2; // r12

  v2 = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
  google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::FieldDescriptorProto>(a2, v2);
  return v2;
};

// Line 4946: range 000000000C73115A-000000000C73116A
void __fastcall __noreturn google::protobuf::FieldDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x58uLL);
  _Unwind_Resume(v0);
};

// Line 4953: range 000000000C9316B0-000000000C9317A9
void __fastcall google::protobuf::FieldDescriptorProto::Clear(google::protobuf::FieldDescriptorProto *const this)
{
  google::protobuf::uint32 v2; // ebp
  std::string *ptr; // rax
  std::string *v4; // rax
  std::string *v5; // rax
  std::string *v6; // rax
  std::string *v7; // rax
  unsigned __int64 v8; // rdi
  google::protobuf::UnknownFieldSet *v9; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 0x3F) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 2) != 0 )
    {
      v4 = this->extendee_.ptr_;
      v4->_M_string_length = 0LL;
      *v4->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 4) != 0 )
    {
      v5 = this->type_name_.ptr_;
      v5->_M_string_length = 0LL;
      *v5->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 8) != 0 )
    {
      v6 = this->default_value_.ptr_;
      v6->_M_string_length = 0LL;
      *v6->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 0x10) != 0 )
    {
      v7 = this->json_name_.ptr_;
      v7->_M_string_length = 0LL;
      *v7->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 0x20) != 0 )
      google::protobuf::FieldOptions::Clear(this->options_);
  }
  if ( (v2 & 0xC0) != 0 )
    *(_QWORD *)&this->number_ = 0LL;
  if ( (v2 & 0x300) != 0 )
    *(_QWORD *)&this->label_ = 0x100000001LL;
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v8 & 1) != 0 )
  {
    v9 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    if ( v9->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v9);
  }
};

// Line 5000: range 000000000C937F30-000000000C938412
__int64 __fastcall google::protobuf::FieldDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::FieldDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *i; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v8; // rdx
  google::protobuf::UnknownFieldSet *v9; // rdx
  std::string *ptr; // rsi
  const google::protobuf::uint8 *v11; // rax
  google::protobuf::uint32 v12; // esi
  google::protobuf::int64 v13; // rax
  google::protobuf::FieldOptions *options; // r13
  const google::protobuf::uint8 *v16; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v18; // rax
  int first; // r14d
  const google::protobuf::uint8 *v20; // rax
  signed int v21; // esi
  google::protobuf::int64 v22; // rax
  google::protobuf::UnknownFieldSet *v23; // rdi
  const google::protobuf::uint8 *v24; // rax
  signed int v25; // esi
  google::protobuf::int64 v26; // rax
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v28; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  unsigned __int64 v30; // rdi
  google::protobuf::UnknownFieldSet *v31; // rdi

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  for ( i = a2->buffer_; ; i = a2->buffer_ )
  {
    while ( 1 )
    {
      if ( i >= buffer_end )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *i;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = i + 1;
          goto LABEL_11;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback > 0x57 )
        break;
      switch ( TagFallback >> 3 )
      {
        case 0u:
          goto handle_unusual_15;
        case 1u:
          if ( TagFallback != 10 )
            goto LABEL_4;
          ptr = this->name_.ptr_;
          this->_has_bits_.has_bits_[0] |= 1u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->name_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->name_.ptr_;
          }
          goto LABEL_62;
        case 2u:
          if ( TagFallback != 18 )
            goto LABEL_4;
          ptr = this->extendee_.ptr_;
          this->_has_bits_.has_bits_[0] |= 2u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->extendee_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->extendee_.ptr_;
          }
          goto LABEL_62;
        case 3u:
          if ( TagFallback != 24 )
            goto LABEL_4;
          buffer = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x40u;
          if ( buffer >= buffer_end )
          {
            v28 = 0;
          }
          else
          {
            v28 = *buffer;
            if ( *(char *)buffer >= 0 )
            {
              i = buffer + 1;
              a2->buffer_ = i;
              goto LABEL_72;
            }
          }
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v28);
          v28 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0LL;
          buffer_end = a2->buffer_end_;
          i = a2->buffer_;
LABEL_72:
          this->number_ = v28;
          break;
        case 4u:
          if ( TagFallback != 32 )
            goto LABEL_4;
          v24 = a2->buffer_;
          if ( a2->buffer_ >= a2->buffer_end_ )
          {
            v25 = 0;
          }
          else
          {
            v25 = *v24;
            if ( *(char *)v24 >= 0 )
            {
              a2->buffer_ = v24 + 1;
              goto LABEL_49;
            }
          }
          v26 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v25);
          v25 = v26;
          if ( v26 < 0 )
            return 0LL;
LABEL_49:
          if ( (unsigned int)(v25 - 1) > 2 )
          {
            v30 = (unsigned __int64)this->_internal_metadata_.ptr_;
            if ( (v30 & 1) != 0 )
              v31 = (google::protobuf::UnknownFieldSet *)(v30 & 0xFFFFFFFFFFFFFFFELL);
            else
              v31 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
            google::protobuf::UnknownFieldSet::AddVarint(v31, 4, v25);
            buffer_end = a2->buffer_end_;
            i = a2->buffer_;
          }
          else
          {
            buffer_end = a2->buffer_end_;
            this->_has_bits_.has_bits_[0] |= 0x100u;
            this->label_ = v25;
            i = a2->buffer_;
          }
          continue;
        case 5u:
          if ( TagFallback != 40 )
            goto LABEL_4;
          v20 = a2->buffer_;
          if ( a2->buffer_ >= a2->buffer_end_ )
          {
            v21 = 0;
          }
          else
          {
            v21 = *v20;
            if ( *(char *)v20 >= 0 )
            {
              a2->buffer_ = v20 + 1;
              goto LABEL_41;
            }
          }
          v22 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v21);
          v21 = v22;
          if ( v22 < 0 )
            return 0LL;
LABEL_41:
          if ( (unsigned int)(v21 - 1) <= 0x11 )
          {
            buffer_end = a2->buffer_end_;
            this->_has_bits_.has_bits_[0] |= 0x200u;
            this->type_ = v21;
            i = a2->buffer_;
          }
          else
          {
            v23 = (google::protobuf::UnknownFieldSet *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
            if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 0 )
              v23 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
            google::protobuf::UnknownFieldSet::AddVarint(v23, 5, v21);
            buffer_end = a2->buffer_end_;
            i = a2->buffer_;
          }
          continue;
        case 6u:
          if ( TagFallback != 50 )
            goto LABEL_4;
          ptr = this->type_name_.ptr_;
          this->_has_bits_.has_bits_[0] |= 4u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->type_name_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->type_name_.ptr_;
          }
          goto LABEL_62;
        case 7u:
          if ( TagFallback != 58 )
            goto LABEL_4;
          ptr = this->default_value_.ptr_;
          this->_has_bits_.has_bits_[0] |= 8u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->default_value_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->default_value_.ptr_;
          }
          goto LABEL_62;
        case 8u:
          if ( TagFallback != 66 )
            goto LABEL_4;
          options = this->options_;
          this->_has_bits_.has_bits_[0] |= 0x20u;
          if ( !options )
          {
            options = (google::protobuf::FieldOptions *)operator new(0x78uLL);
            google::protobuf::FieldOptions::FieldOptions(options);
            this->options_ = options;
          }
          v16 = a2->buffer_;
          if ( a2->buffer_ < a2->buffer_end_
            && (VarintSizeAsIntFallback = *v16, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
          {
            a2->buffer_ = v16 + 1;
          }
          else
          {
            VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
            if ( VarintSizeAsIntFallback < 0 )
              return 0LL;
          }
          v18 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
          first = v18.first;
          if ( v18.second < 0
            || !(unsigned __int8)google::protobuf::FieldOptions::MergePartialFromCodedStream(options, a2)
            || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          {
            return 0LL;
          }
          goto LABEL_7;
        case 9u:
          if ( TagFallback != 72 )
            goto LABEL_4;
          v11 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x80u;
          if ( v11 >= buffer_end )
          {
            v12 = 0;
          }
          else
          {
            v12 = *v11;
            if ( *(char *)v11 >= 0 )
            {
              i = v11 + 1;
              a2->buffer_ = i;
              goto LABEL_76;
            }
          }
          v13 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v12);
          v12 = v13;
          if ( v13 < 0 )
            return 0LL;
          buffer_end = a2->buffer_end_;
          i = a2->buffer_;
LABEL_76:
          this->oneof_index_ = v12;
          continue;
        case 0xAu:
          if ( TagFallback != 82 )
            goto LABEL_4;
          ptr = this->json_name_.ptr_;
          this->_has_bits_.has_bits_[0] |= 0x10u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->json_name_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->json_name_.ptr_;
          }
LABEL_62:
          if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
            return 0LL;
          goto LABEL_7;
      }
    }
handle_unusual_15:
    if ( !TagFallback )
      break;
LABEL_4:
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v8 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v9) )
      return 0LL;
LABEL_7:
    buffer_end = a2->buffer_end_;
  }
  return 1LL;
};

// Line 5190: range 000000000C926B40-000000000C926CB1
void __fastcall google::protobuf::FieldDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::FieldDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, this->extendee_.ptr_, output);
  if ( (v2 & 0x40) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(3, this->number_, output);
  if ( (v2 & 0x100) != 0 )
    google::protobuf::internal::WireFormatLite::WriteEnum(4, this->label_, output);
  if ( (v2 & 0x200) != 0 )
    google::protobuf::internal::WireFormatLite::WriteEnum(5, this->type_, output);
  if ( (v2 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(6LL, this->type_name_.ptr_, output);
  if ( (v2 & 8) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(7LL, this->default_value_.ptr_, output);
  if ( (v2 & 0x20) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(8, this->options_, output);
  if ( (v2 & 0x80u) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(9, this->oneof_index_, output);
  if ( (v2 & 0x10) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(10LL, this->json_name_.ptr_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 5282: range 000000000C925B20-000000000C925D66
google::protobuf::uint8 *__fastcall google::protobuf::FieldDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FieldDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v4; // r12
  google::protobuf::uint32 v5; // ebp
  unsigned __int64 number; // rcx
  _BYTE *v7; // rax
  char v8; // dl
  unsigned __int64 label; // rcx
  _BYTE *v10; // rax
  char v11; // dl
  unsigned __int64 type; // rcx
  _BYTE *v13; // rax
  char v14; // dl
  google::protobuf::FieldOptions *options; // rdi
  _BYTE *v16; // rax
  unsigned int i; // ecx
  char v18; // dl
  unsigned __int64 oneof_index; // rcx
  _BYTE *v20; // rax
  char v21; // dl
  unsigned __int64 v22; // rdi
  std::string *ptr; // rdi
  std::string *v25; // rdi
  std::string *v26; // rdi
  std::string *v27; // rdi
  std::string *v28; // rdi

  v4 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ptr = this->name_.ptr_;
    *target = 10;
    v4 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v5 & 2) == 0 )
  {
    goto LABEL_3;
  }
  v25 = this->extendee_.ptr_;
  *v4 = 18;
  v4 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v25, v4 + 1);
LABEL_3:
  if ( (v5 & 0x40) != 0 )
  {
    number = this->number_;
    v7 = v4 + 1;
    for ( *v4 = 24; number > 0x7F; *(v7 - 1) = v8 | 0x80 )
    {
      v8 = number;
      number >>= 7;
      ++v7;
    }
    *v7 = number;
    v4 = v7 + 1;
  }
  if ( (v5 & 0x100) != 0 )
  {
    label = this->label_;
    v10 = v4 + 1;
    for ( *v4 = 32; label > 0x7F; *(v10 - 1) = v11 | 0x80 )
    {
      v11 = label;
      label >>= 7;
      ++v10;
    }
    *v10 = label;
    v4 = v10 + 1;
  }
  if ( (v5 & 0x200) != 0 )
  {
    type = this->type_;
    v13 = v4 + 1;
    for ( *v4 = 40; type > 0x7F; *(v13 - 1) = v14 | 0x80 )
    {
      v14 = type;
      type >>= 7;
      ++v13;
    }
    *v13 = type;
    v4 = v13 + 1;
  }
  if ( (v5 & 4) != 0 )
  {
    v28 = this->type_name_.ptr_;
    *v4 = 50;
    v4 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v28, v4 + 1);
  }
  if ( (v5 & 8) != 0 )
  {
    v27 = this->default_value_.ptr_;
    *v4 = 58;
    v4 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v27, v4 + 1);
  }
  if ( (v5 & 0x20) != 0 )
  {
    options = this->options_;
    *v4 = 66;
    v16 = v4 + 1;
    for ( i = options->_cached_size_; i > 0x7F; *(v16 - 1) = v18 | 0x80 )
    {
      v18 = i;
      i >>= 7;
      ++v16;
    }
    *v16 = i;
    v4 = google::protobuf::FieldOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v16 + 1);
  }
  if ( (v5 & 0x80u) != 0 )
  {
    oneof_index = this->oneof_index_;
    v20 = v4 + 1;
    for ( *v4 = 72; oneof_index > 0x7F; *(v20 - 1) = v21 | 0x80 )
    {
      v21 = oneof_index;
      oneof_index >>= 7;
      ++v20;
    }
    *v20 = oneof_index;
    v4 = v20 + 1;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v26 = this->json_name_.ptr_;
    *v4 = 82;
    v4 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v26, v4 + 1);
  }
  v22 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v22 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v22 & 0xFFFFFFFFFFFFFFFELL),
             v4);
  else
    return v4;
};

// Line 5381: range 000000000C927F40-000000000C928145
size_t __fastcall google::protobuf::FieldDescriptorProto::ByteSizeLong(
        const google::protobuf::FieldDescriptorProto *const this)
{
  size_t v1; // r12
  unsigned __int64 ptr; // rdi
  google::protobuf::uint32 v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  google::protobuf::int32 number; // eax
  __int64 v10; // rax
  google::protobuf::int32 oneof_index; // eax
  __int64 v12; // rax
  int label; // eax
  __int64 v14; // rax
  int type; // eax
  __int64 v16; // rax
  unsigned int v18; // ecx
  size_t v19; // rax
  int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // r12d

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (_BYTE)v4 )
  {
    if ( (v4 & 1) != 0 )
    {
      _BitScanReverse(&v18, this->name_.ptr_->_M_string_length | 1);
      v1 += this->name_.ptr_->_M_string_length + 1 + ((9 * v18 + 73) >> 6);
    }
    if ( (v4 & 2) != 0 )
    {
      _BitScanReverse(&v5, this->extendee_.ptr_->_M_string_length | 1);
      v1 += this->extendee_.ptr_->_M_string_length + 1 + ((9 * v5 + 73) >> 6);
    }
    if ( (v4 & 4) != 0 )
    {
      _BitScanReverse(&v6, this->type_name_.ptr_->_M_string_length | 1);
      v1 += this->type_name_.ptr_->_M_string_length + 1 + ((9 * v6 + 73) >> 6);
    }
    if ( (v4 & 8) != 0 )
    {
      _BitScanReverse(&v7, this->default_value_.ptr_->_M_string_length | 1);
      v1 += this->default_value_.ptr_->_M_string_length + 1 + ((9 * v7 + 73) >> 6);
    }
    if ( (v4 & 0x10) != 0 )
    {
      _BitScanReverse(&v8, this->json_name_.ptr_->_M_string_length | 1);
      v1 += this->json_name_.ptr_->_M_string_length + 1 + ((9 * v8 + 73) >> 6);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v19 = google::protobuf::FieldOptions::ByteSizeLong(this->options_);
      v20 = v19;
      v21 = v19 + v1 + 1;
      _BitScanReverse((unsigned int *)&v20, v20 | 1);
      v22 = 9 * v20 + 73;
      v4 = this->_has_bits_.has_bits_[0];
      v1 = v21 + (v22 >> 6);
    }
    if ( (v4 & 0x40) != 0 )
    {
      number = this->number_;
      if ( number < 0 )
      {
        v10 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&number, number | 1);
        v10 = (unsigned int)(9 * number + 73) >> 6;
      }
      v1 += v10 + 1;
    }
    if ( (v4 & 0x80u) != 0 )
    {
      oneof_index = this->oneof_index_;
      if ( oneof_index < 0 )
      {
        v12 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&oneof_index, oneof_index | 1);
        v12 = (unsigned int)(9 * oneof_index + 73) >> 6;
      }
      v1 += v12 + 1;
    }
  }
  if ( (v4 & 0x300) != 0 )
  {
    if ( (v4 & 0x100) != 0 )
    {
      label = this->label_;
      if ( label < 0 )
      {
        v14 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&label, label | 1);
        v14 = (unsigned int)(9 * label + 73) >> 6;
      }
      v1 += v14 + 1;
    }
    if ( (v4 & 0x200) != 0 )
    {
      type = this->type_;
      if ( type < 0 )
      {
        v16 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&type, type | 1);
        v16 = (unsigned int)(9 * type + 73) >> 6;
      }
      v1 += v16 + 1;
    }
  }
  this->_cached_size_ = v1;
  return v1;
};

// Line 5469: range 000000000C93E2F0-000000000C93E33D
void __fastcall google::protobuf::FieldDescriptorProto::MergeFrom(
        google::protobuf::FieldDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FieldDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FieldDescriptorProto *)__dynamic_cast(
                                                         from,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
                                                         0LL);
  if ( v2 )
    google::protobuf::FieldDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 5484: range 000000000C93D4F0-000000000C93D789
void __fastcall google::protobuf::FieldDescriptorProto::MergeFrom(
        google::protobuf::FieldDescriptorProto *this,
        const google::protobuf::FieldDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // ebp
  google::protobuf::uint32 v9; // eax
  std::string *v10; // rdi
  std::string *v11; // rsi
  std::string *v12; // rdi
  std::string *v13; // rsi
  std::string *v14; // rdi
  std::string *v15; // rsi
  std::string *v16; // rdi
  std::string *v17; // rsi
  std::string *v18; // rdi
  std::string *v19; // rsi
  google::protobuf::FieldOptions *options; // r13
  google::protobuf::FieldOptions *v21; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = a2->_has_bits_.has_bits_[0];
  if ( (_BYTE)v8 )
  {
    v9 = this->_has_bits_.has_bits_[0];
    if ( (v8 & 1) != 0 )
    {
      v9 |= 1u;
      v18 = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v19 = a2->name_.ptr_;
      if ( v19 != v18 )
      {
        if ( v18 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v19);
        else
          std::string::_M_assign(v18, v19);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 2) != 0 )
    {
      v9 |= 2u;
      v10 = this->extendee_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v11 = a2->extendee_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->extendee_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 4) != 0 )
    {
      v9 |= 4u;
      v12 = this->type_name_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v13 = a2->type_name_.ptr_;
      if ( v13 != v12 )
      {
        if ( v12 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->type_name_,
            (unsigned __int8 **)v13);
        else
          std::string::_M_assign(v12, v13);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 8) != 0 )
    {
      v9 |= 8u;
      v14 = this->default_value_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v15 = a2->default_value_.ptr_;
      if ( v15 != v14 )
      {
        if ( v14 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->default_value_,
            (unsigned __int8 **)v15);
        else
          std::string::_M_assign(v14, v15);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 0x10) != 0 )
    {
      v9 |= 0x10u;
      v16 = this->json_name_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v17 = a2->json_name_.ptr_;
      if ( v17 != v16 )
      {
        if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->json_name_,
            (unsigned __int8 **)v17);
        else
          std::string::_M_assign(v16, v17);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 0x20) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] = v9 | 0x20;
      if ( !options )
      {
        options = (google::protobuf::FieldOptions *)operator new(0x78uLL);
        google::protobuf::FieldOptions::FieldOptions(options);
        this->options_ = options;
      }
      v21 = a2->options_;
      if ( !v21 )
        v21 = (google::protobuf::FieldOptions *)&google::protobuf::_FieldOptions_default_instance_;
      google::protobuf::FieldOptions::MergeFrom(options, v21);
      v9 = this->_has_bits_.has_bits_[0];
    }
    if ( (v8 & 0x40) != 0 )
      this->number_ = a2->number_;
    if ( (v8 & 0x80u) != 0 )
      this->oneof_index_ = a2->oneof_index_;
    this->_has_bits_.has_bits_[0] = v8 | v9;
  }
  if ( (v8 & 0x300) != 0 )
  {
    if ( (v8 & 0x100) != 0 )
      this->label_ = a2->label_;
    if ( (v8 & 0x200) != 0 )
      this->type_ = a2->type_;
    this->_has_bits_.has_bits_[0] |= v8;
  }
};

// Line 5537: range 000000000C93E350-000000000C93E380
void __fastcall google::protobuf::FieldDescriptorProto::CopyFrom(
        google::protobuf::FieldDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::FieldDescriptorProto::Clear(this);
    google::protobuf::FieldDescriptorProto::MergeFrom(this, from);
  }
};

// Line 5544: range 000000000C93E390-000000000C93E3C0
void __fastcall google::protobuf::FieldDescriptorProto::CopyFrom(
        google::protobuf::FieldDescriptorProto *const this,
        const google::protobuf::FieldDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::FieldDescriptorProto::Clear(this);
    google::protobuf::FieldDescriptorProto::MergeFrom(this, from);
  }
};

// Line 5550: range 000000000C9290D0-000000000C9290E4
bool __fastcall google::protobuf::FieldDescriptorProto::IsInitialized(
        const google::protobuf::FieldDescriptorProto *const this)
{
  return (this->_has_bits_.has_bits_[0] & 0x20) == 0 || google::protobuf::FieldOptions::IsInitialized(this->options_);
};

// Line 5557: range 000000000C930040-000000000C930050
void __fastcall google::protobuf::FieldDescriptorProto::Swap(
        google::protobuf::FieldDescriptorProto *const this,
        google::protobuf::FieldDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::FieldDescriptorProto::InternalSwap(this, other);
};

// Line 5560: range 000000000C92FF10-000000000C93003B
void __fastcall google::protobuf::FieldDescriptorProto::InternalSwap(
        google::protobuf::FieldDescriptorProto *const this,
        google::protobuf::FieldDescriptorProto *other)
{
  std::string *ptr; // rax
  std::string *v3; // rdx
  std::string *v4; // rax
  std::string *v5; // rdx
  std::string *v6; // rax
  std::string *v7; // rdx
  std::string *v8; // rax
  std::string *v9; // rdx
  std::string *v10; // rax
  google::protobuf::FieldOptions *options; // rdx
  google::protobuf::FieldOptions *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  int cached_size; // eax
  _QWORD *v19; // [rsp+0h] [rbp-18h]

  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  v3 = other->extendee_.ptr_;
  other->name_.ptr_ = ptr;
  v4 = this->extendee_.ptr_;
  this->extendee_.ptr_ = v3;
  v5 = other->type_name_.ptr_;
  other->extendee_.ptr_ = v4;
  v6 = this->type_name_.ptr_;
  this->type_name_.ptr_ = v5;
  v7 = other->default_value_.ptr_;
  other->type_name_.ptr_ = v6;
  v8 = this->default_value_.ptr_;
  this->default_value_.ptr_ = v7;
  v9 = other->json_name_.ptr_;
  other->default_value_.ptr_ = v8;
  v10 = this->json_name_.ptr_;
  this->json_name_.ptr_ = v9;
  options = other->options_;
  other->json_name_.ptr_ = v10;
  v12 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->number_;
  other->options_ = v12;
  LODWORD(v12) = this->number_;
  this->number_ = (int)options;
  LODWORD(options) = other->oneof_index_;
  other->number_ = (int)v12;
  LODWORD(v12) = this->oneof_index_;
  this->oneof_index_ = (int)options;
  LODWORD(options) = other->label_;
  other->oneof_index_ = (int)v12;
  LODWORD(v12) = this->label_;
  this->label_ = (int)options;
  LODWORD(options) = other->type_;
  other->label_ = (int)v12;
  LODWORD(v12) = this->type_;
  this->type_ = (int)options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->type_ = (int)v12;
  LODWORD(v12) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v13 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v12;
  v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v14 & 1) != 0 )
  {
    if ( (v13 & 1) == 0 )
    {
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v13 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v14 & 1) != 0 )
  {
    v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v19 = v15;
    v16 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v15 = v19;
  }
  v17 = *v16;
  *v16 = *v15;
  *v15 = v17;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 6053: range 000000000C92D6C0-000000000C92D748
void __fastcall google::protobuf::OneofDescriptorProto::OneofDescriptorProto(
        google::protobuf::OneofDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FED8;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::OneofDescriptorProto *)&google::protobuf::_OneofDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 6061: range 000000000C93B5B0-000000000C93B683
__int64 __fastcall google::protobuf::OneofDescriptorProto::OneofDescriptorProto(
        google::protobuf::OneofDescriptorProto *this,
        const google::protobuf::OneofDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v5; // r12
  google::protobuf::UnknownFieldSet *v6; // rax
  __int64 result; // rax
  std::string *v8; // rsi
  google::protobuf::OneofOptions *v9; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FED8;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v5 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v6, v5);
  }
  result = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 1) != 0 )
  {
    v8 = a2->name_.ptr_;
    if ( v8 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v8);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 2) != 0 )
  {
    v9 = (google::protobuf::OneofOptions *)operator new(0x68uLL);
    result = google::protobuf::OneofOptions::OneofOptions(v9, a2->options_);
    this->options_ = v9;
  }
  else
  {
    this->options_ = 0LL;
  }
  return result;
};

// Line 6072: range 000000000C731AF8-000000000C731B10
void __fastcall __noreturn google::protobuf::OneofDescriptorProto::OneofDescriptorProto()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x68uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 6080: range 000000000C92BCE0-000000000C92BCF7
void __fastcall google::protobuf::OneofDescriptorProto::SharedCtor(google::protobuf::OneofDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 6085: range 000000000C92DA20-000000000C92DA35
void __fastcall google::protobuf::OneofDescriptorProto::~OneofDescriptorProto(
        google::protobuf::OneofDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FED8;
  google::protobuf::OneofDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 6085: range 000000000C92DA40-000000000C92DA62
void __fastcall google::protobuf::OneofDescriptorProto::~OneofDescriptorProto(
        google::protobuf::OneofDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FED8;
  google::protobuf::OneofDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x28uLL);
};

// Line 6090: range 000000000C92BD00-000000000C92BD66
void __fastcall google::protobuf::OneofDescriptorProto::SharedDtor(google::protobuf::OneofDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::OneofOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  if ( this != (google::protobuf::OneofDescriptorProto *const)&google::protobuf::_OneofDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::OneofOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 6097: range 000000000C924050-000000000C924053
void __fastcall google::protobuf::OneofDescriptorProto::SetCachedSize(
        const google::protobuf::OneofDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 6110: range 000000000C92DF50-000000000C92DF8D
google::protobuf::OneofDescriptorProto *__fastcall google::protobuf::OneofDescriptorProto::New(
        google::protobuf::OneofDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::OneofDescriptorProto *v2; // r12

  v2 = (google::protobuf::OneofDescriptorProto *)operator new(0x28uLL);
  google::protobuf::OneofDescriptorProto::OneofDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::OneofDescriptorProto>(a2, v2);
  return v2;
};

// Line 6111: range 000000000C731170-000000000C731180
void __fastcall __noreturn google::protobuf::OneofDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 6118: range 000000000C931240-000000000C931299
void __fastcall google::protobuf::OneofDescriptorProto::Clear(google::protobuf::OneofDescriptorProto *const this)
{
  google::protobuf::uint32 v1; // eax
  std::string *ptr; // rdx
  unsigned __int64 v4; // rdi
  google::protobuf::UnknownFieldSet *v5; // rdi

  v1 = this->_has_bits_.has_bits_[0];
  if ( (v1 & 3) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v1 & 2) != 0 )
      google::protobuf::OneofOptions::Clear(this->options_);
  }
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v4 & 1) != 0 )
  {
    v5 = (google::protobuf::UnknownFieldSet *)(v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( v5->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v5);
  }
};

// Line 6140: range 000000000C935930-000000000C935B12
__int64 __fastcall google::protobuf::OneofDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::OneofDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v5; // rdx
  google::protobuf::UnknownFieldSet *v6; // rdx
  google::protobuf::OneofOptions *options; // r13
  const google::protobuf::uint8 *v9; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v11; // rax
  int first; // r14d
  std::string *ptr; // rsi

  while ( 2 )
  {
    while ( 2 )
    {
      buffer = a2->buffer_;
      if ( a2->buffer_end_ <= a2->buffer_ )
        goto LABEL_27;
LABEL_2:
      TagFallback = *buffer;
      if ( (char)TagFallback > 0 )
      {
        a2->buffer_ = buffer + 1;
        goto LABEL_10;
      }
      while ( 1 )
      {
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
        if ( TagFallback - 1 > 0x7E )
          goto handle_unusual_14;
LABEL_10:
        if ( TagFallback >> 3 != 1 )
          break;
        if ( TagFallback != 10 )
          goto LABEL_5;
        ptr = this->name_.ptr_;
        this->_has_bits_.has_bits_[0] |= 1u;
        if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
          ptr = this->name_.ptr_;
        }
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
          return 0LL;
        buffer = a2->buffer_;
        if ( a2->buffer_end_ > a2->buffer_ )
          goto LABEL_2;
LABEL_27:
        TagFallback = 0;
      }
      if ( TagFallback >> 3 == 2 )
      {
        if ( TagFallback != 18 )
          goto LABEL_5;
        options = this->options_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( !options )
        {
          options = (google::protobuf::OneofOptions *)operator new(0x68uLL);
          google::protobuf::OneofOptions::OneofOptions(options);
          this->options_ = options;
        }
        v9 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v9, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v9 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v11 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v11.first;
        if ( v11.second < 0
          || !(unsigned __int8)google::protobuf::OneofOptions::MergePartialFromCodedStream(options, a2)
          || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
        {
          return 0LL;
        }
        continue;
      }
      break;
    }
handle_unusual_14:
    if ( TagFallback )
    {
LABEL_5:
      v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (v5 & 1) != 0 )
        v6 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
      else
        v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
      if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v6) )
        return 0LL;
      continue;
    }
    return 1LL;
  }
};

// Line 6198: range 000000000C924500-000000000C924569
void __fastcall google::protobuf::OneofDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::OneofDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(2, this->options_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 6228: range 000000000C925E30-000000000C925EE3
google::protobuf::uint8 *__fastcall google::protobuf::OneofDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::OneofDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::uint32 v5; // r13d
  google::protobuf::OneofOptions *options; // rdi
  _BYTE *v7; // rdx
  unsigned int i; // eax
  char v9; // cl
  unsigned __int64 v10; // rdi
  std::string *ptr; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ptr = this->name_.ptr_;
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  if ( (v5 & 2) != 0 )
  {
    options = this->options_;
    *v3 = 18;
    v7 = v3 + 1;
    for ( i = options->_cached_size_; i > 0x7F; *(v7 - 1) = v9 | 0x80 )
    {
      v9 = i;
      i >>= 7;
      ++v7;
    }
    *v7 = i;
    v3 = google::protobuf::OneofOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v7 + 1);
  }
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v10 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 6261: range 000000000C9281E0-000000000C928280
size_t __fastcall google::protobuf::OneofDescriptorProto::ByteSizeLong(
        const google::protobuf::OneofDescriptorProto *const this)
{
  size_t v1; // r12
  unsigned __int64 ptr; // rdi
  google::protobuf::uint32 v4; // edx
  unsigned int v5; // ecx
  size_t v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r12

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 3) == 0 )
    goto LABEL_7;
  if ( (v4 & 1) != 0 )
  {
    _BitScanReverse(&v5, this->name_.ptr_->_M_string_length | 1);
    v1 += this->name_.ptr_->_M_string_length + 1 + ((9 * v5 + 73) >> 6);
  }
  if ( (v4 & 2) != 0 )
  {
    v7 = google::protobuf::OneofOptions::ByteSizeLong(this->options_);
    _BitScanReverse(&v8, v7 | 1);
    v9 = v7 + v1 + 1 + ((9 * v8 + 73) >> 6);
    this->_cached_size_ = v9;
    return v9;
  }
  else
  {
LABEL_7:
    this->_cached_size_ = v1;
    return v1;
  }
};

// Line 6293: range 000000000C93AE10-000000000C93AE5D
void __fastcall google::protobuf::OneofDescriptorProto::MergeFrom(
        google::protobuf::OneofDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::OneofDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::OneofDescriptorProto *)__dynamic_cast(
                                                         from,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                         (const struct __class_type_info *)&`typeinfo for'google::protobuf::OneofDescriptorProto,
                                                         0LL);
  if ( v2 )
    google::protobuf::OneofDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 6308: range 000000000C93AD10-000000000C93ADFE
void __fastcall google::protobuf::OneofDescriptorProto::MergeFrom(
        google::protobuf::OneofDescriptorProto *this,
        const google::protobuf::OneofDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // r12d
  std::string *v9; // rdi
  std::string *v10; // rsi
  google::protobuf::OneofOptions *options; // r12
  google::protobuf::OneofOptions *v12; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = a2->_has_bits_.has_bits_[0];
  if ( (v8 & 3) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v9 = this->name_.ptr_;
      v10 = a2->name_.ptr_;
      if ( v10 != v9 )
      {
        if ( v9 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v10);
        else
          std::string::_M_assign(v9, v10);
      }
    }
    if ( (v8 & 2) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::OneofOptions *)operator new(0x68uLL);
        google::protobuf::OneofOptions::OneofOptions(options);
        this->options_ = options;
      }
      v12 = a2->options_;
      if ( !v12 )
        v12 = (google::protobuf::OneofOptions *)&google::protobuf::_OneofOptions_default_instance_;
      google::protobuf::OneofOptions::MergeFrom(options, v12);
    }
  }
};

// Line 6329: range 000000000C93AE70-000000000C93AEA0
void __fastcall google::protobuf::OneofDescriptorProto::CopyFrom(
        google::protobuf::OneofDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::OneofDescriptorProto::Clear(this);
    google::protobuf::OneofDescriptorProto::MergeFrom(this, from);
  }
};

// Line 6336: range 000000000C93AEB0-000000000C93AEE0
void __fastcall google::protobuf::OneofDescriptorProto::CopyFrom(
        google::protobuf::OneofDescriptorProto *const this,
        const google::protobuf::OneofDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::OneofDescriptorProto::Clear(this);
    google::protobuf::OneofDescriptorProto::MergeFrom(this, from);
  }
};

// Line 6342: range 000000000C929150-000000000C929164
bool __fastcall google::protobuf::OneofDescriptorProto::IsInitialized(
        const google::protobuf::OneofDescriptorProto *const this)
{
  return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::OneofOptions::IsInitialized(this->options_);
};

// Line 6349: range 000000000C92ED00-000000000C92ED10
void __fastcall google::protobuf::OneofDescriptorProto::Swap(
        google::protobuf::OneofDescriptorProto *const this,
        google::protobuf::OneofDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::OneofDescriptorProto::InternalSwap(this, other);
};

// Line 6352: range 000000000C92EC50-000000000C92ECFB
void __fastcall google::protobuf::OneofDescriptorProto::InternalSwap(
        google::protobuf::OneofDescriptorProto *const this,
        google::protobuf::OneofDescriptorProto *other)
{
  std::string *ptr; // rax
  google::protobuf::OneofOptions *options; // rdx
  google::protobuf::OneofOptions *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int cached_size; // eax
  _QWORD *v11; // [rsp+0h] [rbp-18h]

  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  options = other->options_;
  other->name_.ptr_ = ptr;
  v4 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->options_ = v4;
  LODWORD(v4) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v5 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v4;
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v6 & 1) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v6 & 1) != 0 )
  {
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v11 = v7;
    v8 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v7 = v11;
  }
  v9 = *v8;
  *v8 = *v7;
  *v7 = v9;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 6488: range 000000000C934480-000000000C934520
void __fastcall google::protobuf::EnumDescriptorProto::EnumDescriptorProto(google::protobuf::EnumDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A17FFB0;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->value_.arena_ = 0LL;
  *(_QWORD *)&this->value_.current_size_ = 0LL;
  this->value_.rep_ = 0LL;
  if ( this != (google::protobuf::EnumDescriptorProto *)&google::protobuf::_EnumDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 6496: range 000000000C93BE00-000000000C93BF6D
__int64 __fastcall google::protobuf::EnumDescriptorProto::EnumDescriptorProto(
        google::protobuf::EnumDescriptorProto *this,
        const google::protobuf::EnumDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  __int64 result; // rax
  std::string *v11; // rsi
  void **elements; // r14
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d
  google::protobuf::EnumOptions *v16; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->value_.current_size_ = 0LL;
  current_size = a2->value_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A17FFB0;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v3;
  this->value_.arena_ = 0LL;
  this->value_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->value_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->value_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(
      &this->value_,
      v13,
      elements,
      current_size,
      this->value_.rep_->allocated_size - this->value_.current_size_);
    rep = this->value_.rep_;
    v15 = this->value_.current_size_ + current_size;
    this->value_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v8 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
  }
  result = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 1) != 0 )
  {
    v11 = a2->name_.ptr_;
    if ( v11 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v11);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 2) != 0 )
  {
    v16 = (google::protobuf::EnumOptions *)operator new(0x70uLL);
    result = google::protobuf::EnumOptions::EnumOptions(v16, a2->options_);
    this->options_ = v16;
  }
  else
  {
    this->options_ = 0LL;
  }
  return result;
};

// Line 6508: range 000000000C731BF2-000000000C731C16
void __fastcall __noreturn google::protobuf::EnumDescriptorProto::EnumDescriptorProto()
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13

  operator delete(v2, 0x70uLL);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(v3);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v0 + 1);
  _Unwind_Resume(v1);
};

// Line 6516: range 000000000C92BE30-000000000C92BE47
void __fastcall google::protobuf::EnumDescriptorProto::SharedCtor(google::protobuf::EnumDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 6521: range 000000000C9345B0-000000000C9345C2
void __fastcall google::protobuf::EnumDescriptorProto::~EnumDescriptorProto(
        google::protobuf::EnumDescriptorProto *const this)
{
  google::protobuf::EnumDescriptorProto::~EnumDescriptorProto(this);
  operator delete(this, 0x40uLL);
};

// Line 6521: range 000000000C934580-000000000C93459E
void __fastcall google::protobuf::EnumDescriptorProto::~EnumDescriptorProto(
        google::protobuf::EnumDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A17FFB0;
  google::protobuf::EnumDescriptorProto::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(&this->value_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 6526: range 000000000C92BE50-000000000C92BEB6
void __fastcall google::protobuf::EnumDescriptorProto::SharedDtor(google::protobuf::EnumDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::EnumOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  if ( this != (google::protobuf::EnumDescriptorProto *const)&google::protobuf::_EnumDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::EnumOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 6533: range 000000000C924060-000000000C924063
void __fastcall google::protobuf::EnumDescriptorProto::SetCachedSize(
        const google::protobuf::EnumDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 6546: range 000000000C934530-000000000C93456D
google::protobuf::EnumDescriptorProto *__fastcall google::protobuf::EnumDescriptorProto::New(
        google::protobuf::EnumDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::EnumDescriptorProto *v2; // r12

  v2 = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
  google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::EnumDescriptorProto>(a2, v2);
  return v2;
};

// Line 6547: range 000000000C7316C4-000000000C7316D4
void __fastcall __noreturn google::protobuf::EnumDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 6554: range 000000000C9313B0-000000000C931441
void __fastcall google::protobuf::EnumDescriptorProto::Clear(google::protobuf::EnumDescriptorProto *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::EnumValueDescriptorProto **elements; // rbp
  __int64 v5; // r12
  google::protobuf::EnumValueDescriptorProto *v6; // rdi
  google::protobuf::uint32 v7; // eax
  std::string *ptr; // rdx
  unsigned __int64 v9; // rdi
  google::protobuf::UnknownFieldSet *v10; // rdi

  current_size = this->value_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->value_.rep_;
    elements = (google::protobuf::EnumValueDescriptorProto **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::EnumValueDescriptorProto::Clear(v6);
    }
    while ( (google::protobuf::EnumValueDescriptorProto **)v5 != elements );
    this->value_.current_size_ = 0;
  }
  v7 = this->_has_bits_.has_bits_[0];
  if ( (v7 & 3) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v7 & 2) != 0 )
      google::protobuf::EnumOptions::Clear(this->options_);
  }
  v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v9 & 1) != 0 )
  {
    v10 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( v10->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v10);
  }
};

// Line 6577: range 000000000C936760-000000000C936AA1
__int64 __fastcall google::protobuf::EnumDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::EnumDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v7; // rdx
  google::protobuf::UnknownFieldSet *v8; // rdx
  google::protobuf::uint32 v10; // eax
  std::string *ptr; // rsi
  google::protobuf::EnumOptions *options; // r13
  const google::protobuf::uint8 *v13; // rax
  int v14; // esi
  std::pair<int,int> v15; // rax
  int first; // r14d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::EnumValueDescriptorProto *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rdx
  const google::protobuf::uint8 *v25; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v27; // rax

  p_internal_metadata = &this->_internal_metadata_;
LABEL_2:
  while ( 2 )
  {
    buffer = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
      goto LABEL_19;
LABEL_3:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      a2->buffer_ = buffer + 1;
      goto LABEL_11;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      v10 = TagFallback >> 3;
      if ( TagFallback >> 3 == 2 )
      {
        if ( TagFallback != 18 )
          goto LABEL_6;
        rep = this->value_.rep_;
        if ( rep )
        {
          current_size = this->value_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)rep->elements[current_size];
            this->value_.current_size_ = current_size + 1;
            goto LABEL_41;
          }
          total_size = this->value_.total_size_;
          if ( allocated_size != total_size )
          {
LABEL_36:
            arena = this->value_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
            {
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  arena,
                  (const std::type_info *)&`typeinfo for'google::protobuf::EnumValueDescriptorProto,
                  0x30uLL);
              AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                     &arena->impl_,
                                                                                     0x30uLL,
                                                                                     google::protobuf::internal::arena_destruct_object<google::protobuf::EnumValueDescriptorProto>);
              google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(AlignedAndAddCleanup);
            }
            else
            {
              AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)operator new(0x30uLL);
              google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(AlignedAndAddCleanup);
            }
            v23 = this->value_.current_size_;
            v24 = this->value_.rep_;
            this->value_.current_size_ = v23 + 1;
            v24->elements[v23] = AlignedAndAddCleanup;
LABEL_41:
            v25 = a2->buffer_;
            if ( a2->buffer_ < a2->buffer_end_
              && (VarintSizeAsIntFallback = *v25, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
            {
              a2->buffer_ = v25 + 1;
            }
            else
            {
              VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
              if ( VarintSizeAsIntFallback < 0 )
                return 0LL;
            }
            v27 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
                    a2,
                    VarintSizeAsIntFallback);
            first = v27.first;
            if ( v27.second < 0
              || !(unsigned __int8)google::protobuf::EnumValueDescriptorProto::MergePartialFromCodedStream(
                                     AlignedAndAddCleanup,
                                     a2) )
            {
              return 0LL;
            }
LABEL_28:
            if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
              return 0LL;
            goto LABEL_2;
          }
        }
        else
        {
          total_size = this->value_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->value_, total_size + 1);
        rep = this->value_.rep_;
        allocated_size = rep->allocated_size;
        goto LABEL_36;
      }
      if ( v10 == 3 )
      {
        if ( TagFallback != 26 )
          goto LABEL_6;
        options = this->options_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( !options )
        {
          options = (google::protobuf::EnumOptions *)operator new(0x70uLL);
          google::protobuf::EnumOptions::EnumOptions(options);
          this->options_ = options;
        }
        v13 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v14 = *v13, (unsigned int)v14 <= 0x7F) )
        {
          a2->buffer_ = v13 + 1;
        }
        else
        {
          v14 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v14 < 0 )
            return 0LL;
        }
        v15 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v14);
        first = v15.first;
        if ( v15.second < 0 || !(unsigned __int8)google::protobuf::EnumOptions::MergePartialFromCodedStream(options, a2) )
          return 0LL;
        goto LABEL_28;
      }
      if ( v10 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_6;
      ptr = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->name_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        ptr = this->name_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
        return 0LL;
      buffer = a2->buffer_;
      if ( a2->buffer_end_ > a2->buffer_ )
        goto LABEL_3;
LABEL_19:
      TagFallback = 0;
    }
    if ( TagFallback )
    {
LABEL_6:
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (v7 & 1) != 0 )
        v8 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
      else
        v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
        return 0LL;
      continue;
    }
    return 1LL;
  }
};

// Line 6647: range 000000000C924570-000000000C924619
void __fastcall google::protobuf::EnumDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::EnumDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  int current_size; // ebp
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  current_size = this->value_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->value_.rep_->elements[v5],
        output);
    }
  }
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, this->options_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 6684: range 000000000C9261C0-000000000C9262F5
google::protobuf::uint8 *__fastcall google::protobuf::EnumDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::EnumDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v4; // r13d
  int current_size; // ebx
  google::protobuf::uint8 *v6; // r14
  int i; // r15d
  const google::protobuf::EnumValueDescriptorProto *v8; // rdi
  _BYTE *v9; // rdx
  unsigned int j; // eax
  char v11; // cl
  google::protobuf::EnumOptions *options; // rdi
  _BYTE *v13; // rdx
  unsigned int k; // eax
  char v15; // cl
  unsigned __int64 v16; // rax
  std::string *ptr; // rdi
  google::protobuf::uint8 *v19; // rax

  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 1) == 0 )
  {
    current_size = this->value_.current_size_;
    if ( current_size )
      goto LABEL_3;
LABEL_15:
    v6 = target;
    goto LABEL_7;
  }
  ptr = this->name_.ptr_;
  *target = 10;
  v19 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  current_size = this->value_.current_size_;
  target = v19;
  if ( !current_size )
    goto LABEL_15;
LABEL_3:
  v6 = target;
  for ( i = 0; i != current_size; ++i )
  {
    v8 = (const google::protobuf::EnumValueDescriptorProto *)this->value_.rep_->elements[i];
    *v6 = 18;
    v9 = v6 + 1;
    for ( j = v8->_cached_size_; j > 0x7F; *(v9 - 1) = v11 | 0x80 )
    {
      v11 = j;
      j >>= 7;
      ++v9;
    }
    *v9 = j;
    v6 = google::protobuf::EnumValueDescriptorProto::InternalSerializeWithCachedSizesToArray(v8, deterministic, v9 + 1);
  }
LABEL_7:
  if ( (v4 & 2) != 0 )
  {
    options = this->options_;
    *v6 = 26;
    v13 = v6 + 1;
    for ( k = options->_cached_size_; k > 0x7F; *(v13 - 1) = v15 | 0x80 )
    {
      v15 = k;
      k >>= 7;
      ++v13;
    }
    *v13 = k;
    v6 = google::protobuf::EnumOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v13 + 1);
  }
  v16 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v16 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v16 & 0xFFFFFFFFFFFFFFFELL),
             v6);
  else
    return v6;
};

// Line 6725: range 000000000C9284B0-000000000C92858B
size_t __fastcall google::protobuf::EnumDescriptorProto::ByteSizeLong(
        const google::protobuf::EnumDescriptorProto *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 v10; // eax
  unsigned int v11; // edx
  size_t v13; // rdx
  unsigned int v14; // eax

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->value_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::EnumValueDescriptorProto::ByteSizeLong((const google::protobuf::EnumValueDescriptorProto *const)this->value_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  v10 = this->_has_bits_.has_bits_[0];
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      _BitScanReverse(&v11, this->name_.ptr_->_M_string_length | 1);
      v5 += this->name_.ptr_->_M_string_length + 1 + ((9 * v11 + 73) >> 6);
    }
    if ( (v10 & 2) != 0 )
    {
      v13 = google::protobuf::EnumOptions::ByteSizeLong(this->options_);
      _BitScanReverse(&v14, v13 | 1);
      v5 += v13 + 1 + ((9 * v14 + 73) >> 6);
    }
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 6768: range 000000000C93CD70-000000000C93CDBD
void __fastcall google::protobuf::EnumDescriptorProto::MergeFrom(
        google::protobuf::EnumDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::EnumDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::EnumDescriptorProto *)__dynamic_cast(
                                                        from,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
                                                        0LL);
  if ( v2 )
    google::protobuf::EnumDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 6783: range 000000000C93CC00-000000000C93CD5E
void __fastcall google::protobuf::EnumDescriptorProto::MergeFrom(
        google::protobuf::EnumDescriptorProto *this,
        const google::protobuf::EnumDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // r12d
  std::string *v10; // rdi
  std::string *v11; // rsi
  void **elements; // r13
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d
  google::protobuf::EnumOptions *options; // r12
  google::protobuf::EnumOptions *v17; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = a2->value_.current_size_;
  if ( current_size )
  {
    elements = a2->value_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->value_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(
      &this->value_,
      v13,
      elements,
      current_size,
      this->value_.rep_->allocated_size - this->value_.current_size_);
    rep = this->value_.rep_;
    v15 = this->value_.current_size_ + current_size;
    this->value_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  v9 = a2->_has_bits_.has_bits_[0];
  if ( (v9 & 3) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v10 = this->name_.ptr_;
      v11 = a2->name_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
      }
    }
    if ( (v9 & 2) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::EnumOptions *)operator new(0x70uLL);
        google::protobuf::EnumOptions::EnumOptions(options);
        this->options_ = options;
      }
      v17 = a2->options_;
      if ( !v17 )
        v17 = (google::protobuf::EnumOptions *)&google::protobuf::_EnumOptions_default_instance_;
      google::protobuf::EnumOptions::MergeFrom(options, v17);
    }
  }
};

// Line 6805: range 000000000C93CDD0-000000000C93CE00
void __fastcall google::protobuf::EnumDescriptorProto::CopyFrom(
        google::protobuf::EnumDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::EnumDescriptorProto::Clear(this);
    google::protobuf::EnumDescriptorProto::MergeFrom(this, from);
  }
};

// Line 6812: range 000000000C93CE10-000000000C93CE40
void __fastcall google::protobuf::EnumDescriptorProto::CopyFrom(
        google::protobuf::EnumDescriptorProto *const this,
        const google::protobuf::EnumDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::EnumDescriptorProto::Clear(this);
    google::protobuf::EnumDescriptorProto::MergeFrom(this, from);
  }
};

// Line 6817: range 000000000C929400-000000000C929472
bool __fastcall google::protobuf::EnumDescriptorProto::IsInitialized(
        const google::protobuf::EnumDescriptorProto *const this)
{
  int v1; // ebp
  const google::protobuf::EnumValueOptions *const *v2; // rax
  bool result; // al

  v1 = this->value_.current_size_ - 1;
  if ( v1 < 0 )
    return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::EnumOptions::IsInitialized(this->options_);
  while ( 1 )
  {
    v2 = (const google::protobuf::EnumValueOptions *const *)this->value_.rep_->elements[v1];
    if ( ((_BYTE)v2[2] & 2) != 0 )
    {
      result = google::protobuf::EnumValueOptions::IsInitialized(v2[4]);
      if ( !result )
        break;
    }
    if ( --v1 == -1 )
      return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::EnumOptions::IsInitialized(this->options_);
  }
  return result;
};

// Line 6826: range 000000000C92F640-000000000C92F650
void __fastcall google::protobuf::EnumDescriptorProto::Swap(
        google::protobuf::EnumDescriptorProto *const this,
        google::protobuf::EnumDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::EnumDescriptorProto::InternalSwap(this, other);
};

// Line 6829: range 000000000C92F560-000000000C92F63B
void __fastcall google::protobuf::EnumDescriptorProto::InternalSwap(
        google::protobuf::EnumDescriptorProto *const this,
        google::protobuf::EnumDescriptorProto *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  google::protobuf::EnumOptions *options; // rdx
  google::protobuf::EnumOptions *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  int cached_size; // eax
  _QWORD *v15; // [rsp+0h] [rbp-18h]

  rep = this->value_.rep_;
  this->value_.rep_ = other->value_.rep_;
  current_size = other->value_.current_size_;
  other->value_.rep_ = rep;
  LODWORD(rep) = this->value_.current_size_;
  this->value_.current_size_ = current_size;
  total_size = other->value_.total_size_;
  other->value_.current_size_ = (int)rep;
  LODWORD(rep) = this->value_.total_size_;
  this->value_.total_size_ = total_size;
  ptr = other->name_.ptr_;
  other->value_.total_size_ = (int)rep;
  v6 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  options = other->options_;
  other->name_.ptr_ = v6;
  v8 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->options_ = v8;
  LODWORD(v8) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v9 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v8;
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v10 & 1) != 0 )
  {
    if ( (v9 & 1) == 0 )
    {
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v9 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v10 & 1) != 0 )
  {
    v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v15 = v11;
    v12 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v11 = v15;
  }
  v13 = *v12;
  *v12 = *v11;
  *v11 = v13;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 6996: range 000000000C92D750-000000000C92D7E0
void __fastcall google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(
        google::protobuf::EnumValueDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180088;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::EnumValueDescriptorProto *)&google::protobuf::_EnumValueDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
  this->number_ = 0;
};

// Line 7004: range 000000000C93BAD0-000000000C93BB9A
__int64 __fastcall google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(
        google::protobuf::EnumValueDescriptorProto *this,
        const google::protobuf::EnumValueDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v5; // r12
  google::protobuf::UnknownFieldSet *v6; // rax
  google::protobuf::uint32 v7; // eax
  std::string *v8; // rsi
  __int64 result; // rax
  google::protobuf::EnumValueOptions *v10; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A180088;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v5 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v6, v5);
  }
  v7 = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v7 & 1) != 0 )
  {
    v8 = a2->name_.ptr_;
    if ( v8 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v8);
      v7 = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (v7 & 2) != 0 )
  {
    v10 = (google::protobuf::EnumValueOptions *)operator new(0x70uLL);
    google::protobuf::EnumValueOptions::EnumValueOptions(v10, a2->options_);
    this->options_ = v10;
  }
  else
  {
    this->options_ = 0LL;
  }
  result = (unsigned int)a2->number_;
  this->number_ = result;
  return result;
};

// Line 7015: range 000000000C731B94-000000000C731BAC
void __fastcall __noreturn google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x70uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 7024: range 000000000C92BF80-000000000C92BF9E
void __fastcall google::protobuf::EnumValueDescriptorProto::SharedCtor(
        google::protobuf::EnumValueDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
  this->number_ = 0;
};

// Line 7031: range 000000000C92DA90-000000000C92DAB2
void __fastcall google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto(
        google::protobuf::EnumValueDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180088;
  google::protobuf::EnumValueDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x30uLL);
};

// Line 7031: range 000000000C92DA70-000000000C92DA85
void __fastcall google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto(
        google::protobuf::EnumValueDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180088;
  google::protobuf::EnumValueDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 7036: range 000000000C92BFA0-000000000C92C006
void __fastcall google::protobuf::EnumValueDescriptorProto::SharedDtor(
        google::protobuf::EnumValueDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::EnumValueOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  if ( this != (google::protobuf::EnumValueDescriptorProto *const)&google::protobuf::_EnumValueDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::EnumValueOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 7043: range 000000000C924070-000000000C924073
void __fastcall google::protobuf::EnumValueDescriptorProto::SetCachedSize(
        const google::protobuf::EnumValueDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 7056: range 000000000C92DFA0-000000000C92DFDD
google::protobuf::EnumValueDescriptorProto *__fastcall google::protobuf::EnumValueDescriptorProto::New(
        google::protobuf::EnumValueDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::EnumValueDescriptorProto *v2; // r12

  v2 = (google::protobuf::EnumValueDescriptorProto *)operator new(0x30uLL);
  google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::EnumValueDescriptorProto>(a2, v2);
  return v2;
};

// Line 7057: range 000000000C731186-000000000C731196
void __fastcall __noreturn google::protobuf::EnumValueDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 7064: range 000000000C931350-000000000C9313A9
void __fastcall google::protobuf::EnumValueDescriptorProto::Clear(
        google::protobuf::EnumValueDescriptorProto *const this)
{
  google::protobuf::uint32 v1; // eax
  std::string *ptr; // rdx
  unsigned __int64 v4; // rdi
  google::protobuf::UnknownFieldSet *v5; // rdi

  v1 = this->_has_bits_.has_bits_[0];
  if ( (v1 & 3) != 0 )
  {
    if ( (v1 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v1 & 2) != 0 )
      google::protobuf::EnumValueOptions::Clear(this->options_);
  }
  v4 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->number_ = 0;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v4 & 1) != 0 )
  {
    v5 = (google::protobuf::UnknownFieldSet *)(v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( v5->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v5);
  }
};

// Line 7087: range 000000000C935E50-000000000C936097
__int64 __fastcall google::protobuf::EnumValueDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::EnumValueDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v6; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  google::protobuf::uint32 v8; // eax
  std::string *ptr; // rsi
  const google::protobuf::uint8 *v11; // rax
  google::protobuf::uint32 v12; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::EnumValueOptions *options; // r13
  const google::protobuf::uint8 *v15; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v17; // rax
  int first; // r14d

  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
LABEL_2:
  if ( buffer_end <= buffer )
    goto LABEL_10;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    a2->buffer_ = buffer + 1;
LABEL_12:
    v8 = TagFallback >> 3;
    if ( TagFallback >> 3 == 2 )
    {
      if ( TagFallback == 16 )
      {
        v11 = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 4u;
        if ( v11 >= buffer_end )
        {
          v12 = 0;
LABEL_23:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v12);
          v12 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0LL;
          buffer = a2->buffer_;
          buffer_end = a2->buffer_end_;
        }
        else
        {
          v12 = *v11;
          if ( *(char *)v11 < 0 )
            goto LABEL_23;
          buffer = v11 + 1;
          a2->buffer_ = buffer;
        }
        this->number_ = v12;
        goto LABEL_2;
      }
      goto LABEL_6;
    }
    if ( v8 == 3 )
    {
      if ( TagFallback != 26 )
        goto LABEL_6;
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::EnumValueOptions *)operator new(0x70uLL);
        google::protobuf::EnumValueOptions::EnumValueOptions(options);
        this->options_ = options;
      }
      v15 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v15, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v15 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          return 0LL;
      }
      v17 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v17.first;
      if ( v17.second < 0
        || !(unsigned __int8)google::protobuf::EnumValueOptions::MergePartialFromCodedStream(options, a2)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        return 0LL;
      }
    }
    else
    {
      if ( v8 != 1 )
        goto handle_unusual_12;
      if ( TagFallback != 10 )
        goto LABEL_6;
      ptr = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->name_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        ptr = this->name_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
        return 0LL;
    }
LABEL_9:
    buffer = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
    {
LABEL_10:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_12;
handle_unusual_12:
  if ( TagFallback )
  {
LABEL_6:
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v6 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
    goto LABEL_9;
  }
  return 1LL;
};

// Line 7159: range 000000000C924A20-000000000C924AA9
void __fastcall google::protobuf::EnumValueDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::EnumValueDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  if ( (v2 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(2, this->number_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, this->options_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 7194: range 000000000C9260C0-000000000C9261B3
google::protobuf::uint8 *__fastcall google::protobuf::EnumValueDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::EnumValueDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::uint32 v5; // ebp
  unsigned __int64 number; // rax
  _BYTE *v7; // rdx
  char v8; // cl
  google::protobuf::EnumValueOptions *options; // rdi
  _BYTE *v10; // rdx
  unsigned int i; // eax
  char v12; // cl
  unsigned __int64 v13; // rdi
  std::string *ptr; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ptr = this->name_.ptr_;
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  if ( (v5 & 4) != 0 )
  {
    number = this->number_;
    v7 = v3 + 1;
    for ( *v3 = 16; number > 0x7F; *(v7 - 1) = v8 | 0x80 )
    {
      v8 = number;
      number >>= 7;
      ++v7;
    }
    *v7 = number;
    v3 = v7 + 1;
  }
  if ( (v5 & 2) != 0 )
  {
    options = this->options_;
    *v3 = 26;
    v10 = v3 + 1;
    for ( i = options->_cached_size_; i > 0x7F; *(v10 - 1) = v12 | 0x80 )
    {
      v12 = i;
      i >>= 7;
      ++v10;
    }
    *v10 = i;
    v3 = google::protobuf::EnumValueOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v10 + 1);
  }
  v13 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v13 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v13 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 7232: range 000000000C9283E0-000000000C9284A5
size_t __fastcall google::protobuf::EnumValueDescriptorProto::ByteSizeLong(
        const google::protobuf::EnumValueDescriptorProto *const this)
{
  size_t v1; // r12
  unsigned __int64 ptr; // rdi
  google::protobuf::uint32 v4; // edx
  google::protobuf::int32 number; // eax
  __int64 v6; // rax
  unsigned int v8; // ecx
  size_t v9; // rax
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // r12d

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 7) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      _BitScanReverse(&v8, this->name_.ptr_->_M_string_length | 1);
      v1 += this->name_.ptr_->_M_string_length + 1 + ((9 * v8 + 73) >> 6);
      if ( (v4 & 2) == 0 )
        goto LABEL_6;
    }
    else if ( (v4 & 2) == 0 )
    {
      goto LABEL_6;
    }
    v9 = google::protobuf::EnumValueOptions::ByteSizeLong(this->options_);
    v10 = v9;
    v11 = v9 + v1 + 1;
    _BitScanReverse((unsigned int *)&v10, v10 | 1);
    v12 = 9 * v10 + 73;
    v4 = this->_has_bits_.has_bits_[0];
    v1 = v11 + (v12 >> 6);
LABEL_6:
    if ( (v4 & 4) != 0 )
    {
      number = this->number_;
      if ( number < 0 )
      {
        v6 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&number, number | 1);
        v6 = (unsigned int)(9 * number + 73) >> 6;
      }
      v1 += v6 + 1;
    }
  }
  this->_cached_size_ = v1;
  return v1;
};

// Line 7271: range 000000000C93B3A0-000000000C93B3ED
void __fastcall google::protobuf::EnumValueDescriptorProto::MergeFrom(
        google::protobuf::EnumValueDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::EnumValueDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::EnumValueDescriptorProto *)__dynamic_cast(
                                                             from,
                                                             (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                             (const struct __class_type_info *)&`typeinfo for'google::protobuf::EnumValueDescriptorProto,
                                                             0LL);
  if ( v2 )
    google::protobuf::EnumValueDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 7286: range 000000000C93B270-000000000C93B396
void __fastcall google::protobuf::EnumValueDescriptorProto::MergeFrom(
        google::protobuf::EnumValueDescriptorProto *this,
        const google::protobuf::EnumValueDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // r12d
  google::protobuf::uint32 v9; // eax
  std::string *v10; // rdi
  std::string *v11; // rsi
  google::protobuf::EnumValueOptions *options; // r13
  google::protobuf::EnumValueOptions *v13; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = a2->_has_bits_.has_bits_[0];
  if ( (v8 & 7) != 0 )
  {
    v9 = this->_has_bits_.has_bits_[0];
    if ( (v8 & 1) != 0 )
    {
      v9 |= 1u;
      v10 = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v11 = a2->name_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 2) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] = v9 | 2;
      if ( !options )
      {
        options = (google::protobuf::EnumValueOptions *)operator new(0x70uLL);
        google::protobuf::EnumValueOptions::EnumValueOptions(options);
        this->options_ = options;
      }
      v13 = a2->options_;
      if ( !v13 )
        v13 = (google::protobuf::EnumValueOptions *)&google::protobuf::_EnumValueOptions_default_instance_;
      google::protobuf::EnumValueOptions::MergeFrom(options, v13);
      v9 = this->_has_bits_.has_bits_[0];
    }
    if ( (v8 & 4) != 0 )
      this->number_ = a2->number_;
    this->_has_bits_.has_bits_[0] = v9 | v8;
  }
};

// Line 7311: range 000000000C93B400-000000000C93B430
void __fastcall google::protobuf::EnumValueDescriptorProto::CopyFrom(
        google::protobuf::EnumValueDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::EnumValueDescriptorProto::Clear(this);
    google::protobuf::EnumValueDescriptorProto::MergeFrom(this, from);
  }
};

// Line 7318: range 000000000C93B440-000000000C93B470
void __fastcall google::protobuf::EnumValueDescriptorProto::CopyFrom(
        google::protobuf::EnumValueDescriptorProto *const this,
        const google::protobuf::EnumValueDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::EnumValueDescriptorProto::Clear(this);
    google::protobuf::EnumValueDescriptorProto::MergeFrom(this, from);
  }
};

// Line 7324: range 000000000C929230-000000000C929244
bool __fastcall google::protobuf::EnumValueDescriptorProto::IsInitialized(
        const google::protobuf::EnumValueDescriptorProto *const this)
{
  return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::EnumValueOptions::IsInitialized(this->options_);
};

// Line 7331: range 000000000C92EDE0-000000000C92EDF0
void __fastcall google::protobuf::EnumValueDescriptorProto::Swap(
        google::protobuf::EnumValueDescriptorProto *const this,
        google::protobuf::EnumValueDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::EnumValueDescriptorProto::InternalSwap(this, other);
};

// Line 7334: range 000000000C92ED20-000000000C92EDDB
void __fastcall google::protobuf::EnumValueDescriptorProto::InternalSwap(
        google::protobuf::EnumValueDescriptorProto *const this,
        google::protobuf::EnumValueDescriptorProto *other)
{
  std::string *ptr; // rax
  google::protobuf::EnumValueOptions *options; // rdx
  google::protobuf::EnumValueOptions *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int cached_size; // eax
  _QWORD *v11; // [rsp+0h] [rbp-18h]

  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  options = other->options_;
  other->name_.ptr_ = ptr;
  v4 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->number_;
  other->options_ = v4;
  LODWORD(v4) = this->number_;
  this->number_ = (int)options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->number_ = (int)v4;
  LODWORD(v4) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v5 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v4;
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v6 & 1) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v6 & 1) != 0 )
  {
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v11 = v7;
    v8 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v7 = v11;
  }
  v9 = *v8;
  *v8 = *v7;
  *v7 = v9;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 7495: range 000000000C9345D0-000000000C934670
void __fastcall google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(
        google::protobuf::ServiceDescriptorProto *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180160;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->method_.arena_ = 0LL;
  *(_QWORD *)&this->method_.current_size_ = 0LL;
  this->method_.rep_ = 0LL;
  if ( this != (google::protobuf::ServiceDescriptorProto *)&google::protobuf::_ServiceDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 7503: range 000000000C93C7D0-000000000C93C93D
__int64 __fastcall google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(
        google::protobuf::ServiceDescriptorProto *this,
        const google::protobuf::ServiceDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  __int64 result; // rax
  std::string *v11; // rsi
  void **elements; // r14
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d
  google::protobuf::ServiceOptions *v16; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->method_.current_size_ = 0LL;
  current_size = a2->method_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180160;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v3;
  this->method_.arena_ = 0LL;
  this->method_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->method_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->method_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(
      &this->method_,
      v13,
      elements,
      current_size,
      this->method_.rep_->allocated_size - this->method_.current_size_);
    rep = this->method_.rep_;
    v15 = this->method_.current_size_ + current_size;
    this->method_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v8 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
  }
  result = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (result & 1) != 0 )
  {
    v11 = a2->name_.ptr_;
    if ( v11 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v11);
      result = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (result & 2) != 0 )
  {
    v16 = (google::protobuf::ServiceOptions *)operator new(0x70uLL);
    result = google::protobuf::ServiceOptions::ServiceOptions(v16, a2->options_);
    this->options_ = v16;
  }
  else
  {
    this->options_ = 0LL;
  }
  return result;
};

// Line 7515: range 000000000C731C86-000000000C731CAA
void __fastcall __noreturn google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto()
{
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  void *v2; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v3; // r13

  operator delete(v2, 0x70uLL);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(v3);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v0 + 1);
  _Unwind_Resume(v1);
};

// Line 7523: range 000000000C92C0D0-000000000C92C0E7
void __fastcall google::protobuf::ServiceDescriptorProto::SharedCtor(
        google::protobuf::ServiceDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
};

// Line 7528: range 000000000C9346D0-000000000C9346EE
void __fastcall google::protobuf::ServiceDescriptorProto::~ServiceDescriptorProto(
        google::protobuf::ServiceDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180160;
  google::protobuf::ServiceDescriptorProto::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(&this->method_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 7528: range 000000000C934700-000000000C934712
void __fastcall google::protobuf::ServiceDescriptorProto::~ServiceDescriptorProto(
        google::protobuf::ServiceDescriptorProto *const this)
{
  google::protobuf::ServiceDescriptorProto::~ServiceDescriptorProto(this);
  operator delete(this, 0x40uLL);
};

// Line 7533: range 000000000C92C0F0-000000000C92C156
void __fastcall google::protobuf::ServiceDescriptorProto::SharedDtor(
        google::protobuf::ServiceDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::ServiceOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  if ( this != (google::protobuf::ServiceDescriptorProto *const)&google::protobuf::_ServiceDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::ServiceOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 7540: range 000000000C924080-000000000C924083
void __fastcall google::protobuf::ServiceDescriptorProto::SetCachedSize(
        const google::protobuf::ServiceDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 7553: range 000000000C934680-000000000C9346BD
google::protobuf::ServiceDescriptorProto *__fastcall google::protobuf::ServiceDescriptorProto::New(
        google::protobuf::ServiceDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ServiceDescriptorProto *v2; // r12

  v2 = (google::protobuf::ServiceDescriptorProto *)operator new(0x40uLL);
  google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::ServiceDescriptorProto>(a2, v2);
  return v2;
};

// Line 7554: range 000000000C7316FC-000000000C73170C
void __fastcall __noreturn google::protobuf::ServiceDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 7561: range 000000000C931610-000000000C9316A1
void __fastcall google::protobuf::ServiceDescriptorProto::Clear(google::protobuf::ServiceDescriptorProto *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::MethodDescriptorProto **elements; // rbp
  __int64 v5; // r12
  google::protobuf::MethodDescriptorProto *v6; // rdi
  google::protobuf::uint32 v7; // eax
  std::string *ptr; // rdx
  unsigned __int64 v9; // rdi
  google::protobuf::UnknownFieldSet *v10; // rdi

  current_size = this->method_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->method_.rep_;
    elements = (google::protobuf::MethodDescriptorProto **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::MethodDescriptorProto::Clear(v6);
    }
    while ( (google::protobuf::MethodDescriptorProto **)v5 != elements );
    this->method_.current_size_ = 0;
  }
  v7 = this->_has_bits_.has_bits_[0];
  if ( (v7 & 3) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v7 & 2) != 0 )
      google::protobuf::ServiceOptions::Clear(this->options_);
  }
  v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v9 & 1) != 0 )
  {
    v10 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( v10->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v10);
  }
};

// Line 7584: range 000000000C9371A0-000000000C9374E1
__int64 __fastcall google::protobuf::ServiceDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::ServiceDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v7; // rdx
  google::protobuf::UnknownFieldSet *v8; // rdx
  google::protobuf::uint32 v10; // eax
  std::string *ptr; // rsi
  google::protobuf::ServiceOptions *options; // r13
  const google::protobuf::uint8 *v13; // rax
  int v14; // esi
  std::pair<int,int> v15; // rax
  int first; // r14d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::MethodDescriptorProto *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rdx
  const google::protobuf::uint8 *v25; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v27; // rax

  p_internal_metadata = &this->_internal_metadata_;
LABEL_2:
  while ( 2 )
  {
    buffer = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
      goto LABEL_19;
LABEL_3:
    TagFallback = *buffer;
    if ( (char)TagFallback > 0 )
    {
      a2->buffer_ = buffer + 1;
      goto LABEL_11;
    }
    while ( 1 )
    {
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      v10 = TagFallback >> 3;
      if ( TagFallback >> 3 == 2 )
      {
        if ( TagFallback != 18 )
          goto LABEL_6;
        rep = this->method_.rep_;
        if ( rep )
        {
          current_size = this->method_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)rep->elements[current_size];
            this->method_.current_size_ = current_size + 1;
            goto LABEL_41;
          }
          total_size = this->method_.total_size_;
          if ( allocated_size != total_size )
          {
LABEL_36:
            arena = this->method_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
            {
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  arena,
                  (const std::type_info *)&`typeinfo for'google::protobuf::MethodDescriptorProto,
                  0x40uLL);
              AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                  &arena->impl_,
                                                                                  0x40uLL,
                                                                                  google::protobuf::internal::arena_destruct_object<google::protobuf::MethodDescriptorProto>);
              google::protobuf::MethodDescriptorProto::MethodDescriptorProto(AlignedAndAddCleanup);
            }
            else
            {
              AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)operator new(0x40uLL);
              google::protobuf::MethodDescriptorProto::MethodDescriptorProto(AlignedAndAddCleanup);
            }
            v23 = this->method_.current_size_;
            v24 = this->method_.rep_;
            this->method_.current_size_ = v23 + 1;
            v24->elements[v23] = AlignedAndAddCleanup;
LABEL_41:
            v25 = a2->buffer_;
            if ( a2->buffer_ < a2->buffer_end_
              && (VarintSizeAsIntFallback = *v25, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
            {
              a2->buffer_ = v25 + 1;
            }
            else
            {
              VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
              if ( VarintSizeAsIntFallback < 0 )
                return 0LL;
            }
            v27 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
                    a2,
                    VarintSizeAsIntFallback);
            first = v27.first;
            if ( v27.second < 0
              || !(unsigned __int8)google::protobuf::MethodDescriptorProto::MergePartialFromCodedStream(
                                     AlignedAndAddCleanup,
                                     a2) )
            {
              return 0LL;
            }
LABEL_28:
            if ( !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
              return 0LL;
            goto LABEL_2;
          }
        }
        else
        {
          total_size = this->method_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->method_, total_size + 1);
        rep = this->method_.rep_;
        allocated_size = rep->allocated_size;
        goto LABEL_36;
      }
      if ( v10 == 3 )
      {
        if ( TagFallback != 26 )
          goto LABEL_6;
        options = this->options_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( !options )
        {
          options = (google::protobuf::ServiceOptions *)operator new(0x70uLL);
          google::protobuf::ServiceOptions::ServiceOptions(options);
          this->options_ = options;
        }
        v13 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_ && (v14 = *v13, (unsigned int)v14 <= 0x7F) )
        {
          a2->buffer_ = v13 + 1;
        }
        else
        {
          v14 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( v14 < 0 )
            return 0LL;
        }
        v15 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, v14);
        first = v15.first;
        if ( v15.second < 0
          || !(unsigned __int8)google::protobuf::ServiceOptions::MergePartialFromCodedStream(options, a2) )
        {
          return 0LL;
        }
        goto LABEL_28;
      }
      if ( v10 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_6;
      ptr = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->name_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        ptr = this->name_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
        return 0LL;
      buffer = a2->buffer_;
      if ( a2->buffer_end_ > a2->buffer_ )
        goto LABEL_3;
LABEL_19:
      TagFallback = 0;
    }
    if ( TagFallback )
    {
LABEL_6:
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      if ( (v7 & 1) != 0 )
        v8 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
      else
        v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v8) )
        return 0LL;
      continue;
    }
    return 1LL;
  }
};

// Line 7654: range 000000000C924620-000000000C9246C9
void __fastcall google::protobuf::ServiceDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::ServiceDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  int current_size; // ebp
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  current_size = this->method_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->method_.rep_->elements[v5],
        output);
    }
  }
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, this->options_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 7691: range 000000000C926A00-000000000C926B35
google::protobuf::uint8 *__fastcall google::protobuf::ServiceDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::ServiceDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v4; // r13d
  int current_size; // ebx
  google::protobuf::uint8 *v6; // r14
  int i; // r15d
  const google::protobuf::MethodDescriptorProto *v8; // rdi
  _BYTE *v9; // rdx
  unsigned int j; // eax
  char v11; // cl
  google::protobuf::ServiceOptions *options; // rdi
  _BYTE *v13; // rdx
  unsigned int k; // eax
  char v15; // cl
  unsigned __int64 v16; // rax
  std::string *ptr; // rdi
  google::protobuf::uint8 *v19; // rax

  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 1) == 0 )
  {
    current_size = this->method_.current_size_;
    if ( current_size )
      goto LABEL_3;
LABEL_15:
    v6 = target;
    goto LABEL_7;
  }
  ptr = this->name_.ptr_;
  *target = 10;
  v19 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  current_size = this->method_.current_size_;
  target = v19;
  if ( !current_size )
    goto LABEL_15;
LABEL_3:
  v6 = target;
  for ( i = 0; i != current_size; ++i )
  {
    v8 = (const google::protobuf::MethodDescriptorProto *)this->method_.rep_->elements[i];
    *v6 = 18;
    v9 = v6 + 1;
    for ( j = v8->_cached_size_; j > 0x7F; *(v9 - 1) = v11 | 0x80 )
    {
      v11 = j;
      j >>= 7;
      ++v9;
    }
    *v9 = j;
    v6 = google::protobuf::MethodDescriptorProto::InternalSerializeWithCachedSizesToArray(v8, deterministic, v9 + 1);
  }
LABEL_7:
  if ( (v4 & 2) != 0 )
  {
    options = this->options_;
    *v6 = 26;
    v13 = v6 + 1;
    for ( k = options->_cached_size_; k > 0x7F; *(v13 - 1) = v15 | 0x80 )
    {
      v15 = k;
      k >>= 7;
      ++v13;
    }
    *v13 = k;
    v6 = google::protobuf::ServiceOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v13 + 1);
  }
  v16 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v16 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v16 & 0xFFFFFFFFFFFFFFFELL),
             v6);
  else
    return v6;
};

// Line 7732: range 000000000C928AE0-000000000C928BBB
size_t __fastcall google::protobuf::ServiceDescriptorProto::ByteSizeLong(
        const google::protobuf::ServiceDescriptorProto *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 v10; // eax
  unsigned int v11; // edx
  size_t v13; // rdx
  unsigned int v14; // eax

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->method_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::MethodDescriptorProto::ByteSizeLong((const google::protobuf::MethodDescriptorProto *const)this->method_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  v10 = this->_has_bits_.has_bits_[0];
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      _BitScanReverse(&v11, this->name_.ptr_->_M_string_length | 1);
      v5 += this->name_.ptr_->_M_string_length + 1 + ((9 * v11 + 73) >> 6);
    }
    if ( (v10 & 2) != 0 )
    {
      v13 = google::protobuf::ServiceOptions::ByteSizeLong(this->options_);
      _BitScanReverse(&v14, v13 | 1);
      v5 += v13 + 1 + ((9 * v14 + 73) >> 6);
    }
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 7775: range 000000000C93C6F0-000000000C93C73D
void __fastcall google::protobuf::ServiceDescriptorProto::MergeFrom(
        google::protobuf::ServiceDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::ServiceDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::ServiceDescriptorProto *)__dynamic_cast(
                                                           from,
                                                           (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                           (const struct __class_type_info *)&`typeinfo for'google::protobuf::ServiceDescriptorProto,
                                                           0LL);
  if ( v2 )
    google::protobuf::ServiceDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 7790: range 000000000C93C580-000000000C93C6DE
void __fastcall google::protobuf::ServiceDescriptorProto::MergeFrom(
        google::protobuf::ServiceDescriptorProto *this,
        const google::protobuf::ServiceDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // r12d
  std::string *v10; // rdi
  std::string *v11; // rsi
  void **elements; // r13
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d
  google::protobuf::ServiceOptions *options; // r12
  google::protobuf::ServiceOptions *v17; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = a2->method_.current_size_;
  if ( current_size )
  {
    elements = a2->method_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->method_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(
      &this->method_,
      v13,
      elements,
      current_size,
      this->method_.rep_->allocated_size - this->method_.current_size_);
    rep = this->method_.rep_;
    v15 = this->method_.current_size_ + current_size;
    this->method_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  v9 = a2->_has_bits_.has_bits_[0];
  if ( (v9 & 3) != 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v10 = this->name_.ptr_;
      v11 = a2->name_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
      }
    }
    if ( (v9 & 2) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::ServiceOptions *)operator new(0x70uLL);
        google::protobuf::ServiceOptions::ServiceOptions(options);
        this->options_ = options;
      }
      v17 = a2->options_;
      if ( !v17 )
        v17 = (google::protobuf::ServiceOptions *)&google::protobuf::_ServiceOptions_default_instance_;
      google::protobuf::ServiceOptions::MergeFrom(options, v17);
    }
  }
};

// Line 7812: range 000000000C93C750-000000000C93C780
void __fastcall google::protobuf::ServiceDescriptorProto::CopyFrom(
        google::protobuf::ServiceDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::ServiceDescriptorProto::Clear(this);
    google::protobuf::ServiceDescriptorProto::MergeFrom(this, from);
  }
};

// Line 7819: range 000000000C93C790-000000000C93C7C0
void __fastcall google::protobuf::ServiceDescriptorProto::CopyFrom(
        google::protobuf::ServiceDescriptorProto *const this,
        const google::protobuf::ServiceDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::ServiceDescriptorProto::Clear(this);
    google::protobuf::ServiceDescriptorProto::MergeFrom(this, from);
  }
};

// Line 7824: range 000000000C929480-000000000C9294F2
bool __fastcall google::protobuf::ServiceDescriptorProto::IsInitialized(
        const google::protobuf::ServiceDescriptorProto *const this)
{
  int v1; // ebp
  const google::protobuf::MethodOptions *const *v2; // rax
  bool result; // al

  v1 = this->method_.current_size_ - 1;
  if ( v1 < 0 )
    return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::ServiceOptions::IsInitialized(this->options_);
  while ( 1 )
  {
    v2 = (const google::protobuf::MethodOptions *const *)this->method_.rep_->elements[v1];
    if ( ((_BYTE)v2[2] & 8) != 0 )
    {
      result = google::protobuf::MethodOptions::IsInitialized(v2[6]);
      if ( !result )
        break;
    }
    if ( --v1 == -1 )
      return (this->_has_bits_.has_bits_[0] & 2) == 0 || google::protobuf::ServiceOptions::IsInitialized(this->options_);
  }
  return result;
};

// Line 7833: range 000000000C92F740-000000000C92F750
void __fastcall google::protobuf::ServiceDescriptorProto::Swap(
        google::protobuf::ServiceDescriptorProto *const this,
        google::protobuf::ServiceDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::ServiceDescriptorProto::InternalSwap(this, other);
};

// Line 7836: range 000000000C92F660-000000000C92F73B
void __fastcall google::protobuf::ServiceDescriptorProto::InternalSwap(
        google::protobuf::ServiceDescriptorProto *const this,
        google::protobuf::ServiceDescriptorProto *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  google::protobuf::ServiceOptions *options; // rdx
  google::protobuf::ServiceOptions *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  int cached_size; // eax
  _QWORD *v15; // [rsp+0h] [rbp-18h]

  rep = this->method_.rep_;
  this->method_.rep_ = other->method_.rep_;
  current_size = other->method_.current_size_;
  other->method_.rep_ = rep;
  LODWORD(rep) = this->method_.current_size_;
  this->method_.current_size_ = current_size;
  total_size = other->method_.total_size_;
  other->method_.current_size_ = (int)rep;
  LODWORD(rep) = this->method_.total_size_;
  this->method_.total_size_ = total_size;
  ptr = other->name_.ptr_;
  other->method_.total_size_ = (int)rep;
  v6 = this->name_.ptr_;
  this->name_.ptr_ = ptr;
  options = other->options_;
  other->name_.ptr_ = v6;
  v8 = this->options_;
  this->options_ = options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->options_ = v8;
  LODWORD(v8) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v9 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v8;
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v10 & 1) != 0 )
  {
    if ( (v9 & 1) == 0 )
    {
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v9 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v10 & 1) != 0 )
  {
    v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v15 = v11;
    v12 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v11 = v15;
  }
  v13 = *v12;
  *v12 = *v11;
  *v11 = v13;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 8006: range 000000000C92D7F0-000000000C92D890
__int64 __fastcall google::protobuf::MethodDescriptorProto::MethodDescriptorProto(
        google::protobuf::MethodDescriptorProto *this)
{
  __int64 result; // rax
  google::protobuf::internal::FunctionClosure0 v2[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180238;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::MethodDescriptorProto *)&google::protobuf::_MethodDescriptorProto_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v2[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  result = 0LL;
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->input_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->output_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
  *(_WORD *)&this->client_streaming_ = 0;
  return result;
};

// Line 8014: range 000000000C93C0B0-000000000C93C1CA
__int64 __fastcall google::protobuf::MethodDescriptorProto::MethodDescriptorProto(
        google::protobuf::MethodDescriptorProto *this,
        const google::protobuf::MethodDescriptorProto *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v5; // r12
  google::protobuf::UnknownFieldSet *v6; // rax
  google::protobuf::uint32 v7; // eax
  std::string *v8; // rsi
  std::string *v9; // rsi
  std::string *v10; // rsi
  __int64 result; // rax
  google::protobuf::MethodOptions *v12; // r12

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A180238;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v5 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v6, v5);
  }
  v7 = a2->_has_bits_.has_bits_[0];
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v7 & 1) != 0 )
  {
    v8 = a2->name_.ptr_;
    if ( v8 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_,
        (unsigned __int8 **)v8);
      v7 = a2->_has_bits_.has_bits_[0];
    }
  }
  this->input_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v7 & 2) != 0 )
  {
    v9 = a2->input_type_.ptr_;
    if ( v9 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->input_type_,
        (unsigned __int8 **)v9);
      v7 = a2->_has_bits_.has_bits_[0];
    }
  }
  this->output_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v7 & 4) != 0 )
  {
    v10 = a2->output_type_.ptr_;
    if ( v10 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->output_type_,
        (unsigned __int8 **)v10);
      v7 = a2->_has_bits_.has_bits_[0];
    }
  }
  if ( (v7 & 8) != 0 )
  {
    v12 = (google::protobuf::MethodOptions *)operator new(0x70uLL);
    google::protobuf::MethodOptions::MethodOptions(v12, a2->options_);
    this->options_ = v12;
  }
  else
  {
    this->options_ = 0LL;
  }
  result = *(unsigned __int16 *)&a2->client_streaming_;
  *(_WORD *)&this->client_streaming_ = result;
  return result;
};

// Line 8033: range 000000000C731C3C-000000000C731C54
void __fastcall __noreturn google::protobuf::MethodDescriptorProto::MethodDescriptorProto()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r13

  operator delete(v1, 0x70uLL);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 8048: range 000000000C92C220-000000000C92C24D
void __fastcall google::protobuf::MethodDescriptorProto::SharedCtor(
        google::protobuf::MethodDescriptorProto *const this)
{
  this->_cached_size_ = 0;
  this->name_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->input_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->output_type_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->options_ = 0LL;
  *(_WORD *)&this->client_streaming_ = 0;
};

// Line 8053: range 000000000C92DAE0-000000000C92DB02
void __fastcall google::protobuf::MethodDescriptorProto::~MethodDescriptorProto(
        google::protobuf::MethodDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180238;
  google::protobuf::MethodDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x40uLL);
};

// Line 8053: range 000000000C92DAC0-000000000C92DAD5
void __fastcall google::protobuf::MethodDescriptorProto::~MethodDescriptorProto(
        google::protobuf::MethodDescriptorProto *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180238;
  google::protobuf::MethodDescriptorProto::SharedDtor(this);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 8058: range 000000000C92C250-000000000C92C316
void __fastcall google::protobuf::MethodDescriptorProto::SharedDtor(
        google::protobuf::MethodDescriptorProto *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp
  google::protobuf::MethodOptions *options; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_.ptr_;
  if ( ptr && ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->input_type_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
  v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->output_type_.ptr_;
  if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
  {
    if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
      operator delete(v3->union_.align_to_ptr);
    operator delete(v3, 0x20uLL);
  }
  if ( this != (google::protobuf::MethodDescriptorProto *const)&google::protobuf::_MethodDescriptorProto_default_instance_ )
  {
    options = this->options_;
    if ( options )
      (*((void (__fastcall **)(google::protobuf::MethodOptions *))options->_vptr_MessageLite + 1))(options);
  }
};

// Line 8067: range 000000000C924090-000000000C924093
void __fastcall google::protobuf::MethodDescriptorProto::SetCachedSize(
        const google::protobuf::MethodDescriptorProto *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 8080: range 000000000C92DFF0-000000000C92E02D
google::protobuf::MethodDescriptorProto *__fastcall google::protobuf::MethodDescriptorProto::New(
        google::protobuf::MethodDescriptorProto *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::MethodDescriptorProto *v2; // r12

  v2 = (google::protobuf::MethodDescriptorProto *)operator new(0x40uLL);
  google::protobuf::MethodDescriptorProto::MethodDescriptorProto(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::MethodDescriptorProto>(a2, v2);
  return v2;
};

// Line 8081: range 000000000C73119C-000000000C7311AC
void __fastcall __noreturn google::protobuf::MethodDescriptorProto::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 8088: range 000000000C931550-000000000C931601
void __fastcall google::protobuf::MethodDescriptorProto::Clear(google::protobuf::MethodDescriptorProto *const this)
{
  google::protobuf::uint32 v2; // ebp
  std::string *ptr; // rax
  std::string *v4; // rax
  std::string *v5; // rax
  unsigned __int64 v6; // rdi
  google::protobuf::UnknownFieldSet *v7; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 0xF) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      ptr = this->name_.ptr_;
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 2) != 0 )
    {
      v4 = this->input_type_.ptr_;
      v4->_M_string_length = 0LL;
      *v4->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 4) != 0 )
    {
      v5 = this->output_type_.ptr_;
      v5->_M_string_length = 0LL;
      *v5->_M_dataplus._M_p = 0;
    }
    if ( (v2 & 8) != 0 )
      google::protobuf::MethodOptions::Clear(this->options_);
  }
  if ( (v2 & 0x30) != 0 )
    *(_WORD *)&this->client_streaming_ = 0;
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v6 & 1) != 0 )
  {
    v7 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    if ( v7->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v7);
  }
};

// Line 8123: range 000000000C936EA0-000000000C93718E
__int64 __fastcall google::protobuf::MethodDescriptorProto::MergePartialFromCodedStream(
        google::protobuf::MethodDescriptorProto *this,
        google::protobuf::io::CodedInputStream *a2)
{
  const google::protobuf::uint8 *buffer_end; // rcx
  const google::protobuf::uint8 *i; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v6; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  std::pair<long unsigned int,bool> v8; // rax
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  google::protobuf::MethodOptions *options; // r13
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::string *ptr; // rsi
  std::pair<int,int> v15; // rax
  int first; // r14d

  buffer_end = a2->buffer_end_;
  for ( i = a2->buffer_; ; i = a2->buffer_ )
  {
    while ( 2 )
    {
      if ( buffer_end <= i )
      {
        TagFallback = 0;
LABEL_2:
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
        if ( TagFallback - 1 > 0x7E )
          break;
        goto LABEL_11;
      }
      TagFallback = *i;
      if ( (char)TagFallback <= 0 )
        goto LABEL_2;
      a2->buffer_ = i + 1;
LABEL_11:
      if ( TagFallback <= 0x37 )
      {
        switch ( TagFallback >> 3 )
        {
          case 0u:
            break;
          case 1u:
            if ( TagFallback != 10 )
              goto LABEL_4;
            ptr = this->name_.ptr_;
            this->_has_bits_.has_bits_[0] |= 1u;
            if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            {
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
                (__int64 **)&this->name_,
                (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
              ptr = this->name_.ptr_;
            }
            goto LABEL_39;
          case 2u:
            if ( TagFallback != 18 )
              goto LABEL_4;
            ptr = this->input_type_.ptr_;
            this->_has_bits_.has_bits_[0] |= 2u;
            if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            {
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
                (__int64 **)&this->input_type_,
                (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
              ptr = this->input_type_.ptr_;
            }
            goto LABEL_39;
          case 3u:
            if ( TagFallback != 26 )
              goto LABEL_4;
            ptr = this->output_type_.ptr_;
            this->_has_bits_.has_bits_[0] |= 4u;
            if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            {
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
                (__int64 **)&this->output_type_,
                (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
              ptr = this->output_type_.ptr_;
            }
LABEL_39:
            if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, ptr) )
              return 0LL;
            goto LABEL_7;
          case 4u:
            if ( TagFallback != 34 )
              goto LABEL_4;
            options = this->options_;
            this->_has_bits_.has_bits_[0] |= 8u;
            if ( !options )
            {
              options = (google::protobuf::MethodOptions *)operator new(0x70uLL);
              google::protobuf::MethodOptions::MethodOptions(options);
              this->options_ = options;
            }
            buffer = a2->buffer_;
            if ( a2->buffer_ < a2->buffer_end_
              && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
            {
              a2->buffer_ = buffer + 1;
            }
            else
            {
              VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
              if ( VarintSizeAsIntFallback < 0 )
                return 0LL;
            }
            v15 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
                    a2,
                    VarintSizeAsIntFallback);
            first = v15.first;
            if ( v15.second < 0
              || !(unsigned __int8)google::protobuf::MethodOptions::MergePartialFromCodedStream(options, a2)
              || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
            {
              return 0LL;
            }
            goto LABEL_7;
          case 5u:
            if ( TagFallback != 40 )
              goto LABEL_4;
            *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
            buffer_end = a2->buffer_end_;
            this->_has_bits_.has_bits_[0] |= 0x10u;
            if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
              && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
                  SLOBYTE(Varint64Fallback.first) >= 0) )
            {
              i = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
              a2->buffer_ = i;
            }
            else
            {
              Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
              if ( !Varint64Fallback.second )
                return 0LL;
              buffer_end = a2->buffer_end_;
              i = a2->buffer_;
            }
            this->client_streaming_ = Varint64Fallback.first != 0;
            continue;
          case 6u:
            if ( TagFallback != 48 )
              goto LABEL_4;
            *(_QWORD *)&v8.second = a2->buffer_;
            buffer_end = a2->buffer_end_;
            this->_has_bits_.has_bits_[0] |= 0x20u;
            if ( *(_QWORD *)&v8.second < (unsigned __int64)buffer_end
              && (v8.first = (unsigned __int8)**(_BYTE **)&v8.second, SLOBYTE(v8.first) >= 0) )
            {
              i = (const google::protobuf::uint8 *)(*(_QWORD *)&v8.second + 1LL);
              a2->buffer_ = i;
            }
            else
            {
              v8 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
              if ( !v8.second )
                return 0LL;
              buffer_end = a2->buffer_end_;
              i = a2->buffer_;
            }
            this->server_streaming_ = v8.first != 0;
            continue;
        }
      }
      break;
    }
    if ( !TagFallback )
      break;
LABEL_4:
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v6 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
LABEL_7:
    buffer_end = a2->buffer_end_;
  }
  return 1LL;
};

// Line 8241: range 000000000C926CC0-000000000C926DB1
void __fastcall google::protobuf::MethodDescriptorProto::SerializeWithCachedSizes(
        const google::protobuf::MethodDescriptorProto *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_.ptr_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, this->input_type_.ptr_, output);
  if ( (v2 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, this->output_type_.ptr_, output);
  if ( (v2 & 8) != 0 )
    google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(4, this->options_, output);
  if ( (v2 & 0x10) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(5, this->client_streaming_, output);
  if ( (v2 & 0x20) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(6, this->server_streaming_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 8301: range 000000000C9268C0-000000000C9269F3
google::protobuf::uint8 *__fastcall google::protobuf::MethodDescriptorProto::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::MethodDescriptorProto *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::uint32 v5; // r13d
  google::protobuf::MethodOptions *options; // rdi
  _BYTE *v7; // rdx
  unsigned int i; // eax
  char v9; // cl
  bool client_streaming; // al
  bool server_streaming; // al
  unsigned __int64 v12; // rdi
  std::string *v14; // rdi
  std::string *ptr; // rdi
  std::string *v16; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 2) == 0 )
      goto LABEL_3;
LABEL_16:
    ptr = this->input_type_.ptr_;
    *v3 = 18;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, v3 + 1);
    if ( (v5 & 4) == 0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v14 = this->name_.ptr_;
  *target = 10;
  v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v14, target + 1);
  if ( (v5 & 2) != 0 )
    goto LABEL_16;
LABEL_3:
  if ( (v5 & 4) == 0 )
    goto LABEL_4;
LABEL_17:
  v16 = this->output_type_.ptr_;
  *v3 = 26;
  v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v16, v3 + 1);
LABEL_4:
  if ( (v5 & 8) != 0 )
  {
    options = this->options_;
    *v3 = 34;
    v7 = v3 + 1;
    for ( i = options->_cached_size_; i > 0x7F; *(v7 - 1) = v9 | 0x80 )
    {
      v9 = i;
      i >>= 7;
      ++v7;
    }
    *v7 = i;
    v3 = google::protobuf::MethodOptions::InternalSerializeWithCachedSizesToArray(options, deterministic, v7 + 1);
  }
  if ( (v5 & 0x10) != 0 )
  {
    client_streaming = this->client_streaming_;
    v3 += 2;
    *(v3 - 2) = 40;
    *(v3 - 1) = client_streaming;
  }
  if ( (v5 & 0x20) != 0 )
  {
    server_streaming = this->server_streaming_;
    v3 += 2;
    *(v3 - 2) = 48;
    *(v3 - 1) = server_streaming;
  }
  v12 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v12 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v12 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 8366: range 000000000C9289D0-000000000C928AD5
size_t __fastcall google::protobuf::MethodDescriptorProto::ByteSizeLong(
        const google::protobuf::MethodDescriptorProto *const this)
{
  size_t v1; // r12
  unsigned __int64 ptr; // rdi
  google::protobuf::uint32 v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  size_t v9; // rax
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // r12d

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 0x3F) != 0 )
  {
    if ( (v4 & 1) != 0 )
    {
      _BitScanReverse(&v8, this->name_.ptr_->_M_string_length | 1);
      v1 += this->name_.ptr_->_M_string_length + 1 + ((9 * v8 + 73) >> 6);
    }
    if ( (v4 & 2) != 0 )
    {
      _BitScanReverse(&v5, this->input_type_.ptr_->_M_string_length | 1);
      v1 += this->input_type_.ptr_->_M_string_length + 1 + ((9 * v5 + 73) >> 6);
    }
    if ( (v4 & 4) != 0 )
    {
      _BitScanReverse(&v6, this->output_type_.ptr_->_M_string_length | 1);
      v1 += this->output_type_.ptr_->_M_string_length + 1 + ((9 * v6 + 73) >> 6);
    }
    if ( (v4 & 8) != 0 )
    {
      v9 = google::protobuf::MethodOptions::ByteSizeLong(this->options_);
      v10 = v9;
      v11 = v9 + v1 + 1;
      _BitScanReverse((unsigned int *)&v10, v10 | 1);
      v12 = 9 * v10 + 73;
      v4 = this->_has_bits_.has_bits_[0];
      v1 = v11 + (v12 >> 6);
    }
    if ( (v4 & 0x10) != 0 )
      v1 += 2LL;
    if ( (v4 & 0x20) != 0 )
      v1 += 2LL;
  }
  this->_cached_size_ = v1;
  return v1;
};

// Line 8422: range 000000000C93C950-000000000C93C99D
void __fastcall google::protobuf::MethodDescriptorProto::MergeFrom(
        google::protobuf::MethodDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::MethodDescriptorProto *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::MethodDescriptorProto *)__dynamic_cast(
                                                          from,
                                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                          (const struct __class_type_info *)&`typeinfo for'google::protobuf::MethodDescriptorProto,
                                                          0LL);
  if ( v2 )
    google::protobuf::MethodDescriptorProto::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 8437: range 000000000C93C3A0-000000000C93C579
void __fastcall google::protobuf::MethodDescriptorProto::MergeFrom(
        google::protobuf::MethodDescriptorProto *this,
        const google::protobuf::MethodDescriptorProto *a2)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // ebp
  google::protobuf::uint32 v9; // eax
  std::string *v10; // rdi
  std::string *v11; // rsi
  std::string *v12; // rdi
  std::string *v13; // rsi
  std::string *v14; // rdi
  std::string *v15; // rsi
  google::protobuf::MethodOptions *options; // r13
  google::protobuf::MethodOptions *v17; // rsi

  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = a2->_has_bits_.has_bits_[0];
  if ( (v8 & 0x3F) != 0 )
  {
    v9 = this->_has_bits_.has_bits_[0];
    if ( (v8 & 1) != 0 )
    {
      v9 |= 1u;
      v14 = this->name_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v15 = a2->name_.ptr_;
      if ( v15 != v14 )
      {
        if ( v14 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_,
            (unsigned __int8 **)v15);
        else
          std::string::_M_assign(v14, v15);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 2) != 0 )
    {
      v9 |= 2u;
      v10 = this->input_type_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v11 = a2->input_type_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->input_type_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 4) != 0 )
    {
      v9 |= 4u;
      v12 = this->output_type_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v13 = a2->output_type_.ptr_;
      if ( v12 != v13 )
      {
        if ( v12 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->output_type_,
            (unsigned __int8 **)v13);
        else
          std::string::_M_assign(v12, v13);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 8) != 0 )
    {
      options = this->options_;
      this->_has_bits_.has_bits_[0] = v9 | 8;
      if ( !options )
      {
        options = (google::protobuf::MethodOptions *)operator new(0x70uLL);
        google::protobuf::MethodOptions::MethodOptions(options);
        this->options_ = options;
      }
      v17 = a2->options_;
      if ( !v17 )
        v17 = (google::protobuf::MethodOptions *)&google::protobuf::_MethodOptions_default_instance_;
      google::protobuf::MethodOptions::MergeFrom(options, v17);
      v9 = this->_has_bits_.has_bits_[0];
    }
    if ( (v8 & 0x10) != 0 )
      this->client_streaming_ = a2->client_streaming_;
    if ( (v8 & 0x20) != 0 )
      this->server_streaming_ = a2->server_streaming_;
    this->_has_bits_.has_bits_[0] = v9 | v8;
  }
};

// Line 8473: range 000000000C93C9B0-000000000C93C9E0
void __fastcall google::protobuf::MethodDescriptorProto::CopyFrom(
        google::protobuf::MethodDescriptorProto *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::MethodDescriptorProto::Clear(this);
    google::protobuf::MethodDescriptorProto::MergeFrom(this, from);
  }
};

// Line 8480: range 000000000C93C9F0-000000000C93CA20
void __fastcall google::protobuf::MethodDescriptorProto::CopyFrom(
        google::protobuf::MethodDescriptorProto *const this,
        const google::protobuf::MethodDescriptorProto *from)
{
  if ( from != this )
  {
    google::protobuf::MethodDescriptorProto::Clear(this);
    google::protobuf::MethodDescriptorProto::MergeFrom(this, from);
  }
};

// Line 8486: range 000000000C929310-000000000C929324
bool __fastcall google::protobuf::MethodDescriptorProto::IsInitialized(
        const google::protobuf::MethodDescriptorProto *const this)
{
  return (this->_has_bits_.has_bits_[0] & 8) == 0 || google::protobuf::MethodOptions::IsInitialized(this->options_);
};

// Line 8493: range 000000000C92FB50-000000000C92FB60
void __fastcall google::protobuf::MethodDescriptorProto::Swap(
        google::protobuf::MethodDescriptorProto *const this,
        google::protobuf::MethodDescriptorProto *other)
{
  if ( other != this )
    google::protobuf::MethodDescriptorProto::InternalSwap(this, other);
};

// Line 8496: range 000000000C92FA60-000000000C92FB4B
void __fastcall google::protobuf::MethodDescriptorProto::InternalSwap(
        google::protobuf::MethodDescriptorProto *const this,
        google::protobuf::MethodDescriptorProto *other)
{
  std::string *ptr; // rax
  std::string *v3; // rdx
  std::string *v4; // rax
  std::string *v5; // rdx
  std::string *v6; // rax
  google::protobuf::MethodOptions *options; // rdx
  google::protobuf::MethodOptions *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rcx
  int cached_size; // eax
  _QWORD *v15; // [rsp+0h] [rbp-18h]

  ptr = this->name_.ptr_;
  this->name_.ptr_ = other->name_.ptr_;
  v3 = other->input_type_.ptr_;
  other->name_.ptr_ = ptr;
  v4 = this->input_type_.ptr_;
  this->input_type_.ptr_ = v3;
  v5 = other->output_type_.ptr_;
  other->input_type_.ptr_ = v4;
  v6 = this->output_type_.ptr_;
  this->output_type_.ptr_ = v5;
  options = other->options_;
  other->output_type_.ptr_ = v6;
  v8 = this->options_;
  this->options_ = options;
  LOBYTE(options) = other->client_streaming_;
  other->options_ = v8;
  LOBYTE(v8) = this->client_streaming_;
  this->client_streaming_ = (char)options;
  LOBYTE(options) = other->server_streaming_;
  other->client_streaming_ = (char)v8;
  LOBYTE(v8) = this->server_streaming_;
  this->server_streaming_ = (char)options;
  LODWORD(options) = other->_has_bits_.has_bits_[0];
  other->server_streaming_ = (char)v8;
  LODWORD(v8) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)options;
  v9 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v8;
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v10 & 1) != 0 )
  {
    if ( (v9 & 1) == 0 )
    {
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v9 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v10 & 1) != 0 )
  {
    v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v15 = v11;
    v12 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v11 = v15;
  }
  v13 = *v12;
  *v12 = *v11;
  *v11 = v13;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 8826: range 000000000C933970-000000000C933A83
void __fastcall google::protobuf::FileOptions::FileOptions(google::protobuf::FileOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180310;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::FileOptions *)&google::protobuf::_FileOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->java_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->java_outer_classname_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->go_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->objc_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->csharp_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->swift_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->php_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->php_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->cc_enable_arenas_ = 0LL;
  this->deprecated_ = 0;
  this->optimize_for_ = 1;
};

// Line 8834: range 000000000C93E3D0-000000000C93E69F
unsigned __int8 *__fastcall google::protobuf::FileOptions::FileOptions(
        google::protobuf::FileOptions *this,
        const google::protobuf::FileOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v6; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v9; // rdi
  const google::protobuf::UnknownFieldSet *v10; // r12
  google::protobuf::UnknownFieldSet *v11; // rdi
  unsigned __int8 *result; // rax
  std::string *v13; // rsi
  std::string *v14; // rsi
  std::string *v15; // rsi
  std::string *v16; // rsi
  std::string *v17; // rsi
  std::string *v18; // rsi
  std::string *v19; // rsi
  std::string *v20; // rsi
  void **elements; // r15
  void **v22; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v24; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180310;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v6 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v6;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v22 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v22,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v24 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v24;
    if ( v24 > rep->allocated_size )
      rep->allocated_size = v24;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v10 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v9 & 1) != 0 )
      v11 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    else
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v11, v10);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
  this->java_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v13 = a2->java_package_.ptr_;
    if ( v13 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->java_package_,
        (unsigned __int8 **)v13);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->java_outer_classname_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    v14 = a2->java_outer_classname_.ptr_;
    if ( v14 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->java_outer_classname_,
        (unsigned __int8 **)v14);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->go_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 4) != 0 )
  {
    v15 = a2->go_package_.ptr_;
    if ( v15 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->go_package_,
        (unsigned __int8 **)v15);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->objc_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 8) != 0 )
  {
    v16 = a2->objc_class_prefix_.ptr_;
    if ( v16 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->objc_class_prefix_,
        (unsigned __int8 **)v16);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->csharp_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 0x10) != 0 )
  {
    v17 = a2->csharp_namespace_.ptr_;
    if ( v17 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->csharp_namespace_,
        (unsigned __int8 **)v17);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->swift_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 0x20) != 0 )
  {
    v18 = a2->swift_prefix_.ptr_;
    if ( v18 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->swift_prefix_,
        (unsigned __int8 **)v18);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->php_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 0x40) != 0 )
  {
    v19 = a2->php_class_prefix_.ptr_;
    if ( v19 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->php_class_prefix_,
        (unsigned __int8 **)v19);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->php_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (char)result < 0 )
  {
    v20 = a2->php_namespace_.ptr_;
    if ( v20 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      result = google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
                 (__int64 **)&this->php_namespace_,
                 (unsigned __int8 **)v20);
  }
  *(__m128i *)&this->cc_enable_arenas_ = _mm_loadu_si128((const __m128i *)&a2->cc_enable_arenas_);
  return result;
};

// Line 8881: range 000000000C92C3E0-000000000C92C452
void __fastcall google::protobuf::FileOptions::SharedCtor(google::protobuf::FileOptions *const this)
{
  this->_cached_size_ = 0;
  this->java_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->java_outer_classname_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->go_package_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->objc_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->csharp_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->swift_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->php_class_prefix_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->php_namespace_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->cc_enable_arenas_ = 0LL;
  this->deprecated_ = 0;
  this->optimize_for_ = 1;
};

// Line 8896: range 000000000C934460-000000000C934472
void __fastcall google::protobuf::FileOptions::~FileOptions(google::protobuf::FileOptions *const this)
{
  google::protobuf::FileOptions::~FileOptions(this);
  operator delete(this, 0xB8uLL);
};

// Line 8896: range 000000000C934430-000000000C934457
void __fastcall google::protobuf::FileOptions::~FileOptions(google::protobuf::FileOptions *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180310;
  google::protobuf::FileOptions::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(&this->uninterpreted_option_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 8901: range 000000000C92C460-000000000C92C616
void __fastcall google::protobuf::FileOptions::SharedDtor(google::protobuf::FileOptions *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v4; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v5; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v6; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v7; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v8; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->java_package_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->java_outer_classname_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
  v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->go_package_.ptr_;
  if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
  {
    if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
      operator delete(v3->union_.align_to_ptr);
    operator delete(v3, 0x20uLL);
  }
  v4 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->objc_class_prefix_.ptr_;
  if ( v4 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v4 )
  {
    if ( (void **)v4->union_.align_to_int64 != &v4->union_.align_to_ptr + 2 )
      operator delete(v4->union_.align_to_ptr);
    operator delete(v4, 0x20uLL);
  }
  v5 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->csharp_namespace_.ptr_;
  if ( v5 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v5 )
  {
    if ( (void **)v5->union_.align_to_int64 != &v5->union_.align_to_ptr + 2 )
      operator delete(v5->union_.align_to_ptr);
    operator delete(v5, 0x20uLL);
  }
  v6 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->swift_prefix_.ptr_;
  if ( v6 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v6 )
  {
    if ( (void **)v6->union_.align_to_int64 != &v6->union_.align_to_ptr + 2 )
      operator delete(v6->union_.align_to_ptr);
    operator delete(v6, 0x20uLL);
  }
  v7 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->php_class_prefix_.ptr_;
  if ( v7 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v7 )
  {
    if ( (void **)v7->union_.align_to_int64 != &v7->union_.align_to_ptr + 2 )
      operator delete(v7->union_.align_to_ptr);
    operator delete(v7, 0x20uLL);
  }
  v8 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->php_namespace_.ptr_;
  if ( v8 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v8 )
  {
    if ( (void **)v8->union_.align_to_int64 != &v8->union_.align_to_ptr + 2 )
      operator delete(v8->union_.align_to_ptr);
    operator delete(v8, 0x20uLL);
  }
};

// Line 8914: range 000000000C9240A0-000000000C9240A3
void __fastcall google::protobuf::FileOptions::SetCachedSize(const google::protobuf::FileOptions *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 8927: range 000000000C933A90-000000000C933ACD
google::protobuf::FileOptions *__fastcall google::protobuf::FileOptions::New(
        google::protobuf::FileOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FileOptions *v2; // r12

  v2 = (google::protobuf::FileOptions *)operator new(0xB8uLL);
  google::protobuf::FileOptions::FileOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::FileOptions>(a2, v2);
  return v2;
};

// Line 8928: range 000000000C7314CC-000000000C7314DC
void __fastcall __noreturn google::protobuf::FileOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0xB8uLL);
  _Unwind_Resume(v0);
};

// Line 8935: range 000000000C930FF0-000000000C931125
void __fastcall google::protobuf::FileOptions::Clear(google::protobuf::FileOptions *const this)
{
  google::protobuf::uint32 v2; // eax
  std::string *ptr; // rdx
  std::string *v4; // rdx
  std::string *v5; // rdx
  std::string *v6; // rdx
  std::string *v7; // rdx
  std::string *v8; // rdx
  std::string *v9; // rdx
  unsigned __int64 v10; // rdi
  google::protobuf::UnknownFieldSet *v11; // rdi
  std::string *v12; // rdx

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  v2 = this->_has_bits_.has_bits_[0];
  if ( !(_BYTE)v2 )
    goto LABEL_17;
  if ( (v2 & 1) != 0 )
  {
    ptr = this->java_package_.ptr_;
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 2) != 0 )
  {
    v4 = this->java_outer_classname_.ptr_;
    v4->_M_string_length = 0LL;
    *v4->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 4) != 0 )
  {
    v5 = this->go_package_.ptr_;
    v5->_M_string_length = 0LL;
    *v5->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 8) != 0 )
  {
    v6 = this->objc_class_prefix_.ptr_;
    v6->_M_string_length = 0LL;
    *v6->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 0x10) != 0 )
  {
    v7 = this->csharp_namespace_.ptr_;
    v7->_M_string_length = 0LL;
    *v7->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v8 = this->swift_prefix_.ptr_;
    v8->_M_string_length = 0LL;
    *v8->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 0x40) != 0 )
  {
    v9 = this->php_class_prefix_.ptr_;
    v9->_M_string_length = 0LL;
    *v9->_M_dataplus._M_p = 0;
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v12 = this->php_namespace_.ptr_;
    v12->_M_string_length = 0LL;
    *v12->_M_dataplus._M_p = 0;
    if ( !BYTE1(v2) )
      goto LABEL_18;
  }
  else
  {
LABEL_17:
    if ( !BYTE1(v2) )
      goto LABEL_18;
  }
  *(_QWORD *)&this->cc_enable_arenas_ = 0LL;
LABEL_18:
  if ( (v2 & 0x30000) != 0 )
  {
    this->deprecated_ = 0;
    this->optimize_for_ = 1;
  }
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v10 & 1) != 0 )
  {
    v11 = (google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( v11->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v11);
  }
};

// Line 8992: range 000000000C934830-000000000C93512A
__int64 __fastcall google::protobuf::FileOptions::MergePartialFromCodedStream(
        google::protobuf::FileOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  const google::protobuf::uint8 *buffer; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  int v9; // edx
  unsigned int v10; // eax
  unsigned __int64 ptr; // r8
  unsigned __int64 v12; // rax
  google::protobuf::UnknownFieldSet *v13; // r8
  google::protobuf::UnknownFieldSet *v14; // rdx
  const google::protobuf::uint8 *v16; // rax
  unsigned __int64 v17; // rdx
  std::pair<long unsigned int,bool> v18; // rax
  bool v19; // r8
  std::string *v20; // rsi
  const google::protobuf::uint8 *v21; // rax
  unsigned __int64 v22; // rdx
  std::pair<long unsigned int,bool> v23; // rax
  bool v24; // r8
  const google::protobuf::uint8 *v25; // rax
  unsigned __int64 v26; // rdx
  std::pair<long unsigned int,bool> v27; // rax
  bool v28; // r8
  const google::protobuf::uint8 *v29; // rax
  unsigned __int64 v30; // rdx
  std::pair<long unsigned int,bool> v31; // rax
  bool v32; // r8
  const google::protobuf::uint8 *v33; // rax
  unsigned __int64 v34; // rdx
  std::pair<long unsigned int,bool> v35; // rax
  bool v36; // r8
  const google::protobuf::uint8 *v37; // rax
  unsigned __int64 v38; // rdx
  std::pair<long unsigned int,bool> v39; // rax
  bool v40; // r8
  const google::protobuf::uint8 *v41; // rax
  unsigned __int64 v42; // rdx
  std::pair<long unsigned int,bool> v43; // rax
  bool v44; // r8
  const google::protobuf::uint8 *v45; // rax
  unsigned __int64 v46; // rdx
  std::pair<long unsigned int,bool> v47; // rax
  bool v48; // r8
  const google::protobuf::uint8 *v49; // rax
  unsigned __int64 v50; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  bool second; // r8
  const google::protobuf::uint8 *v53; // rax
  signed int v54; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  unsigned __int64 v56; // rdi
  google::protobuf::UnknownFieldSet *v57; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  __int64 v64; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v65; // rdx
  const google::protobuf::uint8 *v66; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v68; // rax
  int first; // r14d

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  buffer = a2->buffer_;
  while ( 1 )
  {
    if ( buffer >= buffer_end )
    {
      TagFallback = 0;
      goto LABEL_11;
    }
    TagFallback = *buffer;
    v8 = buffer + 1;
    if ( (char)TagFallback > 0 )
      break;
    if ( v8 < buffer_end )
    {
      v9 = buffer[1];
      if ( (int)(TagFallback & ~v9) > 127 )
      {
        a2->buffer_ = buffer + 2;
        TagFallback = TagFallback + (v9 << 7) - 128;
        goto LABEL_7;
      }
    }
LABEL_11:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 > 0x3FFE )
    {
handle_unusual_9:
      if ( !TagFallback )
        return 1LL;
      goto LABEL_13;
    }
LABEL_7:
    v10 = TagFallback >> 3;
    if ( TagFallback > 0x157 )
    {
      if ( v10 == 999 )
      {
        if ( (_BYTE)TagFallback != 58 )
          goto LABEL_20;
        rep = this->uninterpreted_option_.rep_;
        if ( rep )
        {
          current_size = this->uninterpreted_option_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
            this->uninterpreted_option_.current_size_ = current_size + 1;
            goto LABEL_118;
          }
          total_size = this->uninterpreted_option_.total_size_;
          if ( allocated_size != total_size )
          {
LABEL_113:
            arena = this->uninterpreted_option_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
            {
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  arena,
                  (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
                  0x60uLL);
              AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                &arena->impl_,
                                                                                0x60uLL,
                                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
              google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
            }
            else
            {
              AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
              google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
            }
            v64 = this->uninterpreted_option_.current_size_;
            v65 = this->uninterpreted_option_.rep_;
            this->uninterpreted_option_.current_size_ = v64 + 1;
            v65->elements[v64] = AlignedAndAddCleanup;
LABEL_118:
            v66 = a2->buffer_;
            if ( a2->buffer_ < a2->buffer_end_
              && (VarintSizeAsIntFallback = *v66, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
            {
              a2->buffer_ = v66 + 1;
            }
            else
            {
              VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
              if ( VarintSizeAsIntFallback < 0 )
                return 0LL;
            }
            v68 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
                    a2,
                    VarintSizeAsIntFallback);
            first = v68.first;
            if ( v68.second < 0
              || !(unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
                                     AlignedAndAddCleanup,
                                     a2)
              || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
            {
              return 0LL;
            }
            goto LABEL_17;
          }
        }
        else
        {
          total_size = this->uninterpreted_option_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
        rep = this->uninterpreted_option_.rep_;
        allocated_size = rep->allocated_size;
        goto LABEL_113;
      }
LABEL_13:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v12 = ptr & 1;
      if ( TagFallback <= 0x1F3F )
        goto LABEL_21;
      if ( (ptr & 1) != 0 )
        v13 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                               &this->_extensions_,
                               TagFallback,
                               a2,
                               (const google::protobuf::Message *)&google::protobuf::_FileOptions_default_instance_,
                               v13) )
        return 0LL;
LABEL_17:
      buffer = a2->buffer_;
      buffer_end = a2->buffer_end_;
    }
    else
    {
      if ( !v10 )
        goto LABEL_26;
LABEL_9:
      switch ( v10 )
      {
        case 1u:
          if ( TagFallback != 10 )
            goto LABEL_20;
          v20 = this->java_package_.ptr_;
          this->_has_bits_.has_bits_[0] |= 1u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->java_package_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->java_package_.ptr_;
          }
          goto LABEL_105;
        case 8u:
          if ( TagFallback != 66 )
            goto LABEL_20;
          v20 = this->java_outer_classname_.ptr_;
          this->_has_bits_.has_bits_[0] |= 2u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->java_outer_classname_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->java_outer_classname_.ptr_;
          }
          goto LABEL_105;
        case 9u:
          if ( TagFallback != 72 )
            goto LABEL_20;
          v53 = a2->buffer_;
          if ( a2->buffer_ >= a2->buffer_end_ )
          {
            v54 = 0;
          }
          else
          {
            v54 = *v53;
            if ( *(char *)v53 >= 0 )
            {
              a2->buffer_ = v53 + 1;
              goto LABEL_95;
            }
          }
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v54);
          v54 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            return 0LL;
LABEL_95:
          if ( (unsigned int)(v54 - 1) <= 2 )
          {
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
            this->optimize_for_ = v54;
            this->_has_bits_.has_bits_[0] |= 0x20000u;
          }
          else
          {
            v56 = (unsigned __int64)this->_internal_metadata_.ptr_;
            if ( (v56 & 1) != 0 )
              v57 = (google::protobuf::UnknownFieldSet *)(v56 & 0xFFFFFFFFFFFFFFFELL);
            else
              v57 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
            google::protobuf::UnknownFieldSet::AddVarint(v57, 9, v54);
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          break;
        case 0xAu:
          if ( TagFallback != 80 )
            goto LABEL_20;
          v49 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x200u;
          if ( v49 < buffer_end && (v50 = *v49, (v50 & 0x80u) == 0LL) )
          {
            buffer = v49 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            second = Varint64Fallback.second;
            v50 = Varint64Fallback.first;
            if ( !second )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->java_multiple_files_ = v50 != 0;
          continue;
        case 0xBu:
          if ( TagFallback != 90 )
            goto LABEL_20;
          v20 = this->go_package_.ptr_;
          this->_has_bits_.has_bits_[0] |= 4u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->go_package_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->go_package_.ptr_;
          }
          goto LABEL_105;
        case 0x10u:
          if ( TagFallback != 128 )
            goto LABEL_20;
          v45 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x1000u;
          if ( v45 < buffer_end && (v46 = *v45, (v46 & 0x80u) == 0LL) )
          {
            buffer = v45 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v47 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v48 = v47.second;
            v46 = v47.first;
            if ( !v48 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->cc_generic_services_ = v46 != 0;
          continue;
        case 0x11u:
          if ( TagFallback != 136 )
            goto LABEL_20;
          v41 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x2000u;
          if ( v41 < buffer_end && (v42 = *v41, (v42 & 0x80u) == 0LL) )
          {
            buffer = v41 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v43 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v44 = v43.second;
            v42 = v43.first;
            if ( !v44 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->java_generic_services_ = v42 != 0;
          continue;
        case 0x12u:
          if ( TagFallback != 144 )
            goto LABEL_20;
          v37 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x4000u;
          if ( v37 < buffer_end && (v38 = *v37, (v38 & 0x80u) == 0LL) )
          {
            buffer = v37 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v39 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v40 = v39.second;
            v38 = v39.first;
            if ( !v40 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->py_generic_services_ = v38 != 0;
          continue;
        case 0x14u:
          if ( TagFallback != 160 )
            goto LABEL_20;
          v33 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x400u;
          if ( v33 < buffer_end && (v34 = *v33, (v34 & 0x80u) == 0LL) )
          {
            buffer = v33 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v35 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v36 = v35.second;
            v34 = v35.first;
            if ( !v36 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->java_generate_equals_and_hash_ = v34 != 0;
          continue;
        case 0x17u:
          if ( TagFallback != 184 )
            goto LABEL_20;
          v29 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x10000u;
          if ( v29 < buffer_end && (v30 = *v29, (v30 & 0x80u) == 0LL) )
          {
            buffer = v29 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v31 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v32 = v31.second;
            v30 = v31.first;
            if ( !v32 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->deprecated_ = v30 != 0;
          continue;
        case 0x1Bu:
          if ( TagFallback != 216 )
            goto LABEL_20;
          v25 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x800u;
          if ( v25 < buffer_end && (v26 = *v25, (v26 & 0x80u) == 0LL) )
          {
            buffer = v25 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v27 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v28 = v27.second;
            v26 = v27.first;
            if ( !v28 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->java_string_check_utf8_ = v26 != 0;
          continue;
        case 0x1Fu:
          if ( TagFallback != 248 )
            goto LABEL_20;
          v21 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x100u;
          if ( v21 < buffer_end && (v22 = *v21, (v22 & 0x80u) == 0LL) )
          {
            buffer = v21 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v23 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v24 = v23.second;
            v22 = v23.first;
            if ( !v24 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->cc_enable_arenas_ = v22 != 0;
          continue;
        case 0x24u:
          if ( (_BYTE)TagFallback != 34 )
            goto LABEL_20;
          v20 = this->objc_class_prefix_.ptr_;
          this->_has_bits_.has_bits_[0] |= 8u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->objc_class_prefix_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->objc_class_prefix_.ptr_;
          }
          goto LABEL_105;
        case 0x25u:
          if ( (_BYTE)TagFallback != 42 )
            goto LABEL_20;
          v20 = this->csharp_namespace_.ptr_;
          this->_has_bits_.has_bits_[0] |= 0x10u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->csharp_namespace_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->csharp_namespace_.ptr_;
          }
          goto LABEL_105;
        case 0x27u:
          if ( (_BYTE)TagFallback != 58 )
            goto LABEL_20;
          v20 = this->swift_prefix_.ptr_;
          this->_has_bits_.has_bits_[0] |= 0x20u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->swift_prefix_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->swift_prefix_.ptr_;
          }
          goto LABEL_105;
        case 0x28u:
          if ( (_BYTE)TagFallback != 66 )
            goto LABEL_20;
          v20 = this->php_class_prefix_.ptr_;
          this->_has_bits_.has_bits_[0] |= 0x40u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->php_class_prefix_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->php_class_prefix_.ptr_;
          }
          goto LABEL_105;
        case 0x29u:
          if ( (_BYTE)TagFallback != 74 )
            goto LABEL_20;
          v20 = this->php_namespace_.ptr_;
          this->_has_bits_.has_bits_[0] |= 0x80u;
          if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->php_namespace_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v20 = this->php_namespace_.ptr_;
          }
LABEL_105:
          if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v20) )
            return 0LL;
          goto LABEL_17;
        case 0x2Au:
          if ( (_BYTE)TagFallback != 80 )
            goto LABEL_20;
          v16 = a2->buffer_;
          buffer_end = a2->buffer_end_;
          this->_has_bits_.has_bits_[0] |= 0x8000u;
          if ( v16 < buffer_end && (v17 = *v16, (v17 & 0x80u) == 0LL) )
          {
            buffer = v16 + 1;
            a2->buffer_ = buffer;
          }
          else
          {
            v18 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
            v19 = v18.second;
            v17 = v18.first;
            if ( !v19 )
              return 0LL;
            buffer = a2->buffer_;
            buffer_end = a2->buffer_end_;
          }
          this->php_generic_services_ = v17 != 0;
          continue;
        default:
          goto handle_unusual_9;
      }
    }
  }
  a2->buffer_ = v8;
  v10 = TagFallback >> 3;
  if ( TagFallback >> 3 )
    goto LABEL_9;
LABEL_26:
  if ( TagFallback )
  {
LABEL_20:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v12 = ptr & 1;
LABEL_21:
    if ( v12 )
      v14 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v14) )
      return 0LL;
    goto LABEL_17;
  }
  return 1LL;
};

// Line 9314: range 000000000C926E30-000000000C92716D
void __fastcall google::protobuf::FileOptions::SerializeWithCachedSizes(
        const google::protobuf::FileOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  int current_size; // r13d
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->java_package_.ptr_, output);
    if ( (v2 & 2) == 0 )
    {
LABEL_3:
      if ( (v2 & 0x20000) == 0 )
        goto LABEL_4;
      goto LABEL_27;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(8LL, this->java_outer_classname_.ptr_, output);
  if ( (v2 & 0x20000) == 0 )
  {
LABEL_4:
    if ( (v2 & 0x200) == 0 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_27:
  google::protobuf::internal::WireFormatLite::WriteEnum(9, this->optimize_for_, output);
  if ( (v2 & 0x200) == 0 )
  {
LABEL_5:
    if ( (v2 & 4) == 0 )
      goto LABEL_6;
    goto LABEL_29;
  }
LABEL_28:
  google::protobuf::internal::WireFormatLite::WriteBool(10, this->java_multiple_files_, output);
  if ( (v2 & 4) == 0 )
  {
LABEL_6:
    if ( (v2 & 0x1000) == 0 )
      goto LABEL_7;
    goto LABEL_30;
  }
LABEL_29:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(11LL, this->go_package_.ptr_, output);
  if ( (v2 & 0x1000) == 0 )
  {
LABEL_7:
    if ( (v2 & 0x2000) == 0 )
      goto LABEL_8;
    goto LABEL_31;
  }
LABEL_30:
  google::protobuf::internal::WireFormatLite::WriteBool(16, this->cc_generic_services_, output);
  if ( (v2 & 0x2000) == 0 )
  {
LABEL_8:
    if ( (v2 & 0x4000) == 0 )
      goto LABEL_9;
    goto LABEL_32;
  }
LABEL_31:
  google::protobuf::internal::WireFormatLite::WriteBool(17, this->java_generic_services_, output);
  if ( (v2 & 0x4000) == 0 )
  {
LABEL_9:
    if ( (v2 & 0x400) == 0 )
      goto LABEL_10;
    goto LABEL_33;
  }
LABEL_32:
  google::protobuf::internal::WireFormatLite::WriteBool(18, this->py_generic_services_, output);
  if ( (v2 & 0x400) == 0 )
  {
LABEL_10:
    if ( (v2 & 0x10000) == 0 )
      goto LABEL_11;
    goto LABEL_34;
  }
LABEL_33:
  google::protobuf::internal::WireFormatLite::WriteBool(20, this->java_generate_equals_and_hash_, output);
  if ( (v2 & 0x10000) == 0 )
  {
LABEL_11:
    if ( (v2 & 0x800) == 0 )
      goto LABEL_12;
    goto LABEL_35;
  }
LABEL_34:
  google::protobuf::internal::WireFormatLite::WriteBool(23, this->deprecated_, output);
  if ( (v2 & 0x800) == 0 )
  {
LABEL_12:
    if ( (v2 & 0x100) == 0 )
      goto LABEL_13;
    goto LABEL_36;
  }
LABEL_35:
  google::protobuf::internal::WireFormatLite::WriteBool(27, this->java_string_check_utf8_, output);
  if ( (v2 & 0x100) == 0 )
  {
LABEL_13:
    if ( (v2 & 8) == 0 )
      goto LABEL_14;
    goto LABEL_37;
  }
LABEL_36:
  google::protobuf::internal::WireFormatLite::WriteBool(31, this->cc_enable_arenas_, output);
  if ( (v2 & 8) == 0 )
  {
LABEL_14:
    if ( (v2 & 0x10) == 0 )
      goto LABEL_15;
    goto LABEL_38;
  }
LABEL_37:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(36LL, this->objc_class_prefix_.ptr_, output);
  if ( (v2 & 0x10) == 0 )
  {
LABEL_15:
    if ( (v2 & 0x20) == 0 )
      goto LABEL_16;
    goto LABEL_39;
  }
LABEL_38:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(37LL, this->csharp_namespace_.ptr_, output);
  if ( (v2 & 0x20) == 0 )
  {
LABEL_16:
    if ( (v2 & 0x40) == 0 )
      goto LABEL_17;
    goto LABEL_40;
  }
LABEL_39:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(39LL, this->swift_prefix_.ptr_, output);
  if ( (v2 & 0x40) == 0 )
  {
LABEL_17:
    if ( (v2 & 0x80u) == 0 )
      goto LABEL_18;
LABEL_41:
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(41LL, this->php_namespace_.ptr_, output);
    if ( (v2 & 0x8000) == 0 )
      goto LABEL_19;
    goto LABEL_42;
  }
LABEL_40:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(40LL, this->php_class_prefix_.ptr_, output);
  if ( (v2 & 0x80u) != 0 )
    goto LABEL_41;
LABEL_18:
  if ( (v2 & 0x8000) == 0 )
    goto LABEL_19;
LABEL_42:
  google::protobuf::internal::WireFormatLite::WriteBool(42, this->php_generic_services_, output);
LABEL_19:
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v5],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 9470: range 000000000C925570-000000000C925868
google::protobuf::uint8 *__fastcall google::protobuf::FileOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FileOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // rax
  google::protobuf::uint32 v5; // ebx
  unsigned __int64 optimize_for; // rcx
  _BYTE *v7; // rax
  char v8; // dl
  bool java_multiple_files; // dl
  bool cc_generic_services; // dl
  bool java_generic_services; // dl
  bool py_generic_services; // dl
  bool java_generate_equals_and_hash; // dl
  bool deprecated; // dl
  bool java_string_check_utf8; // dl
  bool cc_enable_arenas; // dl
  std::string *v17; // rdi
  std::string *v18; // rdi
  std::string *v19; // rdi
  std::string *v20; // rdi
  std::string *v21; // rdi
  bool php_generic_services; // dl
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v25; // rdi
  _BYTE *v26; // rdx
  unsigned int j; // eax
  char v28; // cl
  google::protobuf::uint8 *v29; // r12
  unsigned __int64 v30; // rax
  std::string *v32; // rdi
  std::string *ptr; // rdi
  std::string *v34; // rdi

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ptr = this->java_package_.ptr_;
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  if ( (v5 & 2) != 0 )
  {
    v32 = this->java_outer_classname_.ptr_;
    *v3 = 66;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v32, v3 + 1);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    optimize_for = this->optimize_for_;
    v7 = v3 + 1;
    for ( *(v7 - 1) = 72; optimize_for > 0x7F; *(v7 - 1) = v8 | 0x80 )
    {
      v8 = optimize_for;
      optimize_for >>= 7;
      ++v7;
    }
    *v7 = optimize_for;
    v3 = v7 + 1;
  }
  if ( (v5 & 0x200) != 0 )
  {
    java_multiple_files = this->java_multiple_files_;
    v3 += 2;
    *(v3 - 2) = 80;
    *(v3 - 1) = java_multiple_files;
  }
  if ( (v5 & 4) != 0 )
  {
    v34 = this->go_package_.ptr_;
    *v3 = 90;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v34, v3 + 1);
  }
  if ( (v5 & 0x1000) != 0 )
  {
    cc_generic_services = this->cc_generic_services_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 384;
    *(v3 - 1) = cc_generic_services;
  }
  if ( (v5 & 0x2000) != 0 )
  {
    java_generic_services = this->java_generic_services_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 392;
    *(v3 - 1) = java_generic_services;
  }
  if ( (v5 & 0x4000) != 0 )
  {
    py_generic_services = this->py_generic_services_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 400;
    *(v3 - 1) = py_generic_services;
  }
  if ( (v5 & 0x400) != 0 )
  {
    java_generate_equals_and_hash = this->java_generate_equals_and_hash_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 416;
    *(v3 - 1) = java_generate_equals_and_hash;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    deprecated = this->deprecated_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 440;
    *(v3 - 1) = deprecated;
  }
  if ( (v5 & 0x800) != 0 )
  {
    java_string_check_utf8 = this->java_string_check_utf8_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 472;
    *(v3 - 1) = java_string_check_utf8;
  }
  if ( (v5 & 0x100) != 0 )
  {
    cc_enable_arenas = this->cc_enable_arenas_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 504;
    *(v3 - 1) = cc_enable_arenas;
  }
  if ( (v5 & 8) != 0 )
  {
    v17 = this->objc_class_prefix_.ptr_;
    *(_WORD *)v3 = 674;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v17, v3 + 2);
  }
  if ( (v5 & 0x10) != 0 )
  {
    v18 = this->csharp_namespace_.ptr_;
    *(_WORD *)v3 = 682;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v18, v3 + 2);
  }
  if ( (v5 & 0x20) != 0 )
  {
    v19 = this->swift_prefix_.ptr_;
    *(_WORD *)v3 = 698;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v19, v3 + 2);
  }
  if ( (v5 & 0x40) != 0 )
  {
    v20 = this->php_class_prefix_.ptr_;
    *(_WORD *)v3 = 706;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v20, v3 + 2);
  }
  if ( (v5 & 0x80u) != 0 )
  {
    v21 = this->php_namespace_.ptr_;
    *(_WORD *)v3 = 714;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v21, v3 + 2);
  }
  if ( (v5 & 0x8000) != 0 )
  {
    php_generic_services = this->php_generic_services_;
    v3 += 3;
    *(_WORD *)(v3 - 3) = 720;
    *(v3 - 1) = php_generic_services;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v25 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)v3 = 16058;
      v26 = v3 + 2;
      for ( j = v25->_cached_size_; j > 0x7F; *(v26 - 1) = v28 | 0x80 )
      {
        v28 = j;
        j >>= 7;
        ++v26;
      }
      *v26 = j;
      v3 = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v25, deterministic, v26 + 1);
    }
  }
  v29 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          v3);
  v30 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v30 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v30 & 0xFFFFFFFFFFFFFFFELL),
             v29);
  else
    return v29;
};

// Line 9636: range 000000000C927AF0-000000000C927D6E
size_t __fastcall google::protobuf::FileOptions::ByteSizeLong(const google::protobuf::FileOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  google::protobuf::uint32 v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  int optimize_for; // eax
  __int64 v20; // rax
  unsigned int v22; // edx

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (_BYTE)v11 )
  {
    if ( (v11 & 1) != 0 )
    {
      _BitScanReverse(&v12, this->java_package_.ptr_->_M_string_length | 1);
      v6 += this->java_package_.ptr_->_M_string_length + 1 + ((9 * v12 + 73) >> 6);
    }
    if ( (v11 & 2) != 0 )
    {
      _BitScanReverse(&v13, this->java_outer_classname_.ptr_->_M_string_length | 1);
      v6 += this->java_outer_classname_.ptr_->_M_string_length + 1 + ((9 * v13 + 73) >> 6);
    }
    if ( (v11 & 4) != 0 )
    {
      _BitScanReverse(&v14, this->go_package_.ptr_->_M_string_length | 1);
      v6 += this->go_package_.ptr_->_M_string_length + 1 + ((9 * v14 + 73) >> 6);
    }
    if ( (v11 & 8) != 0 )
    {
      _BitScanReverse(&v15, this->objc_class_prefix_.ptr_->_M_string_length | 1);
      v6 += this->objc_class_prefix_.ptr_->_M_string_length + 2 + ((9 * v15 + 73) >> 6);
    }
    if ( (v11 & 0x10) != 0 )
    {
      _BitScanReverse(&v16, this->csharp_namespace_.ptr_->_M_string_length | 1);
      v6 += this->csharp_namespace_.ptr_->_M_string_length + 2 + ((9 * v16 + 73) >> 6);
    }
    if ( (v11 & 0x20) != 0 )
    {
      _BitScanReverse(&v17, this->swift_prefix_.ptr_->_M_string_length | 1);
      v6 += this->swift_prefix_.ptr_->_M_string_length + 2 + ((9 * v17 + 73) >> 6);
    }
    if ( (v11 & 0x40) != 0 )
    {
      _BitScanReverse(&v18, this->php_class_prefix_.ptr_->_M_string_length | 1);
      v6 += this->php_class_prefix_.ptr_->_M_string_length + 2 + ((9 * v18 + 73) >> 6);
    }
    if ( (v11 & 0x80u) != 0 )
    {
      _BitScanReverse(&v22, this->php_namespace_.ptr_->_M_string_length | 1);
      v6 += this->php_namespace_.ptr_->_M_string_length + 2 + ((9 * v22 + 73) >> 6);
    }
  }
  if ( BYTE1(v11) )
  {
    if ( (v11 & 0x100) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x200) != 0 )
      v6 += 2LL;
    if ( (v11 & 0x400) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x800) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x1000) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x2000) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x4000) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x8000) != 0 )
      v6 += 3LL;
  }
  if ( (v11 & 0x30000) != 0 )
  {
    if ( (v11 & 0x10000) != 0 )
      v6 += 3LL;
    if ( (v11 & 0x20000) != 0 )
    {
      optimize_for = this->optimize_for_;
      if ( optimize_for < 0 )
      {
        v20 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&optimize_for, optimize_for | 1);
        v20 = (unsigned int)(9 * optimize_for + 73) >> 6;
      }
      v6 += v20 + 1;
    }
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 9778: range 000000000C93EAF0-000000000C93EB3D
void __fastcall google::protobuf::FileOptions::MergeFrom(
        google::protobuf::FileOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FileOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FileOptions *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::FileOptions,
                                                0LL);
  if ( v2 )
    google::protobuf::FileOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 9793: range 000000000C93E6B0-000000000C93EAE4
void __fastcall google::protobuf::FileOptions::MergeFrom(
        google::protobuf::FileOptions *const this,
        const google::protobuf::FileOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // ebp
  google::protobuf::uint32 v9; // ebp
  std::string *v10; // rdi
  std::string *v11; // rsi
  std::string *v12; // rdi
  std::string *v13; // rsi
  std::string *v14; // rdi
  std::string *v15; // rsi
  std::string *v16; // rdi
  std::string *v17; // rsi
  std::string *v18; // rdi
  std::string *v19; // rsi
  std::string *v20; // rdi
  std::string *v21; // rsi
  std::string *v22; // rdi
  std::string *v23; // rsi
  std::string *v24; // rdi
  std::string *v25; // rsi
  void **elements; // r13
  void **v27; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v29; // ebp

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v27 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v27,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v29 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v29;
    if ( v29 > rep->allocated_size )
      rep->allocated_size = v29;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (_BYTE)v9 )
  {
    if ( (v9 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v24 = this->java_package_.ptr_;
      v25 = from->java_package_.ptr_;
      if ( v25 != v24 )
      {
        if ( v24 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->java_package_,
            (unsigned __int8 **)v25);
        else
          std::string::_M_assign(v24, v25);
      }
    }
    if ( (v9 & 2) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 2u;
      v10 = this->java_outer_classname_.ptr_;
      v11 = from->java_outer_classname_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->java_outer_classname_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
      }
    }
    if ( (v9 & 4) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 4u;
      v12 = this->go_package_.ptr_;
      v13 = from->go_package_.ptr_;
      if ( v13 != v12 )
      {
        if ( v12 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->go_package_,
            (unsigned __int8 **)v13);
        else
          std::string::_M_assign(v12, v13);
      }
    }
    if ( (v9 & 8) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 8u;
      v14 = this->objc_class_prefix_.ptr_;
      v15 = from->objc_class_prefix_.ptr_;
      if ( v15 != v14 )
      {
        if ( v14 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->objc_class_prefix_,
            (unsigned __int8 **)v15);
        else
          std::string::_M_assign(v14, v15);
      }
    }
    if ( (v9 & 0x10) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 0x10u;
      v16 = this->csharp_namespace_.ptr_;
      v17 = from->csharp_namespace_.ptr_;
      if ( v17 != v16 )
      {
        if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->csharp_namespace_,
            (unsigned __int8 **)v17);
        else
          std::string::_M_assign(v16, v17);
      }
    }
    if ( (v9 & 0x20) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 0x20u;
      v18 = this->swift_prefix_.ptr_;
      v19 = from->swift_prefix_.ptr_;
      if ( v19 != v18 )
      {
        if ( v18 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->swift_prefix_,
            (unsigned __int8 **)v19);
        else
          std::string::_M_assign(v18, v19);
      }
    }
    if ( (v9 & 0x40) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 0x40u;
      v20 = this->php_class_prefix_.ptr_;
      v21 = from->php_class_prefix_.ptr_;
      if ( v21 != v20 )
      {
        if ( v20 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->php_class_prefix_,
            (unsigned __int8 **)v21);
        else
          std::string::_M_assign(v20, v21);
      }
    }
    if ( (v9 & 0x80u) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 0x80u;
      v22 = this->php_namespace_.ptr_;
      v23 = from->php_namespace_.ptr_;
      if ( v23 != v22 )
      {
        if ( v22 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->php_namespace_,
            (unsigned __int8 **)v23);
        else
          std::string::_M_assign(v22, v23);
      }
    }
  }
  if ( (v9 & 0xFF00) != 0 )
  {
    if ( (v9 & 0x100) != 0 )
      this->cc_enable_arenas_ = from->cc_enable_arenas_;
    if ( (v9 & 0x200) != 0 )
      this->java_multiple_files_ = from->java_multiple_files_;
    if ( (v9 & 0x400) != 0 )
      this->java_generate_equals_and_hash_ = from->java_generate_equals_and_hash_;
    if ( (v9 & 0x800) != 0 )
      this->java_string_check_utf8_ = from->java_string_check_utf8_;
    if ( (v9 & 0x1000) != 0 )
      this->cc_generic_services_ = from->cc_generic_services_;
    if ( (v9 & 0x2000) != 0 )
      this->java_generic_services_ = from->java_generic_services_;
    if ( (v9 & 0x4000) != 0 )
      this->py_generic_services_ = from->py_generic_services_;
    if ( (v9 & 0x8000) != 0 )
      this->php_generic_services_ = from->php_generic_services_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
  if ( (v9 & 0x30000) != 0 )
  {
    if ( (v9 & 0x10000) != 0 )
      this->deprecated_ = from->deprecated_;
    if ( (v9 & 0x20000) != 0 )
      this->optimize_for_ = from->optimize_for_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
};

// Line 9877: range 000000000C93EB50-000000000C93EB80
void __fastcall google::protobuf::FileOptions::CopyFrom(
        google::protobuf::FileOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::FileOptions::Clear(this);
    google::protobuf::FileOptions::MergeFrom(this, from);
  }
};

// Line 9884: range 000000000C93EB90-000000000C93EBC0
void __fastcall google::protobuf::FileOptions::CopyFrom(
        google::protobuf::FileOptions *const this,
        const google::protobuf::FileOptions *from)
{
  if ( from != this )
  {
    google::protobuf::FileOptions::Clear(this);
    google::protobuf::FileOptions::MergeFrom(this, from);
  }
};

// Line 9889: range 000000000C928FB0-000000000C929009
bool __fastcall google::protobuf::FileOptions::IsInitialized(const google::protobuf::FileOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 9899: range 000000000C9305A0-000000000C9305B0
void __fastcall google::protobuf::FileOptions::Swap(
        google::protobuf::FileOptions *const this,
        google::protobuf::FileOptions *other)
{
  if ( other != this )
    google::protobuf::FileOptions::InternalSwap(this, other);
};

// Line 9902: range 000000000C930310-000000000C93059B
void __fastcall google::protobuf::FileOptions::InternalSwap(
        google::protobuf::FileOptions *const this,
        google::protobuf::FileOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  std::string *v7; // rdx
  std::string *v8; // rax
  std::string *v9; // rdx
  std::string *v10; // rax
  std::string *v11; // rdx
  std::string *v12; // rax
  std::string *v13; // rdx
  std::string *v14; // rax
  std::string *v15; // rdx
  std::string *v16; // rax
  std::string *v17; // rdx
  std::string *v18; // rax
  std::string *v19; // rdx
  std::string *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rcx
  int cached_size; // eax
  int v27; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v29; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  ptr = other->java_package_.ptr_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  v6 = this->java_package_.ptr_;
  this->java_package_.ptr_ = ptr;
  v7 = other->java_outer_classname_.ptr_;
  other->java_package_.ptr_ = v6;
  v8 = this->java_outer_classname_.ptr_;
  this->java_outer_classname_.ptr_ = v7;
  v9 = other->go_package_.ptr_;
  other->java_outer_classname_.ptr_ = v8;
  v10 = this->go_package_.ptr_;
  this->go_package_.ptr_ = v9;
  v11 = other->objc_class_prefix_.ptr_;
  other->go_package_.ptr_ = v10;
  v12 = this->objc_class_prefix_.ptr_;
  this->objc_class_prefix_.ptr_ = v11;
  v13 = other->csharp_namespace_.ptr_;
  other->objc_class_prefix_.ptr_ = v12;
  v14 = this->csharp_namespace_.ptr_;
  this->csharp_namespace_.ptr_ = v13;
  v15 = other->swift_prefix_.ptr_;
  other->csharp_namespace_.ptr_ = v14;
  v16 = this->swift_prefix_.ptr_;
  this->swift_prefix_.ptr_ = v15;
  v17 = other->php_class_prefix_.ptr_;
  other->swift_prefix_.ptr_ = v16;
  v18 = this->php_class_prefix_.ptr_;
  this->php_class_prefix_.ptr_ = v17;
  v19 = other->php_namespace_.ptr_;
  other->php_class_prefix_.ptr_ = v18;
  v20 = this->php_namespace_.ptr_;
  this->php_namespace_.ptr_ = v19;
  LOBYTE(v19) = other->cc_enable_arenas_;
  other->php_namespace_.ptr_ = v20;
  LOBYTE(v20) = this->cc_enable_arenas_;
  this->cc_enable_arenas_ = (char)v19;
  LOBYTE(v19) = other->java_multiple_files_;
  other->cc_enable_arenas_ = (char)v20;
  LOBYTE(v20) = this->java_multiple_files_;
  this->java_multiple_files_ = (char)v19;
  LOBYTE(v19) = other->java_generate_equals_and_hash_;
  other->java_multiple_files_ = (char)v20;
  LOBYTE(v20) = this->java_generate_equals_and_hash_;
  this->java_generate_equals_and_hash_ = (char)v19;
  LOBYTE(v19) = other->java_string_check_utf8_;
  other->java_generate_equals_and_hash_ = (char)v20;
  LOBYTE(v20) = this->java_string_check_utf8_;
  this->java_string_check_utf8_ = (char)v19;
  LOBYTE(v19) = other->cc_generic_services_;
  other->java_string_check_utf8_ = (char)v20;
  LOBYTE(v20) = this->cc_generic_services_;
  this->cc_generic_services_ = (char)v19;
  other->cc_generic_services_ = (char)v20;
  LOBYTE(v20) = this->java_generic_services_;
  this->java_generic_services_ = other->java_generic_services_;
  LOBYTE(v19) = other->py_generic_services_;
  other->java_generic_services_ = (char)v20;
  LOBYTE(v20) = this->py_generic_services_;
  this->py_generic_services_ = (char)v19;
  LOBYTE(v19) = other->php_generic_services_;
  other->py_generic_services_ = (char)v20;
  LOBYTE(v20) = this->php_generic_services_;
  this->php_generic_services_ = (char)v19;
  LOBYTE(v19) = other->deprecated_;
  other->php_generic_services_ = (char)v20;
  LOBYTE(v20) = this->deprecated_;
  this->deprecated_ = (char)v19;
  LODWORD(v19) = other->optimize_for_;
  other->deprecated_ = (char)v20;
  LODWORD(v20) = this->optimize_for_;
  this->optimize_for_ = (int)v19;
  LODWORD(v19) = other->_has_bits_.has_bits_[0];
  other->optimize_for_ = (int)v20;
  LODWORD(v20) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)v19;
  v21 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v20;
  v22 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v22 & 1) != 0 )
  {
    if ( (v21 & 1) == 0 )
    {
      v23 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v22 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v21 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v22 & 1) != 0 )
  {
    v24 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v29 = v23;
    v24 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v23 = v29;
  }
  v25 = *v24;
  *v24 = *v23;
  *v23 = v25;
LABEL_7:
  cached_size = this->_cached_size_;
  v27 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v27;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 10724: range 000000000C933AE0-000000000C933B88
void __fastcall google::protobuf::MessageOptions::MessageOptions(google::protobuf::MessageOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A1803E8;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::MessageOptions *)&google::protobuf::_MessageOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  *(_DWORD *)&this->message_set_wire_format_ = 0;
};

// Line 10732: range 000000000C93BBA0-000000000C93BCC7
__int64 __fastcall google::protobuf::MessageOptions::MessageOptions(
        google::protobuf::MessageOptions *this,
        const google::protobuf::MessageOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A1803E8;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = *(unsigned int *)&a2->message_set_wire_format_;
  *(_DWORD *)&this->message_set_wire_format_ = result;
  return result;
};

// Line 10747: range 000000000C92C6E0-000000000C92C6EE
void __fastcall google::protobuf::MessageOptions::SharedCtor(google::protobuf::MessageOptions *const this)
{
  this->_cached_size_ = 0;
  *(_DWORD *)&this->message_set_wire_format_ = 0;
};

// Line 10753: range 000000000C933BE0-000000000C933C03
void __fastcall google::protobuf::MessageOptions::~MessageOptions(google::protobuf::MessageOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A1803E8;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 10753: range 000000000C933C10-000000000C933C22
void __fastcall google::protobuf::MessageOptions::~MessageOptions(google::protobuf::MessageOptions *const this)
{
  google::protobuf::MessageOptions::~MessageOptions(this);
  operator delete(this, 0x70uLL);
};

// Line 10763: range 000000000C9240B0-000000000C9240B3
void __fastcall google::protobuf::MessageOptions::SetCachedSize(
        const google::protobuf::MessageOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 10776: range 000000000C933B90-000000000C933BCD
google::protobuf::MessageOptions *__fastcall google::protobuf::MessageOptions::New(
        google::protobuf::MessageOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::MessageOptions *v2; // r12

  v2 = (google::protobuf::MessageOptions *)operator new(0x70uLL);
  google::protobuf::MessageOptions::MessageOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::MessageOptions>(a2, v2);
  return v2;
};

// Line 10777: range 000000000C73150C-000000000C73151C
void __fastcall __noreturn google::protobuf::MessageOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 10784: range 000000000C931130-000000000C931187
void __fastcall google::protobuf::MessageOptions::Clear(google::protobuf::MessageOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  if ( (this->_has_bits_.has_bits_[0] & 0xF) != 0 )
    *(_DWORD *)&this->message_set_wire_format_ = 0;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 10803: range 000000000C9374F0-000000000C937965
__int64 __fastcall google::protobuf::MessageOptions::MergePartialFromCodedStream(
        google::protobuf::MessageOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r12
  const google::protobuf::uint8 *buffer_end; // rdi
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rcx
  unsigned int v9; // eax
  bool v10; // cc
  unsigned __int64 ptr; // r8
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // rdi
  unsigned __int64 v13; // rax
  google::protobuf::UnknownFieldSet *v14; // rdx
  google::protobuf::UnknownFieldSet *v15; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  __int64 v23; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rdx
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v27; // rax
  int first; // r14d

  p_extensions = &this->_extensions_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( *(_QWORD *)&Varint64Fallback.second >= (unsigned __int64)buffer_end )
      {
        while ( 1 )
        {
          TagFallback = 0;
LABEL_18:
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
          if ( TagFallback - 1 <= 0x3FFE )
            break;
          if ( !TagFallback )
            return 1LL;
          ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
          p_internal_metadata = &this->_internal_metadata_;
          v13 = ptr & 1;
LABEL_21:
          if ( v13 )
            v15 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
          else
            v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
          if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                                   p_extensions,
                                   TagFallback,
                                   a2,
                                   (const google::protobuf::Message *)&google::protobuf::_MessageOptions_default_instance_,
                                   v15) )
            return 0LL;
LABEL_16:
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
          if ( a2->buffer_ < buffer_end )
            goto LABEL_3;
        }
LABEL_7:
        v9 = TagFallback >> 3;
        v10 = TagFallback >> 3 <= 3;
        if ( TagFallback >> 3 != 3 )
          goto LABEL_8;
LABEL_44:
        if ( TagFallback != 24 )
          goto LABEL_12;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 4u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->deprecated_ = Varint64Fallback.first != 0;
      }
LABEL_3:
      TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
      v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
      if ( (char)TagFallback <= 0 )
      {
        if ( v8 < buffer_end )
        {
          LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
          if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
          {
            a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
            TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
            goto LABEL_7;
          }
        }
        goto LABEL_18;
      }
      a2->buffer_ = v8;
      v9 = TagFallback >> 3;
      v10 = TagFallback >> 3 <= 3;
      if ( TagFallback >> 3 == 3 )
        goto LABEL_44;
LABEL_8:
      if ( !v10 )
        break;
      if ( v9 == 1 )
      {
        if ( TagFallback != 8 )
          goto LABEL_12;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 1u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->message_set_wire_format_ = Varint64Fallback.first != 0;
      }
      else
      {
        if ( v9 != 2 )
        {
          if ( !TagFallback )
            return 1LL;
          goto LABEL_12;
        }
        if ( TagFallback != 16 )
          goto LABEL_12;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->no_standard_descriptor_accessor_ = Varint64Fallback.first != 0;
      }
    }
    if ( v9 != 7 )
      break;
    if ( TagFallback != 56 )
      goto LABEL_12;
    *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    buffer_end = a2->buffer_end_;
    this->_has_bits_.has_bits_[0] |= 8u;
    if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
      && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
          SLOBYTE(Varint64Fallback.first) >= 0) )
    {
      a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
    }
    else
    {
      Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
      if ( !Varint64Fallback.second )
        return 0LL;
      buffer_end = a2->buffer_end_;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    }
    this->map_entry_ = Varint64Fallback.first != 0;
  }
  if ( v9 != 999 )
  {
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    p_internal_metadata = &this->_internal_metadata_;
    v13 = ptr & 1;
    if ( TagFallback > 0x1F3F )
      goto LABEL_21;
    goto LABEL_13;
  }
  if ( (_BYTE)TagFallback != 58 )
  {
LABEL_12:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    p_internal_metadata = &this->_internal_metadata_;
    v13 = ptr & 1;
LABEL_13:
    if ( v13 )
      v14 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v14) )
      goto LABEL_16;
    return 0LL;
  }
  rep = this->uninterpreted_option_.rep_;
  if ( rep )
  {
    current_size = this->uninterpreted_option_.current_size_;
    allocated_size = rep->allocated_size;
    if ( (int)current_size >= rep->allocated_size )
    {
      total_size = this->uninterpreted_option_.total_size_;
      if ( allocated_size != total_size )
        goto LABEL_31;
      goto LABEL_80;
    }
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
    this->uninterpreted_option_.current_size_ = current_size + 1;
  }
  else
  {
    total_size = this->uninterpreted_option_.total_size_;
LABEL_80:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
    rep = this->uninterpreted_option_.rep_;
    allocated_size = rep->allocated_size;
LABEL_31:
    arena = this->uninterpreted_option_.arena_;
    rep->allocated_size = allocated_size + 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
          0x60uLL);
      AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                        &arena->impl_,
                                                                        0x60uLL,
                                                                        google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
      google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
    }
    else
    {
      AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
      google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
    }
    v23 = this->uninterpreted_option_.current_size_;
    v24 = this->uninterpreted_option_.rep_;
    this->uninterpreted_option_.current_size_ = v23 + 1;
    v24->elements[v23] = AlignedAndAddCleanup;
  }
  buffer = a2->buffer_;
  if ( a2->buffer_ < a2->buffer_end_
    && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
  {
    a2->buffer_ = buffer + 1;
LABEL_39:
    v27 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
    first = v27.first;
    if ( v27.second >= 0
      && (unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
      && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
    {
      goto LABEL_16;
    }
  }
  else
  {
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
    if ( VarintSizeAsIntFallback >= 0 )
      goto LABEL_39;
  }
  return 0LL;
};

// Line 10907: range 000000000C927180-000000000C92728F
void __fastcall google::protobuf::MessageOptions::SerializeWithCachedSizes(
        const google::protobuf::MessageOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  int current_size; // r12d
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(1, this->message_set_wire_format_, output);
    if ( (v2 & 2) == 0 )
    {
LABEL_3:
      if ( (v2 & 4) == 0 )
        goto LABEL_4;
LABEL_13:
      google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated_, output);
      if ( (v2 & 8) == 0 )
        goto LABEL_5;
      goto LABEL_14;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(2, this->no_standard_descriptor_accessor_, output);
  if ( (v2 & 4) != 0 )
    goto LABEL_13;
LABEL_4:
  if ( (v2 & 8) == 0 )
    goto LABEL_5;
LABEL_14:
  google::protobuf::internal::WireFormatLite::WriteBool(7, this->map_entry_, output);
LABEL_5:
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v5],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 10952: range 000000000C925870-000000000C92598D
google::protobuf::uint8 *__fastcall google::protobuf::MessageOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::MessageOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v5; // eax
  bool message_set_wire_format; // dl
  bool no_standard_descriptor_accessor; // dl
  bool deprecated; // dl
  bool map_entry; // al
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v12; // rdi
  google::protobuf::uint8 *v13; // rdx
  unsigned int j; // eax
  char v15; // cl
  google::protobuf::uint8 *v16; // r12
  unsigned __int64 ptr; // rax

  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    message_set_wire_format = this->message_set_wire_format_;
    target += 2;
    *(target - 2) = 8;
    *(target - 1) = message_set_wire_format;
  }
  if ( (v5 & 2) != 0 )
  {
    no_standard_descriptor_accessor = this->no_standard_descriptor_accessor_;
    target += 2;
    *(target - 2) = 16;
    *(target - 1) = no_standard_descriptor_accessor;
  }
  if ( (v5 & 4) != 0 )
  {
    deprecated = this->deprecated_;
    target += 2;
    *(target - 2) = 24;
    *(target - 1) = deprecated;
  }
  if ( (v5 & 8) != 0 )
  {
    map_entry = this->map_entry_;
    target += 2;
    *(target - 2) = 56;
    *(target - 1) = map_entry;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v12 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      v13 = target + 2;
      *(_WORD *)target = 16058;
      for ( j = v12->_cached_size_; j > 0x7F; *(v13 - 1) = v15 | 0x80 )
      {
        v15 = j;
        j >>= 7;
        ++v13;
      }
      *v13 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(
                 v12,
                 deterministic,
                 v13 + 1);
    }
  }
  v16 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v16);
  else
    return v16;
};

// Line 10999: range 000000000C927D70-000000000C927E2B
size_t __fastcall google::protobuf::MessageOptions::ByteSizeLong(const google::protobuf::MessageOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  google::protobuf::uint32 v11; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (v11 & 0xF) != 0 )
  {
    if ( (v11 & 1) != 0 )
      v6 += 2LL;
    if ( (v11 & 2) != 0 )
      v6 += 2LL;
    if ( (v11 & 4) != 0 )
      v6 += 2LL;
    if ( (v11 & 8) != 0 )
      v6 += 2LL;
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 11050: range 000000000C93D210-000000000C93D25D
void __fastcall google::protobuf::MessageOptions::MergeFrom(
        google::protobuf::MessageOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::MessageOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::MessageOptions *)__dynamic_cast(
                                                   from,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::MessageOptions,
                                                   0LL);
  if ( v2 )
    google::protobuf::MessageOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 11065: range 000000000C93D100-000000000C93D206
void __fastcall google::protobuf::MessageOptions::MergeFrom(
        google::protobuf::MessageOptions *const this,
        const google::protobuf::MessageOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // eax
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 0xF) != 0 )
  {
    if ( (v9 & 1) != 0 )
      this->message_set_wire_format_ = from->message_set_wire_format_;
    if ( (v9 & 2) != 0 )
      this->no_standard_descriptor_accessor_ = from->no_standard_descriptor_accessor_;
    if ( (v9 & 4) != 0 )
      this->deprecated_ = from->deprecated_;
    if ( (v9 & 8) != 0 )
      this->map_entry_ = from->map_entry_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
};

// Line 11094: range 000000000C93D270-000000000C93D2A0
void __fastcall google::protobuf::MessageOptions::CopyFrom(
        google::protobuf::MessageOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::MessageOptions::Clear(this);
    google::protobuf::MessageOptions::MergeFrom(this, from);
  }
};

// Line 11101: range 000000000C93D2B0-000000000C93D2E0
void __fastcall google::protobuf::MessageOptions::CopyFrom(
        google::protobuf::MessageOptions *const this,
        const google::protobuf::MessageOptions *from)
{
  if ( from != this )
  {
    google::protobuf::MessageOptions::Clear(this);
    google::protobuf::MessageOptions::MergeFrom(this, from);
  }
};

// Line 11106: range 000000000C929010-000000000C929069
bool __fastcall google::protobuf::MessageOptions::IsInitialized(const google::protobuf::MessageOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 11116: range 000000000C92FC70-000000000C92FC80
void __fastcall google::protobuf::MessageOptions::Swap(
        google::protobuf::MessageOptions *const this,
        google::protobuf::MessageOptions *other)
{
  if ( other != this )
    google::protobuf::MessageOptions::InternalSwap(this, other);
};

// Line 11119: range 000000000C92FB70-000000000C92FC6B
void __fastcall google::protobuf::MessageOptions::InternalSwap(
        google::protobuf::MessageOptions *const this,
        google::protobuf::MessageOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  LOBYTE(total_size) = other->message_set_wire_format_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LOBYTE(rep) = this->message_set_wire_format_;
  this->message_set_wire_format_ = total_size;
  LOBYTE(total_size) = other->no_standard_descriptor_accessor_;
  other->message_set_wire_format_ = (char)rep;
  LOBYTE(rep) = this->no_standard_descriptor_accessor_;
  this->no_standard_descriptor_accessor_ = total_size;
  LOBYTE(total_size) = other->deprecated_;
  other->no_standard_descriptor_accessor_ = (char)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = total_size;
  LOBYTE(total_size) = other->map_entry_;
  other->deprecated_ = (char)rep;
  LOBYTE(rep) = this->map_entry_;
  this->map_entry_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->map_entry_ = (char)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 11280: range 000000000C933C30-000000000C933CE0
void __fastcall google::protobuf::FieldOptions::FieldOptions(google::protobuf::FieldOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A1804C0;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::FieldOptions *)&google::protobuf::_FieldOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  *(_QWORD *)&this->ctype_ = 0LL;
  this->jstype_ = 0;
};

// Line 11288: range 000000000C93CE50-000000000C93CF7F
__int64 __fastcall google::protobuf::FieldOptions::FieldOptions(
        google::protobuf::FieldOptions *this,
        const google::protobuf::FieldOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A1804C0;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  *(_QWORD *)&this->ctype_ = *(_QWORD *)&a2->ctype_;
  result = (unsigned int)a2->jstype_;
  this->jstype_ = result;
  return result;
};

// Line 11303: range 000000000C92C7C0-000000000C92C7D6
void __fastcall google::protobuf::FieldOptions::SharedCtor(google::protobuf::FieldOptions *const this)
{
  this->_cached_size_ = 0;
  *(_QWORD *)&this->ctype_ = 0LL;
  this->jstype_ = 0;
};

// Line 11309: range 000000000C933D40-000000000C933D63
void __fastcall google::protobuf::FieldOptions::~FieldOptions(google::protobuf::FieldOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A1804C0;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 11309: range 000000000C933D70-000000000C933D82
void __fastcall google::protobuf::FieldOptions::~FieldOptions(google::protobuf::FieldOptions *const this)
{
  google::protobuf::FieldOptions::~FieldOptions(this);
  operator delete(this, 0x78uLL);
};

// Line 11319: range 000000000C9240C0-000000000C9240C3
void __fastcall google::protobuf::FieldOptions::SetCachedSize(
        const google::protobuf::FieldOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 11332: range 000000000C933CF0-000000000C933D2D
google::protobuf::FieldOptions *__fastcall google::protobuf::FieldOptions::New(
        google::protobuf::FieldOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::FieldOptions *v2; // r12

  v2 = (google::protobuf::FieldOptions *)operator new(0x78uLL);
  google::protobuf::FieldOptions::FieldOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::FieldOptions>(a2, v2);
  return v2;
};

// Line 11333: range 000000000C73154C-000000000C73155C
void __fastcall __noreturn google::protobuf::FieldOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x78uLL);
  _Unwind_Resume(v0);
};

// Line 11340: range 000000000C931190-000000000C9311EF
void __fastcall google::protobuf::FieldOptions::Clear(google::protobuf::FieldOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  if ( (this->_has_bits_.has_bits_[0] & 0x3F) != 0 )
  {
    *(_QWORD *)&this->ctype_ = 0LL;
    this->jstype_ = 0;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 11359: range 000000000C937970-000000000C937F20
__int64 __fastcall google::protobuf::FieldOptions::MergePartialFromCodedStream(
        google::protobuf::FieldOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rdi
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rcx
  unsigned int v9; // eax
  unsigned __int64 ptr; // r8
  unsigned __int64 v11; // rax
  google::protobuf::UnknownFieldSet *v12; // rdx
  const google::protobuf::uint8 *v14; // rax
  google::protobuf::uint32 v15; // esi
  google::protobuf::int64 v16; // rax
  google::protobuf::UnknownFieldSet *v17; // rdi
  google::protobuf::UnknownFieldSet *v18; // r8
  const google::protobuf::uint8 *v19; // rax
  google::protobuf::uint32 v20; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v28; // rax
  int first; // r14d
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  __int64 v32; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rdx
  unsigned __int64 v34; // rdi
  google::protobuf::UnknownFieldSet *v35; // rdi

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (unsigned __int64)buffer_end > *(_QWORD *)&Varint64Fallback.second )
      {
LABEL_3:
        TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
        v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        if ( (char)TagFallback <= 0 )
        {
          if ( buffer_end > v8 )
          {
            LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
            if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
            {
              a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
              TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
              goto LABEL_7;
            }
          }
          goto LABEL_25;
        }
        a2->buffer_ = v8;
        goto LABEL_7;
      }
LABEL_24:
      TagFallback = 0;
LABEL_25:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x3FFE )
      {
handle_unusual_7:
        if ( !TagFallback )
          return 1LL;
        goto LABEL_27;
      }
LABEL_7:
      v9 = TagFallback >> 3;
      if ( TagFallback <= 0x57 )
        break;
      if ( v9 == 999 )
      {
        if ( (_BYTE)TagFallback != 58 )
          goto LABEL_11;
        rep = this->uninterpreted_option_.rep_;
        if ( rep )
        {
          current_size = this->uninterpreted_option_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
            this->uninterpreted_option_.current_size_ = current_size + 1;
            goto LABEL_58;
          }
          total_size = this->uninterpreted_option_.total_size_;
          if ( allocated_size == total_size )
          {
LABEL_85:
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
            rep = this->uninterpreted_option_.rep_;
            allocated_size = rep->allocated_size;
          }
          arena = this->uninterpreted_option_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
                0x60uLL);
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                              &arena->impl_,
                                                                              0x60uLL,
                                                                              google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
            google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
          }
          else
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
            google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
          }
          v32 = this->uninterpreted_option_.current_size_;
          v33 = this->uninterpreted_option_.rep_;
          this->uninterpreted_option_.current_size_ = v32 + 1;
          v33->elements[v32] = AlignedAndAddCleanup;
LABEL_58:
          buffer = a2->buffer_;
          if ( a2->buffer_ < a2->buffer_end_
            && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
          {
            a2->buffer_ = buffer + 1;
          }
          else
          {
            VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
            if ( VarintSizeAsIntFallback < 0 )
              return 0LL;
          }
          v28 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
          first = v28.first;
          if ( v28.second < 0
            || !(unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
                                   AlignedAndAddCleanup,
                                   a2)
            || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
          {
            return 0LL;
          }
          goto LABEL_31;
        }
        total_size = this->uninterpreted_option_.total_size_;
        goto LABEL_85;
      }
LABEL_27:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v11 = ptr & 1;
      if ( TagFallback <= 0x1F3F )
        goto LABEL_12;
      if ( (ptr & 1) != 0 )
        v18 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v18 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                               &this->_extensions_,
                               TagFallback,
                               a2,
                               (const google::protobuf::Message *)&google::protobuf::_FieldOptions_default_instance_,
                               v18) )
        return 0LL;
LABEL_31:
      buffer_end = a2->buffer_end_;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    }
    if ( !v9 )
      break;
    switch ( v9 )
    {
      case 1u:
        if ( TagFallback != 8 )
          goto LABEL_11;
        v19 = a2->buffer_;
        if ( a2->buffer_ >= a2->buffer_end_ )
        {
          v20 = 0;
        }
        else
        {
          v20 = *v19;
          if ( *(char *)v19 >= 0 )
          {
            a2->buffer_ = v19 + 1;
            goto LABEL_51;
          }
        }
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v20);
        v20 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0LL;
LABEL_51:
        if ( v20 > 2 )
        {
          v34 = (unsigned __int64)this->_internal_metadata_.ptr_;
          if ( (v34 & 1) != 0 )
            v35 = (google::protobuf::UnknownFieldSet *)(v34 & 0xFFFFFFFFFFFFFFFELL);
          else
            v35 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
          google::protobuf::UnknownFieldSet::AddVarint(v35, 1, (int)v20);
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        else
        {
          this->_has_bits_.has_bits_[0] |= 1u;
          buffer_end = a2->buffer_end_;
          this->ctype_ = v20;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        goto LABEL_2;
      case 2u:
        if ( TagFallback != 16 )
          goto LABEL_11;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->packed_ = Varint64Fallback.first != 0;
        goto LABEL_2;
      case 3u:
        if ( TagFallback != 24 )
          goto LABEL_11;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 8u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->deprecated_ = Varint64Fallback.first != 0;
        goto LABEL_2;
      case 5u:
        if ( TagFallback != 40 )
          goto LABEL_11;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 4u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->lazy_ = Varint64Fallback.first != 0;
        goto LABEL_2;
      case 6u:
        if ( TagFallback != 48 )
          goto LABEL_11;
        v14 = a2->buffer_;
        if ( a2->buffer_ >= a2->buffer_end_ )
        {
          v15 = 0;
        }
        else
        {
          v15 = *v14;
          if ( *(char *)v14 >= 0 )
          {
            a2->buffer_ = v14 + 1;
            goto LABEL_20;
          }
        }
        v16 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v15);
        v15 = v16;
        if ( v16 < 0 )
          return 0LL;
LABEL_20:
        if ( v15 <= 2 )
        {
          this->_has_bits_.has_bits_[0] |= 0x20u;
          buffer_end = a2->buffer_end_;
          this->jstype_ = v15;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
          goto LABEL_2;
        }
        v17 = (google::protobuf::UnknownFieldSet *)((unsigned __int64)this->_internal_metadata_.ptr_ & 0xFFFFFFFFFFFFFFFELL);
        if ( ((__int64)this->_internal_metadata_.ptr_ & 1) == 0 )
          v17 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
        google::protobuf::UnknownFieldSet::AddVarint(v17, 6, (int)v15);
        buffer_end = a2->buffer_end_;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        if ( buffer_end > a2->buffer_ )
          goto LABEL_3;
        goto LABEL_24;
      case 0xAu:
        if ( TagFallback != 80 )
          goto LABEL_11;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 0x10u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->weak_ = Varint64Fallback.first != 0;
        break;
      default:
        goto handle_unusual_7;
    }
  }
  if ( TagFallback )
  {
LABEL_11:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = ptr & 1;
LABEL_12:
    if ( v11 )
      v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v12) )
      return 0LL;
    goto LABEL_31;
  }
  return 1LL;
};

// Line 11503: range 000000000C9272A0-000000000C9273F1
void __fastcall google::protobuf::FieldOptions::SerializeWithCachedSizes(
        const google::protobuf::FieldOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  int current_size; // r13d
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteEnum(1, this->ctype_, output);
    if ( (v2 & 2) == 0 )
    {
LABEL_3:
      if ( (v2 & 8) == 0 )
        goto LABEL_4;
      goto LABEL_15;
    }
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(2, this->packed_, output);
  if ( (v2 & 8) == 0 )
  {
LABEL_4:
    if ( (v2 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_15:
  google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated_, output);
  if ( (v2 & 4) == 0 )
  {
LABEL_5:
    if ( (v2 & 0x20) == 0 )
      goto LABEL_6;
LABEL_17:
    google::protobuf::internal::WireFormatLite::WriteEnum(6, this->jstype_, output);
    if ( (v2 & 0x10) == 0 )
      goto LABEL_7;
    goto LABEL_18;
  }
LABEL_16:
  google::protobuf::internal::WireFormatLite::WriteBool(5, this->lazy_, output);
  if ( (v2 & 0x20) != 0 )
    goto LABEL_17;
LABEL_6:
  if ( (v2 & 0x10) == 0 )
    goto LABEL_7;
LABEL_18:
  google::protobuf::internal::WireFormatLite::WriteBool(10, this->weak_, output);
LABEL_7:
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v5],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 11560: range 000000000C925990-000000000C925B1D
google::protobuf::uint8 *__fastcall google::protobuf::FieldOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::FieldOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // rax
  google::protobuf::uint32 v5; // edi
  unsigned __int64 ctype; // rcx
  google::protobuf::uint8 *v7; // rdx
  char v8; // al
  bool packed; // dl
  bool deprecated; // dl
  bool lazy; // dl
  unsigned __int64 jstype; // rcx
  _BYTE *v13; // rdx
  char v14; // al
  bool weak; // dl
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v18; // rdi
  _BYTE *v19; // rdx
  unsigned int j; // eax
  char v21; // cl
  google::protobuf::uint8 *v22; // r12
  unsigned __int64 ptr; // rax

  v3 = target;
  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    ctype = this->ctype_;
    v7 = target + 1;
    for ( *(v7 - 1) = 8; ctype > 0x7F; *(v7 - 1) = v8 | 0x80 )
    {
      v8 = ctype;
      ctype >>= 7;
      ++v7;
    }
    *v7 = ctype;
    v3 = v7 + 1;
  }
  if ( (v5 & 2) != 0 )
  {
    packed = this->packed_;
    v3 += 2;
    *(v3 - 2) = 16;
    *(v3 - 1) = packed;
  }
  if ( (v5 & 8) != 0 )
  {
    deprecated = this->deprecated_;
    v3 += 2;
    *(v3 - 2) = 24;
    *(v3 - 1) = deprecated;
  }
  if ( (v5 & 4) != 0 )
  {
    lazy = this->lazy_;
    v3 += 2;
    *(v3 - 2) = 40;
    *(v3 - 1) = lazy;
  }
  if ( (v5 & 0x20) != 0 )
  {
    jstype = this->jstype_;
    v13 = v3 + 1;
    for ( *v3 = 48; jstype > 0x7F; *(v13 - 1) = v14 | 0x80 )
    {
      v14 = jstype;
      jstype >>= 7;
      ++v13;
    }
    *v13 = jstype;
    v3 = v13 + 1;
  }
  if ( (v5 & 0x10) != 0 )
  {
    weak = this->weak_;
    v3 += 2;
    *(v3 - 2) = 80;
    *(v3 - 1) = weak;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v18 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)v3 = 16058;
      v19 = v3 + 2;
      for ( j = v18->_cached_size_; j > 0x7F; *(v19 - 1) = v21 | 0x80 )
      {
        v21 = j;
        j >>= 7;
        ++v19;
      }
      *v19 = j;
      v3 = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v18, deterministic, v19 + 1);
    }
  }
  v22 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          v3);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v22);
  else
    return v22;
};

// Line 11619: range 000000000C927E30-000000000C927F34
size_t __fastcall google::protobuf::FieldOptions::ByteSizeLong(const google::protobuf::FieldOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  google::protobuf::uint32 v11; // eax
  int ctype; // edx
  __int64 v13; // rdx
  int jstype; // eax
  __int64 v15; // rax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (v11 & 0x3F) != 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      ctype = this->ctype_;
      if ( ctype < 0 )
      {
        v13 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&ctype, ctype | 1);
        v13 = (unsigned int)(9 * ctype + 73) >> 6;
      }
      v6 += v13 + 1;
    }
    if ( (v11 & 2) != 0 )
      v6 += 2LL;
    if ( (v11 & 4) != 0 )
      v6 += 2LL;
    if ( (v11 & 8) != 0 )
      v6 += 2LL;
    if ( (v11 & 0x10) != 0 )
      v6 += 2LL;
    if ( (v11 & 0x20) != 0 )
    {
      jstype = this->jstype_;
      if ( jstype < 0 )
      {
        v15 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&jstype, jstype | 1);
        v15 = (unsigned int)(9 * jstype + 73) >> 6;
      }
      v6 += v15 + 1;
    }
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 11682: range 000000000C93D410-000000000C93D45D
void __fastcall google::protobuf::FieldOptions::MergeFrom(
        google::protobuf::FieldOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::FieldOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::FieldOptions *)__dynamic_cast(
                                                 from,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::FieldOptions,
                                                 0LL);
  if ( v2 )
    google::protobuf::FieldOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 11697: range 000000000C93D2F0-000000000C93D406
void __fastcall google::protobuf::FieldOptions::MergeFrom(
        google::protobuf::FieldOptions *const this,
        const google::protobuf::FieldOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // eax
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 0x3F) != 0 )
  {
    if ( (v9 & 1) != 0 )
      this->ctype_ = from->ctype_;
    if ( (v9 & 2) != 0 )
      this->packed_ = from->packed_;
    if ( (v9 & 4) != 0 )
      this->lazy_ = from->lazy_;
    if ( (v9 & 8) != 0 )
      this->deprecated_ = from->deprecated_;
    if ( (v9 & 0x10) != 0 )
      this->weak_ = from->weak_;
    if ( (v9 & 0x20) != 0 )
      this->jstype_ = from->jstype_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
};

// Line 11732: range 000000000C93D470-000000000C93D4A0
void __fastcall google::protobuf::FieldOptions::CopyFrom(
        google::protobuf::FieldOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::FieldOptions::Clear(this);
    google::protobuf::FieldOptions::MergeFrom(this, from);
  }
};

// Line 11739: range 000000000C93D4B0-000000000C93D4E0
void __fastcall google::protobuf::FieldOptions::CopyFrom(
        google::protobuf::FieldOptions *const this,
        const google::protobuf::FieldOptions *from)
{
  if ( from != this )
  {
    google::protobuf::FieldOptions::Clear(this);
    google::protobuf::FieldOptions::MergeFrom(this, from);
  }
};

// Line 11744: range 000000000C929070-000000000C9290C9
bool __fastcall google::protobuf::FieldOptions::IsInitialized(const google::protobuf::FieldOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 11754: range 000000000C92FEF0-000000000C92FF00
void __fastcall google::protobuf::FieldOptions::Swap(
        google::protobuf::FieldOptions *const this,
        google::protobuf::FieldOptions *other)
{
  if ( other != this )
    google::protobuf::FieldOptions::InternalSwap(this, other);
};

// Line 11757: range 000000000C92FDD0-000000000C92FEEB
void __fastcall google::protobuf::FieldOptions::InternalSwap(
        google::protobuf::FieldOptions *const this,
        google::protobuf::FieldOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  int ctype; // edx
  int jstype; // edx
  google::protobuf::uint32 v7; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  int cached_size; // eax
  int v14; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v16; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  ctype = other->ctype_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LODWORD(rep) = this->ctype_;
  this->ctype_ = ctype;
  LOBYTE(ctype) = other->packed_;
  other->ctype_ = (int)rep;
  LOBYTE(rep) = this->packed_;
  this->packed_ = ctype;
  LOBYTE(ctype) = other->lazy_;
  other->packed_ = (char)rep;
  LOBYTE(rep) = this->lazy_;
  this->lazy_ = ctype;
  LOBYTE(ctype) = other->deprecated_;
  other->lazy_ = (char)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = ctype;
  LOBYTE(ctype) = other->weak_;
  other->deprecated_ = (char)rep;
  LOBYTE(rep) = this->weak_;
  this->weak_ = ctype;
  jstype = other->jstype_;
  other->weak_ = (char)rep;
  LODWORD(rep) = this->jstype_;
  this->jstype_ = jstype;
  v7 = other->_has_bits_.has_bits_[0];
  other->jstype_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v7;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v9 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v10 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v9 & 1) != 0 )
  {
    v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v16 = v10;
    v11 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v10 = v16;
  }
  v12 = *v11;
  *v11 = *v10;
  *v10 = v12;
LABEL_7:
  cached_size = this->_cached_size_;
  v14 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v14;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 11964: range 000000000C933D90-000000000C933E3E
void __fastcall google::protobuf::OneofOptions::OneofOptions(google::protobuf::OneofOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180598;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this == (google::protobuf::OneofOptions *)&google::protobuf::_OneofOptions_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once == 2 )
  {
    this->_cached_size_ = 0;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    this->_cached_size_ = 0;
  }
};

// Line 11972: range 000000000C93B480-000000000C93B59F
void __fastcall google::protobuf::OneofOptions::OneofOptions(
        google::protobuf::OneofOptions *this,
        const google::protobuf::OneofOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  void **elements; // r15
  void **v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v14; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180598;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v12 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v12,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v14 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v14;
    if ( v14 > rep->allocated_size )
      rep->allocated_size = v14;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
};

// Line 11984: range 000000000C92C8B0-000000000C92C8B7
void __fastcall google::protobuf::OneofOptions::SharedCtor(google::protobuf::OneofOptions *const this)
{
  this->_cached_size_ = 0;
};

// Line 11987: range 000000000C933ED0-000000000C933EE2
void __fastcall google::protobuf::OneofOptions::~OneofOptions(google::protobuf::OneofOptions *const this)
{
  google::protobuf::OneofOptions::~OneofOptions(this);
  operator delete(this, 0x68uLL);
};

// Line 11987: range 000000000C933EA0-000000000C933EC3
void __fastcall google::protobuf::OneofOptions::~OneofOptions(google::protobuf::OneofOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A180598;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 11997: range 000000000C9240D0-000000000C9240D3
void __fastcall google::protobuf::OneofOptions::SetCachedSize(
        const google::protobuf::OneofOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 12010: range 000000000C933E50-000000000C933E8D
google::protobuf::OneofOptions *__fastcall google::protobuf::OneofOptions::New(
        google::protobuf::OneofOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::OneofOptions *v2; // r12

  v2 = (google::protobuf::OneofOptions *)operator new(0x68uLL);
  google::protobuf::OneofOptions::OneofOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::OneofOptions>(a2, v2);
  return v2;
};

// Line 12011: range 000000000C73158C-000000000C73159C
void __fastcall __noreturn google::protobuf::OneofOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x68uLL);
  _Unwind_Resume(v0);
};

// Line 12018: range 000000000C931200-000000000C93123B
void __fastcall google::protobuf::OneofOptions::Clear(google::protobuf::OneofOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 12031: range 000000000C935660-000000000C935925
__int64 __fastcall google::protobuf::OneofOptions::MergePartialFromCodedStream(
        google::protobuf::OneofOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rcx
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  int v9; // edx
  unsigned __int64 ptr; // r8
  unsigned __int64 v11; // rax
  google::protobuf::UnknownFieldSet *v12; // rdx
  google::protobuf::UnknownFieldSet *v14; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *v19; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v21; // rax
  int first; // r14d
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v25; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v26; // rdx

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = a2->buffer_;
      buffer_end = a2->buffer_end_;
      if ( buffer_end <= a2->buffer_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        v8 = buffer + 1;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = v8;
          goto LABEL_9;
        }
        if ( buffer_end > v8 )
        {
          v9 = buffer[1];
          if ( (int)(TagFallback & ~v9) > 127 )
          {
            a2->buffer_ = buffer + 2;
            TagFallback = TagFallback + (v9 << 7) - 128;
            goto LABEL_7;
          }
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x3FFE )
        break;
LABEL_7:
      if ( TagFallback >> 3 != 999 )
        break;
      if ( (_BYTE)TagFallback == 58 )
      {
        rep = this->uninterpreted_option_.rep_;
        if ( rep )
        {
          current_size = this->uninterpreted_option_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
            this->uninterpreted_option_.current_size_ = current_size + 1;
            goto LABEL_27;
          }
          total_size = this->uninterpreted_option_.total_size_;
          if ( allocated_size != total_size )
          {
            arena = this->uninterpreted_option_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
              goto LABEL_38;
            goto LABEL_44;
          }
        }
        else
        {
          total_size = this->uninterpreted_option_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
        arena = this->uninterpreted_option_.arena_;
        ++this->uninterpreted_option_.rep_->allocated_size;
        if ( arena )
        {
LABEL_38:
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
              0x60uLL);
          AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                            &arena->impl_,
                                                                            0x60uLL,
                                                                            google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
          google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
          goto LABEL_41;
        }
LABEL_44:
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
        google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
LABEL_41:
        v25 = this->uninterpreted_option_.current_size_;
        v26 = this->uninterpreted_option_.rep_;
        this->uninterpreted_option_.current_size_ = v25 + 1;
        v26->elements[v25] = AlignedAndAddCleanup;
LABEL_27:
        v19 = a2->buffer_;
        if ( a2->buffer_ < a2->buffer_end_
          && (VarintSizeAsIntFallback = *v19, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
        {
          a2->buffer_ = v19 + 1;
        }
        else
        {
          VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
          if ( VarintSizeAsIntFallback < 0 )
            return 0LL;
        }
        v21 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
        first = v21.first;
        if ( v21.second < 0
          || !(unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
                                 AlignedAndAddCleanup,
                                 a2)
          || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
        {
          return 0LL;
        }
      }
      else
      {
LABEL_9:
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v11 = ptr & 1;
LABEL_10:
        if ( v11 )
          v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        else
          v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
        if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v12) )
          return 0LL;
      }
    }
    if ( !TagFallback )
      return 1LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = ptr & 1;
    if ( TagFallback <= 0x1F3F )
      goto LABEL_10;
    if ( (ptr & 1) != 0 )
      v14 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v14 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                             &this->_extensions_,
                             TagFallback,
                             a2,
                             (const google::protobuf::Message *)&google::protobuf::_OneofOptions_default_instance_,
                             v14) )
      return 0LL;
  }
};

// Line 12079: range 000000000C925320-000000000C9253AA
void __fastcall google::protobuf::OneofOptions::SerializeWithCachedSizes(
        const google::protobuf::OneofOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v4],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 12103: range 000000000C925D70-000000000C925E2D
google::protobuf::uint8 *__fastcall google::protobuf::OneofOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::OneofOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v7; // rdi
  google::protobuf::uint8 *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  google::protobuf::uint8 *v11; // r12
  unsigned __int64 ptr; // rax

  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)target = 16058;
      v8 = target + 2;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v7, deterministic, v8 + 1);
    }
  }
  v11 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v11);
  else
    return v11;
};

// Line 12129: range 000000000C928150-000000000C9281D7
size_t __fastcall google::protobuf::OneofOptions::ByteSizeLong(const google::protobuf::OneofOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 12158: range 000000000C93AC30-000000000C93AC7D
void __fastcall google::protobuf::OneofOptions::MergeFrom(
        google::protobuf::OneofOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::OneofOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::OneofOptions *)__dynamic_cast(
                                                 from,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::OneofOptions,
                                                 0LL);
  if ( v2 )
    google::protobuf::OneofOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 12173: range 000000000C93AB60-000000000C93AC2A
void __fastcall google::protobuf::OneofOptions::MergeFrom(
        google::protobuf::OneofOptions *const this,
        const google::protobuf::OneofOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    rep = from->uninterpreted_option_.rep_;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v10,
      rep->elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    v11 = this->uninterpreted_option_.rep_;
    v12 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v12;
    if ( v12 > v11->allocated_size )
      v11->allocated_size = v12;
  }
};

// Line 12186: range 000000000C93AC90-000000000C93ACC0
void __fastcall google::protobuf::OneofOptions::CopyFrom(
        google::protobuf::OneofOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::OneofOptions::Clear(this);
    google::protobuf::OneofOptions::MergeFrom(this, from);
  }
};

// Line 12193: range 000000000C93ACD0-000000000C93AD00
void __fastcall google::protobuf::OneofOptions::CopyFrom(
        google::protobuf::OneofOptions *const this,
        const google::protobuf::OneofOptions *from)
{
  if ( from != this )
  {
    google::protobuf::OneofOptions::Clear(this);
    google::protobuf::OneofOptions::MergeFrom(this, from);
  }
};

// Line 12198: range 000000000C9290F0-000000000C929149
bool __fastcall google::protobuf::OneofOptions::IsInitialized(const google::protobuf::OneofOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 12208: range 000000000C92F250-000000000C92F260
void __fastcall google::protobuf::OneofOptions::Swap(
        google::protobuf::OneofOptions *const this,
        google::protobuf::OneofOptions *other)
{
  if ( other != this )
    google::protobuf::OneofOptions::InternalSwap(this, other);
};

// Line 12211: range 000000000C92F180-000000000C92F24B
void __fastcall google::protobuf::OneofOptions::InternalSwap(
        google::protobuf::OneofOptions *const this,
        google::protobuf::OneofOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->uninterpreted_option_.total_size_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 12268: range 000000000C933EF0-000000000C933F98
__int64 __fastcall google::protobuf::EnumOptions::EnumOptions(google::protobuf::EnumOptions *this)
{
  __int64 result; // rax
  google::protobuf::internal::FunctionClosure0 v2[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180670;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::EnumOptions *)&google::protobuf::_EnumOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v2[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v2[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v2[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v2[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  result = 0LL;
  this->_cached_size_ = 0;
  *(_WORD *)&this->allow_alias_ = 0;
  return result;
};

// Line 12276: range 000000000C93BCD0-000000000C93BDF7
__int64 __fastcall google::protobuf::EnumOptions::EnumOptions(
        google::protobuf::EnumOptions *this,
        const google::protobuf::EnumOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180670;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = *(unsigned __int16 *)&a2->allow_alias_;
  *(_WORD *)&this->allow_alias_ = result;
  return result;
};

// Line 12292: range 000000000C92C990-000000000C92C99D
void __fastcall google::protobuf::EnumOptions::SharedCtor(google::protobuf::EnumOptions *const this)
{
  this->_cached_size_ = 0;
  *(_WORD *)&this->allow_alias_ = 0;
};

// Line 12297: range 000000000C933FF0-000000000C934013
void __fastcall google::protobuf::EnumOptions::~EnumOptions(google::protobuf::EnumOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A180670;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 12297: range 000000000C934020-000000000C934032
void __fastcall google::protobuf::EnumOptions::~EnumOptions(google::protobuf::EnumOptions *const this)
{
  google::protobuf::EnumOptions::~EnumOptions(this);
  operator delete(this, 0x70uLL);
};

// Line 12307: range 000000000C9240E0-000000000C9240E3
void __fastcall google::protobuf::EnumOptions::SetCachedSize(const google::protobuf::EnumOptions *const this, int size)
{
  this->_cached_size_ = size;
};

// Line 12320: range 000000000C933FA0-000000000C933FDD
google::protobuf::EnumOptions *__fastcall google::protobuf::EnumOptions::New(
        google::protobuf::EnumOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::EnumOptions *v2; // r12

  v2 = (google::protobuf::EnumOptions *)operator new(0x70uLL);
  google::protobuf::EnumOptions::EnumOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::EnumOptions>(a2, v2);
  return v2;
};

// Line 12321: range 000000000C7315CC-000000000C7315DC
void __fastcall __noreturn google::protobuf::EnumOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 12328: range 000000000C9312A0-000000000C9312F6
void __fastcall google::protobuf::EnumOptions::Clear(google::protobuf::EnumOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  if ( (this->_has_bits_.has_bits_[0] & 3) != 0 )
    *(_WORD *)&this->allow_alias_ = 0;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 12347: range 000000000C9363C0-000000000C936753
__int64 __fastcall google::protobuf::EnumOptions::MergePartialFromCodedStream(
        google::protobuf::EnumOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 ptr; // r8
  unsigned __int64 v11; // rax
  google::protobuf::UnknownFieldSet *v12; // rdx
  google::protobuf::UnknownFieldSet *v13; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v21; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v22; // rdx
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v25; // rax
  int first; // r14d

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
  while ( 1 )
  {
    if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end )
      goto LABEL_3;
LABEL_15:
    TagFallback = 0;
LABEL_16:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 > 0x3FFE )
      goto handle_unusual_5;
LABEL_7:
    v9 = TagFallback >> 3;
    if ( TagFallback >> 3 == 3 )
      goto LABEL_30;
    if ( v9 == 999 )
      break;
    while ( 2 )
    {
      if ( v9 == 2 )
      {
        if ( TagFallback != 16 )
          goto LABEL_10;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 1u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->allow_alias_ = Varint64Fallback.first != 0;
      }
      else
      {
handle_unusual_5:
        if ( !TagFallback )
          return 1LL;
        ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
        v11 = ptr & 1;
        if ( TagFallback <= 0x1F3F )
          goto LABEL_11;
        if ( (ptr & 1) != 0 )
          v13 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
        else
          v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
        if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                                 &this->_extensions_,
                                 TagFallback,
                                 a2,
                                 (const google::protobuf::Message *)&google::protobuf::_EnumOptions_default_instance_,
                                 v13) )
          return 0LL;
LABEL_14:
        buffer_end = a2->buffer_end_;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        if ( a2->buffer_ >= buffer_end )
          goto LABEL_15;
LABEL_3:
        TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
        v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        if ( (char)TagFallback <= 0 )
        {
          if ( buffer_end > v8 )
          {
            LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
            if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
            {
              a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
              TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
              goto LABEL_7;
            }
          }
          goto LABEL_16;
        }
        v9 = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second >> 3;
        a2->buffer_ = v8;
        if ( v9 != 3 )
          continue;
LABEL_30:
        if ( TagFallback != 24 )
          goto LABEL_10;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        buffer_end = a2->buffer_end_;
        this->_has_bits_.has_bits_[0] |= 2u;
        if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
          && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
              SLOBYTE(Varint64Fallback.first) >= 0) )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
        }
        else
        {
          Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
          if ( !Varint64Fallback.second )
            return 0LL;
          buffer_end = a2->buffer_end_;
          *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
        }
        this->deprecated_ = Varint64Fallback.first != 0;
      }
      break;
    }
  }
  if ( (_BYTE)TagFallback != 58 )
  {
LABEL_10:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = ptr & 1;
LABEL_11:
    if ( v11 )
      v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v12) )
      goto LABEL_14;
    return 0LL;
  }
  rep = this->uninterpreted_option_.rep_;
  if ( !rep )
  {
    total_size = this->uninterpreted_option_.total_size_;
LABEL_54:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
    rep = this->uninterpreted_option_.rep_;
    allocated_size = rep->allocated_size;
    goto LABEL_39;
  }
  current_size = this->uninterpreted_option_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size < rep->allocated_size )
  {
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
    this->uninterpreted_option_.current_size_ = current_size + 1;
    goto LABEL_44;
  }
  total_size = this->uninterpreted_option_.total_size_;
  if ( allocated_size == total_size )
    goto LABEL_54;
LABEL_39:
  arena = this->uninterpreted_option_.arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
        0x60uLL);
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                      &arena->impl_,
                                                                      0x60uLL,
                                                                      google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
    google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
  }
  else
  {
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
    google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
  }
  v21 = this->uninterpreted_option_.current_size_;
  v22 = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.current_size_ = v21 + 1;
  v22->elements[v21] = AlignedAndAddCleanup;
LABEL_44:
  buffer = a2->buffer_;
  if ( a2->buffer_ < a2->buffer_end_
    && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
  {
    a2->buffer_ = buffer + 1;
LABEL_47:
    v25 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
    first = v25.first;
    if ( v25.second >= 0
      && (unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
      && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
    {
      goto LABEL_14;
    }
  }
  else
  {
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
    if ( VarintSizeAsIntFallback >= 0 )
      goto LABEL_47;
  }
  return 0LL;
};

// Line 12423: range 000000000C927400-000000000C9274CB
void __fastcall google::protobuf::EnumOptions::SerializeWithCachedSizes(
        const google::protobuf::EnumOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  int current_size; // r12d
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(2, this->allow_alias_, output);
    if ( (v2 & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteBool(3, this->deprecated_, output);
LABEL_3:
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v5],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 12458: range 000000000C925EF0-000000000C925FDD
google::protobuf::uint8 *__fastcall google::protobuf::EnumOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::EnumOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v5; // eax
  bool allow_alias; // dl
  bool deprecated; // al
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v10; // rdi
  google::protobuf::uint8 *v11; // rdx
  unsigned int j; // eax
  char v13; // cl
  google::protobuf::uint8 *v14; // r12
  unsigned __int64 ptr; // rax

  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    allow_alias = this->allow_alias_;
    target += 2;
    *(target - 2) = 16;
    *(target - 1) = allow_alias;
  }
  if ( (v5 & 2) != 0 )
  {
    deprecated = this->deprecated_;
    target += 2;
    *(target - 2) = 24;
    *(target - 1) = deprecated;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v10 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      v11 = target + 2;
      *(_WORD *)target = 16058;
      for ( j = v10->_cached_size_; j > 0x7F; *(v11 - 1) = v13 | 0x80 )
      {
        v13 = j;
        j >>= 7;
        ++v11;
      }
      *v11 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(
                 v10,
                 deterministic,
                 v11 + 1);
    }
  }
  v14 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v14);
  else
    return v14;
};

// Line 12495: range 000000000C928290-000000000C928335
size_t __fastcall google::protobuf::EnumOptions::ByteSizeLong(const google::protobuf::EnumOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  google::protobuf::uint32 v11; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (v11 & 3) != 0 )
  {
    if ( (v11 & 1) != 0 )
      v6 += 2LL;
    if ( (v11 & 2) != 0 )
      v6 += 2LL;
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 12536: range 000000000C93CB20-000000000C93CB6D
void __fastcall google::protobuf::EnumOptions::MergeFrom(
        google::protobuf::EnumOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::EnumOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::EnumOptions *)__dynamic_cast(
                                                from,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                (const struct __class_type_info *)&`typeinfo for'google::protobuf::EnumOptions,
                                                0LL);
  if ( v2 )
    google::protobuf::EnumOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 12551: range 000000000C93CA30-000000000C93CB1A
void __fastcall google::protobuf::EnumOptions::MergeFrom(
        google::protobuf::EnumOptions *const this,
        const google::protobuf::EnumOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // eax
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 3) != 0 )
  {
    if ( (v9 & 1) != 0 )
      this->allow_alias_ = from->allow_alias_;
    if ( (v9 & 2) != 0 )
      this->deprecated_ = from->deprecated_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
};

// Line 12574: range 000000000C93CB80-000000000C93CBB0
void __fastcall google::protobuf::EnumOptions::CopyFrom(
        google::protobuf::EnumOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::EnumOptions::Clear(this);
    google::protobuf::EnumOptions::MergeFrom(this, from);
  }
};

// Line 12581: range 000000000C93CBC0-000000000C93CBF0
void __fastcall google::protobuf::EnumOptions::CopyFrom(
        google::protobuf::EnumOptions *const this,
        const google::protobuf::EnumOptions *from)
{
  if ( from != this )
  {
    google::protobuf::EnumOptions::Clear(this);
    google::protobuf::EnumOptions::MergeFrom(this, from);
  }
};

// Line 12586: range 000000000C929170-000000000C9291C9
bool __fastcall google::protobuf::EnumOptions::IsInitialized(const google::protobuf::EnumOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 12596: range 000000000C92F940-000000000C92F950
void __fastcall google::protobuf::EnumOptions::Swap(
        google::protobuf::EnumOptions *const this,
        google::protobuf::EnumOptions *other)
{
  if ( other != this )
    google::protobuf::EnumOptions::InternalSwap(this, other);
};

// Line 12599: range 000000000C92F860-000000000C92F93B
void __fastcall google::protobuf::EnumOptions::InternalSwap(
        google::protobuf::EnumOptions *const this,
        google::protobuf::EnumOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  LOBYTE(total_size) = other->allow_alias_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LOBYTE(rep) = this->allow_alias_;
  this->allow_alias_ = total_size;
  LOBYTE(total_size) = other->deprecated_;
  other->allow_alias_ = (char)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->deprecated_ = (char)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 12705: range 000000000C934040-000000000C9340E0
void __fastcall google::protobuf::EnumValueOptions::EnumValueOptions(google::protobuf::EnumValueOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180748;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::EnumValueOptions *)&google::protobuf::_EnumValueOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->deprecated_ = 0;
};

// Line 12713: range 000000000C93B9A0-000000000C93BAC7
__int64 __fastcall google::protobuf::EnumValueOptions::EnumValueOptions(
        google::protobuf::EnumValueOptions *this,
        const google::protobuf::EnumValueOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180748;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = a2->deprecated_;
  this->deprecated_ = result;
  return result;
};

// Line 12726: range 000000000C92CA70-000000000C92CA7B
void __fastcall google::protobuf::EnumValueOptions::SharedCtor(google::protobuf::EnumValueOptions *const this)
{
  this->_cached_size_ = 0;
  this->deprecated_ = 0;
};

// Line 12730: range 000000000C934140-000000000C934163
void __fastcall google::protobuf::EnumValueOptions::~EnumValueOptions(google::protobuf::EnumValueOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A180748;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 12730: range 000000000C934170-000000000C934182
void __fastcall google::protobuf::EnumValueOptions::~EnumValueOptions(google::protobuf::EnumValueOptions *const this)
{
  google::protobuf::EnumValueOptions::~EnumValueOptions(this);
  operator delete(this, 0x70uLL);
};

// Line 12740: range 000000000C9240F0-000000000C9240F3
void __fastcall google::protobuf::EnumValueOptions::SetCachedSize(
        const google::protobuf::EnumValueOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 12753: range 000000000C9340F0-000000000C93412D
google::protobuf::EnumValueOptions *__fastcall google::protobuf::EnumValueOptions::New(
        google::protobuf::EnumValueOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::EnumValueOptions *v2; // r12

  v2 = (google::protobuf::EnumValueOptions *)operator new(0x70uLL);
  google::protobuf::EnumValueOptions::EnumValueOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::EnumValueOptions>(a2, v2);
  return v2;
};

// Line 12754: range 000000000C73160C-000000000C73161C
void __fastcall __noreturn google::protobuf::EnumValueOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 12761: range 000000000C931300-000000000C931343
void __fastcall google::protobuf::EnumValueOptions::Clear(google::protobuf::EnumValueOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->deprecated_ = 0;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 12775: range 000000000C935B20-000000000C935E4B
__int64 __fastcall google::protobuf::EnumValueOptions::MergePartialFromCodedStream(
        google::protobuf::EnumValueOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  unsigned __int64 ptr; // r8
  unsigned __int64 v10; // rax
  google::protobuf::UnknownFieldSet *v11; // rdx
  google::protobuf::UnknownFieldSet *v12; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rdx

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
LABEL_2:
  if ( (unsigned __int64)buffer_end > *(_QWORD *)&Varint64Fallback.second )
  {
LABEL_3:
    TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
    v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
    if ( (char)TagFallback <= 0 )
    {
      if ( buffer_end > v8 )
      {
        LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
          TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
          goto LABEL_7;
        }
      }
      goto LABEL_16;
    }
    a2->buffer_ = v8;
    if ( TagFallback >> 3 == 1 )
      goto LABEL_24;
    goto handle_unusual_4;
  }
  while ( 1 )
  {
    TagFallback = 0;
LABEL_16:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 <= 0x3FFE )
    {
LABEL_7:
      if ( TagFallback >> 3 != 1 )
      {
        if ( TagFallback >> 3 != 999 )
          goto handle_unusual_4;
        if ( (_BYTE)TagFallback != 58 )
        {
LABEL_10:
          ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
          v10 = ptr & 1;
LABEL_11:
          if ( v10 )
            v11 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
          else
            v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
          if ( google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v11) )
            goto LABEL_14;
          return 0LL;
        }
        rep = this->uninterpreted_option_.rep_;
        if ( rep )
        {
          current_size = this->uninterpreted_option_.current_size_;
          allocated_size = rep->allocated_size;
          if ( (int)current_size < rep->allocated_size )
          {
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
            this->uninterpreted_option_.current_size_ = current_size + 1;
LABEL_32:
            buffer = a2->buffer_;
            if ( a2->buffer_ < a2->buffer_end_
              && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
            {
              a2->buffer_ = buffer + 1;
            }
            else
            {
              VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
              if ( VarintSizeAsIntFallback < 0 )
                return 0LL;
            }
            v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(
                    a2,
                    VarintSizeAsIntFallback);
            first = v20.first;
            if ( v20.second >= 0
              && (unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
                                    AlignedAndAddCleanup,
                                    a2)
              && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
            {
              goto LABEL_14;
            }
            return 0LL;
          }
          total_size = this->uninterpreted_option_.total_size_;
          if ( allocated_size != total_size )
          {
            arena = this->uninterpreted_option_.arena_;
            rep->allocated_size = allocated_size + 1;
            if ( arena )
            {
LABEL_45:
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  arena,
                  (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
                  0x60uLL);
              AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                &arena->impl_,
                                                                                0x60uLL,
                                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
              google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
              goto LABEL_48;
            }
LABEL_51:
            AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
            google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
LABEL_48:
            v24 = this->uninterpreted_option_.current_size_;
            v25 = this->uninterpreted_option_.rep_;
            this->uninterpreted_option_.current_size_ = v24 + 1;
            v25->elements[v24] = AlignedAndAddCleanup;
            goto LABEL_32;
          }
        }
        else
        {
          total_size = this->uninterpreted_option_.total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
        arena = this->uninterpreted_option_.arena_;
        ++this->uninterpreted_option_.rep_->allocated_size;
        if ( arena )
          goto LABEL_45;
        goto LABEL_51;
      }
LABEL_24:
      if ( TagFallback != 8 )
        goto LABEL_10;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
      buffer_end = a2->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
        && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
            SLOBYTE(Varint64Fallback.first) >= 0) )
      {
        a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
      }
      else
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
        if ( !Varint64Fallback.second )
          return 0LL;
        buffer_end = a2->buffer_end_;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
      }
      this->deprecated_ = Varint64Fallback.first != 0;
      goto LABEL_2;
    }
handle_unusual_4:
    if ( !TagFallback )
      return 1LL;
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v10 = ptr & 1;
    if ( TagFallback <= 0x1F3F )
      goto LABEL_11;
    if ( (ptr & 1) != 0 )
      v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                             &this->_extensions_,
                             TagFallback,
                             a2,
                             (const google::protobuf::Message *)&google::protobuf::_EnumValueOptions_default_instance_,
                             v12) )
      return 0LL;
LABEL_14:
    buffer_end = a2->buffer_end_;
    *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    if ( buffer_end > a2->buffer_ )
      goto LABEL_3;
  }
};

// Line 12837: range 000000000C9274D0-000000000C927571
void __fastcall google::protobuf::EnumValueOptions::SerializeWithCachedSizes(
        const google::protobuf::EnumValueOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(1, this->deprecated_, output);
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v4],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 12867: range 000000000C925FE0-000000000C9260BD
google::protobuf::uint8 *__fastcall google::protobuf::EnumValueOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::EnumValueOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool deprecated; // dl
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v8; // rdi
  google::protobuf::uint8 *v9; // rdx
  unsigned int j; // eax
  char v11; // cl
  google::protobuf::uint8 *v12; // r12
  unsigned __int64 ptr; // rax

  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    deprecated = this->deprecated_;
    target += 2;
    *(target - 2) = 8;
    *(target - 1) = deprecated;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v8 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)target = 16058;
      v9 = target + 2;
      for ( j = v8->_cached_size_; j > 0x7F; *(v9 - 1) = v11 | 0x80 )
      {
        v11 = j;
        j >>= 7;
        ++v9;
      }
      *v9 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v8, deterministic, v9 + 1);
    }
  }
  v12 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v12);
  else
    return v12;
};

// Line 12899: range 000000000C928340-000000000C9283D5
size_t __fastcall google::protobuf::EnumValueOptions::ByteSizeLong(
        const google::protobuf::EnumValueOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
    v6 += 2LL;
  this->_cached_size_ = v6;
  return v6;
};

// Line 12933: range 000000000C93B190-000000000C93B1DD
void __fastcall google::protobuf::EnumValueOptions::MergeFrom(
        google::protobuf::EnumValueOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::EnumValueOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::EnumValueOptions *)__dynamic_cast(
                                                     from,
                                                     (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                     (const struct __class_type_info *)&`typeinfo for'google::protobuf::EnumValueOptions,
                                                     0LL);
  if ( v2 )
    google::protobuf::EnumValueOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 12948: range 000000000C93B0B0-000000000C93B17F
void __fastcall google::protobuf::EnumValueOptions::MergeFrom(
        google::protobuf::EnumValueOptions *const this,
        const google::protobuf::EnumValueOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  bool deprecated; // al
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  if ( (from->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    deprecated = from->deprecated_;
    this->_has_bits_.has_bits_[0] |= 1u;
    this->deprecated_ = deprecated;
  }
};

// Line 12964: range 000000000C93B1F0-000000000C93B220
void __fastcall google::protobuf::EnumValueOptions::CopyFrom(
        google::protobuf::EnumValueOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::EnumValueOptions::Clear(this);
    google::protobuf::EnumValueOptions::MergeFrom(this, from);
  }
};

// Line 12971: range 000000000C93B230-000000000C93B260
void __fastcall google::protobuf::EnumValueOptions::CopyFrom(
        google::protobuf::EnumValueOptions *const this,
        const google::protobuf::EnumValueOptions *from)
{
  if ( from != this )
  {
    google::protobuf::EnumValueOptions::Clear(this);
    google::protobuf::EnumValueOptions::MergeFrom(this, from);
  }
};

// Line 12976: range 000000000C9291D0-000000000C929229
bool __fastcall google::protobuf::EnumValueOptions::IsInitialized(const google::protobuf::EnumValueOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 12986: range 000000000C92F540-000000000C92F550
void __fastcall google::protobuf::EnumValueOptions::Swap(
        google::protobuf::EnumValueOptions *const this,
        google::protobuf::EnumValueOptions *other)
{
  if ( other != this )
    google::protobuf::EnumValueOptions::InternalSwap(this, other);
};

// Line 12989: range 000000000C92F460-000000000C92F53B
void __fastcall google::protobuf::EnumValueOptions::InternalSwap(
        google::protobuf::EnumValueOptions *const this,
        google::protobuf::EnumValueOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  LOBYTE(total_size) = other->deprecated_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->deprecated_ = (char)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 13070: range 000000000C934190-000000000C934230
void __fastcall google::protobuf::ServiceOptions::ServiceOptions(google::protobuf::ServiceOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180820;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::ServiceOptions *)&google::protobuf::_ServiceOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->deprecated_ = 0;
};

// Line 13078: range 000000000C93B870-000000000C93B997
__int64 __fastcall google::protobuf::ServiceOptions::ServiceOptions(
        google::protobuf::ServiceOptions *this,
        const google::protobuf::ServiceOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180820;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = a2->deprecated_;
  this->deprecated_ = result;
  return result;
};

// Line 13091: range 000000000C92CB50-000000000C92CB5B
void __fastcall google::protobuf::ServiceOptions::SharedCtor(google::protobuf::ServiceOptions *const this)
{
  this->_cached_size_ = 0;
  this->deprecated_ = 0;
};

// Line 13095: range 000000000C9342C0-000000000C9342D2
void __fastcall google::protobuf::ServiceOptions::~ServiceOptions(google::protobuf::ServiceOptions *const this)
{
  google::protobuf::ServiceOptions::~ServiceOptions(this);
  operator delete(this, 0x70uLL);
};

// Line 13095: range 000000000C934290-000000000C9342B3
void __fastcall google::protobuf::ServiceOptions::~ServiceOptions(google::protobuf::ServiceOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A180820;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 13105: range 000000000C924100-000000000C924103
void __fastcall google::protobuf::ServiceOptions::SetCachedSize(
        const google::protobuf::ServiceOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 13118: range 000000000C934240-000000000C93427D
google::protobuf::ServiceOptions *__fastcall google::protobuf::ServiceOptions::New(
        google::protobuf::ServiceOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::ServiceOptions *v2; // r12

  v2 = (google::protobuf::ServiceOptions *)operator new(0x70uLL);
  google::protobuf::ServiceOptions::ServiceOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::ServiceOptions>(a2, v2);
  return v2;
};

// Line 13119: range 000000000C73164C-000000000C73165C
void __fastcall __noreturn google::protobuf::ServiceOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 13126: range 000000000C9314A0-000000000C9314E3
void __fastcall google::protobuf::ServiceOptions::Clear(google::protobuf::ServiceOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->deprecated_ = 0;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 13140: range 000000000C9360A0-000000000C9363B5
__int64 __fastcall google::protobuf::ServiceOptions::MergePartialFromCodedStream(
        google::protobuf::ServiceOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  unsigned __int64 ptr; // r8
  unsigned __int64 v10; // rax
  google::protobuf::UnknownFieldSet *v11; // rdx
  google::protobuf::UnknownFieldSet *v12; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rdx

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
  while ( 1 )
  {
    if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end )
    {
LABEL_3:
      TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
      v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
      if ( (char)TagFallback <= 0 )
      {
        if ( buffer_end > v8 )
        {
          LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
          if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
          {
            a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
            TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
            goto LABEL_7;
          }
        }
        goto LABEL_15;
      }
      a2->buffer_ = v8;
      goto LABEL_17;
    }
    while ( 1 )
    {
      TagFallback = 0;
LABEL_15:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 <= 0x3FFE )
        break;
handle_unusual_3:
      if ( !TagFallback )
        return 1LL;
LABEL_17:
      ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
      v10 = ptr & 1;
      if ( TagFallback <= 0x1F3F )
        goto LABEL_10;
      if ( (ptr & 1) != 0 )
        v12 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
      else
        v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
      if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                               &this->_extensions_,
                               TagFallback,
                               a2,
                               (const google::protobuf::Message *)&google::protobuf::_ServiceOptions_default_instance_,
                               v12) )
        return 0LL;
LABEL_13:
      buffer_end = a2->buffer_end_;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
      if ( a2->buffer_ < buffer_end )
        goto LABEL_3;
    }
LABEL_7:
    if ( TagFallback >> 3 != 33 )
      break;
    if ( (_BYTE)TagFallback != 8 )
      goto LABEL_9;
    *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    buffer_end = a2->buffer_end_;
    this->_has_bits_.has_bits_[0] |= 1u;
    if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
      && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
          SLOBYTE(Varint64Fallback.first) >= 0) )
    {
      a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
    }
    else
    {
      Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
      if ( !Varint64Fallback.second )
        return 0LL;
      buffer_end = a2->buffer_end_;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    }
    this->deprecated_ = Varint64Fallback.first != 0;
  }
  if ( TagFallback >> 3 != 999 )
    goto handle_unusual_3;
  if ( (_BYTE)TagFallback != 58 )
  {
LABEL_9:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    v10 = ptr & 1;
LABEL_10:
    if ( v10 )
      v11 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v11) )
      goto LABEL_13;
    return 0LL;
  }
  rep = this->uninterpreted_option_.rep_;
  if ( !rep )
  {
    total_size = this->uninterpreted_option_.total_size_;
    goto LABEL_51;
  }
  current_size = this->uninterpreted_option_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size >= rep->allocated_size )
  {
    total_size = this->uninterpreted_option_.total_size_;
    if ( allocated_size != total_size )
    {
      arena = this->uninterpreted_option_.arena_;
      rep->allocated_size = allocated_size + 1;
      if ( arena )
      {
LABEL_46:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
            0x60uLL);
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                          &arena->impl_,
                                                                          0x60uLL,
                                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
        google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
        goto LABEL_49;
      }
LABEL_52:
      AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
      google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
LABEL_49:
      v24 = this->uninterpreted_option_.current_size_;
      v25 = this->uninterpreted_option_.rep_;
      this->uninterpreted_option_.current_size_ = v24 + 1;
      v25->elements[v24] = AlignedAndAddCleanup;
      goto LABEL_29;
    }
LABEL_51:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
    arena = this->uninterpreted_option_.arena_;
    ++this->uninterpreted_option_.rep_->allocated_size;
    if ( arena )
      goto LABEL_46;
    goto LABEL_52;
  }
  AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
  this->uninterpreted_option_.current_size_ = current_size + 1;
LABEL_29:
  buffer = a2->buffer_;
  if ( a2->buffer_ < a2->buffer_end_
    && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
  {
    a2->buffer_ = buffer + 1;
LABEL_32:
    v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
    first = v20.first;
    if ( v20.second >= 0
      && (unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
      && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
    {
      goto LABEL_13;
    }
  }
  else
  {
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
    if ( VarintSizeAsIntFallback >= 0 )
      goto LABEL_32;
  }
  return 0LL;
};

// Line 13202: range 000000000C927580-000000000C927621
void __fastcall google::protobuf::ServiceOptions::SerializeWithCachedSizes(
        const google::protobuf::ServiceOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(33, this->deprecated_, output);
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v4],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 13232: range 000000000C9266C0-000000000C92679D
google::protobuf::uint8 *__fastcall google::protobuf::ServiceOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::ServiceOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  bool deprecated; // dl
  int current_size; // ebx
  int i; // r12d
  const google::protobuf::UninterpretedOption *v8; // rdi
  google::protobuf::uint8 *v9; // rdx
  unsigned int j; // eax
  char v11; // cl
  google::protobuf::uint8 *v12; // r12
  unsigned __int64 ptr; // rax

  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    deprecated = this->deprecated_;
    target += 3;
    *(_WORD *)(target - 3) = 648;
    *(target - 1) = deprecated;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v8 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[i];
      *(_WORD *)target = 16058;
      v9 = target + 2;
      for ( j = v8->_cached_size_; j > 0x7F; *(v9 - 1) = v11 | 0x80 )
      {
        v11 = j;
        j >>= 7;
        ++v9;
      }
      *v9 = j;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(v8, deterministic, v9 + 1);
    }
  }
  v12 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v12);
  else
    return v12;
};

// Line 13264: range 000000000C928870-000000000C928905
size_t __fastcall google::protobuf::ServiceOptions::ByteSizeLong(const google::protobuf::ServiceOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
    v6 += 3LL;
  this->_cached_size_ = v6;
  return v6;
};

// Line 13298: range 000000000C93AFD0-000000000C93B01D
void __fastcall google::protobuf::ServiceOptions::MergeFrom(
        google::protobuf::ServiceOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::ServiceOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::ServiceOptions *)__dynamic_cast(
                                                   from,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::ServiceOptions,
                                                   0LL);
  if ( v2 )
    google::protobuf::ServiceOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 13313: range 000000000C93AEF0-000000000C93AFBF
void __fastcall google::protobuf::ServiceOptions::MergeFrom(
        google::protobuf::ServiceOptions *const this,
        const google::protobuf::ServiceOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  bool deprecated; // al
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  if ( (from->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    deprecated = from->deprecated_;
    this->_has_bits_.has_bits_[0] |= 1u;
    this->deprecated_ = deprecated;
  }
};

// Line 13329: range 000000000C93B030-000000000C93B060
void __fastcall google::protobuf::ServiceOptions::CopyFrom(
        google::protobuf::ServiceOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::ServiceOptions::Clear(this);
    google::protobuf::ServiceOptions::MergeFrom(this, from);
  }
};

// Line 13336: range 000000000C93B070-000000000C93B0A0
void __fastcall google::protobuf::ServiceOptions::CopyFrom(
        google::protobuf::ServiceOptions *const this,
        const google::protobuf::ServiceOptions *from)
{
  if ( from != this )
  {
    google::protobuf::ServiceOptions::Clear(this);
    google::protobuf::ServiceOptions::MergeFrom(this, from);
  }
};

// Line 13341: range 000000000C929250-000000000C9292A9
bool __fastcall google::protobuf::ServiceOptions::IsInitialized(const google::protobuf::ServiceOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 13351: range 000000000C92F440-000000000C92F450
void __fastcall google::protobuf::ServiceOptions::Swap(
        google::protobuf::ServiceOptions *const this,
        google::protobuf::ServiceOptions *other)
{
  if ( other != this )
    google::protobuf::ServiceOptions::InternalSwap(this, other);
};

// Line 13354: range 000000000C92F360-000000000C92F43B
void __fastcall google::protobuf::ServiceOptions::InternalSwap(
        google::protobuf::ServiceOptions *const this,
        google::protobuf::ServiceOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  int v12; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v14; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  LOBYTE(total_size) = other->deprecated_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->deprecated_ = (char)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v14 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v14;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  v12 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v12;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 13436: range 000000000C9342E0-000000000C934388
void __fastcall google::protobuf::MethodOptions::MethodOptions(google::protobuf::MethodOptions *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A1808F8;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->uninterpreted_option_.arena_ = 0LL;
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( this != (google::protobuf::MethodOptions *)&google::protobuf::_MethodOptions_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  *(_QWORD *)&this->deprecated_ = 0LL;
};

// Line 13444: range 000000000C93BF80-000000000C93C0A7
__int64 __fastcall google::protobuf::MethodOptions::MethodOptions(
        google::protobuf::MethodOptions *this,
        const google::protobuf::MethodOptions *a2)
{
  google::protobuf::internal::ExtensionSet *p_extensions; // r13
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // r14
  google::protobuf::uint32 v5; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v8; // rdi
  const google::protobuf::UnknownFieldSet *v9; // r12
  google::protobuf::UnknownFieldSet *v10; // rdi
  __int64 result; // rax
  void **elements; // r15
  void **v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v15; // r12d

  p_extensions = &this->_extensions_;
  p_uninterpreted_option = &this->uninterpreted_option_;
  this->_vptr_MessageLite = (int (**)(...))off_1A1808F8;
  google::protobuf::internal::ExtensionSet::ExtensionSet(&this->_extensions_);
  v5 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->uninterpreted_option_.current_size_ = 0LL;
  current_size = a2->uninterpreted_option_.current_size_;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v5;
  this->uninterpreted_option_.arena_ = 0LL;
  this->uninterpreted_option_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->uninterpreted_option_.rep_->elements;
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(p_uninterpreted_option, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      p_uninterpreted_option,
      v13,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v15 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v15;
    if ( v15 > rep->allocated_size )
      rep->allocated_size = v15;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v9 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v8 & 1) != 0 )
      v10 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v10 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v10, v9);
  }
  google::protobuf::internal::ExtensionSet::MergeFrom(p_extensions, &a2->_extensions_);
  result = *(_QWORD *)&a2->deprecated_;
  *(_QWORD *)&this->deprecated_ = result;
  return result;
};

// Line 13459: range 000000000C92CC30-000000000C92CC3F
void __fastcall google::protobuf::MethodOptions::SharedCtor(google::protobuf::MethodOptions *const this)
{
  this->_cached_size_ = 0;
  *(_QWORD *)&this->deprecated_ = 0LL;
};

// Line 13465: range 000000000C9343E0-000000000C934403
void __fastcall google::protobuf::MethodOptions::~MethodOptions(google::protobuf::MethodOptions *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption> *p_uninterpreted_option; // rdi

  p_uninterpreted_option = &this->uninterpreted_option_;
  p_uninterpreted_option[-4].rep_ = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)off_1A1808F8;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(p_uninterpreted_option);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(&this->_extensions_);
};

// Line 13465: range 000000000C934410-000000000C934422
void __fastcall google::protobuf::MethodOptions::~MethodOptions(google::protobuf::MethodOptions *const this)
{
  google::protobuf::MethodOptions::~MethodOptions(this);
  operator delete(this, 0x70uLL);
};

// Line 13475: range 000000000C924110-000000000C924113
void __fastcall google::protobuf::MethodOptions::SetCachedSize(
        const google::protobuf::MethodOptions *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 13488: range 000000000C934390-000000000C9343CD
google::protobuf::MethodOptions *__fastcall google::protobuf::MethodOptions::New(
        google::protobuf::MethodOptions *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::MethodOptions *v2; // r12

  v2 = (google::protobuf::MethodOptions *)operator new(0x70uLL);
  google::protobuf::MethodOptions::MethodOptions(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::MethodOptions>(a2, v2);
  return v2;
};

// Line 13489: range 000000000C73168C-000000000C73169C
void __fastcall __noreturn google::protobuf::MethodOptions::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 13496: range 000000000C9314F0-000000000C931548
void __fastcall google::protobuf::MethodOptions::Clear(google::protobuf::MethodOptions *const this)
{
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v3; // rdi

  google::protobuf::internal::ExtensionSet::Clear(&this->_extensions_);
  google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)&this->uninterpreted_option_.current_size_);
  if ( (this->_has_bits_.has_bits_[0] & 3) != 0 )
    *(_QWORD *)&this->deprecated_ = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v3 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v3->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v3);
  }
};

// Line 13515: range 000000000C936AB0-000000000C936E92
__int64 __fastcall google::protobuf::MethodOptions::MergePartialFromCodedStream(
        google::protobuf::MethodOptions *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  unsigned int TagFallback; // esi
  const google::protobuf::uint8 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  google::protobuf::UnknownFieldSet *v12; // rdx
  google::protobuf::UnknownFieldSet *v13; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v21; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v22; // rdx
  const google::protobuf::uint8 *v23; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v25; // rax
  int first; // r14d
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 v28; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v31; // rdi

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
LABEL_2:
  if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end )
  {
LABEL_3:
    TagFallback = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second;
    v8 = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
    if ( (char)TagFallback <= 0 )
    {
      if ( v8 < buffer_end )
      {
        LODWORD(Varint64Fallback.first) = *(unsigned __int8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
        if ( (int)(TagFallback & ~LODWORD(Varint64Fallback.first)) > 127 )
        {
          a2->buffer_ = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 2LL);
          TagFallback = TagFallback + (LODWORD(Varint64Fallback.first) << 7) - 128;
          goto LABEL_7;
        }
      }
      goto LABEL_15;
    }
    a2->buffer_ = v8;
    goto LABEL_17;
  }
  while ( 1 )
  {
    TagFallback = 0;
LABEL_15:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 > 0x3FFE )
      goto handle_unusual_2;
LABEL_7:
    v9 = TagFallback >> 3;
    if ( TagFallback >> 3 == 34 )
    {
      if ( (_BYTE)TagFallback != 16 )
        goto LABEL_9;
      buffer = a2->buffer_;
      if ( a2->buffer_ >= a2->buffer_end_ )
      {
        v28 = 0;
      }
      else
      {
        v28 = *buffer;
        if ( *(char *)buffer >= 0 )
        {
          a2->buffer_ = buffer + 1;
LABEL_51:
          if ( v28 > 2 )
          {
            ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
            if ( (ptr & 1) != 0 )
              v31 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
            else
              v31 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
            google::protobuf::UnknownFieldSet::AddVarint(v31, 34, (int)v28);
            buffer_end = a2->buffer_end_;
            *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
          }
          else
          {
            this->_has_bits_.has_bits_[0] |= 2u;
            buffer_end = a2->buffer_end_;
            this->idempotency_level_ = v28;
            *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
          }
          goto LABEL_2;
        }
      }
      Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v28);
      v28 = Varint32Fallback;
      if ( Varint32Fallback < 0 )
        return 0LL;
      goto LABEL_51;
    }
    if ( v9 == 999 )
      break;
    if ( v9 == 33 )
    {
      if ( (_BYTE)TagFallback != 8 )
        goto LABEL_9;
      *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
      buffer_end = a2->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
        && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
            SLOBYTE(Varint64Fallback.first) >= 0) )
      {
        a2->buffer_ = (const google::protobuf::uint8 *)++*(_QWORD *)&Varint64Fallback.second;
      }
      else
      {
        Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
        if ( !Varint64Fallback.second )
          return 0LL;
        buffer_end = a2->buffer_end_;
        *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
      }
      this->deprecated_ = Varint64Fallback.first != 0;
      goto LABEL_2;
    }
handle_unusual_2:
    if ( !TagFallback )
      return 1LL;
LABEL_17:
    v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = v10 & 1;
    if ( TagFallback <= 0x1F3F )
      goto LABEL_10;
    if ( (v10 & 1) != 0 )
      v13 = (google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    else
      v13 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseField(
                             &this->_extensions_,
                             TagFallback,
                             a2,
                             (const google::protobuf::Message *)&google::protobuf::_MethodOptions_default_instance_,
                             v13) )
      return 0LL;
LABEL_13:
    buffer_end = a2->buffer_end_;
    *(_QWORD *)&Varint64Fallback.second = a2->buffer_;
    if ( a2->buffer_ < buffer_end )
      goto LABEL_3;
  }
  if ( (_BYTE)TagFallback != 58 )
  {
LABEL_9:
    v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v11 = v10 & 1;
LABEL_10:
    if ( v11 )
      v12 = (google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    else
      v12 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v12) )
      goto LABEL_13;
    return 0LL;
  }
  rep = this->uninterpreted_option_.rep_;
  if ( !rep )
  {
    total_size = this->uninterpreted_option_.total_size_;
LABEL_59:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->uninterpreted_option_, total_size + 1);
    rep = this->uninterpreted_option_.rep_;
    allocated_size = rep->allocated_size;
    goto LABEL_36;
  }
  current_size = this->uninterpreted_option_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size < rep->allocated_size )
  {
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)rep->elements[current_size];
    this->uninterpreted_option_.current_size_ = current_size + 1;
    goto LABEL_41;
  }
  total_size = this->uninterpreted_option_.total_size_;
  if ( allocated_size == total_size )
    goto LABEL_59;
LABEL_36:
  arena = this->uninterpreted_option_.arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
        0x60uLL);
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                      &arena->impl_,
                                                                      0x60uLL,
                                                                      google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
    google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
  }
  else
  {
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
    google::protobuf::UninterpretedOption::UninterpretedOption(AlignedAndAddCleanup);
  }
  v21 = this->uninterpreted_option_.current_size_;
  v22 = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.current_size_ = v21 + 1;
  v22->elements[v21] = AlignedAndAddCleanup;
LABEL_41:
  v23 = a2->buffer_;
  if ( a2->buffer_ < a2->buffer_end_ && (VarintSizeAsIntFallback = *v23, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
  {
    a2->buffer_ = v23 + 1;
LABEL_44:
    v25 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
    first = v25.first;
    if ( v25.second >= 0
      && (unsigned __int8)google::protobuf::UninterpretedOption::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
      && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
    {
      goto LABEL_13;
    }
  }
  else
  {
    VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
    if ( VarintSizeAsIntFallback >= 0 )
      goto LABEL_44;
  }
  return 0LL;
};

// Line 13597: range 000000000C927630-000000000C9276FA
void __fastcall google::protobuf::MethodOptions::SerializeWithCachedSizes(
        const google::protobuf::MethodOptions *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // ebx
  int current_size; // r12d
  int i; // ebx
  __int64 v5; // rdx
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteBool(33, this->deprecated_, output);
    if ( (v2 & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v2 & 2) == 0 )
  {
    goto LABEL_3;
  }
  google::protobuf::internal::WireFormatLite::WriteEnum(34, this->idempotency_level_, output);
LABEL_3:
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        999,
        (const google::protobuf::MessageLite *)this->uninterpreted_option_.rep_->elements[v5],
        output);
    }
  }
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(&this->_extensions_, 1000, 0x20000000, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 13633: range 000000000C9267A0-000000000C9268BD
google::protobuf::uint8 *__fastcall google::protobuf::MethodOptions::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::MethodOptions *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint32 v5; // eax
  bool deprecated; // dl
  unsigned __int64 idempotency_level; // rax
  google::protobuf::uint8 *i; // rdx
  char v9; // cl
  int current_size; // ebx
  int j; // r12d
  const google::protobuf::UninterpretedOption *v12; // rdi
  google::protobuf::uint8 *v13; // rdx
  unsigned int k; // eax
  char v15; // cl
  google::protobuf::uint8 *v16; // r12
  unsigned __int64 ptr; // rax

  v5 = this->_has_bits_.has_bits_[0];
  if ( (v5 & 1) != 0 )
  {
    deprecated = this->deprecated_;
    target += 3;
    *(_WORD *)(target - 3) = 648;
    *(target - 1) = deprecated;
  }
  if ( (v5 & 2) != 0 )
  {
    idempotency_level = this->idempotency_level_;
    *(_WORD *)target = 656;
    for ( i = target + 2; idempotency_level > 0x7F; *(i - 1) = v9 | 0x80 )
    {
      v9 = idempotency_level;
      idempotency_level >>= 7;
      ++i;
    }
    *i = idempotency_level;
    target = i + 1;
  }
  current_size = this->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    for ( j = 0; j != current_size; ++j )
    {
      v12 = (const google::protobuf::UninterpretedOption *)this->uninterpreted_option_.rep_->elements[j];
      v13 = target + 2;
      *(_WORD *)target = 16058;
      for ( k = v12->_cached_size_; k > 0x7F; *(v13 - 1) = v15 | 0x80 )
      {
        v15 = k;
        k >>= 7;
        ++v13;
      }
      *v13 = k;
      target = google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(
                 v12,
                 deterministic,
                 v13 + 1);
    }
  }
  v16 = google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
          &this->_extensions_,
          1000,
          0x20000000,
          deterministic,
          target);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v16);
  else
    return v16;
};

// Line 13671: range 000000000C928910-000000000C9289CE
size_t __fastcall google::protobuf::MethodOptions::ByteSizeLong(const google::protobuf::MethodOptions *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  size_t v4; // rbp
  __int64 current_size; // rbx
  size_t v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  size_t v9; // rdx
  unsigned int v10; // eax
  google::protobuf::uint32 v11; // eax
  int idempotency_level; // eax
  __int64 v13; // rax

  v2 = google::protobuf::internal::ExtensionSet::ByteSize(&this->_extensions_);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v4 = v2;
  if ( (ptr & 1) != 0 )
    v4 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL))
       + v2;
  current_size = (unsigned int)this->uninterpreted_option_.current_size_;
  v6 = v4 + 2 * current_size;
  if ( (_DWORD)current_size )
  {
    v7 = 0;
    do
    {
      v8 = v7++;
      v9 = google::protobuf::UninterpretedOption::ByteSizeLong((const google::protobuf::UninterpretedOption *const)this->uninterpreted_option_.rep_->elements[v8]);
      _BitScanReverse(&v10, v9 | 1);
      v6 += v9 + ((9 * v10 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v7 );
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (v11 & 3) != 0 )
  {
    if ( (v11 & 1) != 0 )
      v6 += 3LL;
    if ( (v11 & 2) != 0 )
    {
      idempotency_level = this->idempotency_level_;
      if ( idempotency_level < 0 )
      {
        v13 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&idempotency_level, idempotency_level | 1);
        v13 = (unsigned int)(9 * idempotency_level + 73) >> 6;
      }
      v6 += v13 + 2;
    }
  }
  this->_cached_size_ = v6;
  return v6;
};

// Line 13713: range 000000000C93C2C0-000000000C93C30D
void __fastcall google::protobuf::MethodOptions::MergeFrom(
        google::protobuf::MethodOptions *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::MethodOptions *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::MethodOptions *)__dynamic_cast(
                                                  from,
                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                  (const struct __class_type_info *)&`typeinfo for'google::protobuf::MethodOptions,
                                                  0LL);
  if ( v2 )
    google::protobuf::MethodOptions::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 13728: range 000000000C93C1D0-000000000C93C2BA
void __fastcall google::protobuf::MethodOptions::MergeFrom(
        google::protobuf::MethodOptions *const this,
        const google::protobuf::MethodOptions *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // eax
  void **elements; // r13
  void **v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v13; // r12d

  google::protobuf::internal::ExtensionSet::MergeFrom(&this->_extensions_, &from->_extensions_);
  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->uninterpreted_option_.current_size_;
  if ( current_size )
  {
    elements = from->uninterpreted_option_.rep_->elements;
    v11 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->uninterpreted_option_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
      &this->uninterpreted_option_,
      v11,
      elements,
      current_size,
      this->uninterpreted_option_.rep_->allocated_size - this->uninterpreted_option_.current_size_);
    rep = this->uninterpreted_option_.rep_;
    v13 = this->uninterpreted_option_.current_size_ + current_size;
    this->uninterpreted_option_.current_size_ = v13;
    if ( v13 > rep->allocated_size )
      rep->allocated_size = v13;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 3) != 0 )
  {
    if ( (v9 & 1) != 0 )
      this->deprecated_ = from->deprecated_;
    if ( (v9 & 2) != 0 )
      this->idempotency_level_ = from->idempotency_level_;
    this->_has_bits_.has_bits_[0] |= v9;
  }
};

// Line 13751: range 000000000C93C320-000000000C93C350
void __fastcall google::protobuf::MethodOptions::CopyFrom(
        google::protobuf::MethodOptions *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::MethodOptions::Clear(this);
    google::protobuf::MethodOptions::MergeFrom(this, from);
  }
};

// Line 13758: range 000000000C93C360-000000000C93C390
void __fastcall google::protobuf::MethodOptions::CopyFrom(
        google::protobuf::MethodOptions *const this,
        const google::protobuf::MethodOptions *from)
{
  if ( from != this )
  {
    google::protobuf::MethodOptions::Clear(this);
    google::protobuf::MethodOptions::MergeFrom(this, from);
  }
};

// Line 13763: range 000000000C9292B0-000000000C929309
bool __fastcall google::protobuf::MethodOptions::IsInitialized(const google::protobuf::MethodOptions *const this)
{
  bool result; // al
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  int v5; // edx

  result = google::protobuf::internal::ExtensionSet::IsInitialized(&this->_extensions_);
  if ( result )
  {
    LODWORD(v3) = this->uninterpreted_option_.current_size_ - 1;
    if ( (int)v3 >= 0 )
    {
      v3 = (int)v3;
      do
      {
        v4 = this->uninterpreted_option_.rep_->elements[v3];
        v5 = v4[8];
        while ( --v5 >= 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 5) + 8LL * v5 + 8) + 16LL) & 3) != 3 )
            return 0;
        }
        --v3;
      }
      while ( (int)v3 >= 0 );
    }
  }
  return result;
};

// Line 13773: range 000000000C92F840-000000000C92F850
void __fastcall google::protobuf::MethodOptions::Swap(
        google::protobuf::MethodOptions *const this,
        google::protobuf::MethodOptions *other)
{
  if ( other != this )
    google::protobuf::MethodOptions::InternalSwap(this, other);
};

// Line 13776: range 000000000C92F760-000000000C92F83B
void __fastcall google::protobuf::MethodOptions::InternalSwap(
        google::protobuf::MethodOptions *const this,
        google::protobuf::MethodOptions *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  int idempotency_level; // edx
  google::protobuf::uint32 v6; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  int cached_size; // eax
  int v13; // edx
  google::protobuf::internal::ExtensionSet *p_extensions; // rsi
  _QWORD *v15; // [rsp+0h] [rbp-18h]

  rep = this->uninterpreted_option_.rep_;
  this->uninterpreted_option_.rep_ = other->uninterpreted_option_.rep_;
  current_size = other->uninterpreted_option_.current_size_;
  other->uninterpreted_option_.rep_ = rep;
  LODWORD(rep) = this->uninterpreted_option_.current_size_;
  this->uninterpreted_option_.current_size_ = current_size;
  total_size = other->uninterpreted_option_.total_size_;
  other->uninterpreted_option_.current_size_ = (int)rep;
  LODWORD(rep) = this->uninterpreted_option_.total_size_;
  this->uninterpreted_option_.total_size_ = total_size;
  LOBYTE(total_size) = other->deprecated_;
  other->uninterpreted_option_.total_size_ = (int)rep;
  LOBYTE(rep) = this->deprecated_;
  this->deprecated_ = total_size;
  idempotency_level = other->idempotency_level_;
  other->deprecated_ = (char)rep;
  LODWORD(rep) = this->idempotency_level_;
  this->idempotency_level_ = idempotency_level;
  v6 = other->_has_bits_.has_bits_[0];
  other->idempotency_level_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v6;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v8 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v9 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v8 & 1) != 0 )
  {
    v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v15 = v9;
    v10 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v9 = v15;
  }
  v11 = *v10;
  *v10 = *v9;
  *v9 = v11;
LABEL_7:
  cached_size = this->_cached_size_;
  v13 = other->_cached_size_;
  p_extensions = &other->_extensions_;
  this->_cached_size_ = v13;
  *((_DWORD *)&p_extensions[1].extensions_._M_t._M_impl._M_header._M_color + 1) = cached_size;
  google::protobuf::internal::ExtensionSet::Swap(&this->_extensions_, p_extensions);
};

// Line 13883: range 000000000C92D8A0-000000000C92D920
void __fastcall google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(
        google::protobuf::UninterpretedOption_NamePart *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A1809D0;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  if ( this != (google::protobuf::UninterpretedOption_NamePart *)&google::protobuf::_UninterpretedOption_NamePart_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->name_part_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->is_extension_ = 0;
};

// Line 13891: range 000000000C9305C0-000000000C930651
__int64 __fastcall google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(
        google::protobuf::UninterpretedOption_NamePart *this,
        const google::protobuf::UninterpretedOption_NamePart *a2)
{
  google::protobuf::uint32 v3; // eax
  unsigned __int64 ptr; // rax
  const google::protobuf::UnknownFieldSet *v5; // r12
  google::protobuf::UnknownFieldSet *v6; // rax
  std::string *v7; // rsi
  __int64 result; // rax

  v3 = a2->_has_bits_.has_bits_[0];
  this->_internal_metadata_.ptr_ = 0LL;
  this->_vptr_MessageLite = (int (**)(...))off_1A1809D0;
  this->_has_bits_.has_bits_[0] = v3;
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  this->_cached_size_ = 0;
  if ( (ptr & 1) != 0 )
  {
    v5 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    v6 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v6, v5);
  }
  this->name_part_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (a2->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    v7 = a2->name_part_.ptr_;
    if ( v7 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->name_part_,
        (unsigned __int8 **)v7);
  }
  result = a2->is_extension_;
  this->is_extension_ = result;
  return result;
};

// Line 13906: range 000000000C92CD10-000000000C92CD23
void __fastcall google::protobuf::UninterpretedOption_NamePart::SharedCtor(
        google::protobuf::UninterpretedOption_NamePart *const this)
{
  this->_cached_size_ = 0;
  this->name_part_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->is_extension_ = 0;
};

// Line 13911: range 000000000C92DB60-000000000C92DBBB
void __fastcall google::protobuf::UninterpretedOption_NamePart::~UninterpretedOption_NamePart(
        google::protobuf::UninterpretedOption_NamePart *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // r12

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_part_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A1809D0;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x28uLL);
};

// Line 13911: range 000000000C92DB10-000000000C92DB5B
void __fastcall google::protobuf::UninterpretedOption_NamePart::~UninterpretedOption_NamePart(
        google::protobuf::UninterpretedOption_NamePart *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_part_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A1809D0;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 13916: range 000000000C92CD30-000000000C92CD69
void __fastcall google::protobuf::UninterpretedOption_NamePart::SharedDtor(
        google::protobuf::UninterpretedOption_NamePart *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->name_part_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
};

// Line 13922: range 000000000C924120-000000000C924123
void __fastcall google::protobuf::UninterpretedOption_NamePart::SetCachedSize(
        const google::protobuf::UninterpretedOption_NamePart *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 13935: range 000000000C92E040-000000000C92E07D
google::protobuf::UninterpretedOption_NamePart *__fastcall google::protobuf::UninterpretedOption_NamePart::New(
        google::protobuf::UninterpretedOption_NamePart *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::UninterpretedOption_NamePart *v2; // r12

  v2 = (google::protobuf::UninterpretedOption_NamePart *)operator new(0x28uLL);
  google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::UninterpretedOption_NamePart>(a2, v2);
  return v2;
};

// Line 13936: range 000000000C7311B2-000000000C7311C2
void __fastcall __noreturn google::protobuf::UninterpretedOption_NamePart::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x28uLL);
  _Unwind_Resume(v0);
};

// Line 13943: range 000000000C930B30-000000000C930B79
void __fastcall google::protobuf::UninterpretedOption_NamePart::Clear(
        google::protobuf::UninterpretedOption_NamePart *const this)
{
  std::string *ptr; // rax
  unsigned __int64 v2; // rax

  if ( (this->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    ptr = this->name_part_.ptr_;
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  v2 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->is_extension_ = 0;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFELL) )
      google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v2 & 0xFFFFFFFFFFFFFFFELL));
  }
};

// Line 13959: range 000000000C92E520-000000000C92E68E
bool __fastcall google::protobuf::UninterpretedOption_NamePart::MergePartialFromCodedStream(
        google::protobuf::UninterpretedOption_NamePart *const this,
        google::protobuf::io::CodedInputStream *input)
{
  const google::protobuf::uint8 *buffer_end; // rcx
  const google::protobuf::uint8 *buffer; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v6; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  std::string *ptr; // rsi

  buffer_end = input->buffer_end_;
  buffer = input->buffer_;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( buffer_end <= buffer )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_11;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        goto handle_unusual;
LABEL_11:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_4;
      ptr = this->name_part_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->name_part_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        ptr = this->name_part_.ptr_;
      }
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, ptr) )
        return 0;
LABEL_7:
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    if ( TagFallback >> 3 != 2 )
      break;
    if ( TagFallback != 16 )
      goto LABEL_4;
    *(_QWORD *)&Varint64Fallback.second = input->buffer_;
    buffer_end = input->buffer_end_;
    this->_has_bits_.has_bits_[0] |= 2u;
    if ( *(_QWORD *)&Varint64Fallback.second < (unsigned __int64)buffer_end
      && (Varint64Fallback.first = (unsigned __int8)**(_BYTE **)&Varint64Fallback.second,
          SLOBYTE(Varint64Fallback.first) >= 0) )
    {
      buffer = (const google::protobuf::uint8 *)(*(_QWORD *)&Varint64Fallback.second + 1LL);
      input->buffer_ = buffer;
    }
    else
    {
      Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(input);
      if ( !Varint64Fallback.second )
        return 0;
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
    }
    this->is_extension_ = Varint64Fallback.first != 0;
  }
handle_unusual:
  if ( TagFallback )
  {
LABEL_4:
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v6 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v7) )
      return 0;
    goto LABEL_7;
  }
  return 1;
};

// Line 14019: range 000000000C926DC0-000000000C926E29
void __fastcall google::protobuf::UninterpretedOption_NamePart::SerializeWithCachedSizes(
        const google::protobuf::UninterpretedOption_NamePart *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v2; // r12d
  unsigned __int64 ptr; // rdi

  v2 = this->_has_bits_.has_bits_[0];
  if ( (v2 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(1LL, this->name_part_.ptr_, output);
  if ( (v2 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteBool(2, this->is_extension_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 14048: range 000000000C924D30-000000000C924D93
google::protobuf::uint8 *__fastcall google::protobuf::UninterpretedOption_NamePart::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::UninterpretedOption_NamePart *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  google::protobuf::uint32 v4; // ebp
  bool is_extension; // al
  unsigned __int64 v7; // rdi
  std::string *ptr; // rdi

  v3 = target;
  v4 = this->_has_bits_.has_bits_[0];
  if ( (v4 & 1) != 0 )
  {
    ptr = this->name_part_.ptr_;
    *target = 10;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, target + 1);
  }
  if ( (v4 & 2) != 0 )
  {
    is_extension = this->is_extension_;
    v3 += 2;
    *(v3 - 2) = 16;
    *(v3 - 1) = is_extension;
  }
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 14097: range 000000000C924470-000000000C9244F5
size_t __fastcall google::protobuf::UninterpretedOption_NamePart::ByteSizeLong(
        const google::protobuf::UninterpretedOption_NamePart *const this)
{
  unsigned __int64 ptr; // rdi
  size_t v3; // rax
  google::protobuf::uint32 v4; // edx
  unsigned int v5; // edx
  size_t result; // rax
  std::string::size_type v7; // rcx
  unsigned int v8; // ecx

  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  v3 = 0LL;
  if ( (ptr & 1) != 0 )
    v3 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = this->_has_bits_.has_bits_[0];
  if ( (~(_BYTE)v4 & 3) != 0 )
  {
    v7 = 0LL;
    if ( (v4 & 1) != 0 )
    {
      _BitScanReverse(&v8, this->name_part_.ptr_->_M_string_length | 1);
      v7 = this->name_part_.ptr_->_M_string_length + ((9 * v8 + 73) >> 6) + 1;
    }
    if ( (v4 & 2) != 0 )
      v7 += 2LL;
    result = v7 + v3;
    this->_cached_size_ = result;
  }
  else
  {
    _BitScanReverse(&v5, this->name_part_.ptr_->_M_string_length | 1);
    result = v3 + this->name_part_.ptr_->_M_string_length + 3 + ((9 * v5 + 73) >> 6);
    this->_cached_size_ = result;
  }
  return result;
};

// Line 14125: range 000000000C930730-000000000C93077D
void __fastcall google::protobuf::UninterpretedOption_NamePart::MergeFrom(
        google::protobuf::UninterpretedOption_NamePart *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::UninterpretedOption_NamePart *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::UninterpretedOption_NamePart *)__dynamic_cast(
                                                                 from,
                                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::UninterpretedOption_NamePart,
                                                                 0LL);
  if ( v2 )
    google::protobuf::UninterpretedOption_NamePart::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 14140: range 000000000C930660-000000000C93071F
void __fastcall google::protobuf::UninterpretedOption_NamePart::MergeFrom(
        google::protobuf::UninterpretedOption_NamePart *const this,
        const google::protobuf::UninterpretedOption_NamePart *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  google::protobuf::uint32 v8; // ebp
  google::protobuf::uint32 v9; // eax
  std::string *v10; // rdi
  std::string *v11; // rsi

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  v8 = from->_has_bits_.has_bits_[0];
  if ( (v8 & 3) != 0 )
  {
    v9 = this->_has_bits_.has_bits_[0];
    if ( (v8 & 1) != 0 )
    {
      v9 |= 1u;
      v10 = this->name_part_.ptr_;
      this->_has_bits_.has_bits_[0] = v9;
      v11 = from->name_part_.ptr_;
      if ( v11 != v10 )
      {
        if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->name_part_,
            (unsigned __int8 **)v11);
        else
          std::string::_M_assign(v10, v11);
        v9 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v8 & 2) != 0 )
      this->is_extension_ = from->is_extension_;
    this->_has_bits_.has_bits_[0] = v9 | v8;
  }
};

// Line 14162: range 000000000C930B80-000000000C930BB0
void __fastcall google::protobuf::UninterpretedOption_NamePart::CopyFrom(
        google::protobuf::UninterpretedOption_NamePart *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::UninterpretedOption_NamePart::Clear(this);
    google::protobuf::UninterpretedOption_NamePart::MergeFrom(this, from);
  }
};

// Line 14169: range 000000000C930BC0-000000000C930BF0
void __fastcall google::protobuf::UninterpretedOption_NamePart::CopyFrom(
        google::protobuf::UninterpretedOption_NamePart *const this,
        const google::protobuf::UninterpretedOption_NamePart *from)
{
  if ( from != this )
  {
    google::protobuf::UninterpretedOption_NamePart::Clear(this);
    google::protobuf::UninterpretedOption_NamePart::MergeFrom(this, from);
  }
};

// Line 14175: range 000000000C924130-000000000C92413C
bool __fastcall google::protobuf::UninterpretedOption_NamePart::IsInitialized(
        const google::protobuf::UninterpretedOption_NamePart *const this)
{
  return (this->_has_bits_.has_bits_[0] & 3) == 3;
};

// Line 14180: range 000000000C92EB60-000000000C92EB70
void __fastcall google::protobuf::UninterpretedOption_NamePart::Swap(
        google::protobuf::UninterpretedOption_NamePart *const this,
        google::protobuf::UninterpretedOption_NamePart *other)
{
  if ( other != this )
    google::protobuf::UninterpretedOption_NamePart::InternalSwap(this, other);
};

// Line 14183: range 000000000C92EAB0-000000000C92EB5B
void __fastcall google::protobuf::UninterpretedOption_NamePart::InternalSwap(
        google::protobuf::UninterpretedOption_NamePart *const this,
        google::protobuf::UninterpretedOption_NamePart *other)
{
  std::string *ptr; // rax
  bool is_extension; // dl
  google::protobuf::uint32 v4; // edx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  int cached_size; // eax
  _QWORD *v11; // [rsp+0h] [rbp-18h]

  ptr = this->name_part_.ptr_;
  this->name_part_.ptr_ = other->name_part_.ptr_;
  is_extension = other->is_extension_;
  other->name_part_.ptr_ = ptr;
  LOBYTE(ptr) = this->is_extension_;
  this->is_extension_ = is_extension;
  v4 = other->_has_bits_.has_bits_[0];
  other->is_extension_ = (char)ptr;
  LODWORD(ptr) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v4;
  v5 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)ptr;
  v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v6 & 1) != 0 )
  {
    if ( (v5 & 1) == 0 )
    {
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v5 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v6 & 1) != 0 )
  {
    v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v11 = v7;
    v8 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v7 = v11;
  }
  v9 = *v8;
  *v8 = *v7;
  *v7 = v9;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 14301: range 000000000C934720-000000000C9347D8
void __fastcall google::protobuf::UninterpretedOption::UninterpretedOption(google::protobuf::UninterpretedOption *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180AA8;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->name_.arena_ = 0LL;
  *(_QWORD *)&this->name_.current_size_ = 0LL;
  this->name_.rep_ = 0LL;
  if ( this != (google::protobuf::UninterpretedOption *)&google::protobuf::_UninterpretedOption_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->identifier_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->string_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->aggregate_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->double_value_ = 0.0;
  *(_OWORD *)&this->positive_int_value_ = 0LL;
};

// Line 14309: range 000000000C93A450-000000000C93A5DF
__int64 __fastcall google::protobuf::UninterpretedOption::UninterpretedOption(
        google::protobuf::UninterpretedOption *this,
        const google::protobuf::UninterpretedOption *a2)
{
  google::protobuf::uint32 v3; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  google::protobuf::uint32 v10; // eax
  std::string *v11; // rsi
  std::string *v12; // rsi
  std::string *v13; // rsi
  __int64 result; // rax
  void **elements; // r14
  void **v16; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v18; // r12d

  v3 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->name_.current_size_ = 0LL;
  current_size = a2->name_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180AA8;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v3;
  this->name_.arena_ = 0LL;
  this->name_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->name_.rep_->elements;
    v16 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->name_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(
      &this->name_,
      v16,
      elements,
      current_size,
      this->name_.rep_->allocated_size - this->name_.current_size_);
    rep = this->name_.rep_;
    v18 = this->name_.current_size_ + current_size;
    this->name_.current_size_ = v18;
    if ( v18 > rep->allocated_size )
      rep->allocated_size = v18;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v8 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
  }
  v10 = a2->_has_bits_.has_bits_[0];
  this->identifier_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v10 & 1) != 0 )
  {
    v11 = a2->identifier_value_.ptr_;
    if ( v11 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->identifier_value_,
        (unsigned __int8 **)v11);
      v10 = a2->_has_bits_.has_bits_[0];
    }
  }
  this->string_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v10 & 2) != 0 )
  {
    v12 = a2->string_value_.ptr_;
    if ( v12 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->string_value_,
        (unsigned __int8 **)v12);
      v10 = a2->_has_bits_.has_bits_[0];
    }
  }
  this->aggregate_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (v10 & 4) != 0 )
  {
    v13 = a2->aggregate_value_.ptr_;
    if ( v13 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->aggregate_value_,
        (unsigned __int8 **)v13);
  }
  *(__m128i *)&this->positive_int_value_ = _mm_loadu_si128((const __m128i *)&a2->positive_int_value_);
  result = *(_QWORD *)&a2->double_value_;
  *(_QWORD *)&this->double_value_ = result;
  return result;
};

// Line 14339: range 000000000C92CE70-000000000C92CE9F
void __fastcall google::protobuf::UninterpretedOption::SharedCtor(google::protobuf::UninterpretedOption *const this)
{
  this->_cached_size_ = 0;
  this->identifier_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->string_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->aggregate_value_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->double_value_ = 0.0;
  *(_OWORD *)&this->positive_int_value_ = 0LL;
};

// Line 14344: range 000000000C939050-000000000C93906E
void __fastcall google::protobuf::UninterpretedOption::~UninterpretedOption(
        google::protobuf::UninterpretedOption *const this)
{
  this->_vptr_MessageLite = (int (**)(...))off_1A180AA8;
  google::protobuf::UninterpretedOption::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(&this->name_);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 14344: range 000000000C939080-000000000C939092
void __fastcall google::protobuf::UninterpretedOption::~UninterpretedOption(
        google::protobuf::UninterpretedOption *const this)
{
  google::protobuf::UninterpretedOption::~UninterpretedOption(this);
  operator delete(this, 0x60uLL);
};

// Line 14349: range 000000000C92CEA0-000000000C92CF4E
void __fastcall google::protobuf::UninterpretedOption::SharedDtor(google::protobuf::UninterpretedOption *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v3; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->identifier_value_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->string_value_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
  v3 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->aggregate_value_.ptr_;
  if ( v3 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v3 )
  {
    if ( (void **)v3->union_.align_to_int64 != &v3->union_.align_to_ptr + 2 )
      operator delete(v3->union_.align_to_ptr);
    operator delete(v3, 0x20uLL);
  }
};

// Line 14357: range 000000000C924140-000000000C924143
void __fastcall google::protobuf::UninterpretedOption::SetCachedSize(
        const google::protobuf::UninterpretedOption *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 14370: range 000000000C9347E0-000000000C93481D
google::protobuf::UninterpretedOption *__fastcall google::protobuf::UninterpretedOption::New(
        google::protobuf::UninterpretedOption *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::UninterpretedOption *v2; // r12

  v2 = (google::protobuf::UninterpretedOption *)operator new(0x60uLL);
  google::protobuf::UninterpretedOption::UninterpretedOption(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::UninterpretedOption>(a2, v2);
  return v2;
};

// Line 14371: range 000000000C731734-000000000C731744
void __fastcall __noreturn google::protobuf::UninterpretedOption::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x60uLL);
  _Unwind_Resume(v0);
};

// Line 14378: range 000000000C930E20-000000000C930EEE
void __fastcall google::protobuf::UninterpretedOption::Clear(google::protobuf::UninterpretedOption *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::UninterpretedOption_NamePart **elements; // rbp
  __int64 v5; // r12
  google::protobuf::UninterpretedOption_NamePart *v6; // rdi
  google::protobuf::uint32 v7; // eax
  std::string *ptr; // rdx
  std::string *v9; // rdx
  unsigned __int64 v10; // rdi
  std::string *v11; // rdx
  google::protobuf::UnknownFieldSet *v12; // rdi

  current_size = this->name_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->name_.rep_;
    elements = (google::protobuf::UninterpretedOption_NamePart **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::UninterpretedOption_NamePart::Clear(v6);
    }
    while ( (google::protobuf::UninterpretedOption_NamePart **)v5 != elements );
    this->name_.current_size_ = 0;
  }
  v7 = this->_has_bits_.has_bits_[0];
  if ( (v7 & 7) == 0 )
    goto LABEL_11;
  if ( (v7 & 1) != 0 )
  {
    ptr = this->identifier_value_.ptr_;
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  if ( (v7 & 2) != 0 )
  {
    v9 = this->string_value_.ptr_;
    v9->_M_string_length = 0LL;
    *v9->_M_dataplus._M_p = 0;
  }
  if ( (v7 & 4) != 0 )
  {
    v11 = this->aggregate_value_.ptr_;
    v11->_M_string_length = 0LL;
    *v11->_M_dataplus._M_p = 0;
    if ( (v7 & 0x38) == 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_11:
    if ( (v7 & 0x38) == 0 )
      goto LABEL_12;
  }
  this->double_value_ = 0.0;
  *(_OWORD *)&this->positive_int_value_ = 0LL;
LABEL_12:
  v10 = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (v10 & 1) != 0 )
  {
    v12 = (google::protobuf::UnknownFieldSet *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( v12->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v12);
  }
};

// Line 14410: range 000000000C92E690-000000000C92EA9E
bool __fastcall google::protobuf::UninterpretedOption::MergePartialFromCodedStream(
        google::protobuf::UninterpretedOption *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer_end; // rcx
  const google::protobuf::uint8 *i; // rdx
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v9; // rdx
  std::string *v10; // rsi
  const google::protobuf::uint8 *v11; // rcx
  const google::protobuf::uint8 *v12; // rdx
  double v13; // rax
  std::pair<long unsigned int,bool> v14; // rax
  bool result; // al
  const google::protobuf::uint8 *v16; // rdx
  google::protobuf::uint64 v17; // rax
  std::pair<long unsigned int,bool> Varint64Fallback; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption_NamePart *AlignedAndAddCleanup; // r13
  const google::protobuf::uint8 *buffer; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v25; // rax
  int first; // r14d
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  __int64 v29; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v30; // rdx
  google::protobuf::uint64 value[6]; // [rsp+18h] [rbp-30h] BYREF

  p_internal_metadata = &this->_internal_metadata_;
  buffer_end = a2->buffer_end_;
  for ( i = a2->buffer_; ; i = a2->buffer_ )
  {
LABEL_8:
    if ( buffer_end > i )
    {
LABEL_9:
      TagFallback = *i;
      if ( (char)TagFallback > 0 )
      {
        a2->buffer_ = i + 1;
        break;
      }
      goto LABEL_2;
    }
LABEL_23:
    TagFallback = 0;
LABEL_2:
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
    if ( TagFallback - 1 <= 0x7E )
      break;
handle_unusual_1:
    if ( !TagFallback )
      return 1;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v9) )
      goto LABEL_28;
LABEL_7:
    buffer_end = a2->buffer_end_;
  }
  if ( TagFallback > 0x47 )
    goto handle_unusual_1;
  switch ( TagFallback >> 3 )
  {
    case 0u:
    case 1u:
      goto handle_unusual_1;
    case 2u:
      if ( TagFallback != 18 )
        goto LABEL_4;
      rep = this->name_.rep_;
      if ( !rep )
      {
        total_size = this->name_.total_size_;
LABEL_56:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->name_, total_size + 1);
        rep = this->name_.rep_;
        allocated_size = rep->allocated_size;
        goto LABEL_57;
      }
      current_size = this->name_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size < rep->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)rep->elements[current_size];
        this->name_.current_size_ = current_size + 1;
        goto LABEL_44;
      }
      total_size = this->name_.total_size_;
      if ( allocated_size == total_size )
        goto LABEL_56;
LABEL_57:
      arena = this->name_.arena_;
      rep->allocated_size = allocated_size + 1;
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption_NamePart,
            0x28uLL);
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                   &arena->impl_,
                                                                                   0x28uLL,
                                                                                   google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption_NamePart>);
        google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)operator new(0x28uLL);
        google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(AlignedAndAddCleanup);
      }
      v29 = this->name_.current_size_;
      v30 = this->name_.rep_;
      this->name_.current_size_ = v29 + 1;
      v30->elements[v29] = AlignedAndAddCleanup;
LABEL_44:
      buffer = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *buffer, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = buffer + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          goto LABEL_28;
      }
      v25 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v25.first;
      if ( v25.second >= 0
        && google::protobuf::UninterpretedOption_NamePart::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
        && google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        goto LABEL_7;
      }
LABEL_28:
      result = 0;
      break;
    case 3u:
      if ( TagFallback != 26 )
        goto LABEL_4;
      v10 = this->identifier_value_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->identifier_value_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v10 = this->identifier_value_.ptr_;
      }
      goto LABEL_38;
    case 4u:
      if ( TagFallback != 32 )
        goto LABEL_4;
      v16 = a2->buffer_;
      buffer_end = a2->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 8u;
      if ( v16 < buffer_end )
      {
        v17 = *v16;
        if ( (v17 & 0x80u) == 0LL )
        {
          i = v16 + 1;
          this->positive_int_value_ = v17;
          a2->buffer_ = i;
          goto LABEL_8;
        }
      }
      Varint64Fallback = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
      this->positive_int_value_ = Varint64Fallback.first;
      if ( !Varint64Fallback.second )
        goto LABEL_28;
      goto LABEL_7;
    case 5u:
      if ( TagFallback != 40 )
        goto LABEL_4;
      *(_QWORD *)&v14.second = a2->buffer_;
      buffer_end = a2->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 0x10u;
      if ( *(_QWORD *)&v14.second < (unsigned __int64)buffer_end
        && (v14.first = (unsigned __int8)**(_BYTE **)&v14.second, SLOBYTE(v14.first) >= 0) )
      {
        i = (const google::protobuf::uint8 *)(*(_QWORD *)&v14.second + 1LL);
        a2->buffer_ = i;
      }
      else
      {
        v14 = google::protobuf::io::CodedInputStream::ReadVarint64Fallback(a2);
        if ( !v14.second )
          goto LABEL_28;
        buffer_end = a2->buffer_end_;
        i = a2->buffer_;
      }
      this->negative_int_value_ = v14.first;
      goto LABEL_8;
    case 6u:
      if ( TagFallback != 49 )
        goto LABEL_4;
      v11 = a2->buffer_end_;
      v12 = a2->buffer_;
      this->_has_bits_.has_bits_[0] |= 0x20u;
      if ( (int)v11 - (int)v12 <= 7 )
      {
        result = google::protobuf::io::CodedInputStream::ReadLittleEndian64Fallback(a2, value);
        if ( !result )
          return result;
        v13 = *(double *)value;
        v11 = a2->buffer_end_;
        i = a2->buffer_;
      }
      else
      {
        v13 = *(double *)v12;
        i = v12 + 8;
        a2->buffer_ = i;
      }
      this->double_value_ = v13;
      if ( v11 > i )
        goto LABEL_9;
      goto LABEL_23;
    case 7u:
      if ( TagFallback != 58 )
        goto LABEL_4;
      v10 = this->string_value_.ptr_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->string_value_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v10 = this->string_value_.ptr_;
      }
      goto LABEL_38;
    case 8u:
      if ( TagFallback != 66 )
        goto LABEL_4;
      v10 = this->aggregate_value_.ptr_;
      this->_has_bits_.has_bits_[0] |= 4u;
      if ( v10 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->aggregate_value_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v10 = this->aggregate_value_.ptr_;
      }
LABEL_38:
      if ( !google::protobuf::internal::WireFormatLite::ReadBytes(a2, v10) )
        goto LABEL_28;
      goto LABEL_7;
  }
  return result;
};

// Line 14538: range 000000000C927700-000000000C92782C
void __fastcall google::protobuf::UninterpretedOption::SerializeWithCachedSizes(
        const google::protobuf::UninterpretedOption *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  double v2; // xmm1_8
  int current_size; // r12d
  int i; // ebx
  __int64 v5; // rdx
  google::protobuf::uint32 v6; // ebx
  unsigned __int64 ptr; // rdi

  current_size = this->name_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v5 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2,
        (const google::protobuf::MessageLite *)this->name_.rep_->elements[v5],
        output);
    }
  }
  v6 = this->_has_bits_.has_bits_[0];
  if ( (v6 & 1) != 0 )
  {
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, this->identifier_value_.ptr_, output);
    if ( (v6 & 8) == 0 )
    {
LABEL_6:
      if ( (v6 & 0x10) == 0 )
        goto LABEL_7;
      goto LABEL_15;
    }
  }
  else if ( (v6 & 8) == 0 )
  {
    goto LABEL_6;
  }
  google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->positive_int_value_, output);
  if ( (v6 & 0x10) == 0 )
  {
LABEL_7:
    if ( (v6 & 0x20) == 0 )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_15:
  google::protobuf::internal::WireFormatLite::WriteInt64(5, this->negative_int_value_, output);
  if ( (v6 & 0x20) == 0 )
  {
LABEL_8:
    if ( (v6 & 2) == 0 )
      goto LABEL_9;
LABEL_17:
    google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(7LL, this->string_value_.ptr_, output);
    if ( (v6 & 4) == 0 )
      goto LABEL_10;
    goto LABEL_18;
  }
LABEL_16:
  google::protobuf::internal::WireFormatLite::WriteDouble(6, v2, output);
  if ( (v6 & 2) != 0 )
    goto LABEL_17;
LABEL_9:
  if ( (v6 & 4) == 0 )
    goto LABEL_10;
LABEL_18:
  google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(8LL, this->aggregate_value_.ptr_, output);
LABEL_10:
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 14600: range 000000000C924DA0-000000000C924F35
google::protobuf::uint8 *__fastcall google::protobuf::UninterpretedOption::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::UninterpretedOption *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebp
  google::protobuf::uint8 *v5; // r12
  int i; // r14d
  const google::protobuf::UninterpretedOption_NamePart *v7; // rdi
  _BYTE *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  google::protobuf::uint32 v11; // ebx
  google::protobuf::uint64 positive_int_value; // rcx
  _BYTE *v13; // rdx
  char v14; // al
  unsigned __int64 negative_int_value; // rcx
  _BYTE *v16; // rdx
  char v17; // al
  double double_value; // xmm0_8
  unsigned __int64 v19; // rax
  std::string *ptr; // rdi
  std::string *v22; // rdi
  std::string *v23; // rdi

  current_size = this->name_.current_size_;
  if ( current_size )
  {
    v5 = target;
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::UninterpretedOption_NamePart *)this->name_.rep_->elements[i];
      *v5 = 18;
      v8 = v5 + 1;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      v5 = google::protobuf::UninterpretedOption_NamePart::InternalSerializeWithCachedSizesToArray(
             v7,
             deterministic,
             v8 + 1);
    }
  }
  else
  {
    v5 = target;
  }
  v11 = this->_has_bits_.has_bits_[0];
  if ( (v11 & 1) != 0 )
  {
    ptr = this->identifier_value_.ptr_;
    *v5 = 26;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, v5 + 1);
  }
  if ( (v11 & 8) != 0 )
  {
    positive_int_value = this->positive_int_value_;
    v13 = v5 + 1;
    for ( *v5 = 32; positive_int_value > 0x7F; *(v13 - 1) = v14 | 0x80 )
    {
      v14 = positive_int_value;
      positive_int_value >>= 7;
      ++v13;
    }
    *v13 = positive_int_value;
    v5 = v13 + 1;
  }
  if ( (v11 & 0x10) != 0 )
  {
    negative_int_value = this->negative_int_value_;
    v16 = v5 + 1;
    for ( *v5 = 40; negative_int_value > 0x7F; *(v16 - 1) = v17 | 0x80 )
    {
      v17 = negative_int_value;
      negative_int_value >>= 7;
      ++v16;
    }
    *v16 = negative_int_value;
    v5 = v16 + 1;
  }
  if ( (v11 & 0x20) != 0 )
  {
    double_value = this->double_value_;
    v5 += 9;
    *(v5 - 9) = 49;
    *((double *)v5 - 1) = double_value;
  }
  if ( (v11 & 2) != 0 )
  {
    v23 = this->string_value_.ptr_;
    *v5 = 58;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v23, v5 + 1);
  }
  if ( (v11 & 4) != 0 )
  {
    v22 = this->aggregate_value_.ptr_;
    *v5 = 66;
    v5 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v22, v5 + 1);
  }
  v19 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v19 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v19 & 0xFFFFFFFFFFFFFFFELL),
             v5);
  else
    return v5;
};

// Line 14667: range 000000000C927840-000000000C927988
size_t __fastcall google::protobuf::UninterpretedOption::ByteSizeLong(
        const google::protobuf::UninterpretedOption *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax
  google::protobuf::uint32 v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // rdx

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->name_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::UninterpretedOption_NamePart::ByteSizeLong((const google::protobuf::UninterpretedOption_NamePart *const)this->name_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  v10 = this->_has_bits_.has_bits_[0];
  if ( (v10 & 0x3F) != 0 )
  {
    if ( (v10 & 1) != 0 )
    {
      _BitScanReverse(&v11, this->identifier_value_.ptr_->_M_string_length | 1);
      v5 += this->identifier_value_.ptr_->_M_string_length + 1 + ((9 * v11 + 73) >> 6);
    }
    if ( (v10 & 2) != 0 )
    {
      _BitScanReverse(&v12, this->string_value_.ptr_->_M_string_length | 1);
      v5 += this->string_value_.ptr_->_M_string_length + 1 + ((9 * v12 + 73) >> 6);
    }
    if ( (v10 & 4) != 0 )
    {
      _BitScanReverse(&v13, this->aggregate_value_.ptr_->_M_string_length | 1);
      v5 += this->aggregate_value_.ptr_->_M_string_length + 1 + ((9 * v13 + 73) >> 6);
    }
    if ( (v10 & 8) != 0 )
    {
      _BitScanReverse64(&v14, this->positive_int_value_ | 1);
      v5 += ((unsigned int)(9 * v14 + 73) >> 6) + 1LL;
    }
    if ( (v10 & 0x10) != 0 )
    {
      _BitScanReverse64(&v16, this->negative_int_value_ | 1);
      v5 += ((unsigned int)(9 * v16 + 73) >> 6) + 1LL;
    }
    if ( (v10 & 0x20) != 0 )
      v5 += 9LL;
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 14736: range 000000000C93EBD0-000000000C93EC1D
void __fastcall google::protobuf::UninterpretedOption::MergeFrom(
        google::protobuf::UninterpretedOption *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::UninterpretedOption *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::UninterpretedOption *)__dynamic_cast(
                                                        from,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                        (const struct __class_type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
                                                        0LL);
  if ( v2 )
    google::protobuf::UninterpretedOption::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 14751: range 000000000C93A5F0-000000000C93A7D4
void __fastcall google::protobuf::UninterpretedOption::MergeFrom(
        google::protobuf::UninterpretedOption *const this,
        const google::protobuf::UninterpretedOption *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::uint32 v9; // r12d
  google::protobuf::uint32 v10; // eax
  std::string *v11; // rdi
  std::string *v12; // rsi
  std::string *v13; // rdi
  std::string *v14; // rsi
  std::string *v15; // rdi
  std::string *v16; // rsi
  void **elements; // r13
  void **v18; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v20; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->name_.current_size_;
  if ( current_size )
  {
    elements = from->name_.rep_->elements;
    v18 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->name_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(
      &this->name_,
      v18,
      elements,
      current_size,
      this->name_.rep_->allocated_size - this->name_.current_size_);
    rep = this->name_.rep_;
    v20 = this->name_.current_size_ + current_size;
    this->name_.current_size_ = v20;
    if ( v20 > rep->allocated_size )
      rep->allocated_size = v20;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 0x3F) != 0 )
  {
    v10 = this->_has_bits_.has_bits_[0];
    if ( (v9 & 1) != 0 )
    {
      v10 |= 1u;
      v15 = this->identifier_value_.ptr_;
      this->_has_bits_.has_bits_[0] = v10;
      v16 = from->identifier_value_.ptr_;
      if ( v16 != v15 )
      {
        if ( v15 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->identifier_value_,
            (unsigned __int8 **)v16);
        else
          std::string::_M_assign(v15, v16);
        v10 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v9 & 2) != 0 )
    {
      v10 |= 2u;
      v11 = this->string_value_.ptr_;
      this->_has_bits_.has_bits_[0] = v10;
      v12 = from->string_value_.ptr_;
      if ( v12 != v11 )
      {
        if ( v11 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->string_value_,
            (unsigned __int8 **)v12);
        else
          std::string::_M_assign(v11, v12);
        v10 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v9 & 4) != 0 )
    {
      v10 |= 4u;
      v13 = this->aggregate_value_.ptr_;
      this->_has_bits_.has_bits_[0] = v10;
      v14 = from->aggregate_value_.ptr_;
      if ( v14 != v13 )
      {
        if ( v13 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->aggregate_value_,
            (unsigned __int8 **)v14);
        else
          std::string::_M_assign(v13, v14);
        v10 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v9 & 8) != 0 )
      this->positive_int_value_ = from->positive_int_value_;
    if ( (v9 & 0x10) != 0 )
      this->negative_int_value_ = from->negative_int_value_;
    if ( (v9 & 0x20) != 0 )
      this->double_value_ = from->double_value_;
    this->_has_bits_.has_bits_[0] = v10 | v9;
  }
};

// Line 14788: range 000000000C93EC30-000000000C93EC60
void __fastcall google::protobuf::UninterpretedOption::CopyFrom(
        google::protobuf::UninterpretedOption *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::UninterpretedOption::Clear(this);
    google::protobuf::UninterpretedOption::MergeFrom(this, from);
  }
};

// Line 14795: range 000000000C93EC70-000000000C93ECA0
void __fastcall google::protobuf::UninterpretedOption::CopyFrom(
        google::protobuf::UninterpretedOption *const this,
        const google::protobuf::UninterpretedOption *from)
{
  if ( from != this )
  {
    google::protobuf::UninterpretedOption::Clear(this);
    google::protobuf::UninterpretedOption::MergeFrom(this, from);
  }
};

// Line 14806: range 000000000C92FDB0-000000000C92FDC0
void __fastcall google::protobuf::UninterpretedOption::Swap(
        google::protobuf::UninterpretedOption *const this,
        google::protobuf::UninterpretedOption *other)
{
  if ( other != this )
    google::protobuf::UninterpretedOption::InternalSwap(this, other);
};

// Line 14809: range 000000000C92FC90-000000000C92FDAB
void __fastcall google::protobuf::UninterpretedOption::InternalSwap(
        google::protobuf::UninterpretedOption *const this,
        google::protobuf::UninterpretedOption *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  std::string *v7; // rdx
  std::string *v8; // rax
  std::string *v9; // rdx
  std::string *v10; // rax
  google::protobuf::uint64 positive_int_value; // rdx
  google::protobuf::uint64 v12; // rax
  google::protobuf::int64 negative_int_value; // rdx
  google::protobuf::int64 v14; // rax
  double double_value; // xmm0_8
  double v16; // xmm1_8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rcx
  int cached_size; // eax
  _QWORD *v23; // [rsp+0h] [rbp-18h]

  rep = this->name_.rep_;
  this->name_.rep_ = other->name_.rep_;
  current_size = other->name_.current_size_;
  other->name_.rep_ = rep;
  LODWORD(rep) = this->name_.current_size_;
  this->name_.current_size_ = current_size;
  total_size = other->name_.total_size_;
  other->name_.current_size_ = (int)rep;
  LODWORD(rep) = this->name_.total_size_;
  this->name_.total_size_ = total_size;
  ptr = other->identifier_value_.ptr_;
  other->name_.total_size_ = (int)rep;
  v6 = this->identifier_value_.ptr_;
  this->identifier_value_.ptr_ = ptr;
  v7 = other->string_value_.ptr_;
  other->identifier_value_.ptr_ = v6;
  v8 = this->string_value_.ptr_;
  this->string_value_.ptr_ = v7;
  v9 = other->aggregate_value_.ptr_;
  other->string_value_.ptr_ = v8;
  v10 = this->aggregate_value_.ptr_;
  this->aggregate_value_.ptr_ = v9;
  positive_int_value = other->positive_int_value_;
  other->aggregate_value_.ptr_ = v10;
  v12 = this->positive_int_value_;
  this->positive_int_value_ = positive_int_value;
  negative_int_value = other->negative_int_value_;
  other->positive_int_value_ = v12;
  v14 = this->negative_int_value_;
  this->negative_int_value_ = negative_int_value;
  double_value = this->double_value_;
  v16 = other->double_value_;
  LODWORD(negative_int_value) = other->_has_bits_.has_bits_[0];
  other->negative_int_value_ = v14;
  LODWORD(v14) = this->_has_bits_.has_bits_[0];
  this->double_value_ = v16;
  other->double_value_ = double_value;
  this->_has_bits_.has_bits_[0] = negative_int_value;
  v17 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = v14;
  v18 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v18 & 1) != 0 )
  {
    if ( (v17 & 1) == 0 )
    {
      v19 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v18 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v17 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v19 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v18 & 1) != 0 )
  {
    v20 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v23 = v19;
    v20 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v19 = v23;
  }
  v21 = *v20;
  *v20 = *v19;
  *v19 = v21;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 15134: range 000000000C932D10-000000000C932DD0
void __fastcall google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(
        google::protobuf::SourceCodeInfo_Location *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180B80;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  *(_QWORD *)&this->path_.current_size_ = 0LL;
  this->path_.rep_ = 0LL;
  *(_QWORD *)&this->span_.current_size_ = 0LL;
  this->span_.rep_ = 0LL;
  this->leading_detached_comments_.arena_ = 0LL;
  *(_QWORD *)&this->leading_detached_comments_.current_size_ = 0LL;
  this->leading_detached_comments_.rep_ = 0LL;
  if ( this != (google::protobuf::SourceCodeInfo_Location *)&google::protobuf::_SourceCodeInfo_Location_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->leading_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->trailing_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
};

// Line 15142: range 000000000C933110-000000000C933324
unsigned __int8 *__fastcall google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(
        google::protobuf::SourceCodeInfo_Location *this,
        const google::protobuf::SourceCodeInfo_Location *a2)
{
  google::protobuf::uint32 v3; // eax
  int current_size; // esi
  int v6; // esi
  int v7; // r12d
  unsigned __int64 ptr; // r12
  unsigned __int64 v9; // rdi
  const google::protobuf::UnknownFieldSet *v10; // r12
  google::protobuf::UnknownFieldSet *v11; // rdi
  unsigned __int8 *result; // rax
  std::string *v13; // rsi
  std::string *v14; // rsi
  void **elements; // r14
  void **v16; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v18; // r12d

  v3 = a2->_has_bits_.has_bits_[0];
  current_size = a2->path_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180B80;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v3;
  *(_QWORD *)&this->path_.current_size_ = 0LL;
  this->path_.rep_ = 0LL;
  if ( current_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->path_, current_size);
    memcpy(this->path_.rep_->elements, a2->path_.rep_->elements, 4LL * a2->path_.current_size_);
    this->path_.current_size_ = a2->path_.current_size_;
  }
  v6 = a2->span_.current_size_;
  *(_QWORD *)&this->span_.current_size_ = 0LL;
  this->span_.rep_ = 0LL;
  if ( v6 )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->span_, v6);
    memcpy(this->span_.rep_->elements, a2->span_.rep_->elements, 4LL * a2->span_.current_size_);
    this->span_.current_size_ = a2->span_.current_size_;
  }
  *(_QWORD *)&this->leading_detached_comments_.current_size_ = 0LL;
  v7 = a2->leading_detached_comments_.current_size_;
  this->leading_detached_comments_.arena_ = 0LL;
  this->leading_detached_comments_.rep_ = 0LL;
  if ( v7 )
  {
    elements = a2->leading_detached_comments_.rep_->elements;
    v16 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->leading_detached_comments_, v7);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->leading_detached_comments_,
      v16,
      elements,
      v7,
      this->leading_detached_comments_.rep_->allocated_size - this->leading_detached_comments_.current_size_);
    rep = this->leading_detached_comments_.rep_;
    v18 = this->leading_detached_comments_.current_size_ + v7;
    this->leading_detached_comments_.current_size_ = v18;
    if ( v18 > rep->allocated_size )
      rep->allocated_size = v18;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v9 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v10 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v9 & 1) != 0 )
      v11 = (google::protobuf::UnknownFieldSet *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    else
      v11 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v11, v10);
  }
  result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
  this->leading_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v13 = a2->leading_comments_.ptr_;
    if ( v13 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->leading_comments_,
        (unsigned __int8 **)v13);
      result = (unsigned __int8 *)a2->_has_bits_.has_bits_[0];
    }
  }
  this->trailing_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( ((unsigned __int8)result & 2) != 0 )
  {
    v14 = a2->trailing_comments_.ptr_;
    if ( v14 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      return google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
               (__int64 **)&this->trailing_comments_,
               (unsigned __int8 **)v14);
  }
  return result;
};

// Line 15163: range 000000000C92D010-000000000C92D027
void __fastcall google::protobuf::SourceCodeInfo_Location::SharedCtor(
        google::protobuf::SourceCodeInfo_Location *const this)
{
  this->_cached_size_ = 0;
  this->leading_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  this->trailing_comments_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
};

// Line 15168: range 000000000C933070-000000000C9330E6
void __fastcall google::protobuf::SourceCodeInfo_Location::~SourceCodeInfo_Location(
        google::protobuf::SourceCodeInfo_Location *const this)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rdi
  google::protobuf::RepeatedField<int>::Rep *v3; // rdi

  this->_vptr_MessageLite = (int (**)(...))off_1A180B80;
  google::protobuf::SourceCodeInfo_Location::SharedDtor(this);
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&this->leading_detached_comments_);
  rep = this->span_.rep_;
  if ( rep && !rep->arena )
    operator delete(rep, 4LL * this->span_.total_size_ + 8);
  v3 = this->path_.rep_;
  if ( v3 && !v3->arena )
  {
    operator delete(v3, 4LL * this->path_.total_size_ + 8);
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  }
  else
  {
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  }
};

// Line 15168: range 000000000C9330F0-000000000C933102
void __fastcall google::protobuf::SourceCodeInfo_Location::~SourceCodeInfo_Location(
        google::protobuf::SourceCodeInfo_Location *const this)
{
  google::protobuf::SourceCodeInfo_Location::~SourceCodeInfo_Location(this);
  operator delete(this, 0x70uLL);
};

// Line 15173: range 000000000C92D030-000000000C92D0AE
void __fastcall google::protobuf::SourceCodeInfo_Location::SharedDtor(
        google::protobuf::SourceCodeInfo_Location *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v2; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->leading_comments_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  v2 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->trailing_comments_.ptr_;
  if ( v2 != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && v2 )
  {
    if ( (void **)v2->union_.align_to_int64 != &v2->union_.align_to_ptr + 2 )
      operator delete(v2->union_.align_to_ptr);
    operator delete(v2, 0x20uLL);
  }
};

// Line 15180: range 000000000C924180-000000000C924183
void __fastcall google::protobuf::SourceCodeInfo_Location::SetCachedSize(
        const google::protobuf::SourceCodeInfo_Location *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 15193: range 000000000C932DE0-000000000C932E1D
google::protobuf::SourceCodeInfo_Location *__fastcall google::protobuf::SourceCodeInfo_Location::New(
        google::protobuf::SourceCodeInfo_Location *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::SourceCodeInfo_Location *v2; // r12

  v2 = (google::protobuf::SourceCodeInfo_Location *)operator new(0x70uLL);
  google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::SourceCodeInfo_Location>(a2, v2);
  return v2;
};

// Line 15194: range 000000000C7312DA-000000000C7312EA
void __fastcall __noreturn google::protobuf::SourceCodeInfo_Location::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x70uLL);
  _Unwind_Resume(v0);
};

// Line 15201: range 000000000C930CE0-000000000C930DA2
void __fastcall google::protobuf::SourceCodeInfo_Location::Clear(google::protobuf::SourceCodeInfo_Location *const this)
{
  int current_size; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  void **elements; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  google::protobuf::uint32 v6; // eax
  std::string *ptr; // rdx
  unsigned __int64 v8; // rax
  std::string *v9; // rax

  current_size = this->leading_detached_comments_.current_size_;
  this->path_.current_size_ = 0;
  this->span_.current_size_ = 0;
  if ( current_size > 0 )
  {
    rep = this->leading_detached_comments_.rep_;
    elements = rep->elements;
    v4 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v5 = (__int64)*elements++;
      *(_QWORD *)(v5 + 8) = 0LL;
      **(_BYTE **)v5 = 0;
    }
    while ( elements != (void **)v4 );
    this->leading_detached_comments_.current_size_ = 0;
  }
  v6 = this->_has_bits_.has_bits_[0];
  if ( (v6 & 3) == 0 )
    goto LABEL_9;
  if ( (v6 & 1) != 0 )
  {
    ptr = this->leading_comments_.ptr_;
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
  }
  if ( (v6 & 2) != 0 )
  {
    v9 = this->trailing_comments_.ptr_;
    v9->_M_string_length = 0LL;
    *v9->_M_dataplus._M_p = 0;
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (v8 & 1) == 0 )
      return;
  }
  else
  {
LABEL_9:
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (v8 & 1) == 0 )
      return;
  }
  if ( *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL) )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v8 & 0xFFFFFFFFFFFFFFFELL));
};

// Line 15226: range 000000000C932740-000000000C932BBA
bool __fastcall google::protobuf::SourceCodeInfo_Location::MergePartialFromCodedStream(
        google::protobuf::SourceCodeInfo_Location *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::RepeatedPtrField<std::string > *p_leading_detached_comments; // r13
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v8; // rdx
  google::protobuf::UnknownFieldSet *v9; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  __int64 v12; // rcx
  int allocated_size; // edx
  int total_size; // ecx
  google::protobuf::Arena *arena; // rdi
  std::string *AlignedAndAddCleanup; // rax
  std::string *ptr; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rdx
  __int64 v19; // rax
  const google::protobuf::uint8 *v20; // rax
  int VarintSizeAsIntFallback; // esi
  google::protobuf::io::CodedInputStream::Limit v22; // r14d
  const google::protobuf::uint8 *v23; // rax
  google::protobuf::uint32 v24; // r15d
  google::protobuf::int64 Varint32Fallback; // rax
  __int64 current_size; // rax
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  const google::protobuf::uint8 *v28; // rax
  int v29; // esi
  const google::protobuf::uint8 *v30; // rax
  google::protobuf::uint32 v31; // r15d
  google::protobuf::int64 v32; // rax
  __int64 v33; // rax
  google::protobuf::RepeatedField<int>::Rep *v34; // rdx

  p_leading_detached_comments = &this->leading_detached_comments_;
  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = input->buffer_;
      if ( input->buffer_end_ <= input->buffer_ )
      {
LABEL_30:
        TagFallback = 0;
      }
      else
      {
LABEL_3:
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          input->buffer_ = buffer + 1;
          goto LABEL_11;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_11:
      if ( TagFallback > 0x37 )
        break;
      switch ( TagFallback >> 3 )
      {
        case 0u:
        case 5u:
          goto handle_unusual;
        case 1u:
          if ( TagFallback != 10 )
          {
            if ( TagFallback != 8 )
              goto LABEL_6;
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    1,
                    0xAu,
                    input,
                    &this->path_) )
              return 0;
            continue;
          }
          v20 = input->buffer_;
          if ( input->buffer_ < input->buffer_end_
            && (VarintSizeAsIntFallback = *v20, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
          {
            input->buffer_ = v20 + 1;
          }
          else
          {
            VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(input);
            if ( VarintSizeAsIntFallback < 0 )
              return 0;
          }
          v22 = google::protobuf::io::CodedInputStream::PushLimit(input, VarintSizeAsIntFallback);
          if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
          {
            while ( 1 )
            {
              v23 = input->buffer_;
              if ( input->buffer_ >= input->buffer_end_ )
                break;
              v24 = *v23;
              if ( *(char *)v23 < 0 )
                goto LABEL_47;
              input->buffer_ = v23 + 1;
LABEL_48:
              current_size = this->path_.current_size_;
              if ( (_DWORD)current_size == this->path_.total_size_ )
              {
                google::protobuf::RepeatedField<int>::Reserve(&this->path_, current_size + 1);
                current_size = this->path_.current_size_;
              }
              rep = this->path_.rep_;
              this->path_.current_size_ = current_size + 1;
              rep->elements[current_size] = v24;
              if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
                goto LABEL_51;
            }
            v24 = 0;
LABEL_47:
            Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v24);
            v24 = Varint32Fallback;
            if ( Varint32Fallback < 0 )
              return 0;
            goto LABEL_48;
          }
          goto LABEL_51;
        case 2u:
          if ( TagFallback == 18 )
          {
            v28 = input->buffer_;
            if ( input->buffer_ < input->buffer_end_ && (v29 = *v28, (unsigned int)v29 <= 0x7F) )
            {
              input->buffer_ = v28 + 1;
            }
            else
            {
              v29 = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(input);
              if ( v29 < 0 )
                return 0;
            }
            v22 = google::protobuf::io::CodedInputStream::PushLimit(input, v29);
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
            {
              while ( 1 )
              {
                v30 = input->buffer_;
                if ( input->buffer_ >= input->buffer_end_ )
                  break;
                v31 = *v30;
                if ( *(char *)v30 < 0 )
                  goto LABEL_58;
                input->buffer_ = v30 + 1;
LABEL_59:
                v33 = this->span_.current_size_;
                if ( (_DWORD)v33 == this->span_.total_size_ )
                {
                  google::protobuf::RepeatedField<int>::Reserve(&this->span_, v33 + 1);
                  v33 = this->span_.current_size_;
                }
                v34 = this->span_.rep_;
                this->span_.current_size_ = v33 + 1;
                v34->elements[v33] = v31;
                if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
                  goto LABEL_51;
              }
              v31 = 0;
LABEL_58:
              v32 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v31);
              v31 = v32;
              if ( v32 < 0 )
                return 0;
              goto LABEL_59;
            }
LABEL_51:
            google::protobuf::io::CodedInputStream::PopLimit(input, v22);
          }
          else
          {
            if ( TagFallback != 16 )
              goto LABEL_6;
            if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                    1,
                    0x12u,
                    input,
                    &this->span_) )
              return 0;
          }
          break;
        case 3u:
          if ( TagFallback != 26 )
            goto LABEL_6;
          ptr = this->leading_comments_.ptr_;
          this->_has_bits_.has_bits_[0] |= 1u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->leading_comments_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->leading_comments_.ptr_;
          }
          goto LABEL_28;
        case 4u:
          if ( TagFallback != 34 )
            goto LABEL_6;
          ptr = this->trailing_comments_.ptr_;
          this->_has_bits_.has_bits_[0] |= 2u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              (__int64 **)&this->trailing_comments_,
              (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = this->trailing_comments_.ptr_;
          }
          goto LABEL_28;
        case 6u:
          if ( TagFallback != 50 )
            goto LABEL_6;
          v11 = this->leading_detached_comments_.rep_;
          if ( !v11 )
          {
            total_size = this->leading_detached_comments_.total_size_;
LABEL_65:
            google::protobuf::internal::RepeatedPtrFieldBase::Reserve(p_leading_detached_comments, total_size + 1);
            v11 = this->leading_detached_comments_.rep_;
            allocated_size = v11->allocated_size;
            goto LABEL_17;
          }
          v12 = this->leading_detached_comments_.current_size_;
          allocated_size = v11->allocated_size;
          if ( (int)v12 < v11->allocated_size )
          {
            ptr = (std::string *)v11->elements[v12];
            this->leading_detached_comments_.current_size_ = v12 + 1;
            goto LABEL_28;
          }
          total_size = this->leading_detached_comments_.total_size_;
          if ( allocated_size == total_size )
            goto LABEL_65;
LABEL_17:
          arena = this->leading_detached_comments_.arena_;
          v11->allocated_size = allocated_size + 1;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'std::string,
                0x20uLL);
            AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                    &arena->impl_,
                                                    0x20uLL,
                                                    google::protobuf::internal::arena_destruct_object<std::string>);
          }
          else
          {
            AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
          }
          ptr = AlignedAndAddCleanup;
          AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
          v18 = this->leading_detached_comments_.rep_;
          AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
          v19 = this->leading_detached_comments_.current_size_;
          ptr->_M_string_length = 0LL;
          this->leading_detached_comments_.current_size_ = v19 + 1;
          v18->elements[v19] = ptr;
LABEL_28:
          if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, ptr) )
            return 0;
          buffer = input->buffer_;
          if ( input->buffer_end_ <= input->buffer_ )
            goto LABEL_30;
          goto LABEL_3;
      }
    }
handle_unusual:
    if ( !TagFallback )
      return 1;
LABEL_6:
    v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v8 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v9) )
      return 0;
  }
};

// Line 15343: range 000000000C92A020-000000000C92A330
void __fastcall google::protobuf::SourceCodeInfo_Location::SerializeWithCachedSizes(
        const google::protobuf::SourceCodeInfo_Location *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v3; // r12d
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rdx
  unsigned __int64 ptr; // rdi
  int buffer_size; // eax
  unsigned int path_cached_byte_size; // esi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v12; // dl
  int v13; // eax
  int current_size; // r13d
  int j; // r12d
  google::protobuf::uint64 v16; // rsi
  google::protobuf::uint8 *v17; // rcx
  google::protobuf::uint8 *k; // rax
  char v19; // dl
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int span_cached_byte_size; // esi
  google::protobuf::uint8 *v24; // rcx
  google::protobuf::uint8 *m; // rax
  char v26; // dl
  int v27; // eax
  int v28; // r13d
  int n; // r12d
  google::protobuf::uint64 v30; // rsi
  google::protobuf::uint8 *v31; // rcx
  google::protobuf::uint8 *ii; // rax
  char v33; // dl
  int v34; // eax

  if ( this->path_.current_size_ <= 0 )
    goto LABEL_2;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xAu);
    path_cached_byte_size = this->_path_cached_byte_size_;
    if ( output->buffer_size_ > 4 )
      goto LABEL_14;
  }
  else
  {
    *output->buffer_ = 10;
    buffer_size = output->buffer_size_;
    ++output->buffer_;
    output->buffer_size_ = --buffer_size;
    path_cached_byte_size = this->_path_cached_byte_size_;
    if ( buffer_size > 4 )
    {
LABEL_14:
      buffer = output->buffer_;
      for ( i = buffer; path_cached_byte_size > 0x7F; *(i - 1) = v12 | 0x80 )
      {
        v12 = path_cached_byte_size;
        path_cached_byte_size >>= 7;
        ++i;
      }
      *i = path_cached_byte_size;
      v13 = (_DWORD)i + 1 - (_DWORD)buffer;
      output->buffer_size_ -= v13;
      output->buffer_ += v13;
      goto LABEL_17;
    }
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, path_cached_byte_size);
LABEL_17:
  current_size = this->path_.current_size_;
  if ( current_size > 0 )
  {
    for ( j = 0; j != current_size; ++j )
    {
      v16 = this->path_.rep_->elements[j];
      if ( output->buffer_size_ <= 9 )
      {
        google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v16);
      }
      else
      {
        v17 = output->buffer_;
        for ( k = v17; v16 > 0x7F; *(k - 1) = v19 | 0x80 )
        {
          v19 = v16;
          v16 >>= 7;
          ++k;
        }
        *k = v16;
        v20 = (_DWORD)k + 1 - (_DWORD)v17;
        output->buffer_size_ -= v20;
        output->buffer_ += v20;
      }
    }
  }
LABEL_2:
  if ( this->span_.current_size_ > 0 )
  {
    if ( output->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0x12u);
      v22 = output->buffer_size_;
    }
    else
    {
      *output->buffer_ = 18;
      v21 = output->buffer_size_;
      ++output->buffer_;
      v22 = v21 - 1;
      output->buffer_size_ = v22;
    }
    span_cached_byte_size = this->_span_cached_byte_size_;
    if ( v22 <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, span_cached_byte_size);
    }
    else
    {
      v24 = output->buffer_;
      for ( m = v24; span_cached_byte_size > 0x7F; *(m - 1) = v26 | 0x80 )
      {
        v26 = span_cached_byte_size;
        span_cached_byte_size >>= 7;
        ++m;
      }
      *m = span_cached_byte_size;
      v27 = (_DWORD)m + 1 - (_DWORD)v24;
      output->buffer_size_ -= v27;
      output->buffer_ += v27;
    }
    v28 = this->span_.current_size_;
    if ( v28 > 0 )
    {
      for ( n = 0; n != v28; ++n )
      {
        v30 = this->span_.rep_->elements[n];
        if ( output->buffer_size_ <= 9 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v30);
        }
        else
        {
          v31 = output->buffer_;
          for ( ii = v31; v30 > 0x7F; *(ii - 1) = v33 | 0x80 )
          {
            v33 = v30;
            v30 >>= 7;
            ++ii;
          }
          *ii = v30;
          v34 = (_DWORD)ii + 1 - (_DWORD)v31;
          output->buffer_size_ -= v34;
          output->buffer_ += v34;
        }
      }
    }
  }
  v3 = this->_has_bits_.has_bits_[0];
  if ( (v3 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(3LL, this->leading_comments_.ptr_, output);
  if ( (v3 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(4LL, this->trailing_comments_.ptr_, output);
  v4 = this->leading_detached_comments_.current_size_;
  v5 = 0;
  if ( v4 > 0 )
  {
    do
    {
      v6 = v5++;
      google::protobuf::internal::WireFormatLite::WriteString(
        6LL,
        this->leading_detached_comments_.rep_->elements[v6],
        output);
    }
    while ( v5 != v4 );
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 15409: range 000000000C929710-000000000C9298D5
google::protobuf::uint8 *__fastcall google::protobuf::SourceCodeInfo_Location::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::SourceCodeInfo_Location *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  unsigned int path_cached_byte_size; // eax
  google::protobuf::uint8 *i; // r12
  char v7; // dl
  int current_size; // edi
  __int64 v9; // rdx
  google::protobuf::RepeatedField<int>::Rep *rep; // rsi
  unsigned __int64 j; // rax
  char v12; // cl
  unsigned int span_cached_byte_size; // edx
  _BYTE *k; // r12
  char v15; // al
  int v16; // edi
  __int64 v17; // rdx
  google::protobuf::RepeatedField<int>::Rep *v18; // rsi
  unsigned __int64 m; // rax
  char v20; // cl
  google::protobuf::uint32 v21; // ebx
  int v22; // r13d
  int v23; // ebx
  __int64 v24; // rdx
  const std::string *v25; // rdi
  unsigned __int64 v26; // rdi
  std::string *ptr; // rdi
  std::string *v29; // rdi

  v3 = target;
  if ( this->path_.current_size_ > 0 )
  {
    *target = 10;
    path_cached_byte_size = this->_path_cached_byte_size_;
    for ( i = target + 1; path_cached_byte_size > 0x7F; *(i - 1) = v7 | 0x80 )
    {
      v7 = path_cached_byte_size;
      path_cached_byte_size >>= 7;
      ++i;
    }
    *i = path_cached_byte_size;
    current_size = this->path_.current_size_;
    v3 = i + 1;
    v9 = 0LL;
    rep = this->path_.rep_;
    do
    {
      for ( j = rep->elements[v9]; j > 0x7F; *(v3 - 1) = v12 | 0x80 )
      {
        v12 = j;
        j >>= 7;
        ++v3;
      }
      ++v9;
      *v3++ = j;
    }
    while ( current_size > (int)v9 );
  }
  if ( this->span_.current_size_ > 0 )
  {
    *v3 = 18;
    span_cached_byte_size = this->_span_cached_byte_size_;
    for ( k = v3 + 1; span_cached_byte_size > 0x7F; *(k - 1) = v15 | 0x80 )
    {
      v15 = span_cached_byte_size;
      span_cached_byte_size >>= 7;
      ++k;
    }
    *k = span_cached_byte_size;
    v16 = this->span_.current_size_;
    v3 = k + 1;
    v17 = 0LL;
    v18 = this->span_.rep_;
    do
    {
      for ( m = v18->elements[v17]; m > 0x7F; *(v3 - 1) = v20 | 0x80 )
      {
        v20 = m;
        m >>= 7;
        ++v3;
      }
      ++v17;
      *v3++ = m;
    }
    while ( v16 > (int)v17 );
  }
  v21 = this->_has_bits_.has_bits_[0];
  if ( (v21 & 1) != 0 )
  {
    ptr = this->leading_comments_.ptr_;
    *v3 = 26;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, v3 + 1);
    if ( (v21 & 2) == 0 )
      goto LABEL_17;
  }
  else if ( (v21 & 2) == 0 )
  {
    goto LABEL_17;
  }
  v29 = this->trailing_comments_.ptr_;
  *v3 = 34;
  v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v29, v3 + 1);
LABEL_17:
  v22 = this->leading_detached_comments_.current_size_;
  if ( v22 > 0 )
  {
    v23 = 0;
    do
    {
      v24 = v23++;
      v25 = (const std::string *)this->leading_detached_comments_.rep_->elements[v24];
      *v3 = 50;
      v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v25, v3 + 1);
    }
    while ( v23 != v22 );
  }
  v26 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v26 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v26 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 15482: range 000000000C9250C0-000000000C925203
size_t __fastcall google::protobuf::SourceCodeInfo_Location::ByteSizeLong(
        const google::protobuf::SourceCodeInfo_Location *const this)
{
  size_t v1; // rbp
  unsigned __int64 ptr; // rdi
  size_t v4; // rax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rdx
  size_t v8; // rbp
  size_t v9; // rax
  int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 current_size; // r8
  int v14; // edx
  size_t v15; // r8
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  void **elements; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // edx
  google::protobuf::uint32 v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // eax

  v1 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v1 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = google::protobuf::internal::WireFormatLite::Int32Size(&this->path_);
  v5 = 0;
  if ( v4 )
  {
    v5 = v4;
    if ( (v4 & 0x80000000) != 0LL )
    {
      v7 = 10LL;
    }
    else
    {
      _BitScanReverse(&v6, v4 | 1);
      v7 = (9 * v6 + 73) >> 6;
    }
    v1 += v7 + 1;
  }
  this->_path_cached_byte_size_ = v5;
  v8 = v4 + v1;
  v9 = google::protobuf::internal::WireFormatLite::Int32Size(&this->span_);
  v10 = 0;
  if ( v9 )
  {
    v10 = v9;
    if ( (v9 & 0x80000000) != 0LL )
    {
      v12 = 10LL;
    }
    else
    {
      _BitScanReverse(&v11, v9 | 1);
      v12 = (9 * v11 + 73) >> 6;
    }
    v8 += v12 + 1;
  }
  current_size = (unsigned int)this->leading_detached_comments_.current_size_;
  this->_span_cached_byte_size_ = v10;
  v14 = current_size;
  v15 = current_size + v9 + v8;
  if ( v14 > 0 )
  {
    rep = this->leading_detached_comments_.rep_;
    elements = rep->elements;
    v18 = (__int64)&rep[1] + 8 * (unsigned int)(v14 - 1);
    do
    {
      v19 = (__int64)*elements++;
      _BitScanReverse(&v20, *(_QWORD *)(v19 + 8) | 1);
      v15 += *(_QWORD *)(v19 + 8) + ((9 * v20 + 73) >> 6);
    }
    while ( (void **)v18 != elements );
  }
  v21 = this->_has_bits_.has_bits_[0];
  if ( (v21 & 3) != 0 )
  {
    if ( (v21 & 1) != 0 )
    {
      _BitScanReverse(&v22, this->leading_comments_.ptr_->_M_string_length | 1);
      v15 += this->leading_comments_.ptr_->_M_string_length + 1 + ((9 * v22 + 73) >> 6);
    }
    if ( (v21 & 2) != 0 )
    {
      _BitScanReverse(&v23, this->trailing_comments_.ptr_->_M_string_length | 1);
      v15 += this->trailing_comments_.ptr_->_M_string_length + 1 + ((9 * v23 + 73) >> 6);
    }
  }
  this->_cached_size_ = v15;
  return v15;
};

// Line 15554: range 000000000C9320F0-000000000C93213D
void __fastcall google::protobuf::SourceCodeInfo_Location::MergeFrom(
        google::protobuf::SourceCodeInfo_Location *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::SourceCodeInfo_Location *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::SourceCodeInfo_Location *)__dynamic_cast(
                                                            from,
                                                            (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                            (const struct __class_type_info *)&`typeinfo for'google::protobuf::SourceCodeInfo_Location,
                                                            0LL);
  if ( v2 )
    google::protobuf::SourceCodeInfo_Location::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 15569: range 000000000C931EF0-000000000C9320E0
void __fastcall google::protobuf::SourceCodeInfo_Location::MergeFrom(
        google::protobuf::SourceCodeInfo_Location *const this,
        const google::protobuf::SourceCodeInfo_Location *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // esi
  int v9; // esi
  int v10; // r12d
  google::protobuf::uint32 v11; // r12d
  std::string *v12; // rdi
  std::string *v13; // rsi
  std::string *v14; // rdi
  std::string *v15; // rsi
  void **elements; // r13
  void **v17; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v19; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->path_.current_size_;
  if ( current_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->path_, this->path_.current_size_ + current_size);
    memcpy(
      &this->path_.rep_->elements[this->path_.current_size_],
      from->path_.rep_->elements,
      4LL * from->path_.current_size_);
    this->path_.current_size_ += from->path_.current_size_;
  }
  v9 = from->span_.current_size_;
  if ( v9 )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->span_, this->span_.current_size_ + v9);
    memcpy(
      &this->span_.rep_->elements[this->span_.current_size_],
      from->span_.rep_->elements,
      4LL * from->span_.current_size_);
    this->span_.current_size_ += from->span_.current_size_;
  }
  v10 = from->leading_detached_comments_.current_size_;
  if ( v10 )
  {
    elements = from->leading_detached_comments_.rep_->elements;
    v17 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->leading_detached_comments_, v10);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      &this->leading_detached_comments_,
      v17,
      elements,
      v10,
      this->leading_detached_comments_.rep_->allocated_size - this->leading_detached_comments_.current_size_);
    rep = this->leading_detached_comments_.rep_;
    v19 = this->leading_detached_comments_.current_size_ + v10;
    this->leading_detached_comments_.current_size_ = v19;
    if ( v19 > rep->allocated_size )
      rep->allocated_size = v19;
  }
  v11 = from->_has_bits_.has_bits_[0];
  if ( (v11 & 3) != 0 )
  {
    if ( (v11 & 1) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 1u;
      v14 = this->leading_comments_.ptr_;
      v15 = from->leading_comments_.ptr_;
      if ( v15 != v14 )
      {
        if ( v14 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->leading_comments_,
            (unsigned __int8 **)v15);
        else
          std::string::_M_assign(v14, v15);
      }
    }
    if ( (v11 & 2) != 0 )
    {
      this->_has_bits_.has_bits_[0] |= 2u;
      v12 = this->trailing_comments_.ptr_;
      v13 = from->trailing_comments_.ptr_;
      if ( v13 != v12 )
      {
        if ( v12 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->trailing_comments_,
            (unsigned __int8 **)v13);
        else
          std::string::_M_assign(v12, v13);
      }
    }
  }
};

// Line 15594: range 000000000C932150-000000000C932180
void __fastcall google::protobuf::SourceCodeInfo_Location::CopyFrom(
        google::protobuf::SourceCodeInfo_Location *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::SourceCodeInfo_Location::Clear(this);
    google::protobuf::SourceCodeInfo_Location::MergeFrom(this, from);
  }
};

// Line 15601: range 000000000C932190-000000000C9321C0
void __fastcall google::protobuf::SourceCodeInfo_Location::CopyFrom(
        google::protobuf::SourceCodeInfo_Location *const this,
        const google::protobuf::SourceCodeInfo_Location *from)
{
  if ( from != this )
  {
    google::protobuf::SourceCodeInfo_Location::Clear(this);
    google::protobuf::SourceCodeInfo_Location::MergeFrom(this, from);
  }
};

// Line 15611: range 000000000C930190-000000000C9301A0
void __fastcall google::protobuf::SourceCodeInfo_Location::Swap(
        google::protobuf::SourceCodeInfo_Location *const this,
        google::protobuf::SourceCodeInfo_Location *other)
{
  if ( other != this )
    google::protobuf::SourceCodeInfo_Location::InternalSwap(this, other);
};

// Line 15614: range 000000000C930060-000000000C93018B
void __fastcall google::protobuf::SourceCodeInfo_Location::InternalSwap(
        google::protobuf::SourceCodeInfo_Location *const this,
        google::protobuf::SourceCodeInfo_Location *other)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::RepeatedField<int>::Rep *v5; // rdx
  google::protobuf::RepeatedField<int>::Rep *v6; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  std::string *ptr; // rdx
  std::string *v10; // rax
  std::string *v11; // rdx
  std::string *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  int cached_size; // eax
  _QWORD *v19; // [rsp+0h] [rbp-18h]

  rep = this->path_.rep_;
  this->path_.rep_ = other->path_.rep_;
  current_size = other->path_.current_size_;
  other->path_.rep_ = rep;
  LODWORD(rep) = this->path_.current_size_;
  this->path_.current_size_ = current_size;
  total_size = other->path_.total_size_;
  other->path_.current_size_ = (int)rep;
  LODWORD(rep) = this->path_.total_size_;
  this->path_.total_size_ = total_size;
  v5 = other->span_.rep_;
  other->path_.total_size_ = (int)rep;
  v6 = this->span_.rep_;
  this->span_.rep_ = v5;
  LODWORD(v5) = other->span_.current_size_;
  other->span_.rep_ = v6;
  LODWORD(v6) = this->span_.current_size_;
  this->span_.current_size_ = (int)v5;
  LODWORD(v5) = other->span_.total_size_;
  other->span_.current_size_ = (int)v6;
  LODWORD(v6) = this->span_.total_size_;
  this->span_.total_size_ = (int)v5;
  v7 = other->leading_detached_comments_.rep_;
  other->span_.total_size_ = (int)v6;
  v8 = this->leading_detached_comments_.rep_;
  this->leading_detached_comments_.rep_ = v7;
  LODWORD(v7) = other->leading_detached_comments_.current_size_;
  other->leading_detached_comments_.rep_ = v8;
  LODWORD(v8) = this->leading_detached_comments_.current_size_;
  this->leading_detached_comments_.current_size_ = (int)v7;
  LODWORD(v7) = other->leading_detached_comments_.total_size_;
  other->leading_detached_comments_.current_size_ = (int)v8;
  LODWORD(v8) = this->leading_detached_comments_.total_size_;
  this->leading_detached_comments_.total_size_ = (int)v7;
  ptr = other->leading_comments_.ptr_;
  other->leading_detached_comments_.total_size_ = (int)v8;
  v10 = this->leading_comments_.ptr_;
  this->leading_comments_.ptr_ = ptr;
  v11 = other->trailing_comments_.ptr_;
  other->leading_comments_.ptr_ = v10;
  v12 = this->trailing_comments_.ptr_;
  this->trailing_comments_.ptr_ = v11;
  LODWORD(v11) = other->_has_bits_.has_bits_[0];
  other->trailing_comments_.ptr_ = v12;
  LODWORD(v12) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)v11;
  v13 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v12;
  v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v14 & 1) != 0 )
  {
    if ( (v13 & 1) == 0 )
    {
      v15 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v14 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v13 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v14 & 1) != 0 )
  {
    v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v19 = v15;
    v16 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v15 = v19;
  }
  v17 = *v16;
  *v16 = *v15;
  *v15 = v17;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 15897: range 000000000C9390A0-000000000C93913C
void __fastcall google::protobuf::SourceCodeInfo::SourceCodeInfo(google::protobuf::SourceCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180C58;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->location_.arena_ = 0LL;
  *(_QWORD *)&this->location_.current_size_ = 0LL;
  this->location_.rep_ = 0LL;
  if ( this == (google::protobuf::SourceCodeInfo *)&google::protobuf::_SourceCodeInfo_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once == 2 )
  {
    this->_cached_size_ = 0;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    this->_cached_size_ = 0;
  }
};

// Line 15905: range 000000000C93F6F0-000000000C93F7DD
void __fastcall google::protobuf::SourceCodeInfo::SourceCodeInfo(
        google::protobuf::SourceCodeInfo *this,
        const google::protobuf::SourceCodeInfo *a2)
{
  google::protobuf::uint32 v2; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rbp
  google::protobuf::UnknownFieldSet *v8; // rdi
  void **elements; // r14
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v12; // r12d

  v2 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->location_.current_size_ = 0LL;
  current_size = a2->location_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180C58;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v2;
  this->location_.arena_ = 0LL;
  this->location_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->location_.rep_->elements;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->location_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(
      &this->location_,
      v10,
      elements,
      current_size,
      this->location_.rep_->allocated_size - this->location_.current_size_);
    rep = this->location_.rep_;
    v12 = this->location_.current_size_ + current_size;
    this->location_.current_size_ = v12;
    if ( v12 > rep->allocated_size )
      rep->allocated_size = v12;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
  }
};

// Line 15916: range 000000000C92D170-000000000C92D177
void __fastcall google::protobuf::SourceCodeInfo::SharedCtor(google::protobuf::SourceCodeInfo *const this)
{
  this->_cached_size_ = 0;
};

// Line 15919: range 000000000C93A010-000000000C93A02A
void __fastcall google::protobuf::SourceCodeInfo::~SourceCodeInfo(google::protobuf::SourceCodeInfo *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location> *p_location; // rdi

  p_location = &this->location_;
  p_location[-1].arena_ = (google::protobuf::Arena *)off_1A180C58;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(p_location);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 15919: range 000000000C93A030-000000000C93A057
void __fastcall google::protobuf::SourceCodeInfo::~SourceCodeInfo(google::protobuf::SourceCodeInfo *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location> *p_location; // rdi

  p_location = &this->location_;
  p_location[-1].arena_ = (google::protobuf::Arena *)off_1A180C58;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(p_location);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x30uLL);
};

// Line 15929: range 000000000C924190-000000000C924193
void __fastcall google::protobuf::SourceCodeInfo::SetCachedSize(
        const google::protobuf::SourceCodeInfo *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 15942: range 000000000C939FC0-000000000C939FFD
google::protobuf::SourceCodeInfo *__fastcall google::protobuf::SourceCodeInfo::New(
        google::protobuf::SourceCodeInfo *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::SourceCodeInfo *v2; // r12

  v2 = (google::protobuf::SourceCodeInfo *)operator new(0x30uLL);
  google::protobuf::SourceCodeInfo::SourceCodeInfo(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::SourceCodeInfo>(a2, v2);
  return v2;
};

// Line 15943: range 000000000C731A30-000000000C731A40
void __fastcall __noreturn google::protobuf::SourceCodeInfo::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 15950: range 000000000C930DB0-000000000C930E0E
void __fastcall google::protobuf::SourceCodeInfo::Clear(google::protobuf::SourceCodeInfo *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::SourceCodeInfo_Location **elements; // rbp
  __int64 v5; // r12
  google::protobuf::SourceCodeInfo_Location *v6; // rdi
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v8; // rdi

  current_size = this->location_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->location_.rep_;
    elements = (google::protobuf::SourceCodeInfo_Location **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::SourceCodeInfo_Location::Clear(v6);
    }
    while ( elements != (google::protobuf::SourceCodeInfo_Location **)v5 );
    this->location_.current_size_ = 0;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v8->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v8);
  }
};

// Line 15962: range 000000000C932E30-000000000C933062
__int64 __fastcall google::protobuf::SourceCodeInfo::MergePartialFromCodedStream(
        google::protobuf::SourceCodeInfo *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  google::protobuf::SourceCodeInfo_Location *AlignedAndAddCleanup; // r13
  __int64 v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = a2->buffer_;
      if ( a2->buffer_ >= a2->buffer_end_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = buffer + 1;
          goto LABEL_10;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_10:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_4;
      rep = this->location_.rep_;
      if ( !rep )
      {
        total_size = this->location_.total_size_;
        goto LABEL_34;
      }
      current_size = this->location_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size >= rep->allocated_size )
      {
        total_size = this->location_.total_size_;
        if ( allocated_size != total_size )
        {
          arena = this->location_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
            goto LABEL_16;
LABEL_35:
          AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo_Location *)operator new(0x70uLL);
          google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
          goto LABEL_19;
        }
LABEL_34:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->location_, total_size + 1);
        arena = this->location_.arena_;
        ++this->location_.rep_->allocated_size;
        if ( !arena )
          goto LABEL_35;
LABEL_16:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::SourceCodeInfo_Location,
            0x70uLL);
        AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo_Location *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                              &arena->impl_,
                                                                              0x70uLL,
                                                                              google::protobuf::internal::arena_destruct_object<google::protobuf::SourceCodeInfo_Location>);
        google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
LABEL_19:
        v15 = this->location_.current_size_;
        v16 = this->location_.rep_;
        this->location_.current_size_ = v15 + 1;
        v16->elements[v15] = AlignedAndAddCleanup;
        goto LABEL_20;
      }
      AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo_Location *)rep->elements[current_size];
      this->location_.current_size_ = current_size + 1;
LABEL_20:
      v17 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v17, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v17 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          return 0LL;
      }
      v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v20.first;
      if ( v20.second < 0
        || !google::protobuf::SourceCodeInfo_Location::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        return 0LL;
      }
    }
    if ( !TagFallback )
      return 1LL;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
  }
};

// Line 16004: range 000000000C924240-000000000C9242B2
void __fastcall google::protobuf::SourceCodeInfo::SerializeWithCachedSizes(
        const google::protobuf::SourceCodeInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  current_size = this->location_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        1,
        (const google::protobuf::MessageLite *)this->location_.rep_->elements[v4],
        output);
    }
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 16024: range 000000000C9298E0-000000000C92997F
google::protobuf::uint8 *__fastcall google::protobuf::SourceCodeInfo::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::SourceCodeInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebp
  google::protobuf::uint8 *v5; // r12
  int i; // r14d
  const google::protobuf::SourceCodeInfo_Location *v7; // rdi
  _BYTE *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  unsigned __int64 ptr; // rax

  current_size = this->location_.current_size_;
  if ( current_size )
  {
    v5 = target;
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::SourceCodeInfo_Location *)this->location_.rep_->elements[i];
      *v5 = 10;
      v8 = v5 + 1;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      v5 = google::protobuf::SourceCodeInfo_Location::InternalSerializeWithCachedSizesToArray(v7, deterministic, v8 + 1);
    }
  }
  else
  {
    v5 = target;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v5);
  else
    return v5;
};

// Line 16046: range 000000000C925210-000000000C92528F
size_t __fastcall google::protobuf::SourceCodeInfo::ByteSizeLong(const google::protobuf::SourceCodeInfo *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->location_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::SourceCodeInfo_Location::ByteSizeLong((const google::protobuf::SourceCodeInfo_Location *const)this->location_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 16073: range 000000000C93ED70-000000000C93EDBD
void __fastcall google::protobuf::SourceCodeInfo::MergeFrom(
        google::protobuf::SourceCodeInfo *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::SourceCodeInfo *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::SourceCodeInfo *)__dynamic_cast(
                                                   from,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                   (const struct __class_type_info *)&`typeinfo for'google::protobuf::SourceCodeInfo,
                                                   0LL);
  if ( v2 )
    google::protobuf::SourceCodeInfo::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 16088: range 000000000C93ECB0-000000000C93ED6A
void __fastcall google::protobuf::SourceCodeInfo::MergeFrom(
        google::protobuf::SourceCodeInfo *const this,
        const google::protobuf::SourceCodeInfo *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->location_.current_size_;
  if ( current_size )
  {
    rep = from->location_.rep_;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->location_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(
      &this->location_,
      v10,
      rep->elements,
      current_size,
      this->location_.rep_->allocated_size - this->location_.current_size_);
    v11 = this->location_.rep_;
    v12 = this->location_.current_size_ + current_size;
    this->location_.current_size_ = v12;
    if ( v12 > v11->allocated_size )
      v11->allocated_size = v12;
  }
};

// Line 16100: range 000000000C93EDD0-000000000C93EE00
void __fastcall google::protobuf::SourceCodeInfo::CopyFrom(
        google::protobuf::SourceCodeInfo *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::SourceCodeInfo::Clear(this);
    google::protobuf::SourceCodeInfo::MergeFrom(this, from);
  }
};

// Line 16107: range 000000000C93EE10-000000000C93EE40
void __fastcall google::protobuf::SourceCodeInfo::CopyFrom(
        google::protobuf::SourceCodeInfo *const this,
        const google::protobuf::SourceCodeInfo *from)
{
  if ( from != this )
  {
    google::protobuf::SourceCodeInfo::Clear(this);
    google::protobuf::SourceCodeInfo::MergeFrom(this, from);
  }
};

// Line 16117: range 000000000C92F080-000000000C92F090
void __fastcall google::protobuf::SourceCodeInfo::Swap(
        google::protobuf::SourceCodeInfo *const this,
        google::protobuf::SourceCodeInfo *other)
{
  if ( other != this )
    google::protobuf::SourceCodeInfo::InternalSwap(this, other);
};

// Line 16120: range 000000000C92EFC0-000000000C92F07B
void __fastcall google::protobuf::SourceCodeInfo::InternalSwap(
        google::protobuf::SourceCodeInfo *const this,
        google::protobuf::SourceCodeInfo *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  _QWORD *v12; // [rsp+0h] [rbp-18h]

  rep = this->location_.rep_;
  this->location_.rep_ = other->location_.rep_;
  current_size = other->location_.current_size_;
  other->location_.rep_ = rep;
  LODWORD(rep) = this->location_.current_size_;
  this->location_.current_size_ = current_size;
  total_size = other->location_.total_size_;
  other->location_.current_size_ = (int)rep;
  LODWORD(rep) = this->location_.total_size_;
  this->location_.total_size_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->location_.total_size_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v12 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v12;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 16177: range 000000000C92D930-000000000C92D9C8
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180D30;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  *(_QWORD *)&this->path_.current_size_ = 0LL;
  this->path_.rep_ = 0LL;
  if ( this != (google::protobuf::GeneratedCodeInfo_Annotation *)&google::protobuf::_GeneratedCodeInfo_Annotation_default_instance_
    && google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once != 2 )
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
  }
  this->_cached_size_ = 0;
  this->source_file_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->begin_ = 0LL;
};

// Line 16185: range 000000000C931BF0-000000000C931CF4
__int64 __fastcall google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(
        google::protobuf::GeneratedCodeInfo_Annotation *this,
        const google::protobuf::GeneratedCodeInfo_Annotation *a2)
{
  google::protobuf::uint32 v4; // eax
  int current_size; // esi
  unsigned __int64 ptr; // rax
  unsigned __int64 v7; // rdi
  const google::protobuf::UnknownFieldSet *v8; // r12
  google::protobuf::UnknownFieldSet *v9; // rdi
  std::string *v10; // rsi
  __int64 result; // rax

  v4 = a2->_has_bits_.has_bits_[0];
  current_size = a2->path_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180D30;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v4;
  *(_QWORD *)&this->path_.current_size_ = 0LL;
  this->path_.rep_ = 0LL;
  if ( current_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->path_, current_size);
    memcpy(this->path_.rep_->elements, a2->path_.rep_->elements, 4LL * a2->path_.current_size_);
    this->path_.current_size_ = a2->path_.current_size_;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v8 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v7 & 1) != 0 )
      v9 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v9, v8);
  }
  this->source_file_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  if ( (a2->_has_bits_.has_bits_[0] & 1) != 0 )
  {
    v10 = a2->source_file_.ptr_;
    if ( v10 != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        (__int64 **)&this->source_file_,
        (unsigned __int8 **)v10);
  }
  result = *(_QWORD *)&a2->begin_;
  *(_QWORD *)&this->begin_ = result;
  return result;
};

// Line 16203: range 000000000C92D250-000000000C92D267
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::SharedCtor(
        google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  this->_cached_size_ = 0;
  this->source_file_.ptr_ = (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  *(_QWORD *)&this->begin_ = 0LL;
};

// Line 16210: range 000000000C92DC40-000000000C92DC52
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::~GeneratedCodeInfo_Annotation(
        google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  google::protobuf::GeneratedCodeInfo_Annotation::~GeneratedCodeInfo_Annotation(this);
  operator delete(this, 0x40uLL);
};

// Line 16210: range 000000000C92DBC0-000000000C92DC3B
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::~GeneratedCodeInfo_Annotation(
        google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp
  google::protobuf::RepeatedField<int>::Rep *rep; // rdi

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->source_file_.ptr_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180D30;
  if ( ptr && ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
  rep = this->path_.rep_;
  if ( rep && !rep->arena )
  {
    operator delete(rep, 4LL * this->path_.total_size_ + 8);
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  }
  else
  {
    google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  }
};

// Line 16215: range 000000000C92D270-000000000C92D2A9
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::SharedDtor(
        google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rbp

  ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)this->source_file_.ptr_;
  if ( ptr != &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] && ptr )
  {
    if ( (void **)ptr->union_.align_to_int64 != &ptr->union_.align_to_ptr + 2 )
      operator delete(ptr->union_.align_to_ptr);
    operator delete(ptr, 0x20uLL);
  }
};

// Line 16221: range 000000000C9241A0-000000000C9241A3
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::SetCachedSize(
        const google::protobuf::GeneratedCodeInfo_Annotation *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 16234: range 000000000C92E090-000000000C92E0CD
google::protobuf::GeneratedCodeInfo_Annotation *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::New(
        google::protobuf::GeneratedCodeInfo_Annotation *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::GeneratedCodeInfo_Annotation *v2; // r12

  v2 = (google::protobuf::GeneratedCodeInfo_Annotation *)operator new(0x40uLL);
  google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::GeneratedCodeInfo_Annotation>(a2, v2);
  return v2;
};

// Line 16235: range 000000000C7311C8-000000000C7311D8
void __fastcall __noreturn google::protobuf::GeneratedCodeInfo_Annotation::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x40uLL);
  _Unwind_Resume(v0);
};

// Line 16242: range 000000000C930C00-000000000C930C68
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::Clear(
        google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  google::protobuf::uint32 v1; // eax
  std::string *ptr; // rax
  unsigned __int64 v3; // rax

  v1 = this->_has_bits_.has_bits_[0];
  this->path_.current_size_ = 0;
  if ( (v1 & 1) != 0 )
  {
    ptr = this->source_file_.ptr_;
    ptr->_M_string_length = 0LL;
    *ptr->_M_dataplus._M_p = 0;
    v1 = this->_has_bits_.has_bits_[0];
  }
  if ( (v1 & 6) != 0 )
  {
    v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
    *(_QWORD *)&this->begin_ = 0LL;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (v3 & 1) == 0 )
      return;
  }
  else
  {
    v3 = (unsigned __int64)this->_internal_metadata_.ptr_;
    this->_has_bits_.has_bits_[0] = 0;
    if ( (v3 & 1) == 0 )
      return;
  }
  if ( *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL) )
    google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *const)(v3 & 0xFFFFFFFFFFFFFFFELL));
};

// Line 16264: range 000000000C9321D0-000000000C9324F9
bool __fastcall google::protobuf::GeneratedCodeInfo_Annotation::MergePartialFromCodedStream(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        google::protobuf::io::CodedInputStream *input)
{
  google::protobuf::RepeatedField<int> *p_path; // r13
  const google::protobuf::uint8 *buffer_end; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 v7; // rdx
  google::protobuf::UnknownFieldSet *v8; // rdx
  unsigned int v9; // eax
  std::string *ptr; // rsi
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint32 v13; // esi
  google::protobuf::int64 v14; // rax
  const google::protobuf::uint8 *v15; // rax
  google::protobuf::uint32 v16; // esi
  google::protobuf::int64 Varint32Fallback; // rax
  const google::protobuf::uint8 *v18; // rax
  int VarintSizeAsIntFallback; // esi
  google::protobuf::io::CodedInputStream::Limit v20; // r14d
  const google::protobuf::uint8 *v21; // rax
  google::protobuf::uint32 v22; // r15d
  google::protobuf::int64 v23; // rax
  __int64 current_size; // rax
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx

  p_path = &this->path_;
  buffer_end = input->buffer_end_;
  buffer = input->buffer_;
LABEL_2:
  if ( buffer_end <= buffer )
    goto LABEL_10;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( (char)TagFallback <= 0 )
      break;
    input->buffer_ = buffer + 1;
LABEL_12:
    v9 = TagFallback >> 3;
    if ( TagFallback >> 3 == 3 )
    {
      if ( TagFallback != 24 )
        goto LABEL_6;
      v15 = input->buffer_;
      buffer_end = input->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 2u;
      if ( v15 >= buffer_end )
      {
        v16 = 0;
LABEL_30:
        Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v16);
        v16 = Varint32Fallback;
        if ( Varint32Fallback < 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
      }
      else
      {
        v16 = *v15;
        if ( *(char *)v15 < 0 )
          goto LABEL_30;
        buffer = v15 + 1;
        input->buffer_ = buffer;
      }
      this->begin_ = v16;
      goto LABEL_2;
    }
    if ( v9 > 3 )
    {
      if ( v9 != 4 || TagFallback != 32 )
        goto LABEL_6;
      v12 = input->buffer_;
      buffer_end = input->buffer_end_;
      this->_has_bits_.has_bits_[0] |= 4u;
      if ( v12 >= buffer_end )
      {
        v13 = 0;
LABEL_24:
        v14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v13);
        v13 = v14;
        if ( v14 < 0 )
          return 0;
        buffer = input->buffer_;
        buffer_end = input->buffer_end_;
      }
      else
      {
        v13 = *v12;
        if ( *(char *)v12 < 0 )
          goto LABEL_24;
        buffer = v12 + 1;
        input->buffer_ = buffer;
      }
      this->end_ = v13;
      goto LABEL_2;
    }
    if ( v9 == 1 )
    {
      if ( TagFallback != 10 )
      {
        if ( TagFallback == 8 )
        {
          if ( !google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(
                  1,
                  0xAu,
                  input,
                  p_path) )
            return 0;
          goto LABEL_9;
        }
        goto LABEL_6;
      }
      v18 = input->buffer_;
      if ( input->buffer_ < input->buffer_end_
        && (VarintSizeAsIntFallback = *v18, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        input->buffer_ = v18 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(input);
        if ( VarintSizeAsIntFallback < 0 )
          return 0;
      }
      v20 = google::protobuf::io::CodedInputStream::PushLimit(input, VarintSizeAsIntFallback);
      if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) > 0 )
      {
        while ( 2 )
        {
          v21 = input->buffer_;
          if ( input->buffer_ < input->buffer_end_ )
          {
            v22 = *v21;
            if ( *(char *)v21 >= 0 )
            {
              input->buffer_ = v21 + 1;
            }
            else
            {
LABEL_48:
              v23 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, v22);
              v22 = v23;
              if ( v23 < 0 )
                return 0;
            }
            current_size = this->path_.current_size_;
            if ( (_DWORD)current_size == this->path_.total_size_ )
            {
              google::protobuf::RepeatedField<int>::Reserve(p_path, current_size + 1);
              current_size = this->path_.current_size_;
            }
            rep = this->path_.rep_;
            this->path_.current_size_ = current_size + 1;
            rep->elements[current_size] = v22;
            if ( google::protobuf::io::CodedInputStream::BytesUntilLimit(input) <= 0 )
              goto LABEL_52;
            continue;
          }
          break;
        }
        v22 = 0;
        goto LABEL_48;
      }
LABEL_52:
      google::protobuf::io::CodedInputStream::PopLimit(input, v20);
      buffer = input->buffer_;
      buffer_end = input->buffer_end_;
      goto LABEL_2;
    }
    if ( v9 != 2 )
      goto handle_unusual;
    if ( TagFallback == 18 )
    {
      ptr = this->source_file_.ptr_;
      this->_has_bits_.has_bits_[0] |= 1u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          (__int64 **)&this->source_file_,
          (unsigned __int8 **)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, this->source_file_.ptr_) )
          return 0;
      }
      else if ( !google::protobuf::internal::WireFormatLite::ReadBytes(input, ptr) )
      {
        return 0;
      }
      goto LABEL_9;
    }
LABEL_6:
    v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (v7 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v7 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    if ( !google::protobuf::internal::WireFormat::SkipField(input, TagFallback, v8) )
      return 0;
LABEL_9:
    buffer = input->buffer_;
    if ( input->buffer_end_ <= input->buffer_ )
    {
LABEL_10:
      TagFallback = 0;
      break;
    }
  }
  TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
  if ( TagFallback - 1 <= 0x7E )
    goto LABEL_12;
handle_unusual:
  if ( TagFallback )
    goto LABEL_6;
  return 1;
};

// Line 16357: range 000000000C929E30-000000000C92A016
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::SerializeWithCachedSizes(
        const google::protobuf::GeneratedCodeInfo_Annotation *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint32 v3; // ebx
  unsigned __int64 ptr; // rdi
  int buffer_size; // eax
  unsigned int path_cached_byte_size; // esi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v9; // dl
  int v10; // eax
  int current_size; // r13d
  int j; // ebx
  google::protobuf::uint64 v13; // rsi
  google::protobuf::uint8 *v14; // rcx
  google::protobuf::uint8 *k; // rax
  char v16; // dl
  int v17; // eax

  if ( this->path_.current_size_ <= 0 )
    goto LABEL_2;
  if ( output->buffer_size_ <= 4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xAu);
    path_cached_byte_size = this->_path_cached_byte_size_;
    if ( output->buffer_size_ > 4 )
      goto LABEL_13;
  }
  else
  {
    *output->buffer_ = 10;
    buffer_size = output->buffer_size_;
    ++output->buffer_;
    output->buffer_size_ = --buffer_size;
    path_cached_byte_size = this->_path_cached_byte_size_;
    if ( buffer_size > 4 )
    {
LABEL_13:
      buffer = output->buffer_;
      for ( i = buffer; path_cached_byte_size > 0x7F; *(i - 1) = v9 | 0x80 )
      {
        v9 = path_cached_byte_size;
        path_cached_byte_size >>= 7;
        ++i;
      }
      *i = path_cached_byte_size;
      v10 = (_DWORD)i + 1 - (_DWORD)buffer;
      output->buffer_size_ -= v10;
      output->buffer_ += v10;
      goto LABEL_16;
    }
  }
  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, path_cached_byte_size);
LABEL_16:
  current_size = this->path_.current_size_;
  if ( current_size > 0 )
  {
    for ( j = 0; j != current_size; ++j )
    {
      v13 = this->path_.rep_->elements[j];
      if ( output->buffer_size_ <= 9 )
      {
        google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(output, v13);
      }
      else
      {
        v14 = output->buffer_;
        for ( k = v14; v13 > 0x7F; *(k - 1) = v16 | 0x80 )
        {
          v16 = v13;
          v13 >>= 7;
          ++k;
        }
        *k = v13;
        v17 = (_DWORD)k + 1 - (_DWORD)v14;
        output->buffer_size_ -= v17;
        output->buffer_ += v17;
      }
    }
  }
LABEL_2:
  v3 = this->_has_bits_.has_bits_[0];
  if ( (v3 & 1) != 0 )
    google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(2LL, this->source_file_.ptr_, output);
  if ( (v3 & 2) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(3, this->begin_, output);
  if ( (v3 & 4) != 0 )
    google::protobuf::internal::WireFormatLite::WriteInt32(4, this->end_, output);
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 16402: range 000000000C929500-000000000C929656
google::protobuf::uint8 *__fastcall google::protobuf::GeneratedCodeInfo_Annotation::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::GeneratedCodeInfo_Annotation *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint8 *v3; // r12
  unsigned int path_cached_byte_size; // eax
  google::protobuf::uint8 *i; // r12
  char v7; // dl
  int current_size; // edi
  __int64 v9; // rdx
  google::protobuf::RepeatedField<int>::Rep *rep; // rsi
  unsigned __int64 j; // rax
  char v12; // cl
  google::protobuf::uint32 v13; // ebp
  unsigned __int64 begin; // rdx
  _BYTE *v15; // r12
  char v16; // al
  unsigned __int64 end; // rdx
  _BYTE *v18; // r12
  char v19; // al
  unsigned __int64 v20; // rdi
  std::string *ptr; // rdi

  v3 = target;
  if ( this->path_.current_size_ > 0 )
  {
    *target = 10;
    path_cached_byte_size = this->_path_cached_byte_size_;
    for ( i = target + 1; path_cached_byte_size > 0x7F; *(i - 1) = v7 | 0x80 )
    {
      v7 = path_cached_byte_size;
      path_cached_byte_size >>= 7;
      ++i;
    }
    *i = path_cached_byte_size;
    current_size = this->path_.current_size_;
    v3 = i + 1;
    v9 = 0LL;
    rep = this->path_.rep_;
    do
    {
      for ( j = rep->elements[v9]; j > 0x7F; *(v3 - 1) = v12 | 0x80 )
      {
        v12 = j;
        j >>= 7;
        ++v3;
      }
      ++v9;
      *v3++ = j;
    }
    while ( current_size > (int)v9 );
  }
  v13 = this->_has_bits_.has_bits_[0];
  if ( (v13 & 1) != 0 )
  {
    ptr = this->source_file_.ptr_;
    *v3 = 18;
    v3 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(ptr, v3 + 1);
  }
  if ( (v13 & 2) != 0 )
  {
    begin = this->begin_;
    v15 = v3 + 1;
    for ( *(v15 - 1) = 24; begin > 0x7F; *(v15 - 1) = v16 | 0x80 )
    {
      v16 = begin;
      begin >>= 7;
      ++v15;
    }
    *v15 = begin;
    v3 = v15 + 1;
  }
  if ( (v13 & 4) != 0 )
  {
    end = this->end_;
    v18 = v3 + 1;
    for ( *(v18 - 1) = 32; end > 0x7F; *(v18 - 1) = v19 | 0x80 )
    {
      v19 = end;
      end >>= 7;
      ++v18;
    }
    *v18 = end;
    v3 = v18 + 1;
  }
  v20 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v20 & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(v20 & 0xFFFFFFFFFFFFFFFELL),
             v3);
  else
    return v3;
};

// Line 16451: range 000000000C924F40-000000000C925035
size_t __fastcall google::protobuf::GeneratedCodeInfo_Annotation::ByteSizeLong(
        const google::protobuf::GeneratedCodeInfo_Annotation *const this)
{
  size_t v2; // rbx
  unsigned __int64 ptr; // rdi
  size_t v4; // rax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rdx
  google::protobuf::uint32 v8; // edx
  size_t result; // rax
  unsigned int v10; // ecx
  google::protobuf::int32 begin; // ecx
  __int64 v12; // rcx
  google::protobuf::int32 end; // edx
  __int64 v14; // rdx

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  v4 = google::protobuf::internal::WireFormatLite::Int32Size(&this->path_);
  v5 = 0;
  if ( v4 )
  {
    v5 = v4;
    if ( (v4 & 0x80000000) != 0LL )
    {
      v7 = 10LL;
    }
    else
    {
      _BitScanReverse(&v6, v4 | 1);
      v7 = (9 * v6 + 73) >> 6;
    }
    v2 += v7 + 1;
  }
  v8 = this->_has_bits_.has_bits_[0];
  this->_path_cached_byte_size_ = v5;
  result = v2 + v4;
  if ( (v8 & 7) != 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      _BitScanReverse(&v10, this->source_file_.ptr_->_M_string_length | 1);
      result += this->source_file_.ptr_->_M_string_length + 1 + ((9 * v10 + 73) >> 6);
    }
    if ( (v8 & 2) != 0 )
    {
      begin = this->begin_;
      if ( begin < 0 )
      {
        v12 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&begin, begin | 1);
        v12 = (unsigned int)(9 * begin + 73) >> 6;
      }
      result += v12 + 1;
    }
    if ( (v8 & 4) != 0 )
    {
      end = this->end_;
      if ( end < 0 )
      {
        v14 = 10LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&end, end | 1);
        v14 = (unsigned int)(9 * end + 73) >> 6;
      }
      result += v14 + 1;
    }
  }
  this->_cached_size_ = result;
  return result;
};

// Line 16506: range 000000000C931E10-000000000C931E5D
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::GeneratedCodeInfo_Annotation *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::GeneratedCodeInfo_Annotation *)__dynamic_cast(
                                                                 from,
                                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                                 (const struct __class_type_info *)&`typeinfo for'google::protobuf::GeneratedCodeInfo_Annotation,
                                                                 0LL);
  if ( v2 )
    google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 16521: range 000000000C931D00-000000000C931E04
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        const google::protobuf::GeneratedCodeInfo_Annotation *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // esi
  google::protobuf::uint32 v9; // r12d
  google::protobuf::uint32 v10; // eax
  std::string *v11; // rdi
  std::string *v12; // rsi

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->path_.current_size_;
  if ( current_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(&this->path_, this->path_.current_size_ + current_size);
    memcpy(
      &this->path_.rep_->elements[this->path_.current_size_],
      from->path_.rep_->elements,
      4LL * from->path_.current_size_);
    this->path_.current_size_ += from->path_.current_size_;
  }
  v9 = from->_has_bits_.has_bits_[0];
  if ( (v9 & 7) != 0 )
  {
    v10 = this->_has_bits_.has_bits_[0];
    if ( (v9 & 1) != 0 )
    {
      v10 |= 1u;
      v11 = this->source_file_.ptr_;
      this->_has_bits_.has_bits_[0] = v10;
      v12 = from->source_file_.ptr_;
      if ( v12 != v11 )
      {
        if ( v11 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
            (__int64 **)&this->source_file_,
            (unsigned __int8 **)v12);
        else
          std::string::_M_assign(v11, v12);
        v10 = this->_has_bits_.has_bits_[0];
      }
    }
    if ( (v9 & 2) != 0 )
      this->begin_ = from->begin_;
    if ( (v9 & 4) != 0 )
      this->end_ = from->end_;
    this->_has_bits_.has_bits_[0] = v10 | v9;
  }
};

// Line 16547: range 000000000C931E70-000000000C931EA0
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::CopyFrom(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::GeneratedCodeInfo_Annotation::Clear(this);
    google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(this, from);
  }
};

// Line 16554: range 000000000C931EB0-000000000C931EE0
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::CopyFrom(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        const google::protobuf::GeneratedCodeInfo_Annotation *from)
{
  if ( from != this )
  {
    google::protobuf::GeneratedCodeInfo_Annotation::Clear(this);
    google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(this, from);
  }
};

// Line 16564: range 000000000C92FA40-000000000C92FA50
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::Swap(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        google::protobuf::GeneratedCodeInfo_Annotation *other)
{
  if ( other != this )
    google::protobuf::GeneratedCodeInfo_Annotation::InternalSwap(this, other);
};

// Line 16567: range 000000000C92F960-000000000C92FA3B
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::InternalSwap(
        google::protobuf::GeneratedCodeInfo_Annotation *const this,
        google::protobuf::GeneratedCodeInfo_Annotation *other)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  std::string *ptr; // rdx
  std::string *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rcx
  int cached_size; // eax
  _QWORD *v13; // [rsp+0h] [rbp-18h]

  rep = this->path_.rep_;
  this->path_.rep_ = other->path_.rep_;
  current_size = other->path_.current_size_;
  other->path_.rep_ = rep;
  LODWORD(rep) = this->path_.current_size_;
  this->path_.current_size_ = current_size;
  total_size = other->path_.total_size_;
  other->path_.current_size_ = (int)rep;
  LODWORD(rep) = this->path_.total_size_;
  this->path_.total_size_ = total_size;
  ptr = other->source_file_.ptr_;
  other->path_.total_size_ = (int)rep;
  v6 = this->source_file_.ptr_;
  this->source_file_.ptr_ = ptr;
  LODWORD(ptr) = other->begin_;
  other->source_file_.ptr_ = v6;
  LODWORD(v6) = this->begin_;
  this->begin_ = (int)ptr;
  LODWORD(ptr) = other->end_;
  other->begin_ = (int)v6;
  LODWORD(v6) = this->end_;
  this->end_ = (int)ptr;
  LODWORD(ptr) = other->_has_bits_.has_bits_[0];
  other->end_ = (int)v6;
  LODWORD(v6) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = (unsigned int)ptr;
  v7 = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)v6;
  v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v8 & 1) != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v9 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v8 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (v7 & 1) == 0 )
  {
    goto LABEL_7;
  }
  v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v8 & 1) != 0 )
  {
    v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v13 = v9;
    v10 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v9 = v13;
  }
  v11 = *v10;
  *v10 = *v9;
  *v9 = v11;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 16735: range 000000000C93A060-000000000C93A0FC
void __fastcall google::protobuf::GeneratedCodeInfo::GeneratedCodeInfo(google::protobuf::GeneratedCodeInfo *this)
{
  google::protobuf::internal::FunctionClosure0 v1[2]; // [rsp+0h] [rbp-38h] BYREF

  this->_vptr_MessageLite = (int (**)(...))off_1A180E08;
  this->_internal_metadata_.ptr_ = 0LL;
  this->_has_bits_.has_bits_[0] = 0;
  this->annotation_.arena_ = 0LL;
  *(_QWORD *)&this->annotation_.current_size_ = 0LL;
  this->annotation_.rep_ = 0LL;
  if ( this == (google::protobuf::GeneratedCodeInfo *)&google::protobuf::_GeneratedCodeInfo_default_instance_
    || google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once == 2 )
  {
    this->_cached_size_ = 0;
  }
  else
  {
    v1[0]._vptr_Closure = (int (**)(...))off_1A16E058;
    v1[0].function_ = google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::TableStruct::InitDefaultsImpl;
    v1[0].self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::InitDefaults(void)::once,
      &v1[0]);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v1);
    this->_cached_size_ = 0;
  }
};

// Line 16743: range 000000000C93FF20-000000000C94000D
void __fastcall google::protobuf::GeneratedCodeInfo::GeneratedCodeInfo(
        google::protobuf::GeneratedCodeInfo *this,
        const google::protobuf::GeneratedCodeInfo *a2)
{
  google::protobuf::uint32 v2; // eax
  int current_size; // r12d
  unsigned __int64 ptr; // rax
  unsigned __int64 v6; // rdi
  const google::protobuf::UnknownFieldSet *v7; // rbp
  google::protobuf::UnknownFieldSet *v8; // rdi
  void **elements; // r14
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v12; // r12d

  v2 = a2->_has_bits_.has_bits_[0];
  *(_QWORD *)&this->annotation_.current_size_ = 0LL;
  current_size = a2->annotation_.current_size_;
  this->_vptr_MessageLite = (int (**)(...))off_1A180E08;
  this->_internal_metadata_.ptr_ = 0LL;
  *(_QWORD *)this->_has_bits_.has_bits_ = v2;
  this->annotation_.arena_ = 0LL;
  this->annotation_.rep_ = 0LL;
  if ( current_size )
  {
    elements = a2->annotation_.rep_->elements;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->annotation_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(
      &this->annotation_,
      v10,
      elements,
      current_size,
      this->annotation_.rep_->allocated_size - this->annotation_.current_size_);
    rep = this->annotation_.rep_;
    v12 = this->annotation_.current_size_ + current_size;
    this->annotation_.current_size_ = v12;
    if ( v12 > rep->allocated_size )
      rep->allocated_size = v12;
  }
  ptr = (unsigned __int64)a2->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v6 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v7 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v6 & 1) != 0 )
      v8 = (google::protobuf::UnknownFieldSet *)(v6 & 0xFFFFFFFFFFFFFFFELL);
    else
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v8, v7);
  }
};

// Line 16754: range 000000000C92D370-000000000C92D377
void __fastcall google::protobuf::GeneratedCodeInfo::SharedCtor(google::protobuf::GeneratedCodeInfo *const this)
{
  this->_cached_size_ = 0;
};

// Line 16757: range 000000000C93A420-000000000C93A447
void __fastcall google::protobuf::GeneratedCodeInfo::~GeneratedCodeInfo(
        google::protobuf::GeneratedCodeInfo *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation> *p_annotation; // rdi

  p_annotation = &this->annotation_;
  p_annotation[-1].arena_ = (google::protobuf::Arena *)off_1A180E08;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(p_annotation);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
  operator delete(this, 0x30uLL);
};

// Line 16757: range 000000000C93A400-000000000C93A41A
void __fastcall google::protobuf::GeneratedCodeInfo::~GeneratedCodeInfo(
        google::protobuf::GeneratedCodeInfo *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation> *p_annotation; // rdi

  p_annotation = &this->annotation_;
  p_annotation[-1].arena_ = (google::protobuf::Arena *)off_1A180E08;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(p_annotation);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(&this->_internal_metadata_);
};

// Line 16767: range 000000000C9241B0-000000000C9241B3
void __fastcall google::protobuf::GeneratedCodeInfo::SetCachedSize(
        const google::protobuf::GeneratedCodeInfo *const this,
        int size)
{
  this->_cached_size_ = size;
};

// Line 16780: range 000000000C93A110-000000000C93A14D
google::protobuf::GeneratedCodeInfo *__fastcall google::protobuf::GeneratedCodeInfo::New(
        google::protobuf::GeneratedCodeInfo *this,
        google::protobuf::Arena *a2)
{
  google::protobuf::GeneratedCodeInfo *v2; // r12

  v2 = (google::protobuf::GeneratedCodeInfo *)operator new(0x30uLL);
  google::protobuf::GeneratedCodeInfo::GeneratedCodeInfo(v2);
  if ( a2 )
    google::protobuf::Arena::Own<google::protobuf::GeneratedCodeInfo>(a2, v2);
  return v2;
};

// Line 16781: range 000000000C731A68-000000000C731A78
void __fastcall __noreturn google::protobuf::GeneratedCodeInfo::New()
{
  struct _Unwind_Exception *v0; // rbp
  void *v1; // r12

  operator delete(v1, 0x30uLL);
  _Unwind_Resume(v0);
};

// Line 16788: range 000000000C930C70-000000000C930CCE
void __fastcall google::protobuf::GeneratedCodeInfo::Clear(google::protobuf::GeneratedCodeInfo *const this)
{
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  google::protobuf::GeneratedCodeInfo_Annotation **elements; // rbp
  __int64 v5; // r12
  google::protobuf::GeneratedCodeInfo_Annotation *v6; // rdi
  unsigned __int64 ptr; // rdi
  google::protobuf::UnknownFieldSet *v8; // rdi

  current_size = this->annotation_.current_size_;
  if ( current_size > 0 )
  {
    rep = this->annotation_.rep_;
    elements = (google::protobuf::GeneratedCodeInfo_Annotation **)rep->elements;
    v5 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v6 = *elements++;
      google::protobuf::GeneratedCodeInfo_Annotation::Clear(v6);
    }
    while ( elements != (google::protobuf::GeneratedCodeInfo_Annotation **)v5 );
    this->annotation_.current_size_ = 0;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  this->_has_bits_.has_bits_[0] = 0;
  if ( (ptr & 1) != 0 )
  {
    v8 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( v8->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(v8);
  }
};

// Line 16800: range 000000000C932500-000000000C932732
__int64 __fastcall google::protobuf::GeneratedCodeInfo::MergePartialFromCodedStream(
        google::protobuf::GeneratedCodeInfo *this,
        google::protobuf::io::CodedInputStream *a2)
{
  google::protobuf::internal::InternalMetadataWithArena *p_internal_metadata; // r12
  google::protobuf::uint32 TagFallback; // esi
  unsigned __int64 ptr; // rdx
  google::protobuf::UnknownFieldSet *v7; // rdx
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  google::protobuf::GeneratedCodeInfo_Annotation *AlignedAndAddCleanup; // r13
  __int64 v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rdx
  const google::protobuf::uint8 *v17; // rax
  int VarintSizeAsIntFallback; // esi
  std::pair<int,int> v20; // rax
  int first; // r14d

  p_internal_metadata = &this->_internal_metadata_;
  while ( 1 )
  {
    while ( 1 )
    {
      buffer = a2->buffer_;
      if ( a2->buffer_ >= a2->buffer_end_ )
      {
        TagFallback = 0;
      }
      else
      {
        TagFallback = *buffer;
        if ( (char)TagFallback > 0 )
        {
          a2->buffer_ = buffer + 1;
          goto LABEL_10;
        }
      }
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      if ( TagFallback - 1 > 0x7E )
        break;
LABEL_10:
      if ( TagFallback >> 3 != 1 )
        break;
      if ( TagFallback != 10 )
        goto LABEL_4;
      rep = this->annotation_.rep_;
      if ( !rep )
      {
        total_size = this->annotation_.total_size_;
        goto LABEL_34;
      }
      current_size = this->annotation_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size >= rep->allocated_size )
      {
        total_size = this->annotation_.total_size_;
        if ( allocated_size != total_size )
        {
          arena = this->annotation_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
            goto LABEL_16;
LABEL_35:
          AlignedAndAddCleanup = (google::protobuf::GeneratedCodeInfo_Annotation *)operator new(0x40uLL);
          google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(AlignedAndAddCleanup);
          goto LABEL_19;
        }
LABEL_34:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&this->annotation_, total_size + 1);
        arena = this->annotation_.arena_;
        ++this->annotation_.rep_->allocated_size;
        if ( !arena )
          goto LABEL_35;
LABEL_16:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::GeneratedCodeInfo_Annotation,
            0x40uLL);
        AlignedAndAddCleanup = (google::protobuf::GeneratedCodeInfo_Annotation *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                   &arena->impl_,
                                                                                   0x40uLL,
                                                                                   google::protobuf::internal::arena_destruct_object<google::protobuf::GeneratedCodeInfo_Annotation>);
        google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(AlignedAndAddCleanup);
LABEL_19:
        v15 = this->annotation_.current_size_;
        v16 = this->annotation_.rep_;
        this->annotation_.current_size_ = v15 + 1;
        v16->elements[v15] = AlignedAndAddCleanup;
        goto LABEL_20;
      }
      AlignedAndAddCleanup = (google::protobuf::GeneratedCodeInfo_Annotation *)rep->elements[current_size];
      this->annotation_.current_size_ = current_size + 1;
LABEL_20:
      v17 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_
        && (VarintSizeAsIntFallback = *v17, (unsigned int)VarintSizeAsIntFallback <= 0x7F) )
      {
        a2->buffer_ = v17 + 1;
      }
      else
      {
        VarintSizeAsIntFallback = google::protobuf::io::CodedInputStream::ReadVarintSizeAsIntFallback(a2);
        if ( VarintSizeAsIntFallback < 0 )
          return 0LL;
      }
      v20 = google::protobuf::io::CodedInputStream::IncrementRecursionDepthAndPushLimit(a2, VarintSizeAsIntFallback);
      first = v20.first;
      if ( v20.second < 0
        || !google::protobuf::GeneratedCodeInfo_Annotation::MergePartialFromCodedStream(AlignedAndAddCleanup, a2)
        || !google::protobuf::io::CodedInputStream::DecrementRecursionDepthAndPopLimit(a2, first) )
      {
        return 0LL;
      }
    }
    if ( !TagFallback )
      return 1LL;
LABEL_4:
    ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
    if ( (ptr & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(p_internal_metadata);
    if ( !google::protobuf::internal::WireFormat::SkipField(a2, TagFallback, v7) )
      return 0LL;
  }
};

// Line 16842: range 000000000C9242C0-000000000C924332
void __fastcall google::protobuf::GeneratedCodeInfo::SerializeWithCachedSizes(
        const google::protobuf::GeneratedCodeInfo *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  int current_size; // r12d
  int i; // ebx
  __int64 v4; // rdx
  unsigned __int64 ptr; // rdi

  current_size = this->annotation_.current_size_;
  if ( current_size )
  {
    for ( i = 0; i != current_size; ++i )
    {
      v4 = i;
      google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        1,
        (const google::protobuf::MessageLite *)this->annotation_.rep_->elements[v4],
        output);
    }
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    google::protobuf::internal::WireFormat::SerializeUnknownFields(
      (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
      output);
};

// Line 16862: range 000000000C929660-000000000C9296FF
google::protobuf::uint8 *__fastcall google::protobuf::GeneratedCodeInfo::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::GeneratedCodeInfo *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  int current_size; // ebp
  google::protobuf::uint8 *v5; // r12
  int i; // r14d
  const google::protobuf::GeneratedCodeInfo_Annotation *v7; // rdi
  _BYTE *v8; // rdx
  unsigned int j; // eax
  char v10; // cl
  unsigned __int64 ptr; // rax

  current_size = this->annotation_.current_size_;
  if ( current_size )
  {
    v5 = target;
    for ( i = 0; i != current_size; ++i )
    {
      v7 = (const google::protobuf::GeneratedCodeInfo_Annotation *)this->annotation_.rep_->elements[i];
      *v5 = 10;
      v8 = v5 + 1;
      for ( j = v7->_cached_size_; j > 0x7F; *(v8 - 1) = v10 | 0x80 )
      {
        v10 = j;
        j >>= 7;
        ++v8;
      }
      *v8 = j;
      v5 = google::protobuf::GeneratedCodeInfo_Annotation::InternalSerializeWithCachedSizesToArray(
             v7,
             deterministic,
             v8 + 1);
    }
  }
  else
  {
    v5 = target;
  }
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    return google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
             (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL),
             v5);
  else
    return v5;
};

// Line 16884: range 000000000C925040-000000000C9250BF
size_t __fastcall google::protobuf::GeneratedCodeInfo::ByteSizeLong(
        const google::protobuf::GeneratedCodeInfo *const this)
{
  size_t v2; // rax
  unsigned __int64 ptr; // rdi
  __int64 current_size; // rbx
  size_t v5; // r12
  int v6; // ebp
  __int64 v7; // rdx
  size_t v8; // rdx
  unsigned int v9; // eax

  v2 = 0LL;
  ptr = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
    v2 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize((const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL));
  current_size = (unsigned int)this->annotation_.current_size_;
  v5 = v2 + current_size;
  if ( (_DWORD)current_size )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      v8 = google::protobuf::GeneratedCodeInfo_Annotation::ByteSizeLong((const google::protobuf::GeneratedCodeInfo_Annotation *const)this->annotation_.rep_->elements[v7]);
      _BitScanReverse(&v9, v8 | 1);
      v5 += v8 + ((9 * v9 + 73) >> 6);
    }
    while ( (_DWORD)current_size != v6 );
  }
  this->_cached_size_ = v5;
  return v5;
};

// Line 16911: range 000000000C93FE40-000000000C93FE8D
void __fastcall google::protobuf::GeneratedCodeInfo::MergeFrom(
        google::protobuf::GeneratedCodeInfo *const this,
        const google::protobuf::Message *from)
{
  const google::protobuf::GeneratedCodeInfo *v2; // rax
  google::protobuf::Message *v3; // rdx

  v2 = (const google::protobuf::GeneratedCodeInfo *)__dynamic_cast(
                                                      from,
                                                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::Message,
                                                      (const struct __class_type_info *)&`typeinfo for'google::protobuf::GeneratedCodeInfo,
                                                      0LL);
  if ( v2 )
    google::protobuf::GeneratedCodeInfo::MergeFrom(this, v2);
  else
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, this, v3);
};

// Line 16926: range 000000000C93FD80-000000000C93FE3A
void __fastcall google::protobuf::GeneratedCodeInfo::MergeFrom(
        google::protobuf::GeneratedCodeInfo *const this,
        const google::protobuf::GeneratedCodeInfo *from)
{
  unsigned __int64 ptr; // rsi
  unsigned __int64 v5; // rdi
  const google::protobuf::UnknownFieldSet *v6; // rsi
  google::protobuf::UnknownFieldSet *v7; // rdi
  int current_size; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  void **v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // r12d

  ptr = (unsigned __int64)from->_internal_metadata_.ptr_;
  if ( (ptr & 1) != 0 )
  {
    v5 = (unsigned __int64)this->_internal_metadata_.ptr_;
    v6 = (const google::protobuf::UnknownFieldSet *)(ptr & 0xFFFFFFFFFFFFFFFELL);
    if ( (v5 & 1) != 0 )
      v7 = (google::protobuf::UnknownFieldSet *)(v5 & 0xFFFFFFFFFFFFFFFELL);
    else
      v7 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    google::protobuf::UnknownFieldSet::MergeFrom(v7, v6);
  }
  current_size = from->annotation_.current_size_;
  if ( current_size )
  {
    rep = from->annotation_.rep_;
    v10 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&this->annotation_, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(
      &this->annotation_,
      v10,
      rep->elements,
      current_size,
      this->annotation_.rep_->allocated_size - this->annotation_.current_size_);
    v11 = this->annotation_.rep_;
    v12 = this->annotation_.current_size_ + current_size;
    this->annotation_.current_size_ = v12;
    if ( v12 > v11->allocated_size )
      v11->allocated_size = v12;
  }
};

// Line 16938: range 000000000C93FEA0-000000000C93FED0
void __fastcall google::protobuf::GeneratedCodeInfo::CopyFrom(
        google::protobuf::GeneratedCodeInfo *const this,
        const google::protobuf::Message *from)
{
  if ( this != from )
  {
    google::protobuf::GeneratedCodeInfo::Clear(this);
    google::protobuf::GeneratedCodeInfo::MergeFrom(this, from);
  }
};

// Line 16945: range 000000000C93FEE0-000000000C93FF10
void __fastcall google::protobuf::GeneratedCodeInfo::CopyFrom(
        google::protobuf::GeneratedCodeInfo *const this,
        const google::protobuf::GeneratedCodeInfo *from)
{
  if ( from != this )
  {
    google::protobuf::GeneratedCodeInfo::Clear(this);
    google::protobuf::GeneratedCodeInfo::MergeFrom(this, from);
  }
};

// Line 16955: range 000000000C92F160-000000000C92F170
void __fastcall google::protobuf::GeneratedCodeInfo::Swap(
        google::protobuf::GeneratedCodeInfo *const this,
        google::protobuf::GeneratedCodeInfo *other)
{
  if ( other != this )
    google::protobuf::GeneratedCodeInfo::InternalSwap(this, other);
};

// Line 16958: range 000000000C92F0A0-000000000C92F15B
void __fastcall google::protobuf::GeneratedCodeInfo::InternalSwap(
        google::protobuf::GeneratedCodeInfo *const this,
        google::protobuf::GeneratedCodeInfo *other)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::uint32 v5; // edx
  unsigned __int64 ptr; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rcx
  int cached_size; // eax
  _QWORD *v12; // [rsp+0h] [rbp-18h]

  rep = this->annotation_.rep_;
  this->annotation_.rep_ = other->annotation_.rep_;
  current_size = other->annotation_.current_size_;
  other->annotation_.rep_ = rep;
  LODWORD(rep) = this->annotation_.current_size_;
  this->annotation_.current_size_ = current_size;
  total_size = other->annotation_.total_size_;
  other->annotation_.current_size_ = (int)rep;
  LODWORD(rep) = this->annotation_.total_size_;
  this->annotation_.total_size_ = total_size;
  v5 = other->_has_bits_.has_bits_[0];
  other->annotation_.total_size_ = (int)rep;
  LODWORD(rep) = this->_has_bits_.has_bits_[0];
  this->_has_bits_.has_bits_[0] = v5;
  ptr = (unsigned __int64)other->_internal_metadata_.ptr_;
  other->_has_bits_.has_bits_[0] = (unsigned int)rep;
  v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
  if ( (v7 & 1) != 0 )
  {
    if ( (ptr & 1) == 0 )
    {
      v8 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&other->_internal_metadata_);
      v7 = (unsigned __int64)this->_internal_metadata_.ptr_;
      goto LABEL_4;
    }
  }
  else if ( (ptr & 1) == 0 )
  {
    goto LABEL_7;
  }
  v8 = (_QWORD *)(ptr & 0xFFFFFFFFFFFFFFFELL);
LABEL_4:
  if ( (v7 & 1) != 0 )
  {
    v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFELL);
  }
  else
  {
    v12 = v8;
    v9 = (__int64 *)google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(&this->_internal_metadata_);
    v8 = v12;
  }
  v10 = *v9;
  *v9 = *v8;
  *v8 = v10;
LABEL_7:
  cached_size = this->_cached_size_;
  this->_cached_size_ = other->_cached_size_;
  other->_cached_size_ = cached_size;
};

// Line 17009: range 000000000C746F60-000000000C746FC6
void GLOBAL__sub_I__ZN6google8protobuf36_FileDescriptorSet_default_instance_E()
{
  google::protobuf::internal::FunctionClosure0 v0; // [rsp+0h] [rbp-28h] BYREF

  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  if ( google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors(void)::once != 2 )
  {
    v0._vptr_Closure = (int (**)(...))off_1A16E058;
    v0.function_ = (google::protobuf::internal::FunctionClosure0::FunctionType)google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::`anonymous namespace'::AddDescriptorsImpl;
    v0.self_deleting_ = 0;
    google::protobuf::GoogleOnceInitImpl(
      &google::protobuf::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors(void)::once,
      &v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(&v0);
  }
};
