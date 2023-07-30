// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/repeated_field.h

// Line 305: range 000000000C730A7A-000000000C730A85
void __fastcall google::protobuf::RepeatedField<int>::InternalDeallocate(
        google::protobuf::RepeatedField<int> *const this,
        google::protobuf::RepeatedField<int>::Rep *rep,
        int size)
{
  operator delete(this, 4LL * (int)rep + 8);
};

// Line 306: range 000000000C8AE140-000000000C8AE359
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::internal::GenericTypeHandler<std::string>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *other)
{
  google::protobuf::Arena *arena; // rax
  int current_size; // r12d
  int v4; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  int total_size; // edx
  __int64 v8; // rax
  void ***v9; // rbx
  __int64 v10; // r12
  void **v11; // rbp
  void **v12; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v13; // rax
  int v14; // r12d
  void **v15; // rax
  __int64 v16; // rdx
  void **elements; // r13
  void **v18; // rax
  int v19; // r12d
  int v20; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase temp; // [rsp+0h] [rbp-48h] BYREF

  arena = other->arena_;
  current_size = this->current_size_;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.arena_ = arena;
  temp.rep_ = 0LL;
  if ( current_size )
  {
    elements = this->rep_->elements;
    v18 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&temp, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<std::string>>(
      &temp,
      v18,
      elements,
      current_size,
      temp.rep_->allocated_size - temp.current_size_);
    v19 = temp.current_size_ + current_size;
    temp.current_size_ = v19;
    if ( v19 > temp.rep_->allocated_size )
      temp.rep_->allocated_size = v19;
    v20 = this->current_size_;
    if ( v20 > 0 )
    {
      rep = this->rep_;
      v22 = rep->elements;
      v23 = (__int64)&rep[1] + 8 * (unsigned int)(v20 - 1);
      do
      {
        v24 = (__int64)*v22++;
        *(_QWORD *)(v24 + 8) = 0LL;
        **(_BYTE **)v24 = 0;
      }
      while ( (void **)v23 != v22 );
      this->current_size_ = 0;
    }
  }
  v4 = other->current_size_;
  v5 = other->rep_;
  if ( v4 )
  {
    v12 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(this, v4);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<std::string>>(
      this,
      v12,
      v5->elements,
      v4,
      this->rep_->allocated_size - this->current_size_);
    v13 = this->rep_;
    v14 = this->current_size_ + v4;
    this->current_size_ = v14;
    if ( v14 > v13->allocated_size )
      v13->allocated_size = v14;
    v4 = other->current_size_;
    v5 = other->rep_;
    if ( v4 > 0 )
    {
      v15 = v5->elements;
      do
      {
        v16 = (__int64)*v15++;
        *(_QWORD *)(v16 + 8) = 0LL;
        **(_BYTE **)v16 = 0;
      }
      while ( (void **)((char *)&v5[1] + 8 * (unsigned int)(v4 - 1)) != v15 );
      v5 = other->rep_;
      v4 = 0;
    }
  }
  v6 = temp.rep_;
  total_size = temp.total_size_;
  temp.rep_ = v5;
  other->rep_ = v6;
  LODWORD(v6) = temp.current_size_;
  temp.current_size_ = v4;
  other->current_size_ = (int)v6;
  v8 = other->total_size_;
  other->total_size_ = total_size;
  temp.total_size_ = v8;
  if ( v5 && !temp.arena_ )
  {
    if ( v5->allocated_size > 0 )
    {
      v9 = (void ***)v5->elements;
      v10 = (__int64)&v5[1] + 8 * (unsigned int)(v5->allocated_size - 1);
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( *v11 != v11 + 2 )
            operator delete(*v11);
          operator delete(v11, 0x20uLL);
        }
        ++v9;
      }
      while ( (void ***)v10 != v9 );
      v8 = temp.total_size_;
      v5 = temp.rep_;
    }
    operator delete(v5, 8 * v8 + 8);
  }
};

// Line 642: range 000000000C941D40-000000000C941D49
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto>::Merge(
        const google::protobuf::DescriptorProto *from,
        google::protobuf::DescriptorProto *to)
{
  google::protobuf::DescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C941480-000000000C941489
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ExtensionRange>::Merge(
        const google::protobuf::DescriptorProto_ExtensionRange *from,
        google::protobuf::DescriptorProto_ExtensionRange *to)
{
  google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(to, from);
};

// Line 642: range 000000000C9410C0-000000000C9410C9
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ReservedRange>::Merge(
        const google::protobuf::DescriptorProto_ReservedRange *from,
        google::protobuf::DescriptorProto_ReservedRange *to)
{
  google::protobuf::DescriptorProto_ReservedRange::MergeFrom(to, from);
};

// Line 642: range 000000000C941AC0-000000000C941AC9
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumDescriptorProto>::Merge(
        const google::protobuf::EnumDescriptorProto *from,
        google::protobuf::EnumDescriptorProto *to)
{
  google::protobuf::EnumDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C94E390-000000000C94E399
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>::Merge(
        const google::protobuf::EnumValue *from,
        google::protobuf::EnumValue *to)
{
  google::protobuf::EnumValue::MergeFrom(to, from);
};

// Line 642: range 000000000C941700-000000000C941709
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValueDescriptorProto>::Merge(
        const google::protobuf::EnumValueDescriptorProto *from,
        google::protobuf::EnumValueDescriptorProto *to)
{
  google::protobuf::EnumValueDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C94E250-000000000C94E259
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>::Merge(
        const google::protobuf::Field *from,
        google::protobuf::Field *to)
{
  google::protobuf::Field::MergeFrom(to, from);
};

// Line 642: range 000000000C941C00-000000000C941C09
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::FieldDescriptorProto>::Merge(
        const google::protobuf::FieldDescriptorProto *from,
        google::protobuf::FieldDescriptorProto *to)
{
  google::protobuf::FieldDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C941FC0-000000000C941FC9
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::FileDescriptorProto>::Merge(
        const google::protobuf::FileDescriptorProto *from,
        google::protobuf::FileDescriptorProto *to)
{
  google::protobuf::FileDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C942100-000000000C942109
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::GeneratedCodeInfo_Annotation>::Merge(
        const google::protobuf::GeneratedCodeInfo_Annotation *from,
        google::protobuf::GeneratedCodeInfo_Annotation *to)
{
  google::protobuf::GeneratedCodeInfo_Annotation::MergeFrom(to, from);
};

// Line 642: range 000000000C941840-000000000C941849
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::MethodDescriptorProto>::Merge(
        const google::protobuf::MethodDescriptorProto *from,
        google::protobuf::MethodDescriptorProto *to)
{
  google::protobuf::MethodDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C9415C0-000000000C9415C9
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::OneofDescriptorProto>::Merge(
        const google::protobuf::OneofDescriptorProto *from,
        google::protobuf::OneofDescriptorProto *to)
{
  google::protobuf::OneofDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C94E110-000000000C94E119
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>::Merge(
        const google::protobuf::Option *from,
        google::protobuf::Option *to)
{
  google::protobuf::Option::MergeFrom(to, from);
};

// Line 642: range 000000000C941980-000000000C941989
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::ServiceDescriptorProto>::Merge(
        const google::protobuf::ServiceDescriptorProto *from,
        google::protobuf::ServiceDescriptorProto *to)
{
  google::protobuf::ServiceDescriptorProto::MergeFrom(to, from);
};

// Line 642: range 000000000C941E80-000000000C941E89
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::SourceCodeInfo_Location>::Merge(
        const google::protobuf::SourceCodeInfo_Location *from,
        google::protobuf::SourceCodeInfo_Location *to)
{
  google::protobuf::SourceCodeInfo_Location::MergeFrom(to, from);
};

// Line 642: range 000000000C941340-000000000C941349
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption>::Merge(
        const google::protobuf::UninterpretedOption *from,
        google::protobuf::UninterpretedOption *to)
{
  google::protobuf::UninterpretedOption::MergeFrom(to, from);
};

// Line 642: range 000000000C941200-000000000C941209
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption_NamePart>::Merge(
        const google::protobuf::UninterpretedOption_NamePart *from,
        google::protobuf::UninterpretedOption_NamePart *to)
{
  google::protobuf::UninterpretedOption_NamePart::MergeFrom(to, from);
};

// Line 644: range 000000000C8AFA70-000000000C8AFA83
void __fastcall google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(
        const google::protobuf::Message *from,
        google::protobuf::Message *to)
{
  (*((void (__fastcall **)(google::protobuf::Message *, const google::protobuf::Message *))to->_vptr_MessageLite + 19))(
    to,
    from);
};

// Line 1078: range 000000000C731214-000000000C731236
void __fastcall __noreturn google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rbx
  struct _Unwind_Exception *v4; // rbp
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v5; // r13
  google::protobuf::RepeatedField<int> *v6; // rdi

  v6 = *(google::protobuf::RepeatedField<int> **)(v3 + 32);
  if ( v6 )
  {
    if ( !*(_QWORD *)&v6->current_size_ )
      google::protobuf::RepeatedField<int>::InternalDeallocate(
        v6,
        (google::protobuf::RepeatedField<int>::Rep *)*(unsigned int *)(v3 + 28),
        a3);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v5);
  _Unwind_Resume(v4);
};

// Line 1078: range 000000000C8AE120-000000000C8AE13B
void __fastcall google::protobuf::RepeatedField<bool>::~RepeatedField(
        google::protobuf::RepeatedField<bool> *const this)
{
  google::protobuf::RepeatedField<bool>::Rep *rep; // r8

  rep = this->rep_;
  if ( rep )
  {
    if ( !rep->arena )
      operator delete(this->rep_, this->total_size_ + 8LL);
  }
};

// Line 1078: range 000000000C943620-000000000C94363F
void __fastcall google::protobuf::RepeatedField<int>::~RepeatedField(google::protobuf::RepeatedField<int> *const this)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // r8

  rep = this->rep_;
  if ( rep )
  {
    if ( !rep->arena )
      operator delete(this->rep_, 4LL * this->total_size_ + 8);
  }
};

// Line 1078: range 000000000C8EEF00-000000000C8EEF1F
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<double>>(
        void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 8LL * *((int *)object + 1) + 8);
  }
};

// Line 1078: range 000000000C8EEED0-000000000C8EEEEF
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<float>>(void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 4LL * *((int *)object + 1) + 8);
  }
};

// Line 1078: range 000000000C8EEF30-000000000C8EEF4F
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<int>>(void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 4LL * *((int *)object + 1) + 8);
  }
};

// Line 1078: range 000000000C8EEE40-000000000C8EEE5F
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<long>>(void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 8LL * *((int *)object + 1) + 8);
  }
};

// Line 1078: range 000000000C8EEE70-000000000C8EEE8F
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned int>>(
        void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 4LL * *((int *)object + 1) + 8);
  }
};

// Line 1078: range 000000000C8EEEA0-000000000C8EEEBF
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedField<unsigned long>>(
        void *object)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)object + 1);
  if ( v1 )
  {
    if ( !*v1 )
      operator delete(*((void **)object + 1), 8LL * *((int *)object + 1) + 8);
  }
};

// Line 1091: range 000000000C8BC910-000000000C8BC917
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1091: range 000000000C8BC9A0-000000000C8BC9A7
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1091: range 000000000C8BCBD0-000000000C8BCBD7
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1091: range 000000000C8BCAC0-000000000C8BCAC7
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1091: range 000000000C8BCB50-000000000C8BCB57
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1091: range 000000000C8BCA30-000000000C8BCA37
bool __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::IsEmpty(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data == 0;
};

// Line 1171: range 000000000C8BC8C0-000000000C8BC8C3
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BC940-000000000C8BC943
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BC9D0-000000000C8BC9D3
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BCC00-000000000C8BCC03
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BCAF0-000000000C8BCAF3
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BCB80-000000000C8BCB83
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1171: range 000000000C8BCA60-000000000C8BCA63
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::RemoveLast(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  --*(_DWORD *)data;
};

// Line 1197: range 000000000C8BC8B0-000000000C8BC8B6
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BC930-000000000C8BC936
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BC9C0-000000000C8BC9C6
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BCBF0-000000000C8BCBF6
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BCAE0-000000000C8BCAE6
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BCB70-000000000C8BCB76
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1197: range 000000000C8BCA50-000000000C8BCA56
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::Clear(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  *(_DWORD *)data = 0;
};

// Line 1262: range 000000000C8AF890-000000000C8AFA65
void __fastcall google::protobuf::RepeatedField<bool>::Swap(
        google::protobuf::RepeatedField<bool> *const this,
        google::protobuf::RepeatedField<bool> *other)
{
  google::protobuf::RepeatedField<bool>::Rep *rep; // rax
  google::protobuf::RepeatedField<bool>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<bool>::Rep *v8; // rax
  int v9; // edx
  int current_size; // edx
  int v11; // eax
  int total_size; // edx
  int v13; // eax
  google::protobuf::RepeatedField<bool> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_15;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<bool>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                    &v6->impl_,
                                                                    8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_15:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v11 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v11;
    v13 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v13;
    return;
  }
  if ( !arena )
    goto LABEL_15;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<bool>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<bool>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  other->rep_ = temp.rep_;
  v9 = temp.total_size_;
  temp.rep_ = v8;
  LODWORD(v8) = temp.current_size_;
  temp.current_size_ = v7;
  other->current_size_ = (int)v8;
  LODWORD(v8) = other->total_size_;
  other->total_size_ = v9;
  temp.total_size_ = (int)v8;
  google::protobuf::RepeatedField<bool>::~RepeatedField(&temp);
};

// Line 1262: range 000000000C8AF520-000000000C8AF737
void __fastcall google::protobuf::RepeatedField<double>::Swap(
        google::protobuf::RepeatedField<double> *const this,
        google::protobuf::RepeatedField<double> *other)
{
  google::protobuf::RepeatedField<double>::Rep *rep; // rax
  google::protobuf::RepeatedField<double>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<double>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<double> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<double>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                      &v6->impl_,
                                                                      8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<double>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 8LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<double>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 8LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 8 * v10 + 8);
  }
};

// Line 1262: range 000000000C8AF1B0-000000000C8AF3C7
void __fastcall google::protobuf::RepeatedField<float>::Swap(
        google::protobuf::RepeatedField<float> *const this,
        google::protobuf::RepeatedField<float> *other)
{
  google::protobuf::RepeatedField<float>::Rep *rep; // rax
  google::protobuf::RepeatedField<float>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<float>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<float> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<float>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                     &v6->impl_,
                                                                     8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<float>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 4LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<float>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 4LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 4 * v10 + 8);
  }
};

// Line 1262: range 000000000C8ADBC0-000000000C8ADDD7
void __fastcall google::protobuf::RepeatedField<int>::Swap(
        google::protobuf::RepeatedField<int> *const this,
        google::protobuf::RepeatedField<int> *other)
{
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::RepeatedField<int>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<int>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<int> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                   &v6->impl_,
                                                                   8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 4LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 4LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 4 * v10 + 8);
  }
};

// Line 1262: range 000000000C8AEE40-000000000C8AF057
void __fastcall google::protobuf::RepeatedField<long>::Swap(
        google::protobuf::RepeatedField<long int> *const this,
        google::protobuf::RepeatedField<long int> *other)
{
  google::protobuf::RepeatedField<long int>::Rep *rep; // rax
  google::protobuf::RepeatedField<long int>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<long int>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<long int> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<long int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                        &v6->impl_,
                                                                        8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<long>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 8LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<long>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 8LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 8 * v10 + 8);
  }
};

// Line 1262: range 000000000C8AE760-000000000C8AE977
void __fastcall google::protobuf::RepeatedField<unsigned int>::Swap(
        google::protobuf::RepeatedField<unsigned int> *const this,
        google::protobuf::RepeatedField<unsigned int> *other)
{
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // rax
  google::protobuf::RepeatedField<unsigned int>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<unsigned int>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<unsigned int> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<unsigned int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                            &v6->impl_,
                                                                            8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 4LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 4LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 4 * v10 + 8);
  }
};

// Line 1262: range 000000000C8AEAD0-000000000C8AECE7
void __fastcall google::protobuf::RepeatedField<unsigned long>::Swap(
        google::protobuf::RepeatedField<long unsigned int> *const this,
        google::protobuf::RepeatedField<long unsigned int> *other)
{
  google::protobuf::RepeatedField<long unsigned int>::Rep *rep; // rax
  google::protobuf::RepeatedField<long unsigned int>::Rep *v4; // rdx
  google::protobuf::Arena *arena; // rcx
  google::protobuf::Arena *v6; // rbp
  int v7; // esi
  google::protobuf::RepeatedField<long unsigned int>::Rep *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  int current_size; // edx
  int v12; // eax
  int total_size; // edx
  int v14; // eax
  google::protobuf::RepeatedField<long unsigned int> temp; // [rsp+0h] [rbp-28h] BYREF

  if ( this == other )
    return;
  rep = this->rep_;
  v4 = other->rep_;
  if ( !rep )
  {
    arena = 0LL;
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_4;
  }
  arena = rep->arena;
  if ( v4 )
  {
LABEL_4:
    v6 = v4->arena;
    if ( v4->arena != arena )
    {
      *(_QWORD *)&temp.current_size_ = 0LL;
      temp.rep_ = 0LL;
      if ( v6 )
      {
        if ( v6->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(v6, (const std::type_info *)&`typeinfo for'char, 8uLL);
        temp.rep_ = (google::protobuf::RepeatedField<long unsigned int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                                 &v6->impl_,
                                                                                 8uLL);
        temp.rep_->arena = v6;
      }
      goto LABEL_9;
    }
LABEL_18:
    this->rep_ = v4;
    current_size = other->current_size_;
    other->rep_ = rep;
    v12 = this->current_size_;
    this->current_size_ = current_size;
    total_size = other->total_size_;
    other->current_size_ = v12;
    v14 = this->total_size_;
    this->total_size_ = total_size;
    other->total_size_ = v14;
    return;
  }
  if ( !arena )
    goto LABEL_18;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.rep_ = 0LL;
LABEL_9:
  if ( this->current_size_ )
  {
    google::protobuf::RepeatedField<unsigned long>::Reserve(&temp, temp.current_size_ + this->current_size_);
    memcpy(&temp.rep_->elements[temp.current_size_], this->rep_->elements, 8LL * this->current_size_);
    temp.current_size_ += this->current_size_;
  }
  this->current_size_ = 0;
  v7 = other->current_size_;
  if ( other->current_size_ )
  {
    google::protobuf::RepeatedField<unsigned long>::Reserve(this, v7);
    memcpy(&this->rep_->elements[this->current_size_], other->rep_->elements, 8LL * other->current_size_);
    this->current_size_ += other->current_size_;
    v7 = other->current_size_;
  }
  v8 = other->rep_;
  v9 = temp.total_size_;
  other->rep_ = temp.rep_;
  temp.rep_ = v8;
  other->current_size_ = temp.current_size_;
  v10 = other->total_size_;
  temp.current_size_ = v7;
  other->total_size_ = v9;
  temp.total_size_ = v10;
  if ( v8 )
  {
    if ( !v8->arena )
      operator delete(v8, 8 * v10 + 8);
  }
};

// Line 1324: range 000000000C8AF740-000000000C8AF87F
void __fastcall google::protobuf::RepeatedField<bool>::Reserve(
        google::protobuf::RepeatedField<bool> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<bool>::Rep *rep; // r13
  google::protobuf::Arena *arena; // r14
  google::protobuf::RepeatedField<bool>::Rep *Aligned; // rax
  size_t v7; // rdx
  int v8; // r12d
  google::protobuf::RepeatedField<bool>::Rep *v9; // rax
  size_t current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  if ( !rep )
  {
    v9 = (google::protobuf::RepeatedField<bool>::Rep *)operator new(v3 + 8LL);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v9 = (google::protobuf::RepeatedField<bool>::Rep *)operator new(v3 + 8LL);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v9->elements, rep->elements, current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(
      rep->arena,
      (const std::type_info *)&`typeinfo for'char,
      (v3 + 15LL) & 0xFFFFFFFFFFFFFFF8LL);
  Aligned = (google::protobuf::RepeatedField<bool>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                            &arena->impl_,
                                                            (v3 + 15LL) & 0xFFFFFFFFFFFFFFF8LL);
  v7 = this->current_size_;
  v8 = this->total_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  this->total_size_ = v3;
  if ( (int)v7 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, v8 + 8LL);
    return;
  }
  memcpy(Aligned->elements, rep->elements, v7);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8AF3D0-000000000C8AF516
void __fastcall google::protobuf::RepeatedField<double>::Reserve(
        google::protobuf::RepeatedField<double> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<double>::Rep *rep; // r12
  google::protobuf::Arena *arena; // r13
  google::protobuf::RepeatedField<double>::Rep *Aligned; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  google::protobuf::RepeatedField<double>::Rep *v9; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  if ( !rep )
  {
    v9 = (google::protobuf::RepeatedField<double>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v9 = (google::protobuf::RepeatedField<double>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v9->elements, rep->elements, 8 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(rep->arena, (const std::type_info *)&`typeinfo for'char, 8LL * v3 + 8);
  Aligned = (google::protobuf::RepeatedField<double>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                              &arena->impl_,
                                                              8LL * v3 + 8);
  v7 = this->current_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  v8 = this->total_size_;
  this->total_size_ = v3;
  if ( (int)v7 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 8 * v8 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 8 * v7);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8AF060-000000000C8AF1A3
void __fastcall google::protobuf::RepeatedField<float>::Reserve(
        google::protobuf::RepeatedField<float> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<float>::Rep *rep; // r13
  unsigned __int64 v6; // rdi
  google::protobuf::Arena *arena; // r14
  google::protobuf::RepeatedField<float>::Rep *Aligned; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  google::protobuf::RepeatedField<float>::Rep *v11; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  v6 = 4LL * v3 + 8;
  if ( !rep )
  {
    v11 = (google::protobuf::RepeatedField<float>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v11 = (google::protobuf::RepeatedField<float>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v11->elements, rep->elements, 4 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(
      rep->arena,
      (const std::type_info *)&`typeinfo for'char,
      (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  Aligned = (google::protobuf::RepeatedField<float>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                             &arena->impl_,
                                                             (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  v9 = this->current_size_;
  v10 = this->total_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  this->total_size_ = v3;
  if ( (int)v9 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 4 * v10 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 4 * v9);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8ADA70-000000000C8ADBB3
void __fastcall google::protobuf::RepeatedField<int>::Reserve(
        google::protobuf::RepeatedField<int> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<int>::Rep *rep; // r13
  unsigned __int64 v6; // rdi
  google::protobuf::Arena *arena; // r14
  google::protobuf::RepeatedField<int>::Rep *Aligned; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  google::protobuf::RepeatedField<int>::Rep *v11; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  v6 = 4LL * v3 + 8;
  if ( !rep )
  {
    v11 = (google::protobuf::RepeatedField<int>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v11 = (google::protobuf::RepeatedField<int>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v11->elements, rep->elements, 4 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(
      rep->arena,
      (const std::type_info *)&`typeinfo for'char,
      (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  Aligned = (google::protobuf::RepeatedField<int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                           &arena->impl_,
                                                           (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  v9 = this->current_size_;
  v10 = this->total_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  this->total_size_ = v3;
  if ( (int)v9 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 4 * v10 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 4 * v9);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8AECF0-000000000C8AEE36
void __fastcall google::protobuf::RepeatedField<long>::Reserve(
        google::protobuf::RepeatedField<long int> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<long int>::Rep *rep; // r12
  google::protobuf::Arena *arena; // r13
  google::protobuf::RepeatedField<long int>::Rep *Aligned; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  google::protobuf::RepeatedField<long int>::Rep *v9; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  if ( !rep )
  {
    v9 = (google::protobuf::RepeatedField<long int>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v9 = (google::protobuf::RepeatedField<long int>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v9->elements, rep->elements, 8 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(rep->arena, (const std::type_info *)&`typeinfo for'char, 8LL * v3 + 8);
  Aligned = (google::protobuf::RepeatedField<long int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                &arena->impl_,
                                                                8LL * v3 + 8);
  v7 = this->current_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  v8 = this->total_size_;
  this->total_size_ = v3;
  if ( (int)v7 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 8 * v8 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 8 * v7);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8AE610-000000000C8AE753
void __fastcall google::protobuf::RepeatedField<unsigned int>::Reserve(
        google::protobuf::RepeatedField<unsigned int> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<unsigned int>::Rep *rep; // r13
  unsigned __int64 v6; // rdi
  google::protobuf::Arena *arena; // r14
  google::protobuf::RepeatedField<unsigned int>::Rep *Aligned; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  google::protobuf::RepeatedField<unsigned int>::Rep *v11; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  v6 = 4LL * v3 + 8;
  if ( !rep )
  {
    v11 = (google::protobuf::RepeatedField<unsigned int>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v11 = (google::protobuf::RepeatedField<unsigned int>::Rep *)operator new(v6);
    current_size = this->current_size_;
    v10 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v11;
    v11->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v11->elements, rep->elements, 4 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(
      rep->arena,
      (const std::type_info *)&`typeinfo for'char,
      (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  Aligned = (google::protobuf::RepeatedField<unsigned int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                    &arena->impl_,
                                                                    (4LL * v3 + 15) & 0xFFFFFFFFFFFFFFF8LL);
  v9 = this->current_size_;
  v10 = this->total_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  this->total_size_ = v3;
  if ( (int)v9 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 4 * v10 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 4 * v9);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1324: range 000000000C8AE980-000000000C8AEAC6
void __fastcall google::protobuf::RepeatedField<unsigned long>::Reserve(
        google::protobuf::RepeatedField<long unsigned int> *const this,
        int new_size)
{
  int total_size; // ebx
  int v3; // ebx
  google::protobuf::RepeatedField<long unsigned int>::Rep *rep; // r12
  google::protobuf::Arena *arena; // r13
  google::protobuf::RepeatedField<long unsigned int>::Rep *Aligned; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  google::protobuf::RepeatedField<long unsigned int>::Rep *v9; // rax
  __int64 current_size; // rdx

  total_size = this->total_size_;
  if ( total_size >= new_size )
    return;
  v3 = 2 * total_size;
  rep = this->rep_;
  if ( v3 < new_size )
    v3 = new_size;
  if ( v3 < 4 )
    v3 = 4;
  if ( !rep )
  {
    v9 = (google::protobuf::RepeatedField<long unsigned int>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      return;
    goto LABEL_16;
  }
  arena = rep->arena;
  if ( !rep->arena )
  {
    v9 = (google::protobuf::RepeatedField<long unsigned int>::Rep *)operator new(8LL * v3 + 8);
    current_size = this->current_size_;
    v8 = this->total_size_;
    this->total_size_ = v3;
    this->rep_ = v9;
    v9->arena = 0LL;
    if ( (int)current_size <= 0 )
      goto LABEL_11;
LABEL_16:
    memcpy(v9->elements, rep->elements, 8 * current_size);
    if ( rep )
      goto LABEL_11;
    return;
  }
  if ( arena->hooks_cookie_ )
    google::protobuf::Arena::OnArenaAllocation(rep->arena, (const std::type_info *)&`typeinfo for'char, 8LL * v3 + 8);
  Aligned = (google::protobuf::RepeatedField<long unsigned int>::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                         &arena->impl_,
                                                                         8LL * v3 + 8);
  v7 = this->current_size_;
  this->rep_ = Aligned;
  Aligned->arena = arena;
  v8 = this->total_size_;
  this->total_size_ = v3;
  if ( (int)v7 <= 0 )
  {
LABEL_11:
    if ( rep->arena )
      return;
LABEL_14:
    operator delete(rep, 8 * v8 + 8);
    return;
  }
  memcpy(Aligned->elements, rep->elements, 8 * v7);
  if ( !rep->arena )
    goto LABEL_14;
};

// Line 1424: range 000000000C940940-000000000C9409B8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940B50-000000000C940BC8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940C50-000000000C940CC8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C9409C0-000000000C940A38
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C94E080-000000000C94E0F8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940DF0-000000000C940E68
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C94DF50-000000000C94DFC8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940AC0-000000000C940B38
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C9408A0-000000000C940918
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C941030-000000000C9410A8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C8B6360-000000000C8B63D8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940E80-000000000C940EF8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940BD0-000000000C940C48
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C94DFD0-000000000C94E048
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940A40-000000000C940AB8
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940FA0-000000000C941018
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940CE0-000000000C940D58
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C940F10-000000000C940F88
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void **elements; // rbx
  __int64 v4; // r12

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        if ( *elements )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*elements + 8LL))(*elements);
        ++elements;
      }
      while ( (void **)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
    this->rep_ = 0LL;
  }
  else
  {
    this->rep_ = 0LL;
  }
};

// Line 1424: range 000000000C8BD900-000000000C8BD997
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdi
  void ***elements; // rbx
  __int64 v4; // r13
  void **v5; // rbp

  rep = this->rep_;
  if ( rep && !this->arena_ )
  {
    if ( rep->allocated_size > 0 )
    {
      elements = (void ***)rep->elements;
      v4 = (__int64)&rep[1] + 8 * (unsigned int)(rep->allocated_size - 1);
      do
      {
        v5 = *elements;
        if ( *elements )
        {
          if ( *v5 != v5 + 2 )
            operator delete(*v5);
          operator delete(v5, 0x20uLL);
        }
        ++elements;
      }
      while ( (void ***)v4 != elements );
      rep = this->rep_;
    }
    operator delete(rep, 8LL * this->total_size_ + 8);
  }
  this->rep_ = 0LL;
};

// Line 1451: range 000000000C8BE160-000000000C8BE34B
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *other)
{
  google::protobuf::Arena *arena; // rax
  int current_size; // ebx
  int v6; // r13d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // r14
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  int total_size; // edx
  __int64 v10; // rax
  void **v11; // rbx
  __int64 v12; // rbp
  void **v13; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rax
  int v15; // r13d
  void **v16; // rbx
  __int64 v17; // rdi
  void **elements; // r13
  void **v19; // rsi
  int v20; // ebx
  int v21; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  void **v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase temp; // [rsp+0h] [rbp-48h] BYREF

  arena = other->arena_;
  current_size = this->current_size_;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.arena_ = arena;
  temp.rep_ = 0LL;
  if ( current_size )
  {
    elements = this->rep_->elements;
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&temp, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
      &temp,
      v19,
      elements,
      current_size,
      temp.rep_->allocated_size - temp.current_size_);
    v20 = temp.current_size_ + current_size;
    temp.current_size_ = v20;
    if ( v20 > temp.rep_->allocated_size )
      temp.rep_->allocated_size = v20;
    v21 = this->current_size_;
    if ( v21 > 0 )
    {
      rep = this->rep_;
      v23 = rep->elements;
      v24 = (__int64)&rep[1] + 8 * (unsigned int)(v21 - 1);
      do
      {
        v25 = (__int64)*v23++;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL))(v25);
      }
      while ( v23 != (void **)v24 );
      this->current_size_ = 0;
    }
  }
  v6 = other->current_size_;
  v7 = other->rep_;
  if ( v6 )
  {
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(this, v6);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
      this,
      v13,
      v7->elements,
      v6,
      this->rep_->allocated_size - this->current_size_);
    v14 = this->rep_;
    v15 = this->current_size_ + v6;
    this->current_size_ = v15;
    if ( v15 > v14->allocated_size )
      v14->allocated_size = v15;
    v6 = other->current_size_;
    v7 = other->rep_;
    if ( v6 > 0 )
    {
      v16 = v7->elements;
      do
      {
        v17 = (__int64)*v16++;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      }
      while ( (void **)((char *)&v7[1] + 8 * (unsigned int)(v6 - 1)) != v16 );
      v7 = other->rep_;
      v6 = 0;
    }
  }
  v8 = temp.rep_;
  total_size = temp.total_size_;
  temp.rep_ = v7;
  other->rep_ = v8;
  LODWORD(v8) = temp.current_size_;
  temp.current_size_ = v6;
  other->current_size_ = (int)v8;
  v10 = other->total_size_;
  other->total_size_ = total_size;
  temp.total_size_ = v10;
  if ( v7 && !temp.arena_ )
  {
    if ( v7->allocated_size > 0 )
    {
      v11 = v7->elements;
      v12 = (__int64)&v7[1] + 8 * (unsigned int)(v7->allocated_size - 1);
      do
      {
        if ( *v11 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*v11 + 8LL))(*v11);
        ++v11;
      }
      while ( (void **)v12 != v11 );
      v10 = temp.total_size_;
      v7 = temp.rep_;
    }
    operator delete(v7, 8 * v10 + 8);
  }
};

// Line 1451: range 000000000C8BDC00-000000000C8BDD99
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *other)
{
  google::protobuf::Arena *arena; // rax
  int current_size; // r12d
  int v4; // r12d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v5; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax
  int total_size; // edx
  void **elements; // r13
  void **v9; // rax
  int v10; // r12d
  int v11; // ecx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  void **v16; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v17; // rax
  int v18; // r12d
  void **v19; // rax
  __int64 v20; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase temp; // [rsp+0h] [rbp-48h] BYREF

  arena = other->arena_;
  current_size = this->current_size_;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.arena_ = arena;
  temp.rep_ = 0LL;
  if ( !current_size )
    goto LABEL_2;
  elements = this->rep_->elements;
  v9 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&temp, current_size);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    &temp,
    v9,
    elements,
    current_size,
    temp.rep_->allocated_size - temp.current_size_);
  v10 = temp.current_size_ + current_size;
  temp.current_size_ = v10;
  if ( v10 > temp.rep_->allocated_size )
    temp.rep_->allocated_size = v10;
  v11 = this->current_size_;
  if ( v11 > 0 )
  {
    rep = this->rep_;
    v13 = rep->elements;
    v14 = (__int64)&rep[1] + 8 * (unsigned int)(v11 - 1);
    do
    {
      v15 = (__int64)*v13++;
      *(_QWORD *)(v15 + 8) = 0LL;
      **(_BYTE **)v15 = 0;
    }
    while ( (void **)v14 != v13 );
    this->current_size_ = 0;
    v4 = other->current_size_;
    v5 = other->rep_;
    if ( !v4 )
      goto LABEL_3;
  }
  else
  {
LABEL_2:
    v4 = other->current_size_;
    v5 = other->rep_;
    if ( !v4 )
      goto LABEL_3;
  }
  v16 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(this, v4);
  google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
    this,
    v16,
    v5->elements,
    v4,
    this->rep_->allocated_size - this->current_size_);
  v17 = this->rep_;
  v18 = this->current_size_ + v4;
  this->current_size_ = v18;
  if ( v18 > v17->allocated_size )
    v17->allocated_size = v18;
  v4 = other->current_size_;
  v5 = other->rep_;
  if ( v4 > 0 )
  {
    v19 = v5->elements;
    do
    {
      v20 = (__int64)*v19++;
      *(_QWORD *)(v20 + 8) = 0LL;
      **(_BYTE **)v20 = 0;
    }
    while ( (void **)((char *)&v5[1] + 8 * (unsigned int)(v4 - 1)) != v19 );
    v5 = other->rep_;
    v4 = 0;
  }
LABEL_3:
  v6 = temp.rep_;
  total_size = temp.total_size_;
  temp.rep_ = v5;
  other->rep_ = v6;
  LODWORD(v6) = temp.current_size_;
  temp.current_size_ = v4;
  other->current_size_ = (int)v6;
  LODWORD(v6) = other->total_size_;
  other->total_size_ = total_size;
  temp.total_size_ = (int)v6;
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&temp);
};

// Line 1451: range 000000000C8AFB50-000000000C8AFD3B
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::RepeatedPtrFieldBase *other)
{
  google::protobuf::Arena *arena; // rax
  int current_size; // ebx
  int v6; // r13d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v7; // r14
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v8; // rax
  int total_size; // edx
  __int64 v10; // rax
  void **v11; // rbx
  __int64 v12; // rbp
  void **v13; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rax
  int v15; // r13d
  void **v16; // rbx
  __int64 v17; // rdi
  void **elements; // r13
  void **v19; // rsi
  int v20; // ebx
  int v21; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  void **v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase temp; // [rsp+0h] [rbp-48h] BYREF

  arena = other->arena_;
  current_size = this->current_size_;
  *(_QWORD *)&temp.current_size_ = 0LL;
  temp.arena_ = arena;
  temp.rep_ = 0LL;
  if ( current_size )
  {
    elements = this->rep_->elements;
    v19 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(&temp, current_size);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
      &temp,
      v19,
      elements,
      current_size,
      temp.rep_->allocated_size - temp.current_size_);
    v20 = temp.current_size_ + current_size;
    temp.current_size_ = v20;
    if ( v20 > temp.rep_->allocated_size )
      temp.rep_->allocated_size = v20;
    v21 = this->current_size_;
    if ( v21 > 0 )
    {
      rep = this->rep_;
      v23 = rep->elements;
      v24 = (__int64)&rep[1] + 8 * (unsigned int)(v21 - 1);
      do
      {
        v25 = (__int64)*v23++;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL))(v25);
      }
      while ( v23 != (void **)v24 );
      this->current_size_ = 0;
    }
  }
  v6 = other->current_size_;
  v7 = other->rep_;
  if ( v6 )
  {
    v13 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(this, v6);
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
      this,
      v13,
      v7->elements,
      v6,
      this->rep_->allocated_size - this->current_size_);
    v14 = this->rep_;
    v15 = this->current_size_ + v6;
    this->current_size_ = v15;
    if ( v15 > v14->allocated_size )
      v14->allocated_size = v15;
    v6 = other->current_size_;
    v7 = other->rep_;
    if ( v6 > 0 )
    {
      v16 = v7->elements;
      do
      {
        v17 = (__int64)*v16++;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      }
      while ( (void **)((char *)&v7[1] + 8 * (unsigned int)(v6 - 1)) != v16 );
      v7 = other->rep_;
      v6 = 0;
    }
  }
  v8 = temp.rep_;
  total_size = temp.total_size_;
  temp.rep_ = v7;
  other->rep_ = v8;
  LODWORD(v8) = temp.current_size_;
  temp.current_size_ = v6;
  other->current_size_ = (int)v8;
  v10 = other->total_size_;
  other->total_size_ = total_size;
  temp.total_size_ = v10;
  if ( v7 && !temp.arena_ )
  {
    if ( v7->allocated_size > 0 )
    {
      v11 = v7->elements;
      v12 = (__int64)&v7[1] + 8 * (unsigned int)(v7->allocated_size - 1);
      do
      {
        if ( *v11 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)*v11 + 8LL))(*v11);
        ++v11;
      }
      while ( (void **)v12 != v11 );
      v10 = temp.total_size_;
      v7 = temp.rep_;
    }
    operator delete(v7, 8 * v10 + 8);
  }
};

// Line 1467: range 000000000C8BCC50-000000000C8BCC58
bool __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::IsEmpty(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *((_DWORD *)data + 2) == 0;
};

// Line 1467: range 000000000C8BCD10-000000000C8BCD18
bool __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::IsEmpty(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *((_DWORD *)data + 2) == 0;
};

// Line 1536: range 000000000C8BCCC0-000000000C8BCCD7
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::RemoveLast(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdi

  v2 = *((_QWORD *)data + 2);
  v3 = *((_DWORD *)data + 2) - 1;
  *((_DWORD *)data + 2) = v3;
  v4 = *(_QWORD *)(v2 + 8LL * v3 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
};

// Line 1536: range 000000000C8BCD70-000000000C8BCD92
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::RemoveLast(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rax

  v2 = *((_QWORD *)data + 2);
  v3 = *((_DWORD *)data + 2) - 1;
  *((_DWORD *)data + 2) = v3;
  v4 = *(_QWORD *)(v2 + 8LL * v3 + 8);
  *(_QWORD *)(v4 + 8) = 0LL;
  **(_BYTE **)v4 = 0;
};

// Line 1541: range 000000000C8BCC70-000000000C8BCCB0
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Clear(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi

  v2 = *((_DWORD *)data + 2);
  if ( v2 > 0 )
  {
    v3 = *((_QWORD *)data + 2);
    v4 = v3 + 8LL * (unsigned int)(v2 - 1) + 16;
    v5 = (__int64 *)(v3 + 8);
    do
    {
      v6 = *v5++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
    }
    while ( v5 != (__int64 *)v4 );
    *((_DWORD *)data + 2) = 0;
  }
};

// Line 1541: range 000000000C8BCD20-000000000C8BCD61
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Clear(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = *((_DWORD *)data + 2);
  if ( v2 > 0 )
  {
    v3 = *((_QWORD *)data + 2);
    v4 = (__int64 *)(v3 + 8);
    v5 = v3 + 8LL * (unsigned int)(v2 - 1) + 16;
    do
    {
      v6 = *v4++;
      *(_QWORD *)(v6 + 8) = 0LL;
      **(_BYTE **)v6 = 0;
    }
    while ( v4 != (__int64 *)v5 );
    *((_DWORD *)data + 2) = 0;
  }
};

// Line 1541: range 000000000C9319B0-000000000C9319F0
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        _QWORD *a2)
{
  __int64 v3; // rbp
  google::protobuf::DescriptorProto **v4; // rbx
  google::protobuf::DescriptorProto *v5; // rdi

  if ( SLODWORD(this->arena_) > 0 )
  {
    v3 = *a2 + 8LL * (unsigned int)(LODWORD(this->arena_) - 1) + 16;
    v4 = (google::protobuf::DescriptorProto **)(*a2 + 8LL);
    do
    {
      v5 = *v4++;
      google::protobuf::DescriptorProto::Clear(v5);
    }
    while ( v4 != (google::protobuf::DescriptorProto **)v3 );
    LODWORD(this->arena_) = 0;
  }
};

// Line 1541: range 000000000C931450-000000000C931490
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        _QWORD *a2)
{
  __int64 v3; // rbp
  google::protobuf::EnumDescriptorProto **v4; // rbx
  google::protobuf::EnumDescriptorProto *v5; // rdi

  if ( SLODWORD(this->arena_) > 0 )
  {
    v3 = *a2 + 8LL * (unsigned int)(LODWORD(this->arena_) - 1) + 16;
    v4 = (google::protobuf::EnumDescriptorProto **)(*a2 + 8LL);
    do
    {
      v5 = *v4++;
      google::protobuf::EnumDescriptorProto::Clear(v5);
    }
    while ( v4 != (google::protobuf::EnumDescriptorProto **)v3 );
    LODWORD(this->arena_) = 0;
  }
};

// Line 1541: range 000000000C9317B0-000000000C9317F0
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        _QWORD *a2)
{
  __int64 v3; // rbp
  google::protobuf::FieldDescriptorProto **v4; // rbx
  google::protobuf::FieldDescriptorProto *v5; // rdi

  if ( SLODWORD(this->arena_) > 0 )
  {
    v3 = *a2 + 8LL * (unsigned int)(LODWORD(this->arena_) - 1) + 16;
    v4 = (google::protobuf::FieldDescriptorProto **)(*a2 + 8LL);
    do
    {
      v5 = *v4++;
      google::protobuf::FieldDescriptorProto::Clear(v5);
    }
    while ( v4 != (google::protobuf::FieldDescriptorProto **)v3 );
    LODWORD(this->arena_) = 0;
  }
};

// Line 1541: range 000000000C948DF0-000000000C948E30
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        _QWORD *a2)
{
  __int64 v3; // rbp
  google::protobuf::Option **v4; // rbx
  google::protobuf::Option *v5; // rdi

  if ( SLODWORD(this->arena_) > 0 )
  {
    v3 = *a2 + 8LL * (unsigned int)(LODWORD(this->arena_) - 1) + 16;
    v4 = (google::protobuf::Option **)(*a2 + 8LL);
    do
    {
      v5 = *v4++;
      google::protobuf::Option::Clear(v5);
    }
    while ( v4 != (google::protobuf::Option **)v3 );
    LODWORD(this->arena_) = 0;
  }
};

// Line 1541: range 000000000C930F00-000000000C930F40
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Clear<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        _QWORD *a2)
{
  __int64 v3; // rbp
  google::protobuf::UninterpretedOption **v4; // rbx
  google::protobuf::UninterpretedOption *v5; // rdi

  if ( SLODWORD(this->arena_) > 0 )
  {
    v3 = *a2 + 8LL * (unsigned int)(LODWORD(this->arena_) - 1) + 16;
    v4 = (google::protobuf::UninterpretedOption **)(*a2 + 8LL);
    do
    {
      v5 = *v4++;
      google::protobuf::UninterpretedOption::Clear(v5);
    }
    while ( v4 != (google::protobuf::UninterpretedOption **)v3 );
    LODWORD(this->arena_) = 0;
  }
};

// Line 1585: range 000000000C941D50-000000000C941E7A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::DescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::DescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto>::Merge(
        (const google::protobuf::DescriptorProto *)other_elems[v10],
        (google::protobuf::DescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::DescriptorProto *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
            0xE8uLL);
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                      &arena->impl_,
                                                                      0xE8uLL,
                                                                      google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
        google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
        google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941490-000000000C9415BA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::DescriptorProto_ExtensionRange *AlignedAndAddCleanup; // rbp
  const google::protobuf::DescriptorProto_ExtensionRange *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ExtensionRange>::Merge(
        (const google::protobuf::DescriptorProto_ExtensionRange *)other_elems[v10],
        (google::protobuf::DescriptorProto_ExtensionRange *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::DescriptorProto_ExtensionRange *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ExtensionRange,
            0x28uLL);
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ExtensionRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                     &arena->impl_,
                                                                                     0x28uLL,
                                                                                     google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ExtensionRange>);
        google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ExtensionRange *)operator new(0x28uLL);
        google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ExtensionRange>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C9410D0-000000000C9411FA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::DescriptorProto_ReservedRange *AlignedAndAddCleanup; // rbp
  const google::protobuf::DescriptorProto_ReservedRange *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ReservedRange>::Merge(
        (const google::protobuf::DescriptorProto_ReservedRange *)other_elems[v10],
        (google::protobuf::DescriptorProto_ReservedRange *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::DescriptorProto_ReservedRange *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ReservedRange,
            0x20uLL);
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ReservedRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                    &arena->impl_,
                                                                                    0x20uLL,
                                                                                    google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ReservedRange>);
        google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ReservedRange *)operator new(0x20uLL);
        google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::DescriptorProto_ReservedRange>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941AD0-000000000C941BFA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::EnumDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::EnumDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumDescriptorProto>::Merge(
        (const google::protobuf::EnumDescriptorProto *)other_elems[v10],
        (google::protobuf::EnumDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::EnumDescriptorProto *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
            0x40uLL);
        AlignedAndAddCleanup = (google::protobuf::EnumDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                          &arena->impl_,
                                                                          0x40uLL,
                                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>);
        google::protobuf::EnumDescriptorProto::EnumDescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
        google::protobuf::EnumDescriptorProto::EnumDescriptorProto(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C94E3A0-000000000C94E4CA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::EnumValue *Aligned; // rbp
  const google::protobuf::EnumValue *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>::Merge(
        (const google::protobuf::EnumValue *)other_elems[v10],
        (google::protobuf::EnumValue *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::EnumValue *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::EnumValue,
            0x38uLL);
        Aligned = (google::protobuf::EnumValue *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                   &arena->impl_,
                                                   0x38uLL);
        google::protobuf::EnumValue::EnumValue(Aligned, arena);
      }
      else
      {
        Aligned = (google::protobuf::EnumValue *)operator new(0x38uLL);
        google::protobuf::EnumValue::EnumValue(Aligned);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>::Merge(v15, Aligned);
      our_elems[(_QWORD)v13] = Aligned;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941710-000000000C94183A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::EnumValueDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::EnumValueDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::EnumValueDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValueDescriptorProto>::Merge(
        (const google::protobuf::EnumValueDescriptorProto *)other_elems[v10],
        (google::protobuf::EnumValueDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::EnumValueDescriptorProto *)other_elems[(_QWORD)v13];
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
      google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValueDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C94E260-000000000C94E38A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Field>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::Field *Aligned; // rbp
  const google::protobuf::Field *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>::Merge(
        (const google::protobuf::Field *)other_elems[v10],
        (google::protobuf::Field *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::Field *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::Field,
            0x60uLL);
        Aligned = (google::protobuf::Field *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                               &arena->impl_,
                                               0x60uLL);
        google::protobuf::Field::Field(Aligned, arena);
      }
      else
      {
        Aligned = (google::protobuf::Field *)operator new(0x60uLL);
        google::protobuf::Field::Field(Aligned);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>::Merge(v15, Aligned);
      our_elems[(_QWORD)v13] = Aligned;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941C10-000000000C941D3A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FieldDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::FieldDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::FieldDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::FieldDescriptorProto>::Merge(
        (const google::protobuf::FieldDescriptorProto *)other_elems[v10],
        (google::protobuf::FieldDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::FieldDescriptorProto *)other_elems[(_QWORD)v13];
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
      google::protobuf::internal::GenericTypeHandler<google::protobuf::FieldDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941FD0-000000000C9420FA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::FileDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::FileDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::FileDescriptorProto>::Merge(
        (const google::protobuf::FileDescriptorProto *)other_elems[v10],
        (google::protobuf::FileDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::FileDescriptorProto *)other_elems[(_QWORD)v13];
      if ( arena )
      {
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
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::FileDescriptorProto *)operator new(0xD8uLL);
        google::protobuf::FileDescriptorProto::FileDescriptorProto(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::FileDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C942110-000000000C94223A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::GeneratedCodeInfo_Annotation *AlignedAndAddCleanup; // rbp
  const google::protobuf::GeneratedCodeInfo_Annotation *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::GeneratedCodeInfo_Annotation>::Merge(
        (const google::protobuf::GeneratedCodeInfo_Annotation *)other_elems[v10],
        (google::protobuf::GeneratedCodeInfo_Annotation *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::GeneratedCodeInfo_Annotation *)other_elems[(_QWORD)v13];
      if ( arena )
      {
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
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::GeneratedCodeInfo_Annotation *)operator new(0x40uLL);
        google::protobuf::GeneratedCodeInfo_Annotation::GeneratedCodeInfo_Annotation(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::GeneratedCodeInfo_Annotation>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C8BE090-000000000C8BE150
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rbx
  const google::protobuf::Message *v15; // r14
  google::protobuf::Message *v16; // r13
  google::protobuf::Arena *arena; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(
        (const google::protobuf::Message *)other_elems[v10],
        (google::protobuf::Message *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v12 = already_allocated;
    v13 = length - 1;
    v14 = already_allocated + 1LL;
    v18 = v14 + (unsigned int)(v13 - already_allocated);
    while ( 1 )
    {
      v15 = (const google::protobuf::Message *)other_elems[v12];
      v16 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Message *, google::protobuf::Arena *))v15->_vptr_MessageLite
                                          + 4))(
                                           v15,
                                           arena);
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(v15, v16);
      our_elems[v12] = v16;
      v12 = v14;
      if ( v18 == v14 )
        break;
      ++v14;
    }
  }
};

// Line 1585: range 000000000C941850-000000000C94197A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::MethodDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::MethodDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::MethodDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::MethodDescriptorProto>::Merge(
        (const google::protobuf::MethodDescriptorProto *)other_elems[v10],
        (google::protobuf::MethodDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::MethodDescriptorProto *)other_elems[(_QWORD)v13];
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
      google::protobuf::internal::GenericTypeHandler<google::protobuf::MethodDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C9415D0-000000000C9416FA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::OneofDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::OneofDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::OneofDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::OneofDescriptorProto>::Merge(
        (const google::protobuf::OneofDescriptorProto *)other_elems[v10],
        (google::protobuf::OneofDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::OneofDescriptorProto *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::OneofDescriptorProto,
            0x28uLL);
        AlignedAndAddCleanup = (google::protobuf::OneofDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                           &arena->impl_,
                                                                           0x28uLL,
                                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::OneofDescriptorProto>);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::OneofDescriptorProto *)operator new(0x28uLL);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::OneofDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C94E120-000000000C94E24A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::Option *Aligned; // rbp
  const google::protobuf::Option *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>::Merge(
        (const google::protobuf::Option *)other_elems[v10],
        (google::protobuf::Option *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::Option *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::Option,
            0x28uLL);
        Aligned = (google::protobuf::Option *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &arena->impl_,
                                                0x28uLL);
        google::protobuf::Option::Option(Aligned, arena);
      }
      else
      {
        Aligned = (google::protobuf::Option *)operator new(0x28uLL);
        google::protobuf::Option::Option(Aligned);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>::Merge(v15, Aligned);
      our_elems[(_QWORD)v13] = Aligned;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941990-000000000C941ABA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::ServiceDescriptorProto>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::ServiceDescriptorProto *AlignedAndAddCleanup; // rbp
  const google::protobuf::ServiceDescriptorProto *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::ServiceDescriptorProto>::Merge(
        (const google::protobuf::ServiceDescriptorProto *)other_elems[v10],
        (google::protobuf::ServiceDescriptorProto *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::ServiceDescriptorProto *)other_elems[(_QWORD)v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::ServiceDescriptorProto,
            0x40uLL);
        AlignedAndAddCleanup = (google::protobuf::ServiceDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                             &arena->impl_,
                                                                             0x40uLL,
                                                                             google::protobuf::internal::arena_destruct_object<google::protobuf::ServiceDescriptorProto>);
        google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(AlignedAndAddCleanup);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::ServiceDescriptorProto *)operator new(0x40uLL);
        google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::ServiceDescriptorProto>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941E90-000000000C941FBA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::SourceCodeInfo_Location *AlignedAndAddCleanup; // rbp
  const google::protobuf::SourceCodeInfo_Location *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::SourceCodeInfo_Location>::Merge(
        (const google::protobuf::SourceCodeInfo_Location *)other_elems[v10],
        (google::protobuf::SourceCodeInfo_Location *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::SourceCodeInfo_Location *)other_elems[(_QWORD)v13];
      if ( arena )
      {
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
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo_Location *)operator new(0x70uLL);
        google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
      }
      google::protobuf::internal::GenericTypeHandler<google::protobuf::SourceCodeInfo_Location>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941350-000000000C94147A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::UninterpretedOption *AlignedAndAddCleanup; // rbp
  const google::protobuf::UninterpretedOption *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption>::Merge(
        (const google::protobuf::UninterpretedOption *)other_elems[v10],
        (google::protobuf::UninterpretedOption *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::UninterpretedOption *)other_elems[(_QWORD)v13];
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
      google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C941210-000000000C94133A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v13; // rbx
  google::protobuf::UninterpretedOption_NamePart *AlignedAndAddCleanup; // rbp
  const google::protobuf::UninterpretedOption_NamePart *v15; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *thisa; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption_NamePart>::Merge(
        (const google::protobuf::UninterpretedOption_NamePart *)other_elems[v10],
        (google::protobuf::UninterpretedOption_NamePart *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v9 != v11 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)already_allocated;
    thisa = (google::protobuf::internal::RepeatedPtrFieldBase *)(already_allocated
                                                               + (unsigned __int64)(unsigned int)(length
                                                                                                - 1
                                                                                                - already_allocated)
                                                               + 1);
    do
    {
      v15 = (const google::protobuf::UninterpretedOption_NamePart *)other_elems[(_QWORD)v13];
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
      google::protobuf::internal::GenericTypeHandler<google::protobuf::UninterpretedOption_NamePart>::Merge(
        v15,
        AlignedAndAddCleanup);
      our_elems[(_QWORD)v13] = AlignedAndAddCleanup;
      v13 = (google::protobuf::internal::RepeatedPtrFieldBase *)((char *)v13 + 1);
    }
    while ( thisa != v13 );
  }
};

// Line 1585: range 000000000C8BD6A0-000000000C8BD7CA
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  __int64 v13; // rbp
  unsigned int v14; // r13d
  __int64 v15; // rbx
  _BYTE *AlignedAndAddCleanup; // rax
  void *v17; // r13
  void *v18; // r8
  void *v19; // [rsp+0h] [rbp-48h]
  void *v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      std::string::_M_assign(our_elems[v10], other_elems[v10]);
      v11 = v10++;
    }
    while ( v11 != v9 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = already_allocated;
    v14 = length - 1 - already_allocated;
    v15 = already_allocated + 1LL;
    v21 = v14 + v15;
    while ( 1 )
    {
      v18 = other_elems[v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
        {
          v20 = other_elems[v13];
          google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
          v18 = v20;
        }
        v19 = v18;
        AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                 &arena->impl_,
                                 0x20uLL,
                                 google::protobuf::internal::arena_destruct_object<std::string>);
      }
      else
      {
        v19 = other_elems[v13];
        AlignedAndAddCleanup = (_BYTE *)operator new(0x20uLL);
      }
      AlignedAndAddCleanup[16] = 0;
      v17 = AlignedAndAddCleanup;
      *(_QWORD *)AlignedAndAddCleanup = AlignedAndAddCleanup + 16;
      *((_QWORD *)AlignedAndAddCleanup + 1) = 0LL;
      std::string::_M_assign(AlignedAndAddCleanup, v19);
      our_elems[v13] = v17;
      v13 = v15;
      if ( v21 == v15 )
        break;
      ++v15;
    }
  }
};

// Line 1585: range 000000000C8AFA90-000000000C8AFB48
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  google::protobuf::Message *v16; // r13
  google::protobuf::Message *from; // [rsp+0h] [rbp-48h]
  google::protobuf::Arena *arena; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(
        (const google::protobuf::Message *)other_elems[v10],
        (google::protobuf::Message *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v11 != v9 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v12 = already_allocated;
    v13 = (unsigned int)(length - 1 - already_allocated);
    v14 = already_allocated + 1LL;
    v15 = v14 + v13;
    while ( 1 )
    {
      from = (google::protobuf::Message *)other_elems[v12];
      v16 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::NewFromPrototype(from, arena);
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(from, v16);
      our_elems[v12] = v16;
      v12 = v14;
      if ( v15 == v14 )
        break;
      ++v14;
    }
  }
};

// Line 1585: range 000000000C8AB320-000000000C8AB44A
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::internal::GenericTypeHandler<std::string>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        void **our_elems,
        void **other_elems,
        int length,
        int already_allocated)
{
  int v5; // eax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  google::protobuf::Arena *arena; // r12
  __int64 v13; // rbp
  unsigned int v14; // r13d
  __int64 v15; // rbx
  std::string *AlignedAndAddCleanup; // rax
  std::string *v17; // r13
  std::string *v18; // r8
  std::string *from; // [rsp+0h] [rbp-48h]
  std::string *froma; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v5 = length;
  if ( already_allocated <= length )
    v5 = already_allocated;
  if ( v5 > 0 )
  {
    v9 = (unsigned int)(v5 - 1);
    v10 = 0LL;
    do
    {
      google::protobuf::internal::GenericTypeHandler<std::string>::Merge(
        (const std::string *)other_elems[v10],
        (std::string *)our_elems[v10]);
      v11 = v10++;
    }
    while ( v11 != v9 );
  }
  arena = this->arena_;
  if ( already_allocated < length )
  {
    v13 = already_allocated;
    v14 = length - 1 - already_allocated;
    v15 = already_allocated + 1LL;
    v21 = v14 + v15;
    while ( 1 )
    {
      v18 = (std::string *)other_elems[v13];
      if ( arena )
      {
        if ( arena->hooks_cookie_ )
        {
          froma = (std::string *)other_elems[v13];
          google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
          v18 = froma;
        }
        from = v18;
        AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                &arena->impl_,
                                                0x20uLL,
                                                google::protobuf::internal::arena_destruct_object<std::string>);
      }
      else
      {
        from = (std::string *)other_elems[v13];
        AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
      }
      AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
      v17 = AlignedAndAddCleanup;
      AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
      AlignedAndAddCleanup->_M_string_length = 0LL;
      google::protobuf::internal::GenericTypeHandler<std::string>::Merge(from, AlignedAndAddCleanup);
      our_elems[v13] = v17;
      v13 = v15;
      if ( v21 == v15 )
        break;
      ++v15;
    }
  }
};

// Line 1672: range 000000000C8BE500-000000000C8BE5D2
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *value)
{
  __int64 (__fastcall *v3)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *); // rdx
  google::protobuf::Arena *v4; // rcx
  google::protobuf::Arena *v5; // rdx
  google::protobuf::Arena *(__fastcall *v6)(const google::protobuf::MessageLite *const); // rax
  google::protobuf::Arena *v7; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 allocated_size; // rdx
  void **elements; // rax
  __int64 current_size; // rcx
  void **v12; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v13; // rax
  __int64 v14; // rax
  google::protobuf::Arena *arena; // [rsp+8h] [rbp-20h]

  v3 = (__int64 (__fastcall *)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *))*((_QWORD *)value->_vptr_MessageLite + 6);
  if ( (char *)v3 == (char *)google::protobuf::MessageLite::GetMaybeArenaPointer
    && (v3 = (__int64 (__fastcall *)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *))*((_QWORD *)value->_vptr_MessageLite + 5),
        (char *)v3 == (char *)google::protobuf::MessageLite::GetArena) )
  {
    v4 = this->arena_;
    if ( this->arena_ )
      goto LABEL_4;
  }
  else
  {
    v7 = (google::protobuf::Arena *)v3(value);
    v4 = this->arena_;
    if ( this->arena_ != v7 )
      goto LABEL_4;
  }
  rep = this->rep_;
  if ( !rep || (allocated_size = rep->allocated_size, (int)allocated_size >= this->total_size_) )
  {
LABEL_4:
    v5 = 0LL;
    v6 = (google::protobuf::Arena *(__fastcall *)(const google::protobuf::MessageLite *const))*((_QWORD *)value->_vptr_MessageLite
                                                                                              + 5);
    if ( v6 != google::protobuf::MessageLite::GetArena )
    {
      arena = v4;
      v14 = ((__int64 (__fastcall *)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, _QWORD))v6)(
              value,
              value,
              0LL);
      v4 = arena;
      v5 = (google::protobuf::Arena *)v14;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
      this,
      value,
      v5,
      v4);
    return;
  }
  elements = rep->elements;
  current_size = this->current_size_;
  v12 = &elements[current_size];
  if ( (int)allocated_size > (int)current_size )
    elements[allocated_size] = *v12;
  *v12 = value;
  v13 = this->rep_;
  this->current_size_ = current_size + 1;
  ++v13->allocated_size;
};

// Line 1701: range 000000000C8B6460-000000000C8B658D
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *value,
        google::protobuf::Arena *value_arena,
        google::protobuf::Arena *my_arena)
{
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *v4; // rbp
  bool v6; // r12
  google::protobuf::Message *v7; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  int total_size; // esi
  int current_size; // eax
  __int64 allocated_size; // rdi
  int v12; // esi
  __int64 v13; // rcx
  void *v14; // rdi

  v4 = value;
  v6 = value_arena == 0LL;
  if ( my_arena && !value_arena )
  {
    google::protobuf::Arena::Own<google::protobuf::Message>(my_arena, value);
    rep = this->rep_;
    total_size = this->total_size_;
    if ( !rep )
      goto LABEL_13;
  }
  else
  {
    if ( my_arena != value_arena )
    {
      v7 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::NewFromPrototype(value, my_arena);
      google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(value, v7);
      if ( value && v6 )
      {
        v4 = v7;
        (*((void (__fastcall **)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *))value->_vptr_MessageLite
         + 1))(value);
      }
      else
      {
        v4 = v7;
      }
    }
    rep = this->rep_;
    total_size = this->total_size_;
    if ( !rep )
      goto LABEL_13;
  }
  current_size = this->current_size_;
  if ( current_size == total_size )
  {
LABEL_13:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, total_size + 1);
    rep = this->rep_;
    v13 = this->current_size_;
    ++rep->allocated_size;
    current_size = v13;
    goto LABEL_14;
  }
  allocated_size = rep->allocated_size;
  if ( (_DWORD)allocated_size == total_size )
  {
    v13 = current_size;
    v14 = rep->elements[current_size];
    if ( !this->arena_ && v14 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 8LL))(v14);
      v13 = this->current_size_;
      rep = this->rep_;
      current_size = this->current_size_;
    }
  }
  else
  {
    v12 = allocated_size + 1;
    if ( current_size >= (int)allocated_size )
    {
      rep->allocated_size = v12;
      v13 = current_size;
    }
    else
    {
      v13 = current_size;
      rep->elements[allocated_size] = rep->elements[current_size];
      rep->allocated_size = v12;
    }
  }
LABEL_14:
  this->current_size_ = current_size + 1;
  rep->elements[v13] = v4;
};

// Line 1701: range 000000000C8BEE90-000000000C8BF049
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::StringTypeHandler::Type *value,
        google::protobuf::Arena *value_arena,
        google::protobuf::Arena *my_arena)
{
  google::protobuf::internal::StringTypeHandler::Type *v4; // rbp
  google::protobuf::Arena *v6; // rdi
  bool v7; // r13
  google::protobuf::internal::StringTypeHandler::Type *AlignedAndAddCleanup; // rax
  google::protobuf::internal::StringTypeHandler::Type *v9; // r12
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  int total_size; // esi
  int current_size; // eax
  __int64 allocated_size; // rdi
  int v14; // esi
  __int64 v15; // rcx
  void **v16; // r12

  v4 = value;
  v6 = my_arena;
  v7 = value_arena == 0LL;
  if ( my_arena && !value_arena )
  {
    google::protobuf::Arena::Own<std::string>(my_arena, value);
    rep = this->rep_;
    total_size = this->total_size_;
    if ( !rep )
      goto LABEL_17;
  }
  else
  {
    if ( my_arena != value_arena )
    {
      if ( my_arena )
      {
        if ( my_arena->hooks_cookie_ )
        {
          google::protobuf::Arena::OnArenaAllocation(
            my_arena,
            (const std::type_info *)&`typeinfo for'std::string,
            0x20uLL);
          v6 = my_arena;
        }
        AlignedAndAddCleanup = (google::protobuf::internal::StringTypeHandler::Type *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                        &v6->impl_,
                                                                                        0x20uLL,
                                                                                        google::protobuf::internal::arena_destruct_object<std::string>);
      }
      else
      {
        AlignedAndAddCleanup = (google::protobuf::internal::StringTypeHandler::Type *)operator new(0x20uLL);
      }
      v9 = AlignedAndAddCleanup;
      AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
      AlignedAndAddCleanup->_M_string_length = 0LL;
      AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
      std::string::_M_assign(AlignedAndAddCleanup, value);
      if ( value && v7 )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value->_M_dataplus._M_p != &value->_anon_0 )
          operator delete(value->_M_dataplus._M_p);
        v4 = v9;
        operator delete(value, 0x20uLL);
      }
      else
      {
        v4 = v9;
      }
    }
    rep = this->rep_;
    total_size = this->total_size_;
    if ( !rep )
      goto LABEL_17;
  }
  current_size = this->current_size_;
  if ( current_size == total_size )
  {
LABEL_17:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, total_size + 1);
    rep = this->rep_;
    v15 = this->current_size_;
    ++rep->allocated_size;
    current_size = v15;
    goto LABEL_18;
  }
  allocated_size = rep->allocated_size;
  if ( (_DWORD)allocated_size == total_size )
  {
    v15 = current_size;
    v16 = (void **)rep->elements[current_size];
    if ( !this->arena_ && v16 )
    {
      if ( *v16 != v16 + 2 )
        operator delete(*v16);
      operator delete(v16, 0x20uLL);
      v15 = this->current_size_;
      rep = this->rep_;
      current_size = this->current_size_;
    }
  }
  else
  {
    v14 = allocated_size + 1;
    if ( current_size >= (int)allocated_size )
    {
      rep->allocated_size = v14;
      v15 = current_size;
    }
    else
    {
      v15 = current_size;
      rep->elements[allocated_size] = rep->elements[current_size];
      rep->allocated_size = v14;
    }
  }
LABEL_18:
  this->current_size_ = current_size + 1;
  rep->elements[v15] = v4;
};

// Line 1701: range 000000000C8AFD40-000000000C8AFDBD
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *value,
        google::protobuf::Arena *value_arena,
        google::protobuf::Arena *my_arena)
{
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *v4; // rbp
  bool v5; // bl
  google::protobuf::Message *v6; // r13

  v4 = value;
  v5 = value_arena == 0LL;
  if ( my_arena && !value_arena )
  {
    google::protobuf::Arena::Own<google::protobuf::Message>(my_arena, value);
  }
  else if ( my_arena != value_arena )
  {
    v6 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::NewFromPrototype(value, my_arena);
    google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Merge(value, v6);
    if ( value && v5 )
    {
      v4 = v6;
      (*((void (__fastcall **)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *))value->_vptr_MessageLite
       + 1))(value);
    }
    else
    {
      v4 = v6;
    }
  }
  google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
    this,
    v4);
};

// Line 1746: range 000000000C8AD3D0-000000000C8AD475
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>>(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *value)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  int total_size; // esi
  int v6; // eax
  __int64 allocated_size; // rdi
  int v8; // esi
  __int64 current_size; // rcx
  void *v10; // rdi

  rep = this->rep_;
  total_size = this->total_size_;
  if ( !rep || (v6 = this->current_size_, v6 == total_size) )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, total_size + 1);
    rep = this->rep_;
    current_size = this->current_size_;
    ++rep->allocated_size;
    v6 = current_size;
  }
  else
  {
    allocated_size = rep->allocated_size;
    if ( (_DWORD)allocated_size == total_size )
    {
      current_size = v6;
      v10 = rep->elements[v6];
      if ( !this->arena_ && v10 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
        current_size = this->current_size_;
        rep = this->rep_;
        v6 = this->current_size_;
      }
    }
    else
    {
      v8 = allocated_size + 1;
      if ( v6 >= (int)allocated_size )
      {
        rep->allocated_size = v8;
        current_size = v6;
      }
      else
      {
        current_size = v6;
        rep->elements[allocated_size] = rep->elements[v6];
        rep->allocated_size = v8;
      }
    }
  }
  this->current_size_ = v6 + 1;
  rep->elements[current_size] = value;
};

// Line 1892: range 000000000C731BD2-000000000C731BED
void __fastcall __noreturn google::protobuf::EnumOptions::EnumOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C732580-000000000C732593
void __fastcall __noreturn google::protobuf::EnumValue::EnumValue()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v1; // r13
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r14

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(v1);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731B74-000000000C731B8F
void __fastcall __noreturn google::protobuf::EnumValueOptions::EnumValueOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731B16-000000000C731B31
void __fastcall __noreturn google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C7325D2-000000000C7325E5
void __fastcall __noreturn google::protobuf::Field::Field()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v1; // r13
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r14

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Option>::TypeHandler>(v1);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731CC6-000000000C731CE1
void __fastcall __noreturn google::protobuf::FieldOptions::FieldOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731DE6-000000000C731DF9
void __fastcall __noreturn google::protobuf::FileDescriptorSet::FileDescriptorSet()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v1; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r13

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::FileDescriptorProto>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731D9C-000000000C731DB7
void __fastcall __noreturn google::protobuf::FileOptions::FileOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731EB4-000000000C731EC7
void __fastcall __noreturn google::protobuf::GeneratedCodeInfo::GeneratedCodeInfo()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v1; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r13

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::GeneratedCodeInfo_Annotation>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731BB2-000000000C731BCD
void __fastcall __noreturn google::protobuf::MessageOptions::MessageOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731C1C-000000000C731C37
void __fastcall __noreturn google::protobuf::MethodOptions::MethodOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731AD8-000000000C731AF3
void __fastcall __noreturn google::protobuf::OneofOptions::OneofOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731B54-000000000C731B6F
void __fastcall __noreturn google::protobuf::ServiceOptions::ServiceOptions()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::ExtensionSet *v1; // r13
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r14
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r15

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  google::protobuf::internal::ExtensionSet::~ExtensionSet(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731DFE-000000000C731E11
void __fastcall __noreturn google::protobuf::SourceCodeInfo::SourceCodeInfo()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v1; // r12
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r13

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::SourceCodeInfo_Location>::TypeHandler>(v2);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v1);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C731306-000000000C731347
void __fastcall __noreturn google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location()
{
  __int64 v0; // rbx
  struct _Unwind_Exception *v1; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r13
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v3; // r14
  int v4; // edx
  google::protobuf::RepeatedField<int> *v5; // rdi
  google::protobuf::RepeatedField<int> *v6; // rdi

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(v2);
  v5 = *(google::protobuf::RepeatedField<int> **)(v0 + 56);
  if ( v5 && !*(_QWORD *)&v5->current_size_ )
    google::protobuf::RepeatedField<int>::InternalDeallocate(
      v5,
      (google::protobuf::RepeatedField<int>::Rep *)*(unsigned int *)(v0 + 52),
      v4);
  v6 = *(google::protobuf::RepeatedField<int> **)(v0 + 32);
  if ( v6 )
  {
    if ( !*(_QWORD *)&v6->current_size_ )
      google::protobuf::RepeatedField<int>::InternalDeallocate(
        v6,
        (google::protobuf::RepeatedField<int>::Rep *)*(unsigned int *)(v0 + 28),
        v4);
  }
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v3);
  _Unwind_Resume(v1);
};

// Line 1892: range 000000000C731A7E-000000000C731A91
void __fastcall __noreturn google::protobuf::UninterpretedOption::UninterpretedOption()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v1; // r13
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena> *v2; // r14

  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::UninterpretedOption_NamePart>::TypeHandler>(v1);
  google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::~InternalMetadataWithArenaBase(v2);
  _Unwind_Resume(v0);
};

// Line 1892: range 000000000C8B63E0-000000000C8B6410
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::Message>>(
        void *object)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)object);
};

// Line 1892: range 000000000C8EF380-000000000C8EF474
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>>(
        void *object)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)object);
};

// Line 1892: range 000000000C8EF2F0-000000000C8EF378
// attributes: thunk
void __fastcall google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<std::string>>(
        void *object)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>((google::protobuf::internal::RepeatedPtrFieldBase *const)object);
};

// Line 1910: range 000000000C924150-000000000C92417D
bool __fastcall google::protobuf::UninterpretedOption::IsInitialized(
        const google::protobuf::UninterpretedOption *const this)
{
  int current_size; // eax

  current_size = this->name_.current_size_;
  while ( --current_size >= 0 )
  {
    if ( (*((_DWORD *)this->name_.rep_->elements[current_size] + 4) & 3) != 3 )
      return 0;
  }
  return 1;
};

// Line 1910: range 000000000C95DAF0-000000000C95DB55
const google::protobuf::Field *__fastcall google::protobuf::util::converter::ProtoStreamObjectSource::FindAndVerifyField(
        const google::protobuf::util::converter::ProtoStreamObjectSource *const this,
        const google::protobuf::Type *type,
        google::protobuf::uint32 tag)
{
  int current_size; // edi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rsi
  void **elements; // rax
  __int64 v6; // rsi
  const google::protobuf::Field *v7; // r8
  __int64 kind; // rcx
  google::protobuf::uint32 v9; // edx

  current_size = type->fields_.current_size_;
  if ( current_size <= 0 )
    return 0LL;
  rep = type->fields_.rep_;
  elements = rep->elements;
  v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
  while ( 1 )
  {
    v7 = (const google::protobuf::Field *)*elements;
    if ( tag >> 3 == *((_DWORD *)*elements + 20) )
      break;
    if ( ++elements == (void **)v6 )
      return 0LL;
  }
  kind = v7->kind_;
  v9 = tag & 7;
  if ( v9 != google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[kind]
    && (v7->cardinality_ != 3 || (unsigned int)(kind - 9) <= 3 || v9 != 2) )
  {
    return 0LL;
  }
  return v7;
};

// Line 2085: range 000000000C8BCCE0-000000000C8BCD02
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::SwapElements(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi

  v4 = *((_QWORD *)data + 2);
  v5 = v4 + 8LL * index1;
  v6 = v4 + 8LL * index2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 8) = v7;
};

// Line 2085: range 000000000C8BCDA0-000000000C8BCDC2
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::SwapElements(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi

  v4 = *((_QWORD *)data + 2);
  v5 = v4 + 8LL * index1;
  v6 = v4 + 8LL * index2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 8) = v7;
};
