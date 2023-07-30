// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/repeated_field.cc

// Line 46: range 000000000C89DC60-000000000C89DD5C
void **__fastcall google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        int extend_amount)
{
  __int64 current_size; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r13
  int total_size; // ebp
  int v5; // esi
  void **result; // rax
  int v7; // ebp
  google::protobuf::Arena *arena; // r12
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *Aligned; // rax
  __int64 v10; // r14
  __int64 allocated_size; // rdx

  current_size = this->current_size_;
  rep = this->rep_;
  total_size = this->total_size_;
  v5 = current_size + extend_amount;
  result = &rep->elements[current_size];
  if ( v5 > total_size )
  {
    v7 = 2 * total_size;
    arena = this->arena_;
    if ( v7 < v5 )
      v7 = v5;
    if ( v7 < 4 )
      v7 = 4;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          this->arena_,
          (const std::type_info *)&`typeinfo for'char,
          8LL * v7 + 8);
      Aligned = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                           &arena->impl_,
                                                                           8LL * v7 + 8);
      this->rep_ = Aligned;
    }
    else
    {
      Aligned = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)operator new(8LL * v7 + 8);
      this->rep_ = Aligned;
    }
    v10 = this->total_size_;
    this->total_size_ = v7;
    if ( rep && (allocated_size = rep->allocated_size, (int)allocated_size > 0) )
    {
      memcpy(Aligned->elements, rep->elements, 8 * allocated_size);
      this->rep_->allocated_size = rep->allocated_size;
      if ( arena )
        return &this->rep_->elements[this->current_size_];
    }
    else
    {
      Aligned->allocated_size = 0;
      if ( arena )
        return &this->rep_->elements[this->current_size_];
    }
    operator delete(rep, 8 * v10 + 8);
    return &this->rep_->elements[this->current_size_];
  }
  return result;
};

// Line 92: range 000000000C89DD70-000000000C89DD82
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        int new_size)
{
  int current_size; // eax

  current_size = this->current_size_;
  if ( current_size < new_size )
    google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(this, new_size - current_size);
};

// Line 98: range 000000000C89DD90-000000000C89DDDB
void __fastcall google::protobuf::internal::RepeatedPtrFieldBase::CloseGap(
        google::protobuf::internal::RepeatedPtrFieldBase *const this,
        int start,
        int num)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // r9
  int allocated_size; // r10d
  int v5; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v6; // rax

  rep = this->rep_;
  if ( rep )
  {
    allocated_size = rep->allocated_size;
    v5 = num + start;
    if ( v5 < rep->allocated_size )
    {
      v6 = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)rep + 8 * v5);
      do
      {
        v6->elements[-num] = v6->elements[0];
        v6 = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)v6 + 8);
      }
      while ( v6 != (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)(&rep->elements[v5]
                                                                            + (unsigned int)(~v5 + allocated_size)) );
    }
    this->current_size_ -= num;
    rep->allocated_size = allocated_size - num;
  }
};

// Line 110: range 000000000C7469A0-000000000C7469C1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal20RepeatedPtrFieldBase14InternalExtendEi()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
