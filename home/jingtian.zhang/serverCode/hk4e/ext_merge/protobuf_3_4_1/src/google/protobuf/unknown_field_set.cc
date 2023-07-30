// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/unknown_field_set.cc

// Line 55: range 000000000C8CF870-000000000C8CF8A1
void __cdecl google::protobuf::`anonymous namespace'::DeleteDefaultUnknownFieldSet()
{
  google::protobuf::UnknownFieldSet *v0; // rbp

  v0 = google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_;
  if ( google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_ )
  {
    if ( google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_->fields_ )
      google::protobuf::UnknownFieldSet::ClearFallback(google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_);
    operator delete(v0, 8uLL);
  }
};

// Line 59: range 000000000C8CF640-000000000C8CF665
void __cdecl google::protobuf::`anonymous namespace'::InitDefaultUnknownFieldSet()
{
  void (*v0)(void); // rsi
  google::protobuf::UnknownFieldSet *v1; // rax

  v1 = (google::protobuf::UnknownFieldSet *)operator new(8uLL);
  v1->fields_ = 0LL;
  google::protobuf::`anonymous namespace'::default_unknown_field_set_instance_ = v1;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::`anonymous namespace'::DeleteDefaultUnknownFieldSet,
    v0);
};

// Line 73: range 000000000C8CF7F0-000000000C8CF86A
void __fastcall google::protobuf::UnknownFieldSet::ClearFallback(google::protobuf::UnknownFieldSet *const this)
{
  std::vector<google::protobuf::UnknownField> *fields; // rax
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdi
  int v4; // ebp
  __int64 v5; // rbx
  google::protobuf::UnknownField *v6; // rdi
  std::vector<google::protobuf::UnknownField> *v7; // rbp

  fields = this->fields_;
  M_start = this->fields_->_M_impl._M_start;
  v4 = fields->_M_impl._M_finish - M_start;
  v5 = 16LL * v4 - 16;
  while ( 1 )
  {
    v6 = (std::_Vector_base<google::protobuf::UnknownField>::pointer)((char *)M_start + v5);
    --v4;
    v5 -= 16LL;
    google::protobuf::UnknownField::Delete(v6);
    if ( v4 <= 0 )
      break;
    M_start = this->fields_->_M_impl._M_start;
  }
  v7 = this->fields_;
  if ( this->fields_ )
  {
    if ( v7->_M_impl._M_start )
      operator delete(v7->_M_impl._M_start);
    operator delete(v7, 0x18uLL);
  }
  this->fields_ = 0LL;
};

// Line 84: range 000000000C8CFDE0-000000000C8CFEB0
void __fastcall google::protobuf::UnknownFieldSet::InternalMergeFrom(
        google::protobuf::UnknownFieldSet *const this,
        const google::protobuf::UnknownFieldSet *other)
{
  signed __int64 v2; // rbx
  std::vector<google::protobuf::UnknownField> *v4; // rax
  const google::protobuf::UnknownField *v5; // rcx
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_end_of_storage; // rdx
  std::vector<google::protobuf::UnknownField> *v9; // r8
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_finish; // rdi
  std::vector<google::protobuf::UnknownField> *fields; // rax

  if ( other->fields_ )
  {
    v2 = other->fields_->_M_impl._M_finish - other->fields_->_M_impl._M_start;
    if ( (int)v2 > 0 )
    {
      v4 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
      v6 = 16LL * (unsigned int)(v2 - 1);
      v7 = 0LL;
      M_end_of_storage = 0LL;
      v4->_M_impl._M_start = 0LL;
      v9 = v4;
      M_finish = 0LL;
      v4->_M_impl._M_finish = 0LL;
      v4->_M_impl._M_end_of_storage = 0LL;
      for ( this->fields_ = v4; ; M_end_of_storage = this->fields_->_M_impl._M_end_of_storage )
      {
        fields = other->fields_;
        if ( M_finish == M_end_of_storage )
        {
          std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
            v9,
            (std::vector<google::protobuf::UnknownField>::iterator)M_finish,
            &other->fields_->_M_impl._M_start[v7 / 0x10],
            v5);
          fields = other->fields_;
          M_finish = this->fields_->_M_impl._M_finish - 1;
        }
        else
        {
          *(__m128i *)M_finish = _mm_loadu_si128((const __m128i *)&other->fields_->_M_impl._M_start[v7 / 0x10]);
          v9->_M_impl._M_finish = M_finish + 1;
        }
        google::protobuf::UnknownField::DeepCopy(M_finish, &fields->_M_impl._M_start[v7 / 0x10]);
        if ( v7 == v6 )
          break;
        v9 = this->fields_;
        v7 += 16LL;
        M_finish = this->fields_->_M_impl._M_finish;
      }
    }
  }
};

// Line 95: range 000000000C8CFFD0-000000000C8D00DB
void __fastcall google::protobuf::UnknownFieldSet::MergeFrom(
        google::protobuf::UnknownFieldSet *const this,
        const google::protobuf::UnknownFieldSet *other)
{
  std::vector<google::protobuf::UnknownField> *fields; // rax
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdx
  __int64 v4; // rbx
  std::vector<google::protobuf::UnknownField> *v5; // r8
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_finish; // rdi
  const google::protobuf::UnknownField *M_end_of_storage; // rcx
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  const google::protobuf::UnknownField *v12; // rdx
  std::vector<google::protobuf::UnknownField> *v13; // rax

  fields = other->fields_;
  if ( other->fields_ )
  {
    M_start = fields->_M_impl._M_start;
    v4 = fields->_M_impl._M_finish - fields->_M_impl._M_start;
    if ( (int)v4 > 0 )
    {
      v5 = this->fields_;
      if ( this->fields_ )
      {
        M_finish = v5->_M_impl._M_finish;
        M_end_of_storage = v5->_M_impl._M_end_of_storage;
      }
      else
      {
        v13 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
        M_end_of_storage = 0LL;
        M_finish = 0LL;
        v13->_M_impl._M_start = 0LL;
        v5 = v13;
        v13->_M_impl._M_finish = 0LL;
        v13->_M_impl._M_end_of_storage = 0LL;
        this->fields_ = v13;
        fields = other->fields_;
        M_start = other->fields_->_M_impl._M_start;
      }
      v9 = (unsigned int)(v4 - 1);
      v10 = 0LL;
      v11 = 16 * v9;
      while ( 1 )
      {
        v12 = &M_start[v10 / 0x10];
        if ( M_finish == M_end_of_storage )
        {
          std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
            v5,
            (std::vector<google::protobuf::UnknownField>::iterator)M_finish,
            v12,
            M_end_of_storage);
          google::protobuf::UnknownField::DeepCopy(
            this->fields_->_M_impl._M_finish - 1,
            &other->fields_->_M_impl._M_start[v10 / 0x10]);
          if ( v10 == v11 )
            return;
        }
        else
        {
          *(__m128i *)M_finish = _mm_loadu_si128((const __m128i *)v12);
          v5->_M_impl._M_finish = M_finish + 1;
          google::protobuf::UnknownField::DeepCopy(M_finish, &fields->_M_impl._M_start[v10 / 0x10]);
          if ( v10 == v11 )
            return;
        }
        v5 = this->fields_;
        fields = other->fields_;
        v10 += 16LL;
        M_start = other->fields_->_M_impl._M_start;
        M_finish = this->fields_->_M_impl._M_finish;
        M_end_of_storage = this->fields_->_M_impl._M_end_of_storage;
      }
    }
  }
};

// Line 107: range 000000000C8CFB40-000000000C8CFC54
void __fastcall google::protobuf::UnknownFieldSet::MergeFromAndDestroy(
        google::protobuf::UnknownFieldSet *const this,
        google::protobuf::UnknownFieldSet *other)
{
  const google::protobuf::UnknownField *v2; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // r13
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdi
  __int64 v7; // rbx
  std::vector<google::protobuf::UnknownField> *v8; // r8
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_finish; // rsi
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_end_of_storage; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  google::protobuf::UnknownField *v14; // rsi
  google::protobuf::UnknownField *v15; // rdx
  google::protobuf::uint32 type; // eax
  const google::protobuf::UnknownField *v17; // rdx
  std::vector<google::protobuf::UnknownField> *v18; // rax

  fields = other->fields_;
  if ( other->fields_ )
  {
    M_start = fields->_M_impl._M_start;
    v7 = fields->_M_impl._M_finish - fields->_M_impl._M_start;
    if ( (int)v7 > 0 )
    {
      v8 = this->fields_;
      if ( this->fields_ )
      {
        M_finish = v8->_M_impl._M_finish;
        M_end_of_storage = v8->_M_impl._M_end_of_storage;
      }
      else
      {
        v18 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
        M_finish = 0LL;
        this->fields_ = v18;
        fields = other->fields_;
        v8 = v18;
        v18->_M_impl._M_start = 0LL;
        v18->_M_impl._M_finish = 0LL;
        v18->_M_impl._M_end_of_storage = 0LL;
        M_end_of_storage = 0LL;
        M_start = fields->_M_impl._M_start;
      }
      v11 = (unsigned int)(v7 - 1);
      v12 = 0LL;
      v13 = 16 * v11;
      while ( 1 )
      {
        v17 = &M_start[v12 / 0x10];
        if ( M_finish == M_end_of_storage )
        {
          std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
            v8,
            (std::vector<google::protobuf::UnknownField>::iterator)M_finish,
            v17,
            v2);
          fields = other->fields_;
        }
        else
        {
          v14 = M_finish + 1;
          v14[-1] = (google::protobuf::UnknownField)_mm_loadu_si128((const __m128i *)v17);
          v8->_M_impl._M_finish = v14;
        }
        M_start = fields->_M_impl._M_start;
        v15 = &fields->_M_impl._M_start[v12 / 0x10];
        type = v15->type_;
        if ( type == 3 || type == 4 )
          v15->data_.varint_ = 0LL;
        if ( v13 == v12 )
          break;
        v8 = this->fields_;
        v12 += 16LL;
        M_finish = this->fields_->_M_impl._M_finish;
        M_end_of_storage = this->fields_->_M_impl._M_end_of_storage;
      }
    }
    if ( M_start )
      operator delete(M_start);
    operator delete(fields, 0x18uLL);
  }
  other->fields_ = 0LL;
};

// Line 122: range 000000000C8D00E0-000000000C8D010F
void __fastcall google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
        const google::protobuf::UnknownFieldSet *other,
        google::protobuf::internal::InternalMetadataWithArena *metadata)
{
  google::protobuf::UnknownFieldSet *v2; // rax

  if ( ((__int64)metadata->ptr_ & 1) != 0 )
  {
    google::protobuf::UnknownFieldSet::MergeFrom(
      (google::protobuf::UnknownFieldSet *const)((unsigned __int64)metadata->ptr_ & 0xFFFFFFFFFFFFFFFELL),
      other);
  }
  else
  {
    v2 = google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet,google::protobuf::internal::InternalMetadataWithArena>::mutable_unknown_fields_slow(metadata);
    google::protobuf::UnknownFieldSet::MergeFrom(v2, other);
  }
};

// Line 126: range 000000000C8CF6F0-000000000C8CF77A
size_t __fastcall google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(
        const google::protobuf::UnknownFieldSet *const this)
{
  std::vector<google::protobuf::UnknownField> *fields; // rcx
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdx
  signed __int64 v3; // rax
  size_t v4; // r12
  unsigned __int64 v5; // rbx
  size_t v6; // rax
  google::protobuf::UnknownField *v7; // rdx
  google::protobuf::uint32 type; // eax
  size_t v9; // rax

  fields = this->fields_;
  if ( !this->fields_ )
    return 0LL;
  M_start = fields->_M_impl._M_start;
  v3 = (char *)fields->_M_impl._M_finish - (char *)fields->_M_impl._M_start;
  v4 = v3 + 24;
  if ( v3 )
  {
    v5 = 0LL;
    do
    {
      v7 = &M_start[v5];
      type = v7->type_;
      if ( type == 3 )
      {
        v9 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(v7->data_.length_delimited_.string_value_);
        fields = this->fields_;
        v4 += v9 + 32;
      }
      else if ( type == 4 )
      {
        v6 = google::protobuf::UnknownFieldSet::SpaceUsedLong(v7->data_.group_);
        fields = this->fields_;
        v4 += v6;
      }
      M_start = fields->_M_impl._M_start;
      ++v5;
    }
    while ( fields->_M_impl._M_finish - fields->_M_impl._M_start > v5 );
  }
  return v4;
};

// Line 149: range 000000000C8CF6D0-000000000C8CF6E3
size_t __fastcall google::protobuf::UnknownFieldSet::SpaceUsedLong(const google::protobuf::UnknownFieldSet *const this)
{
  return (int)google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(this) + 8LL;
};

// Line 153: range 000000000C8D0240-000000000C8D02C2
void __fastcall google::protobuf::UnknownFieldSet::AddVarint(
        google::protobuf::UnknownFieldSet *const this,
        int number,
        google::protobuf::uint64 value)
{
  const google::protobuf::UnknownField *v3; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // rbp
  google::protobuf::UnknownField *M_finish; // rdx
  google::protobuf::UnknownField *v6; // rdx
  std::vector<google::protobuf::UnknownField> *v8; // rax
  std::vector<google::protobuf::UnknownField> *v9; // rdi
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF

  fields = this->fields_;
  v10.m128i_i64[0] = (unsigned int)number;
  v10.m128i_i64[1] = value;
  if ( fields )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      v6 = M_finish + 1;
      v6[-1] = (google::protobuf::UnknownField)_mm_load_si128(&v10);
      fields->_M_impl._M_finish = v6;
      return;
    }
    v9 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v8 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v8->_M_impl._M_start = 0LL;
    v9 = v8;
    v8->_M_impl._M_finish = 0LL;
    v8->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v8;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v9,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    (const google::protobuf::UnknownField *)&v10,
    v3);
};

// Line 162: range 000000000C8D0120-000000000C8D01A2
void __fastcall google::protobuf::UnknownFieldSet::AddFixed32(
        google::protobuf::UnknownFieldSet *const this,
        int number,
        google::protobuf::uint32 value)
{
  const google::protobuf::UnknownField *v3; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // rbp
  google::protobuf::UnknownField *M_finish; // rdx
  google::protobuf::UnknownField *v6; // rdx
  std::vector<google::protobuf::UnknownField> *v8; // rax
  std::vector<google::protobuf::UnknownField> *v9; // rdi
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF

  fields = this->fields_;
  v10.m128i_i32[0] = number;
  v10.m128i_i32[1] = 1;
  v10.m128i_i32[2] = value;
  if ( fields )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      v6 = M_finish + 1;
      v6[-1] = (google::protobuf::UnknownField)_mm_load_si128(&v10);
      fields->_M_impl._M_finish = v6;
      return;
    }
    v9 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v8 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v8->_M_impl._M_start = 0LL;
    v9 = v8;
    v8->_M_impl._M_finish = 0LL;
    v8->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v8;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v9,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    (const google::protobuf::UnknownField *)&v10,
    v3);
};

// Line 171: range 000000000C8D01B0-000000000C8D0232
void __fastcall google::protobuf::UnknownFieldSet::AddFixed64(
        google::protobuf::UnknownFieldSet *const this,
        int number,
        google::protobuf::uint64 value)
{
  const google::protobuf::UnknownField *v3; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // rbp
  google::protobuf::UnknownField *M_finish; // rdx
  google::protobuf::UnknownField *v6; // rdx
  std::vector<google::protobuf::UnknownField> *v8; // rax
  std::vector<google::protobuf::UnknownField> *v9; // rdi
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF

  fields = this->fields_;
  v10.m128i_i32[0] = number;
  v10.m128i_i32[1] = 2;
  v10.m128i_i64[1] = value;
  if ( fields )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      v6 = M_finish + 1;
      v6[-1] = (google::protobuf::UnknownField)_mm_load_si128(&v10);
      fields->_M_impl._M_finish = v6;
      return;
    }
    v9 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v8 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v8->_M_impl._M_start = 0LL;
    v9 = v8;
    v8->_M_impl._M_finish = 0LL;
    v8->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v8;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v9,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    (const google::protobuf::UnknownField *)&v10,
    v3);
};

// Line 180: range 000000000C8CFA90-000000000C8CFB3C
std::string *__fastcall google::protobuf::UnknownFieldSet::AddLengthDelimited[abi:cxx11](
        google::protobuf::UnknownFieldSet *const this,
        int number)
{
  google::protobuf::uint64 v3; // rax
  const google::protobuf::UnknownField *v4; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // rbp
  google::protobuf::UnknownField *M_finish; // rdx
  google::protobuf::UnknownField *v7; // rdx
  std::string *result; // rax
  std::vector<google::protobuf::UnknownField> *v9; // rax
  std::vector<google::protobuf::UnknownField> *v10; // rdi
  google::protobuf::UnknownField field; // [rsp+0h] [rbp-28h] BYREF

  field.number_ = number;
  field.type_ = 3;
  v3 = operator new(0x20uLL);
  fields = this->fields_;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = v3 + 16;
  *(_BYTE *)(v3 + 16) = 0;
  field.data_.varint_ = v3;
  if ( fields )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      v7 = M_finish + 1;
      v7[-1] = (google::protobuf::UnknownField)_mm_load_si128((const __m128i *)&field);
      result = field.data_.length_delimited_.string_value_;
      fields->_M_impl._M_finish = v7;
      return result;
    }
    v10 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v9 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v9->_M_impl._M_start = 0LL;
    v10 = v9;
    v9->_M_impl._M_finish = 0LL;
    v9->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v9;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v10,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    &field,
    v4);
  return field.data_.length_delimited_.string_value_;
};

// Line 191: range 000000000C8D0370-000000000C8D0414
google::protobuf::UnknownFieldSet *__fastcall google::protobuf::UnknownFieldSet::AddGroup(
        google::protobuf::UnknownFieldSet *const this,
        int number)
{
  _QWORD *v3; // rax
  const google::protobuf::UnknownField *v4; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // rbp
  google::protobuf::UnknownField *M_finish; // rdx
  google::protobuf::UnknownField *v7; // rdx
  google::protobuf::UnknownFieldSet *result; // rax
  std::vector<google::protobuf::UnknownField> *v9; // rax
  std::vector<google::protobuf::UnknownField> *v10; // rdi
  google::protobuf::UnknownField field; // [rsp+0h] [rbp-28h] BYREF

  field.number_ = number;
  field.type_ = 4;
  v3 = (_QWORD *)operator new(8uLL);
  fields = this->fields_;
  *v3 = 0LL;
  field.data_.varint_ = (google::protobuf::uint64)v3;
  if ( fields )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      v7 = M_finish + 1;
      v7[-1] = (google::protobuf::UnknownField)_mm_load_si128((const __m128i *)&field);
      result = field.data_.group_;
      fields->_M_impl._M_finish = v7;
      return result;
    }
    v10 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v9 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v9->_M_impl._M_start = 0LL;
    v10 = v9;
    v9->_M_impl._M_finish = 0LL;
    v9->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v9;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v10,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    &field,
    v4);
  return field.data_.group_;
};

// Line 201: range 000000000C8D02D0-000000000C8D0362
void __fastcall google::protobuf::UnknownFieldSet::AddField(
        google::protobuf::UnknownFieldSet *const this,
        const google::protobuf::UnknownField *field)
{
  const google::protobuf::UnknownField *v2; // rcx
  std::vector<google::protobuf::UnknownField> *fields; // r12
  google::protobuf::UnknownField *M_finish; // rdi
  std::vector<google::protobuf::UnknownField> *v6; // rax
  std::vector<google::protobuf::UnknownField> *v7; // r8

  fields = this->fields_;
  if ( this->fields_ )
  {
    M_finish = fields->_M_impl._M_finish;
    if ( fields->_M_impl._M_end_of_storage != M_finish )
    {
      *(__m128i *)M_finish = _mm_loadu_si128((const __m128i *)field);
      fields->_M_impl._M_finish = M_finish + 1;
      google::protobuf::UnknownField::DeepCopy(M_finish, field);
      return;
    }
    v7 = fields;
    fields = (std::vector<google::protobuf::UnknownField> *)fields->_M_impl._M_finish;
  }
  else
  {
    v6 = (std::vector<google::protobuf::UnknownField> *)operator new(0x18uLL);
    v6->_M_impl._M_start = 0LL;
    v7 = v6;
    v6->_M_impl._M_finish = 0LL;
    v6->_M_impl._M_end_of_storage = 0LL;
    this->fields_ = v6;
  }
  std::vector<google::protobuf::UnknownField>::_M_realloc_insert<google::protobuf::UnknownField const&>(
    v7,
    (std::vector<google::protobuf::UnknownField>::iterator)fields,
    field,
    v2);
  google::protobuf::UnknownField::DeepCopy(this->fields_->_M_impl._M_finish - 1, field);
};

// Line 207: range 000000000C8CF8B0-000000000C8CF997
void __fastcall google::protobuf::UnknownFieldSet::DeleteSubrange(
        google::protobuf::UnknownFieldSet *const this,
        int start,
        int num)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  google::protobuf::UnknownField *v7; // rdi
  std::vector<google::protobuf::UnknownField> *fields; // r12
  unsigned __int64 v9; // rax
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_finish; // rdx
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdi
  std::_Vector_base<google::protobuf::UnknownField>::pointer v12; // rsi
  const __m128i *v13; // rax
  __m128i v14; // xmm0

  if ( num > 0 )
  {
    v5 = 16LL * start;
    v6 = 16 * (start + (unsigned __int64)(unsigned int)(num - 1) + 1);
    do
    {
      v7 = &this->fields_->_M_impl._M_start[v5 / 0x10];
      v5 += 16LL;
      google::protobuf::UnknownField::Delete(v7);
    }
    while ( v5 != v6 );
  }
  fields = this->fields_;
  v9 = num + start;
  M_finish = this->fields_->_M_impl._M_finish;
  M_start = this->fields_->_M_impl._M_start;
  if ( M_finish - M_start > v9 )
  {
    v12 = this->fields_->_M_impl._M_finish;
    v13 = (const __m128i *)&M_start[v9];
    do
    {
      v14 = _mm_loadu_si128(v13++);
      v13[-num - 1] = v14;
    }
    while ( v12 != (std::_Vector_base<google::protobuf::UnknownField>::pointer)v13 );
  }
  if ( num > 0 )
  {
    M_finish += ~(unsigned __int64)(unsigned int)(num - 1);
    fields->_M_impl._M_finish = M_finish;
  }
  if ( M_start == M_finish )
  {
    if ( M_start )
      operator delete(M_start);
    operator delete(fields, 0x18uLL);
    this->fields_ = 0LL;
  }
};

// Line 228: range 000000000C8D0420-000000000C8D0528
void __fastcall google::protobuf::UnknownFieldSet::DeleteByNumber(
        google::protobuf::UnknownFieldSet *const this,
        int number)
{
  std::vector<google::protobuf::UnknownField> *fields; // r8
  int v3; // r12d
  unsigned __int64 v5; // rbx
  std::_Vector_base<google::protobuf::UnknownField>::pointer M_start; // rdx
  unsigned __int64 v7; // rax
  google::protobuf::UnknownField *v8; // rdi
  google::protobuf::UnknownField *v9; // rdx
  std::vector<google::protobuf::UnknownField> *v10; // r12

  fields = this->fields_;
  if ( this->fields_ )
  {
    v3 = 0;
    v5 = 0LL;
    M_start = fields->_M_impl._M_start;
    if ( fields->_M_impl._M_finish == fields->_M_impl._M_start )
    {
LABEL_19:
      v10 = fields;
      goto LABEL_20;
    }
    do
    {
      v8 = &M_start[v5];
      if ( number == v8->number_ )
      {
        google::protobuf::UnknownField::Delete(v8);
        fields = this->fields_;
      }
      else
      {
        if ( v3 != (_DWORD)v5 )
          M_start[v3] = (google::protobuf::UnknownField)_mm_loadu_si128((const __m128i *)v8);
        ++v3;
      }
      M_start = fields->_M_impl._M_start;
      ++v5;
      v7 = fields->_M_impl._M_finish - fields->_M_impl._M_start;
    }
    while ( v7 > v5 );
    if ( v3 > v7 )
    {
      std::vector<google::protobuf::UnknownField>::_M_default_append(fields, v3 - v7);
      if ( !v3 )
      {
        v10 = this->fields_;
        if ( !this->fields_ )
        {
LABEL_23:
          this->fields_ = 0LL;
          return;
        }
LABEL_20:
        if ( v10->_M_impl._M_start )
          operator delete(v10->_M_impl._M_start);
        operator delete(v10, 0x18uLL);
        goto LABEL_23;
      }
    }
    else
    {
      if ( v3 < v7 )
      {
        v9 = &M_start[v3];
        if ( fields->_M_impl._M_finish != v9 )
          fields->_M_impl._M_finish = v9;
      }
      if ( !v3 )
        goto LABEL_19;
    }
  }
};

// Line 249: range 000000000C8CFC60-000000000C8CFCCA
_BOOL8 __fastcall google::protobuf::UnknownFieldSet::MergeFromCodedStream(
        google::protobuf::UnknownFieldSet *this,
        google::protobuf::io::CodedInputStream *input)
{
  _BOOL4 v2; // eax
  _BOOL4 legitimate_message_end; // r12d
  google::protobuf::UnknownFieldSet unknown_fields; // [rsp+8h] [rbp-20h] BYREF

  unknown_fields.fields_ = 0LL;
  LOBYTE(v2) = google::protobuf::internal::WireFormat::SkipMessage(input, &unknown_fields);
  legitimate_message_end = v2;
  if ( v2 )
  {
    legitimate_message_end = input->legitimate_message_end_;
    if ( legitimate_message_end )
      google::protobuf::UnknownFieldSet::MergeFromAndDestroy(this, &unknown_fields);
  }
  if ( unknown_fields.fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(&unknown_fields);
  return legitimate_message_end;
};

// Line 260: range 000000000C8CFCD0-000000000C8CFCF5
bool __fastcall google::protobuf::UnknownFieldSet::ParseFromCodedStream(
        google::protobuf::UnknownFieldSet *const this,
        google::protobuf::io::CodedInputStream *input)
{
  if ( this->fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(this);
  return google::protobuf::UnknownFieldSet::MergeFromCodedStream(this, input);
};

// Line 265: range 000000000C8CFD00-000000000C8CFDA3
_BOOL8 __fastcall google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(
        google::protobuf::UnknownFieldSet *this,
        google::protobuf::io::ZeroCopyInputStream *a2)
{
  _BOOL4 v2; // eax
  _BOOL4 legitimate_message_end; // r12d
  google::protobuf::io::CodedInputStream v5; // [rsp+0h] [rbp-58h] BYREF

  *(_WORD *)&v5.legitimate_message_end_ = 0;
  v5.input_ = a2;
  v5.buffer_ = 0LL;
  v5.buffer_end_ = 0LL;
  *(_QWORD *)&v5.total_bytes_read_ = 0LL;
  v5.last_tag_ = 0;
  *(_QWORD *)&v5.current_limit_ = 0x7FFFFFFFLL;
  v5.total_bytes_limit_ = 0x7FFFFFFF;
  v5.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v5.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
  v5.disable_strict_correctness_enforcement_ = 1;
  v5.extension_pool_ = 0LL;
  v5.extension_factory_ = 0LL;
  google::protobuf::io::CodedInputStream::Refresh(&v5);
  LOBYTE(v2) = google::protobuf::UnknownFieldSet::ParseFromCodedStream(this, &v5);
  legitimate_message_end = v2;
  if ( v2 )
    legitimate_message_end = v5.legitimate_message_end_;
  google::protobuf::io::CodedInputStream::~CodedInputStream(&v5);
  return legitimate_message_end;
};

// Line 266: range 000000000C72C072-000000000C72C07D
void __fastcall __noreturn google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream()
{
  struct _Unwind_Exception *v0; // r12
  void *retaddr; // [rsp+0h] [rbp+0h] BYREF

  google::protobuf::io::CodedInputStream::~CodedInputStream((google::protobuf::io::CodedInputStream *const)&retaddr);
  _Unwind_Resume(v0);
};

// Line 271: range 000000000C8CFDB0-000000000C8CFDD5
bool __fastcall google::protobuf::UnknownFieldSet::ParseFromArray(
        google::protobuf::UnknownFieldSet *const this,
        const void *data,
        int size)
{
  google::protobuf::io::ArrayInputStream input; // [rsp+0h] [rbp-28h] BYREF

  google::protobuf::io::ArrayInputStream::ArrayInputStream(&input, data, size, -1);
  return google::protobuf::UnknownFieldSet::ParseFromZeroCopyStream(this, &input);
};

// Line 276: range 000000000C8CF780-000000000C8CF7E4
void __fastcall google::protobuf::UnknownField::Delete(google::protobuf::UnknownField *const this)
{
  google::protobuf::uint32 type; // eax
  _QWORD *v2; // rbp
  void **varint; // rbp

  type = this->type_;
  if ( type == 3 )
  {
    varint = (void **)this->data_.varint_;
    if ( varint )
    {
      if ( *varint != varint + 2 )
        operator delete(*varint);
      operator delete(varint, 0x20uLL);
    }
  }
  else if ( type == 4 )
  {
    v2 = (_QWORD *)this->data_.varint_;
    if ( v2 )
    {
      if ( *v2 )
        google::protobuf::UnknownFieldSet::ClearFallback(this->data_.group_);
      operator delete(v2, 8uLL);
    }
  }
};

// Line 292: range 000000000C8CF9A0-000000000C8CF9B8
void __fastcall google::protobuf::UnknownField::Reset(google::protobuf::UnknownField *const this)
{
  google::protobuf::uint32 type; // eax

  type = this->type_;
  if ( type == 3 || type == 4 )
    this->data_.varint_ = 0LL;
};

// Line 305: range 000000000C8CFEC0-000000000C8CFFC2
void __fastcall google::protobuf::UnknownField::DeepCopy(
        google::protobuf::UnknownField *this,
        const google::protobuf::UnknownField *a2)
{
  google::protobuf::uint32 type; // eax
  google::protobuf::UnknownFieldSet *v4; // rax
  const google::protobuf::UnknownFieldSet *group; // rsi
  google::protobuf::uint64 v6; // rbp
  __int64 *v7; // rbp
  google::protobuf::uint64 varint; // rax
  _BYTE *v9; // rdi
  _BYTE *v10; // r13
  size_t v11; // r12
  __int64 v12; // rax
  size_t v13[6]; // [rsp+8h] [rbp-30h] BYREF

  type = this->type_;
  if ( type == 3 )
  {
    v7 = (__int64 *)operator new(0x20uLL);
    varint = this->data_.varint_;
    v9 = v7 + 2;
    *v7 = (__int64)(v7 + 2);
    v10 = *(_BYTE **)varint;
    v11 = *(_QWORD *)(varint + 8);
    if ( v11 + *(_QWORD *)varint && !v10 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v13[0] = *(_QWORD *)(varint + 8);
    if ( v11 > 0xF )
    {
      v12 = std::string::_M_create(v7, v13, 0LL);
      *v7 = v12;
      v9 = (_BYTE *)v12;
      v7[2] = v13[0];
    }
    else
    {
      if ( v11 == 1 )
      {
        *((_BYTE *)v7 + 16) = *v10;
LABEL_10:
        v7[1] = v11;
        v9[v11] = 0;
        this->data_.varint_ = (google::protobuf::uint64)v7;
        return;
      }
      if ( !v11 )
        goto LABEL_10;
    }
    memcpy(v9, v10, v11);
    v11 = v13[0];
    v9 = (_BYTE *)*v7;
    goto LABEL_10;
  }
  if ( type == 4 )
  {
    v4 = (google::protobuf::UnknownFieldSet *)operator new(8uLL);
    group = this->data_.group_;
    v4->fields_ = 0LL;
    v6 = (google::protobuf::uint64)v4;
    google::protobuf::UnknownFieldSet::InternalMergeFrom(v4, group);
    this->data_.varint_ = v6;
  }
};

// Line 309: range 000000000C72C082-000000000C72C092
void __fastcall __noreturn google::protobuf::UnknownField::DeepCopy()
{
  void *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  operator delete(v0, 0x20uLL);
  _Unwind_Resume(v1);
};

// Line 324: range 000000000C8CF9C0-000000000C8CFA48
void __fastcall google::protobuf::UnknownField::SerializeLengthDelimitedNoTag(
        const google::protobuf::UnknownField *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::uint64 varint; // rbx
  bool v4; // cc
  __int64 v5; // rsi
  google::protobuf::uint8 *buffer; // rcx
  unsigned int v7; // edx
  google::protobuf::uint8 *v8; // rax
  char v9; // si
  int v10; // eax
  __int64 v11; // rdx
  const void *v12; // rsi

  varint = this->data_.varint_;
  v4 = output->buffer_size_ <= 4;
  v5 = *(_QWORD *)(varint + 8);
  if ( v4 )
  {
    google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v5);
  }
  else
  {
    buffer = output->buffer_;
    v7 = *(_QWORD *)(varint + 8);
    v8 = buffer;
    if ( (unsigned int)v5 > 0x7F )
    {
      do
      {
        v9 = v7;
        v7 >>= 7;
        *v8++ = v9 | 0x80;
      }
      while ( v7 > 0x7F );
    }
    *v8 = v7;
    v10 = (_DWORD)v8 + 1 - (_DWORD)buffer;
    output->buffer_size_ -= v10;
    output->buffer_ += v10;
  }
  v11 = *(_QWORD *)(varint + 8);
  v12 = *(const void **)varint;
  if ( output->aliasing_enabled_ )
    google::protobuf::io::CodedOutputStream::WriteAliasedRaw(output, v12, v11);
  else
    google::protobuf::io::CodedOutputStream::WriteRaw(output, v12, v11);
};

// Line 333: range 000000000C8CFA50-000000000C8CFA80
google::protobuf::uint8 *__fastcall google::protobuf::UnknownField::SerializeLengthDelimitedNoTagToArray(
        const google::protobuf::UnknownField *const this,
        google::protobuf::uint8 *target)
{
  google::protobuf::uint64 varint; // rcx
  unsigned int i; // eax
  char v4; // dl

  varint = this->data_.varint_;
  for ( i = *(_QWORD *)(varint + 8); i > 0x7F; *(target - 1) = v4 | 0x80 )
  {
    v4 = i;
    i >>= 7;
    ++target;
  }
  *target = i;
  return google::protobuf::io::CodedOutputStream::WriteRawToArray(
           *(const void **)varint,
           *(_DWORD *)(varint + 8),
           target + 1);
};

// Line 340: range 000000000C746B20-000000000C746B41
void __cdecl GLOBAL__sub_I__ZN6google8protobuf15UnknownFieldSet16default_instanceEv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
