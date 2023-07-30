// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/map_field.cc

// Line 40: range 000000000C8B04C0-000000000C8B04D2
void __fastcall google::protobuf::internal::MapFieldBase::~MapFieldBase(
        google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::internal::MapFieldBase::~MapFieldBase(this);
  operator delete(this, 0x28uLL);
};

// Line 40: range 000000000C8B0460-000000000C8B04AF
void __fastcall google::protobuf::internal::MapFieldBase::~MapFieldBase(
        google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rbp

  repeated_field = this->repeated_field_;
  this->_vptr_MapFieldBase = (int (**)(...))&unk_1A171D48;
  if ( repeated_field && !this->arena_ )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(repeated_field);
    operator delete(repeated_field, 0x18uLL);
    google::protobuf::internal::Mutex::~Mutex(&this->mutex_);
  }
  else
  {
    google::protobuf::internal::Mutex::~Mutex(&this->mutex_);
  }
};

// Line 44: range 000000000C8B0330-000000000C8B0352
const google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::MapFieldBase::GetRepeatedField(
        const google::protobuf::internal::MapFieldBase *const this)
{
  if ( !this->state_ )
    google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(this);
  return this->repeated_field_;
};

// Line 49: range 000000000C8B0360-000000000C8B0391
google::protobuf::internal::RepeatedPtrFieldBase *__fastcall google::protobuf::internal::MapFieldBase::MutableRepeatedField(
        google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::internal::RepeatedPtrFieldBase *result; // rax

  if ( !this->state_ )
    google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(this);
  result = this->repeated_field_;
  this->state_ = 1;
  return result;
};

// Line 55: range 000000000C8B03A0-000000000C8B03D1
size_t __fastcall google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong(
        const google::protobuf::internal::MapFieldBase *const this)
{
  size_t v1; // r12

  google::protobuf::internal::Mutex::Lock(&this->mutex_);
  v1 = (*((__int64 (__fastcall **)(const google::protobuf::internal::MapFieldBase *const))this->_vptr_MapFieldBase + 9))(this);
  google::protobuf::internal::Mutex::Unlock(&this->mutex_);
  return v1;
};

// Line 62: range 000000000C8B00E0-000000000C8B013A
size_t __fastcall google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfNoLock(
        const google::protobuf::internal::MapFieldBase *const this)
{
  size_t v1; // r12
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int v4; // ebx
  __int64 v5; // rdx

  v1 = 0LL;
  repeated_field = this->repeated_field_;
  if ( repeated_field )
  {
    rep = repeated_field->rep_;
    v1 = 8LL * repeated_field->total_size_;
    if ( rep )
    {
      if ( rep->allocated_size > 0 )
      {
        v4 = 0;
        do
        {
          v5 = v4++;
          v1 += (*(__int64 (__fastcall **)(void *))(*(_QWORD *)rep->elements[v5] + 168LL))(rep->elements[v5]);
          rep = repeated_field->rep_;
        }
        while ( rep->allocated_size > v4 );
      }
      v1 += 8LL;
    }
  }
  return v1;
};

// Line 77: range 000000000C8B03F0-000000000C8B03F7
void __fastcall google::protobuf::internal::MapFieldBase::SetMapDirty(
        google::protobuf::internal::MapFieldBase *const this)
{
  this->state_ = 0;
};

// Line 79: range 000000000C8B0400-000000000C8B0407
void __fastcall google::protobuf::internal::MapFieldBase::SetRepeatedDirty(
        google::protobuf::internal::MapFieldBase *const this)
{
  this->state_ = 1;
};

// Line 81: range 000000000C8B0410-000000000C8B0414
void *__fastcall google::protobuf::internal::MapFieldBase::MutableRepeatedPtrField(
        const google::protobuf::internal::MapFieldBase *const this)
{
  return this->repeated_field_;
};

// Line 83: range 000000000C8AFF50-000000000C8AFF85
void __fastcall google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(
        const google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::internal::Mutex::Lock(&this->mutex_);
  if ( !this->state_ )
  {
    (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *const))this->_vptr_MapFieldBase + 10))(this);
    this->state_ = 2;
  }
  google::protobuf::internal::Mutex::Unlock(&this->mutex_);
};

// Line 102: range 000000000C8B0040-000000000C8B00DA
void __fastcall google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMapNoLock(
        const google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::Arena *arena; // rbp
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *AlignedAndAddCleanup; // rax

  if ( !this->repeated_field_ )
  {
    arena = this->arena_;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          this->arena_,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::Message>,
          0x18uLL);
      AlignedAndAddCleanup = (google::protobuf::RepeatedPtrField<google::protobuf::Message> *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                                &arena->impl_,
                                                                                                0x18uLL,
                                                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::Message>>);
      AlignedAndAddCleanup->arena_ = arena;
      *(_QWORD *)&AlignedAndAddCleanup->current_size_ = 0LL;
      AlignedAndAddCleanup->rep_ = 0LL;
    }
    else
    {
      AlignedAndAddCleanup = (google::protobuf::RepeatedPtrField<google::protobuf::Message> *)operator new(0x18uLL);
      AlignedAndAddCleanup->arena_ = 0LL;
      *(_QWORD *)&AlignedAndAddCleanup->current_size_ = 0LL;
      AlignedAndAddCleanup->rep_ = 0LL;
    }
    this->repeated_field_ = AlignedAndAddCleanup;
  }
};

// Line 107: range 000000000C8AFF90-000000000C8AFFC6
void __fastcall google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(
        const google::protobuf::internal::MapFieldBase *const this)
{
  google::protobuf::internal::Mutex::Lock(&this->mutex_);
  if ( this->state_ == 1 )
  {
    (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *const))this->_vptr_MapFieldBase + 11))(this);
    this->state_ = 2;
  }
  google::protobuf::internal::Mutex::Unlock(&this->mutex_);
};

// Line 126: range 000000000C8B04E0-000000000C8B05AE
void **__fastcall google::protobuf::internal::DynamicMapField::DynamicMapField(
        google::protobuf::internal::DynamicMapField *this,
        const google::protobuf::Message *a2)
{
  google::protobuf::internal::Mutex *p_mutex; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v4; // r12
  void **result; // rax

  p_mutex = &this->mutex_;
  p_mutex[-3].mInternal = (google::protobuf::internal::Mutex::Internal *)&unk_1A171D48;
  p_mutex[-2].mInternal = 0LL;
  p_mutex[-1].mInternal = 0LL;
  google::protobuf::internal::Mutex::Mutex(p_mutex);
  this->state_ = 0;
  this->_vptr_MapFieldBase = (int (**)(...))off_1A171DD8;
  this->map_.arena_ = 0LL;
  this->map_.default_enum_value_ = 0;
  v4 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)operator new(0x30uLL);
  v4->num_elements_ = 0LL;
  v4->table_ = 0LL;
  v4->alloc_.arena_ = 0LL;
  v4->seed_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)v4 + __rdtsc();
  result = (void **)operator new(0x40uLL);
  v4->table_ = result;
  v4->index_of_first_non_null_ = 8LL;
  v4->num_buckets_ = 8LL;
  *(_OWORD *)result = 0LL;
  *((_OWORD *)result + 1) = 0LL;
  *((_OWORD *)result + 2) = 0LL;
  *((_OWORD *)result + 3) = 0LL;
  this->map_.elements_ = v4;
  this->default_entry_ = a2;
  return result;
};

// Line 130: range 000000000C8B05C0-000000000C8B06AE
void **__fastcall google::protobuf::internal::DynamicMapField::DynamicMapField(
        google::protobuf::internal::DynamicMapField *this,
        const google::protobuf::Message *a2,
        google::protobuf::Arena *a3)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v4; // r12
  void **result; // rax

  this->_vptr_MapFieldBase = (int (**)(...))&unk_1A171D48;
  this->arena_ = a3;
  this->repeated_field_ = 0LL;
  google::protobuf::internal::Mutex::Mutex(&this->mutex_);
  this->state_ = 0;
  google::protobuf::Arena::OwnDestructor<google::protobuf::internal::Mutex>(a3, &this->mutex_);
  this->_vptr_MapFieldBase = (int (**)(...))off_1A171DD8;
  this->map_.arena_ = 0LL;
  this->map_.default_enum_value_ = 0;
  v4 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)operator new(0x30uLL);
  v4->num_elements_ = 0LL;
  v4->table_ = 0LL;
  v4->alloc_.arena_ = 0LL;
  v4->seed_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)v4 + __rdtsc();
  result = (void **)operator new(0x40uLL);
  v4->table_ = result;
  v4->index_of_first_non_null_ = 8LL;
  v4->num_buckets_ = 8LL;
  this->map_.elements_ = v4;
  this->default_entry_ = a2;
  *(_OWORD *)result = 0LL;
  *((_OWORD *)result + 1) = 0LL;
  *((_OWORD *)result + 2) = 0LL;
  *((_OWORD *)result + 3) = 0LL;
  return result;
};

// Line 136: range 000000000C8B35E0-000000000C8B38A6
void __fastcall google::protobuf::internal::DynamicMapField::~DynamicMapField(
        google::protobuf::internal::DynamicMapField *const this)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *elements; // rbx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type index_of_first_non_null; // r13
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rdx
  void **table; // rax
  const google::protobuf::MapKey *v6; // r12
  google::protobuf::MapKey::KeyValue v7; // rax
  void *v8; // rdi
  const google::protobuf::MapKey *v9; // rax
  void *v10; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v11; // rdx
  void **v12; // rcx
  const google::protobuf::MapKey *v13; // rax
  void **v14; // r14
  char *v15; // r12
  __int64 v16; // rax
  void **v17; // r14
  __int64 v18; // rdi
  void *v19; // rdi
  void **v20; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v21; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator it; // [rsp+8h] [rbp-50h] BYREF
  std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> v23; // [rsp+10h] [rbp-48h] BYREF

  elements = this->map_.elements_;
  this->_vptr_MapFieldBase = (int (**)(...))off_1A171DD8;
  index_of_first_non_null = elements->index_of_first_non_null_;
  num_buckets = elements->num_buckets_;
  if ( index_of_first_non_null < num_buckets )
  {
    table = elements->table_;
    while ( 1 )
    {
      v6 = (const google::protobuf::MapKey *)table[index_of_first_non_null];
      if ( v6 )
        break;
      if ( num_buckets == ++index_of_first_non_null )
        goto LABEL_23;
    }
    if ( v6 != table[index_of_first_non_null ^ 1]
      || (v6 = *(const google::protobuf::MapKey **)(v6[2].val_.int64_value_ + 32)) != 0LL )
    {
      while ( 2 )
      {
        v7.string_value_ = (std::string *)v6[1].val_;
        switch ( *(_DWORD *)(v7.int64_value_ + 24) )
        {
          case 1:
          case 3:
          case 6:
          case 8:
            v8 = *(void **)(v7.int64_value_ + 16);
            if ( v8 )
              operator delete(v8, 4uLL);
            goto LABEL_8;
          case 2:
          case 4:
          case 5:
            v10 = *(void **)(v7.int64_value_ + 16);
            if ( !v10 )
              goto LABEL_8;
            operator delete(v10, 8uLL);
            v9 = *(const google::protobuf::MapKey **)&v6[1].type_;
            if ( !v9 )
              goto LABEL_12;
            goto LABEL_9;
          case 7:
            v19 = *(void **)(v7.int64_value_ + 16);
            if ( v19 )
              operator delete(v19, 1uLL);
            goto LABEL_8;
          case 9:
            v17 = *(void ***)(v7.int64_value_ + 16);
            if ( v17 )
            {
              if ( *v17 != v17 + 2 )
                operator delete(*v17);
              operator delete(v17, 0x20uLL);
            }
            goto LABEL_8;
          case 0xA:
            v18 = *(_QWORD *)(v7.int64_value_ + 16);
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
            goto LABEL_8;
          default:
LABEL_8:
            v9 = *(const google::protobuf::MapKey **)&v6[1].type_;
            if ( v9 )
              goto LABEL_9;
LABEL_12:
            v11 = elements->num_buckets_;
            v12 = elements->table_;
            it._M_node = 0LL;
            index_of_first_non_null &= v11 - 1;
            v13 = (const google::protobuf::MapKey *)v12[index_of_first_non_null];
            if ( v13 == v6 )
              goto LABEL_37;
            if ( !v13 || v13 == v12[index_of_first_non_null ^ 1] )
              goto LABEL_18;
            break;
        }
        while ( 1 )
        {
          v13 = *(const google::protobuf::MapKey **)&v13[1].type_;
          if ( !v13 )
            break;
          if ( v13 == v6 )
            goto LABEL_37;
        }
LABEL_18:
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
          &v23,
          elements,
          v6,
          &it);
        index_of_first_non_null = v23.first.bucket_index_;
        v14 = elements->table_;
        v15 = (char *)v14[v23.first.bucket_index_];
        if ( v15 && v15 == v14[v23.first.bucket_index_ ^ 1] )
        {
          v16 = std::_Rb_tree_increment(it._M_node);
          it._M_node = (std::_Rb_tree_const_iterator<google::protobuf::MapKey*>::_Base_ptr)v16;
          if ( (char *)v16 != v15 + 16 )
          {
            v9 = *(const google::protobuf::MapKey **)(v16 + 32);
            goto LABEL_22;
          }
          v21 = elements->num_buckets_;
          index_of_first_non_null += 2LL;
          if ( index_of_first_non_null >= v21 )
            goto LABEL_23;
          while ( 1 )
          {
            v9 = (const google::protobuf::MapKey *)v14[index_of_first_non_null];
            if ( v9 )
              break;
            if ( ++index_of_first_non_null >= v21 )
              goto LABEL_23;
          }
          if ( v9 != v14[index_of_first_non_null ^ 1] )
            goto LABEL_9;
        }
        else
        {
          v11 = elements->num_buckets_;
LABEL_37:
          if ( ++index_of_first_non_null >= v11 )
            goto LABEL_23;
          v20 = elements->table_;
          while ( 1 )
          {
            v9 = (const google::protobuf::MapKey *)v20[index_of_first_non_null];
            if ( v9 )
              break;
            if ( ++index_of_first_non_null >= v11 )
              goto LABEL_23;
          }
          if ( v9 != v20[index_of_first_non_null ^ 1] )
          {
LABEL_9:
            v6 = v9;
            continue;
          }
        }
        break;
      }
      v9 = *(const google::protobuf::MapKey **)(v9[2].val_.int64_value_ + 32);
LABEL_22:
      if ( !v9 )
        goto LABEL_23;
      goto LABEL_9;
    }
  }
LABEL_23:
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::clear(&this->map_);
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::~Map(&this->map_);
  this->_vptr_MapFieldBase = (int (**)(...))&unk_1A171CA0;
  google::protobuf::internal::MapFieldBase::~MapFieldBase(this);
};

// Line 136: range 000000000C8B38B0-000000000C8B38C2
void __fastcall google::protobuf::internal::DynamicMapField::~DynamicMapField(
        google::protobuf::internal::DynamicMapField *const this)
{
  google::protobuf::internal::DynamicMapField::~DynamicMapField(this);
  operator delete(this, 0x48uLL);
};

// Line 146: range 000000000C8AFF30-000000000C8AFF48
int __fastcall google::protobuf::internal::DynamicMapField::size(
        const google::protobuf::internal::DynamicMapField *const this)
{
  return **(_QWORD **)((*((__int64 (__fastcall **)(const google::protobuf::internal::DynamicMapField *const))this->_vptr_MapFieldBase
                        + 16))(this)
                     + 16);
};

// Line 151: range 000000000C8B0C50-000000000C8B0C81
bool __fastcall google::protobuf::internal::DynamicMapField::ContainsMapKey(
        const google::protobuf::internal::DynamicMapField *const this,
        const google::protobuf::MapKey *map_key)
{
  __int64 v2; // rax
  std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> v4; // [rsp+0h] [rbp-28h] BYREF

  v2 = (*((__int64 (__fastcall **)(const google::protobuf::internal::DynamicMapField *const))this->_vptr_MapFieldBase
        + 16))(this);
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
    &v4,
    *(const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const *)(v2 + 16),
    map_key,
    0LL);
  return v4.first.node_ != 0LL;
};

// Line 158: range 000000000C8B38D0-000000000C8B4719
__int64 __fastcall google::protobuf::internal::DynamicMapField::InsertOrLookupMapValue(
        google::protobuf::internal::DynamicMapField *this,
        const google::protobuf::MapKey *a2,
        google::protobuf::MapValueRef *a3)
{
  __int64 v6; // r13
  google::protobuf::uint64 space_allocated; // rax
  void *v8; // rdx
  __int64 result; // rax
  int type; // r14d
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v11; // r15
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *node; // r14
  google::protobuf::MapValueRef *v; // r15
  const google::protobuf::Descriptor *v15; // rax
  google::protobuf::FieldDescriptor *FieldByName; // r12
  char *v17; // rax
  int v18; // edx
  const google::protobuf::Message *default_entry; // rdi
  __int64 (*v20)(void); // rdx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  google::protobuf::internal::LogMessage_0 *v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::Arena *v27; // rdi
  google::protobuf::MapKey *v28; // rax
  google::protobuf::Arena *v29; // rdi
  google::protobuf::Arena *v30; // rdi
  int v31; // r13d
  int v32; // eax
  google::protobuf::internal::LogMessage_0 *v33; // rsi
  unsigned __int64 num_buckets; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  google::protobuf::internal::ArenaImpl *p_impl; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *Aligned; // rax
  int v39; // edx
  google::protobuf::internal::LogMessage_0 *v40; // rax
  void **table; // rdi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **v42; // rsi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v43; // rcx
  unsigned __int64 v44; // rdx
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *M_parent; // rax
  google::protobuf::MapKey::KeyValue v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  google::protobuf::internal::LogMessage_0 *v48; // rax
  google::protobuf::internal::LogMessage_0 *v49; // rax
  int v50; // eax
  void **int64_value; // r8
  unsigned __int64 index_of_first_non_null; // rax
  google::protobuf::MapValueRef *v53; // rax
  int v54; // r13d
  google::protobuf::internal::LogMessage_0 *v55; // rsi
  google::protobuf::internal::LogMessage_0 *v56; // rax
  google::protobuf::internal::LogMessage_0 *v57; // rax
  google::protobuf::internal::LogMessage_0 *v58; // rsi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v59; // rdi
  void **data; // r8
  google::protobuf::MapKey::KeyValue v61; // rax
  _BYTE *v62; // rax
  google::protobuf::internal::LogMessage_0 *v63; // rax
  google::protobuf::internal::LogMessage_0 *v64; // rax
  google::protobuf::internal::LogMessage_0 *v65; // rsi
  int v66; // eax
  void **v67; // r8
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v68; // rax
  google::protobuf::Arena *v69; // rdx
  void **v70; // rax
  google::protobuf::internal::ArenaImpl *v71; // rax
  google::protobuf::internal::ArenaImpl *v72; // rax
  void **v73; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v74; // rdi
  _QWORD *v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  char v78; // dl
  size_t v79; // r8
  unsigned __int64 second; // [rsp+8h] [rbp-F0h]
  void **v81; // [rsp+8h] [rbp-F0h]
  void **v82; // [rsp+8h] [rbp-F0h]
  google::protobuf::Arena *v83; // [rsp+8h] [rbp-F0h]
  int v84; // [rsp+10h] [rbp-E8h]
  int v85; // [rsp+10h] [rbp-E8h]
  google::protobuf::Arena *arena; // [rsp+10h] [rbp-E8h]
  google::protobuf::internal::ArenaImpl *v87; // [rsp+10h] [rbp-E8h]
  google::protobuf::internal::ArenaImpl *v88; // [rsp+10h] [rbp-E8h]
  __int64 v89; // [rsp+18h] [rbp-E0h]
  void **v90; // [rsp+18h] [rbp-E0h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v91; // [rsp+20h] [rbp-D8h]
  __int64 v92; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogFinisher v93; // [rsp+3Fh] [rbp-B9h] BYREF
  google::protobuf::MapKey k; // [rsp+40h] [rbp-B8h] BYREF
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *v95; // [rsp+50h] [rbp-A8h]
  std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> v96; // [rsp+60h] [rbp-98h] BYREF
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > v97[2]; // [rsp+80h] [rbp-78h] BYREF

  v6 = (*((__int64 (__fastcall **)(google::protobuf::internal::DynamicMapField *))this->_vptr_MapFieldBase + 17))(this);
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)v97,
    *(const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const *)(v6 + 16),
    a2,
    0LL);
  if ( v97[0]._M_impl.arena_ )
  {
    space_allocated = v97[0]._M_impl.arena_->impl_.space_allocated_;
    v8 = *(void **)(space_allocated + 16);
    LODWORD(space_allocated) = *(_DWORD *)(space_allocated + 24);
    a3->data_ = v8;
    a3->type_ = space_allocated;
    return 0LL;
  }
  type = a2->type_;
  v11 = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap **)(v6 + 16);
  k.type_ = 0;
  if ( type
    || (google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)v97,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          369),
        v24 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)v97,
                "Protocol Buffer map usage error:\n"),
        v25 = google::protobuf::internal::LogMessage::operator<<(v24, "MapKey::type MapKey is not initialized. "),
        v26 = google::protobuf::internal::LogMessage::operator<<(v25, "Call set methods to initialize MapKey."),
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v96, v26),
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97),
        type = a2->type_,
        k.type_ != type) )
  {
    k.type_ = type;
    if ( type == 9 )
    {
      v46.int64_value_ = operator new(0x20uLL);
      type = 9;
      *(_QWORD *)(v46.int64_value_ + 8) = 0LL;
      v46.string_value_->_M_dataplus._M_p = (std::string::pointer)(v46.int64_value_ + 16);
      *(_BYTE *)(v46.int64_value_ + 16) = 0;
      k.val_ = v46;
    }
  }
  switch ( type )
  {
    case 1:
    case 3:
      k.val_.int32_value_ = a2->val_.int32_value_;
      break;
    case 2:
    case 4:
      k.val_.int64_value_ = a2->val_.int64_value_;
      break;
    case 5:
    case 6:
    case 8:
    case 10:
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)v97,
        LOGLEVEL_FATAL_0,
        "./google/protobuf/map_field.h",
        498);
      v12 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)v97,
              "Unsupported");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v96, v12);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
      break;
    case 7:
      k.val_.bool_value_ = a2->val_.bool_value_;
      break;
    case 9:
      ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
        (google::protobuf::MapKey::KeyValue)k.val_.int64_value_,
        (google::protobuf::MapKey::KeyValue)a2->val_.int64_value_);
      break;
    default:
      break;
  }
  v95 = 0LL;
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
    &v96,
    v11,
    &k,
    0LL);
  node = v96.first.node_;
  if ( !v96.first.node_ )
  {
    num_buckets = v11->num_buckets_;
    second = v96.second;
    v35 = v11->num_elements_ + 1;
    v36 = (12 * num_buckets) >> 4;
    if ( v35 >= v36 )
    {
      if ( num_buckets > 0x800000000000000LL )
        goto LABEL_46;
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Resize(
        v11,
        2 * num_buckets);
    }
    else
    {
      if ( num_buckets <= 8 || v35 > (12 * num_buckets) >> 6 )
      {
LABEL_46:
        p_impl = &v11->alloc_.arena_->impl_;
        if ( p_impl )
        {
          if ( p_impl[1].blocks_lock_.mInternal )
            google::protobuf::Arena::OnArenaAllocation(
              v11->alloc_.arena_,
              (const std::type_info *)&`typeinfo for'unsigned char,
              0x20uLL);
          Aligned = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(p_impl, 0x20uLL);
        }
        else
        {
          Aligned = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)operator new(0x20uLL);
        }
        Aligned->kv.k_.type_ = 0;
        v39 = k.type_;
        node = Aligned;
        if ( !k.type_ )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            (google::protobuf::internal::LogMessage_0 *const)v97,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v47 = google::protobuf::internal::LogMessage::operator<<(
                  (google::protobuf::internal::LogMessage_0 *const)v97,
                  "Protocol Buffer map usage error:\n");
          v48 = google::protobuf::internal::LogMessage::operator<<(v47, "MapKey::type MapKey is not initialized. ");
          v49 = google::protobuf::internal::LogMessage::operator<<(v48, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v93, v49);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
          v39 = k.type_;
          v50 = node->kv.k_.type_;
          if ( k.type_ == v50 )
            goto LABEL_53;
          if ( v50 == 9 )
          {
            int64_value = (void **)node->kv.k_.val_.int64_value_;
            if ( node->kv.k_.val_.int64_value_ )
            {
              if ( *int64_value != int64_value + 2 )
              {
                v90 = (void **)node->kv.k_.val_.int64_value_;
                v84 = k.type_;
                operator delete(*int64_value);
                int64_value = v90;
                v39 = v84;
              }
              v85 = v39;
              operator delete(int64_value, 0x20uLL);
              v39 = v85;
            }
          }
        }
        node->kv.k_.type_ = v39;
        if ( v39 == 9 )
        {
          v61.int64_value_ = operator new(0x20uLL);
          *(_BYTE *)(v61.int64_value_ + 16) = 0;
          v61.string_value_->_M_dataplus._M_p = (std::string::pointer)(v61.int64_value_ + 16);
          v39 = node->kv.k_.type_;
          *(_QWORD *)(v61.int64_value_ + 8) = 0LL;
          node->kv.k_.val_ = v61;
        }
LABEL_53:
        switch ( v39 )
        {
          case 1:
          case 3:
            node->kv.k_.val_.int32_value_ = k.val_.int32_value_;
            break;
          case 2:
          case 4:
            node->kv.k_.val_.int64_value_ = k.val_.int64_value_;
            break;
          case 5:
          case 6:
          case 8:
          case 10:
            google::protobuf::internal::LogMessage::LogMessage(
              (google::protobuf::internal::LogMessage_0 *const)v97,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              498);
            v40 = google::protobuf::internal::LogMessage::operator<<(
                    (google::protobuf::internal::LogMessage_0 *const)v97,
                    "Unsupported");
            google::protobuf::internal::LogFinisher::operator=(&v93, v40);
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
            break;
          case 7:
            node->kv.k_.val_.bool_value_ = k.val_.bool_value_;
            break;
          case 9:
            ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
              (google::protobuf::MapKey::KeyValue)node->kv.k_.val_.int64_value_,
              (google::protobuf::MapKey::KeyValue)k.val_.int64_value_);
            break;
          default:
            break;
        }
        node->kv.v_ = v95;
        table = v11->table_;
        v42 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **)&table[second];
        v89 = second;
        v43 = *v42;
        if ( *v42 )
        {
          v44 = 0LL;
          v92 = second ^ 1;
          M_parent = *v42;
          if ( v43 == table[second ^ 1] )
          {
            node->next = 0LL;
            v59 = *v42;
            v97[0]._M_impl.arena_ = (google::protobuf::Arena *const)node;
            node = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(v59, (google::protobuf::MapKey **)v97).first._M_node[1]._M_color;
            goto LABEL_60;
          }
          do
          {
            M_parent = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)M_parent->_M_impl._M_header._M_parent;
            ++v44;
          }
          while ( M_parent );
          if ( v44 <= 7 )
          {
            node->next = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)v43;
            *v42 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)node;
LABEL_60:
            ++v11->num_elements_;
            goto LABEL_9;
          }
          arena = v11->alloc_.arena_;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'unsigned char,
                0x38uLL);
            v68 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, 0x38uLL);
          }
          else
          {
            v68 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)operator new(0x38uLL);
          }
          v69 = v11->alloc_.arena_;
          v91 = v68;
          v97[0]._M_impl._M_header._M_left = &v97[0]._M_impl._M_header;
          v97[0]._M_impl._M_header._M_parent = 0LL;
          v97[0]._M_impl.arena_ = v69;
          v97[0]._M_impl._M_header._M_color = _S_red;
          v97[0]._M_impl._M_header._M_right = &v97[0]._M_impl._M_header;
          v97[0]._M_impl._M_node_count = 0LL;
          v68->_M_impl.arena_ = v69;
          v68->_M_impl._M_header._M_color = _S_red;
          v68->_M_impl._M_header._M_parent = 0LL;
          v68->_M_impl._M_header._M_left = &v68->_M_impl._M_header;
          v68->_M_impl._M_header._M_right = &v68->_M_impl._M_header;
          v68->_M_impl._M_node_count = 0LL;
          std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
            v97,
            (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v97[0]._M_impl._M_header._M_parent);
          v70 = v11->table_;
          v87 = (google::protobuf::internal::ArenaImpl *)v70[second];
          if ( v87 )
          {
            while ( 1 )
            {
              v97[0]._M_impl.arena_ = (google::protobuf::Arena *const)v87;
              std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                v91,
                (google::protobuf::MapKey **)v97);
              v71 = *(google::protobuf::internal::ArenaImpl **)&v87->owns_first_block_;
              *(_QWORD *)&v87->owns_first_block_ = 0LL;
              if ( !v71 )
                break;
              v87 = v71;
            }
            v70 = v11->table_;
          }
          v88 = (google::protobuf::internal::ArenaImpl *)v70[v92];
          if ( v88 )
          {
            while ( 1 )
            {
              v97[0]._M_impl.arena_ = (google::protobuf::Arena *const)v88;
              std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                v91,
                (google::protobuf::MapKey **)v97);
              v72 = *(google::protobuf::internal::ArenaImpl **)&v88->owns_first_block_;
              *(_QWORD *)&v88->owns_first_block_ = 0LL;
              if ( !v72 )
                break;
              v88 = v72;
            }
          }
          second &= ~1uLL;
          v11->table_[v92] = v91;
          v11->table_[v89] = v91;
          v73 = v11->table_;
          node->next = 0LL;
          v74 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)v73[v89];
          v97[0]._M_impl.arena_ = (google::protobuf::Arena *const)node;
          node = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(v74, (google::protobuf::MapKey **)v97).first._M_node[1]._M_color;
        }
        else
        {
          node->next = 0LL;
          *v42 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)node;
        }
        index_of_first_non_null = second;
        if ( v11->index_of_first_non_null_ <= second )
          index_of_first_non_null = v11->index_of_first_non_null_;
        v11->index_of_first_non_null_ = index_of_first_non_null;
        goto LABEL_60;
      }
      v76 = ((5 * v35) >> 2) + 1;
      if ( v36 <= 2 * v76 )
      {
        v78 = 1;
      }
      else
      {
        v77 = 1LL;
        do
          v78 = ++v77;
        while ( v36 > v76 << v77 );
      }
      v79 = num_buckets >> v78;
      if ( num_buckets >> v78 > 8 )
      {
        if ( num_buckets == v79 )
          goto LABEL_46;
      }
      else
      {
        v79 = 8LL;
      }
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Resize(v11, v79);
    }
    google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
      (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)v97,
      v11,
      &k,
      0LL);
    second = (unsigned __int64)v97[0]._M_impl._M_header._M_parent;
    goto LABEL_46;
  }
LABEL_9:
  google::protobuf::MapKey::~MapKey(&k);
  v = (google::protobuf::MapValueRef *)node->kv.v_;
  if ( !v )
  {
    v27 = *(google::protobuf::Arena **)v6;
    if ( *(_QWORD *)v6 )
    {
      if ( v27->hooks_cookie_ )
      {
        v83 = *(google::protobuf::Arena **)v6;
        google::protobuf::Arena::OnArenaAllocation(v27, (const std::type_info *)&`typeinfo for'unsigned char, 0x20uLL);
        v27 = v83;
      }
      v28 = (google::protobuf::MapKey *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v27->impl_, 0x20uLL);
      v29 = *(google::protobuf::Arena **)v6;
      v28->type_ = 0;
      v = (google::protobuf::MapValueRef *)v28;
      google::protobuf::Arena::OwnDestructor<google::protobuf::MapKey>(v29, v28);
      v30 = *(google::protobuf::Arena **)v6;
      v[1].data_ = 0LL;
      v[1].type_ = 0;
      google::protobuf::Arena::OwnDestructor<google::protobuf::MapValueRef>(v30, v + 1);
      v31 = a2->type_;
      if ( !v31 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)v97,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          369);
        v56 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)v97,
                "Protocol Buffer map usage error:\n");
        v57 = google::protobuf::internal::LogMessage::operator<<(v56, "MapKey::type MapKey is not initialized. ");
        v58 = google::protobuf::internal::LogMessage::operator<<(v57, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&k, v58);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
        v31 = a2->type_;
      }
      v32 = v->type_;
      if ( v32 != v31 )
      {
        if ( v32 == 9 )
        {
          data = (void **)v->data_;
          if ( v->data_ )
          {
            if ( *data != data + 2 )
            {
              v81 = (void **)v->data_;
              operator delete(*data);
              data = v81;
            }
            operator delete(data, 0x20uLL);
          }
        }
        v->type_ = v31;
        if ( v31 == 9 )
        {
          v62 = (_BYTE *)operator new(0x20uLL);
          v62[16] = 0;
          v31 = v->type_;
          *(_QWORD *)v62 = v62 + 16;
          *((_QWORD *)v62 + 1) = 0LL;
          v->data_ = v62;
        }
      }
      switch ( v31 )
      {
        case 1:
        case 3:
          LODWORD(v->data_) = a2->val_.int32_value_;
          break;
        case 2:
        case 4:
          v->data_ = (void *)a2->val_.int64_value_;
          break;
        case 5:
        case 6:
        case 8:
        case 10:
          google::protobuf::internal::LogMessage::LogMessage(
            (google::protobuf::internal::LogMessage_0 *const)v97,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            498);
          v33 = google::protobuf::internal::LogMessage::operator<<(
                  (google::protobuf::internal::LogMessage_0 *const)v97,
                  "Unsupported");
          google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&k, v33);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
          break;
        case 7:
          LOBYTE(v->data_) = a2->val_.bool_value_;
          break;
        case 9:
          ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
            v->data_,
            (google::protobuf::MapKey::KeyValue)a2->val_.int64_value_);
          break;
        default:
          break;
      }
LABEL_38:
      node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
      goto LABEL_10;
    }
    v53 = (google::protobuf::MapValueRef *)operator new(0x20uLL);
    v54 = a2->type_;
    v53->type_ = 0;
    v = v53;
    if ( !v54 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        (google::protobuf::internal::LogMessage_0 *const)v97,
        LOGLEVEL_FATAL_0,
        "./google/protobuf/map_field.h",
        369);
      v63 = google::protobuf::internal::LogMessage::operator<<(
              (google::protobuf::internal::LogMessage_0 *const)v97,
              "Protocol Buffer map usage error:\n");
      v64 = google::protobuf::internal::LogMessage::operator<<(v63, "MapKey::type MapKey is not initialized. ");
      v65 = google::protobuf::internal::LogMessage::operator<<(v64, "Call set methods to initialize MapKey.");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&k, v65);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
      v54 = a2->type_;
      v66 = v->type_;
      if ( v54 == v66 )
      {
LABEL_79:
        switch ( v54 )
        {
          case 1:
          case 3:
            LODWORD(v->data_) = a2->val_.int32_value_;
            break;
          case 2:
          case 4:
            v->data_ = (void *)a2->val_.int64_value_;
            break;
          case 5:
          case 6:
          case 8:
          case 10:
            google::protobuf::internal::LogMessage::LogMessage(
              (google::protobuf::internal::LogMessage_0 *const)v97,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              498);
            v55 = google::protobuf::internal::LogMessage::operator<<(
                    (google::protobuf::internal::LogMessage_0 *const)v97,
                    "Unsupported");
            google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&k, v55);
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)v97);
            break;
          case 7:
            LOBYTE(v->data_) = a2->val_.bool_value_;
            break;
          case 9:
            ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
              v->data_,
              (google::protobuf::MapKey::KeyValue)a2->val_.int64_value_);
            break;
          default:
            break;
        }
        v[1].data_ = 0LL;
        v[1].type_ = 0;
        goto LABEL_38;
      }
      if ( v66 == 9 )
      {
        v67 = (void **)v->data_;
        if ( v->data_ )
        {
          if ( *v67 != v67 + 2 )
          {
            v82 = (void **)v->data_;
            operator delete(*v67);
            v67 = v82;
          }
          operator delete(v67, 0x20uLL);
        }
      }
    }
    v->type_ = v54;
    if ( v54 == 9 )
    {
      v75 = (_QWORD *)operator new(0x20uLL);
      v75[1] = 0LL;
      v54 = v->type_;
      *v75 = v75 + 2;
      *((_BYTE *)v75 + 16) = 0;
      v->data_ = v75;
    }
    goto LABEL_79;
  }
LABEL_10:
  v15 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))this->default_entry_->_vptr_MessageLite
                                               + 24))(this->default_entry_);
  v97[0]._M_impl.arena_ = (google::protobuf::Arena *const)&v97[0]._M_impl.std::_Rb_tree_header;
  strcpy((char *)&v97[0]._M_impl.std::_Rb_tree_header, "value");
  *(_QWORD *)v97[0]._M_impl._M_key_compare.gap0 = 5LL;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v15,
                                                       (const std::string *)v97);
  if ( (std::_Rb_tree_header *)v97[0]._M_impl.arena_ != &v97[0]._M_impl.std::_Rb_tree_header )
    operator delete(v97[0]._M_impl.arena_);
  v[1].type_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByName)];
  switch ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByName) )
  {
    case 1u:
    case 3u:
    case 4u:
    case 6u:
    case 0x10u:
    case 0x12u:
      v17 = (char *)operator new(8uLL);
      *(_QWORD *)v17 = 0LL;
      v[1].data_ = v17;
      break;
    case 2u:
    case 5u:
    case 7u:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x11u:
      v17 = (char *)operator new(4uLL);
      *(_DWORD *)v17 = 0;
      v[1].data_ = v17;
      break;
    case 8u:
      v17 = (char *)operator new(1uLL);
      *v17 = 0;
      v[1].data_ = v17;
      break;
    case 9u:
    case 0xCu:
      v17 = (char *)operator new(0x20uLL);
      *((_QWORD *)v17 + 1) = 0LL;
      *(_QWORD *)v17 = v17 + 16;
      v17[16] = 0;
      v[1].data_ = v17;
      break;
    case 0xAu:
    case 0xBu:
      default_entry = this->default_entry_;
      v20 = (__int64 (*)(void))*((_QWORD *)default_entry->_vptr_MessageLite + 23);
      if ( (char *)v20 == (char *)google::protobuf::Message::GetReflection )
      {
        (*((void (**)(void))default_entry->_vptr_MessageLite + 24))();
        v22 = v21;
      }
      else
      {
        v22 = v20();
      }
      v23 = (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v22 + 216LL))(
              v22,
              this->default_entry_,
              FieldByName,
              0LL);
      v17 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
      v[1].data_ = v17;
      break;
    default:
      v17 = (char *)v[1].data_;
      break;
  }
  v18 = v[1].type_;
  a3->data_ = v17;
  result = 1LL;
  a3->type_ = v18;
  return result;
};

// Line 205: range 000000000C8B3030-000000000C8B35D5
bool __fastcall google::protobuf::internal::DynamicMapField::DeleteMapValue(
        google::protobuf::internal::DynamicMapField *const this,
        const google::protobuf::MapKey *map_key)
{
  const google::protobuf::MapKey *v2; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *node; // rbp
  const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *m; // r13
  bool result; // al
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type bucket_index; // r8
  google::protobuf::MapKey *p_first; // r14
  void *string_value; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rdx
  void **table; // r15
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v12; // rbx
  __int64 v13; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **v14; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v15; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *elements; // r12
  void **v17; // rdx
  void *v18; // rcx
  void **v19; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v20; // r13
  google::protobuf::Arena *arena; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v22; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *next; // r15
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v24; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v25; // r8
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v26; // r9
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v27; // r10
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v28; // r11
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v29; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v30; // rax
  void **p_M_p; // r15
  void *v32; // rdi
  google::protobuf::MapKey::KeyValue v33; // rdi
  void *v34; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v35; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v36; // rsi
  void *v37; // r9
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v38; // rbx
  const std::_Rb_tree_node_base *v39; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type i; // rsi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v41; // rax
  void **v42; // rdx
  const google::protobuf::MapKey *map_keyd; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keya; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keye; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyf; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyg; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyh; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyi; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyj; // [rsp+8h] [rbp-90h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type map_keyb; // [rsp+8h] [rbp-90h]
  const google::protobuf::MapKey *map_keyc; // [rsp+8h] [rbp-90h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v53; // [rsp+10h] [rbp-88h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v54; // [rsp+10h] [rbp-88h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v55; // [rsp+18h] [rbp-80h]
  char *v56; // [rsp+18h] [rbp-80h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v57; // [rsp+20h] [rbp-78h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v58; // [rsp+28h] [rbp-70h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator it; // [rsp+38h] [rbp-60h] BYREF
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::iterator iter; // [rsp+40h] [rbp-58h] BYREF

  v2 = map_key;
  if ( this->state_ == 1 )
  {
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
    v2 = map_key;
  }
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
    (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)&iter,
    this->map_.elements_,
    v2,
    0LL);
  node = iter.it_.node_;
  m = iter.it_.m_;
  result = 0;
  bucket_index = iter.it_.bucket_index_;
  if ( iter.it_.node_ )
  {
    this->state_ = 0;
    p_first = (google::protobuf::MapKey *)&node->kv.v_->first;
    switch ( p_first[1].type_ )
    {
      case 1:
      case 3:
      case 6:
      case 8:
        string_value = p_first[1].val_.string_value_;
        if ( !string_value )
          goto LABEL_6;
        map_keyh = (const google::protobuf::MapKey *)bucket_index;
        operator delete(string_value, 4uLL);
        bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyh;
        if ( !this->map_.arena_ )
          goto LABEL_47;
        goto LABEL_8;
      case 2:
      case 4:
      case 5:
        v32 = p_first[1].val_.string_value_;
        if ( !v32 )
          goto LABEL_6;
        map_keyg = (const google::protobuf::MapKey *)bucket_index;
        operator delete(v32, 8uLL);
        bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyg;
        if ( !this->map_.arena_ )
          goto LABEL_47;
        goto LABEL_8;
      case 7:
        v34 = p_first[1].val_.string_value_;
        if ( !v34 )
          goto LABEL_6;
        map_keyj = (const google::protobuf::MapKey *)bucket_index;
        operator delete(v34, 1uLL);
        bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyj;
        goto LABEL_46;
      case 9:
        p_M_p = (void **)&p_first[1].val_.string_value_->_M_dataplus._M_p;
        if ( !p_M_p )
          goto LABEL_6;
        if ( *p_M_p != p_M_p + 2 )
        {
          map_keye = (const google::protobuf::MapKey *)bucket_index;
          operator delete(*p_M_p);
          bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keye;
        }
        map_keyf = (const google::protobuf::MapKey *)bucket_index;
        operator delete(p_M_p, 0x20uLL);
        bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyf;
        goto LABEL_46;
      case 0xA:
        v33.string_value_ = (std::string *)p_first[1].val_;
        if ( !v33.int64_value_ )
        {
LABEL_6:
          if ( this->map_.arena_ )
            goto LABEL_8;
          goto LABEL_7;
        }
        map_keyi = (const google::protobuf::MapKey *)bucket_index;
        (*((void (__fastcall **)(google::protobuf::MapKey::KeyValue))v33.string_value_->_M_dataplus._M_p + 1))(v33);
        bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyi;
LABEL_46:
        if ( !this->map_.arena_ )
        {
LABEL_47:
          p_first = (google::protobuf::MapKey *)&node->kv.v_->first;
          if ( p_first )
          {
LABEL_7:
            map_keyd = (const google::protobuf::MapKey *)bucket_index;
            google::protobuf::MapKey::~MapKey(p_first);
            operator delete(p_first, 0x20uLL);
            bucket_index = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type)map_keyd;
          }
        }
LABEL_8:
        num_buckets = m->num_buckets_;
        table = m->table_;
        v12 = bucket_index & (num_buckets - 1);
        v13 = v12;
        v14 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&table[v12];
        if ( node->next )
          goto LABEL_9;
        it._M_node = 0LL;
        v35 = *v14;
        if ( node == *v14 )
        {
LABEL_80:
          v36 = bucket_index & (num_buckets - 1);
        }
        else
        {
          if ( v35 && v35 != table[v12 ^ 1] )
          {
            while ( 1 )
            {
              v35 = v35->next;
              if ( !v35 )
                break;
              if ( node == v35 )
                goto LABEL_80;
            }
          }
          map_keyb = bucket_index;
          google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
            (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)&iter,
            m,
            &node->kv.k_,
            &it);
          v36 = iter.it_.bucket_index_;
          table = m->table_;
          num_buckets = m->num_buckets_;
          v37 = table[iter.it_.bucket_index_];
          v38 = num_buckets - 1;
          if ( v37 )
          {
            v12 = map_keyb & v38;
            v13 = v12;
            v14 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&table[v12];
            if ( v37 == table[iter.it_.bucket_index_ ^ 1] )
            {
              v56 = (char *)table[iter.it_.bucket_index_];
              v54 = iter.it_.bucket_index_;
              map_keyc = (const google::protobuf::MapKey *)m->num_buckets_;
              v39 = (const std::_Rb_tree_node_base *)std::_Rb_tree_increment(it._M_node);
              v14 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&table[v12];
              it._M_node = v39;
              if ( v39 == (const std::_Rb_tree_node_base *)(v56 + 16) )
              {
                for ( i = v54 + 2; (unsigned __int64)map_keyc > i; ++i )
                {
                  if ( table[i] )
                    break;
                }
              }
LABEL_9:
              it._M_node = 0LL;
              v15 = *v14;
              elements = this->map_.elements_;
              if ( node == *v14 )
              {
LABEL_25:
                v19 = &elements->table_[v13];
                v20 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)*v19;
              }
              else
              {
                if ( v15 && v15 != table[v12 ^ 1] )
                {
                  while ( 1 )
                  {
                    v15 = v15->next;
                    if ( !v15 )
                      break;
                    if ( node == v15 )
                      goto LABEL_25;
                  }
                }
                google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
                  (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)&iter,
                  m,
                  &node->kv.k_,
                  &it);
                v12 = iter.it_.bucket_index_;
                v17 = m->table_;
                v13 = iter.it_.bucket_index_;
                v18 = v17[iter.it_.bucket_index_];
                v19 = &elements->table_[iter.it_.bucket_index_];
                v20 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)*v19;
                if ( v18 && v18 == v17[iter.it_.bucket_index_ ^ 1] )
                {
                  std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::erase(
                    (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v20,
                    (google::protobuf::MapKey *const *)&it._M_node[1]);
                  if ( !v20[1].kv.v_ )
                  {
                    arena = elements->alloc_.arena_;
                    v12 &= ~1uLL;
                    std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
                      (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v20,
                      (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v20->next);
                    if ( !arena )
                      operator delete(v20, 0x38uLL);
                    v22 = v12 + 1;
                    elements->table_[v22] = 0LL;
                    elements->table_[v22 - 1] = 0LL;
                  }
                  google::protobuf::MapKey::~MapKey(&node->kv.k_);
                  if ( elements->alloc_.arena_ )
                    goto LABEL_22;
                  goto LABEL_41;
                }
              }
              next = v20->next;
              if ( node != v20 )
              {
                v24 = next->next;
                if ( node != next )
                {
                  v25 = v24->next;
                  if ( node != v24 )
                  {
                    v26 = v25->next;
                    if ( node != v25 )
                    {
                      v27 = v26->next;
                      if ( node != v26 )
                      {
                        v28 = v27->next;
                        if ( v27 != node )
                        {
                          map_keya = &v27->next->kv.k_;
                          v29 = v28->next;
                          if ( node != v28 )
                          {
                            v58 = v25->next;
                            v57 = v24->next;
                            v55 = next->next;
                            v53 = v26->next;
                            v30 = google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::EraseFromLinkedList(
                                    elements,
                                    node,
                                    v29);
                            v26 = v58;
                            v25 = v57;
                            v24 = v55;
                            *(_QWORD *)&map_keya[1].type_ = v30;
                            v29 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)map_keya;
                            v27 = v53;
                            v19 = &elements->table_[v13];
                          }
                          v27->next = v29;
                          v28 = v27;
                        }
                        v26->next = v28;
                        v27 = v26;
                      }
                      v25->next = v27;
                      v26 = v25;
                    }
                    v24->next = v26;
                    v25 = v24;
                  }
                  next->next = v25;
                  v24 = next;
                }
                v20->next = v24;
                next = v20;
              }
              *v19 = next;
              google::protobuf::MapKey::~MapKey(&node->kv.k_);
              if ( elements->alloc_.arena_ )
                goto LABEL_22;
LABEL_41:
              operator delete(node, 0x20uLL);
LABEL_22:
              --elements->num_elements_;
              if ( elements->index_of_first_non_null_ == v12 )
              {
                v41 = elements->num_buckets_;
                if ( v12 < v41 )
                {
                  v42 = elements->table_;
                  do
                  {
                    if ( v42[v12] )
                      break;
                    elements->index_of_first_non_null_ = ++v12;
                  }
                  while ( v12 < v41 );
                }
              }
              return 1;
            }
          }
          else
          {
            v12 = map_keyb & v38;
            v13 = v12;
            v14 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&table[v12];
          }
        }
        do
          ++v36;
        while ( v36 < num_buckets && !table[v36] );
        goto LABEL_9;
      default:
        goto LABEL_46;
    }
  }
  return result;
};

// Line 218: range 000000000C8AFFD0-000000000C8AFFF2
const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *__fastcall google::protobuf::internal::DynamicMapField::GetMap(
        const google::protobuf::internal::DynamicMapField *const this)
{
  if ( this->state_ == 1 )
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return &this->map_;
};

// Line 223: range 000000000C8B0000-000000000C8B0031
google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *__fastcall google::protobuf::internal::DynamicMapField::MutableMap(
        google::protobuf::internal::DynamicMapField *const this)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *result; // rax

  if ( this->state_ == 1 )
    google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  result = &this->map_;
  this->state_ = 0;
  return result;
};

// Line 229: range 000000000C8B0140-000000000C8B0325
__int64 __fastcall google::protobuf::internal::DynamicMapField::SetMapIteratorValue(
        google::protobuf::internal::DynamicMapField *this,
        google::protobuf::MapIterator *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  google::protobuf::MapKey::KeyValue *v4; // r13
  __int64 uint32_value; // rbp
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  __int64 v8; // rax
  void *v9; // rdx
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  void **p_M_p; // r14
  google::protobuf::MapKey::KeyValue v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  result = (__int64)a2->iter_;
  v3 = *(_QWORD *)a2->iter_;
  if ( !v3 )
    return result;
  v4 = *(google::protobuf::MapKey::KeyValue **)(v3 + 16);
  uint32_value = v4[1].uint32_value_;
  if ( !(_DWORD)uint32_value )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v16, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
    v10 = google::protobuf::internal::LogMessage::operator<<(&v16, "Protocol Buffer map usage error:\n");
    v11 = google::protobuf::internal::LogMessage::operator<<(v10, "MapKey::type MapKey is not initialized. ");
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, "Call set methods to initialize MapKey.");
    google::protobuf::internal::LogFinisher::operator=(&v15, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v16);
    uint32_value = v4[1].uint32_value_;
  }
  type = a2->key_.type_;
  if ( (_DWORD)uint32_value != type )
  {
    if ( type == 9 )
    {
      p_M_p = (void **)&a2->key_.val_.string_value_->_M_dataplus._M_p;
      if ( p_M_p )
      {
        if ( *p_M_p != p_M_p + 2 )
          operator delete(*p_M_p);
        operator delete(p_M_p, 0x20uLL);
        a2->key_.type_ = uint32_value;
        if ( (_DWORD)uint32_value != 9 )
          goto LABEL_7;
        goto LABEL_19;
      }
    }
    a2->key_.type_ = uint32_value;
    if ( (_DWORD)uint32_value == 9 )
    {
LABEL_19:
      v14.int64_value_ = operator new(0x20uLL);
      uint32_value = (unsigned int)a2->key_.type_;
      *(_QWORD *)(v14.int64_value_ + 8) = 0LL;
      v14.string_value_->_M_dataplus._M_p = (std::string::pointer)(v14.int64_value_ + 16);
      *(_BYTE *)(v14.int64_value_ + 16) = 0;
      a2->key_.val_ = v14;
    }
  }
LABEL_7:
  if ( (unsigned int)uint32_value <= 0xA )
  {
    switch ( uint32_value )
    {
      case 0LL:
        break;
      case 1LL:
      case 3LL:
        a2->key_.val_.int32_value_ = v4->int32_value_;
        break;
      case 2LL:
      case 4LL:
        a2->key_.val_ = (google::protobuf::MapKey::KeyValue)v4->string_value_;
        break;
      case 5LL:
      case 6LL:
      case 8LL:
      case 10LL:
        google::protobuf::internal::LogMessage::LogMessage(&v16, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 498);
        v7 = google::protobuf::internal::LogMessage::operator<<(&v16, "Unsupported");
        google::protobuf::internal::LogFinisher::operator=(&v15, v7);
        google::protobuf::internal::LogMessage::~LogMessage(&v16);
        break;
      case 7LL:
        a2->key_.val_.bool_value_ = v4->bool_value_;
        break;
      case 9LL:
        ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
          (google::protobuf::MapKey::KeyValue)a2->key_.val_.int64_value_,
          v4->int64_value_);
        break;
    }
  }
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *(void **)(v8 + 16);
  result = *(unsigned int *)(v8 + 24);
  a2->value_.data_ = v9;
  a2->value_.type_ = result;
  return result;
};

// Line 238: range 000000000C8B0C90-000000000C8B301C
google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *__fastcall google::protobuf::internal::DynamicMapField::SyncRepeatedFieldWithMapNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  const google::protobuf::Message *default_entry; // rdi
  __int64 (*v3)(void); // rdx
  __int64 v4; // rdx
  __int64 v5; // r13
  const google::protobuf::Descriptor *v6; // rax
  const google::protobuf::Descriptor *v7; // rax
  google::protobuf::FieldDescriptor *v8; // r15
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rbp
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // r12
  __int64 v13; // rbx
  __int64 v14; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *result; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *index_of_first_non_null; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *num_buckets; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v18; // r12
  google::protobuf::Message *v19; // rax
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *v20; // rbx
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *v21; // rbp
  google::protobuf::Arena *v22; // rax
  unsigned int *seed; // rbx
  google::protobuf::internal::LogMessage_0 *v24; // rsi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v25; // rbx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  google::protobuf::internal::LogMessage_0 *v30; // rax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  google::protobuf::internal::LogMessage_0 *v32; // rax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rax
  google::protobuf::internal::LogMessage_0 *v35; // rax
  __int64 v36; // rax
  unsigned int v37; // eax
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  google::protobuf::internal::LogMessage_0 *v40; // rax
  google::protobuf::internal::LogMessage_0 *v41; // rax
  google::protobuf::internal::LogMessage_0 *v42; // rax
  google::protobuf::internal::LogMessage_0 *v43; // rax
  __int64 v44; // rax
  google::protobuf::internal::LogMessage_0 *v45; // rax
  unsigned int v46; // eax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  google::protobuf::internal::LogMessage_0 *v48; // rax
  google::protobuf::internal::LogMessage_0 *v49; // rax
  google::protobuf::internal::LogMessage_0 *v50; // rax
  google::protobuf::internal::LogMessage_0 *v51; // rax
  google::protobuf::internal::LogMessage_0 *v52; // rax
  google::protobuf::internal::LogMessage_0 *v53; // rax
  unsigned int v54; // eax
  int v55; // eax
  google::protobuf::internal::LogMessage_0 *v56; // rax
  google::protobuf::internal::LogMessage_0 *v57; // rax
  google::protobuf::internal::LogMessage_0 *v58; // rax
  google::protobuf::internal::LogMessage_0 *v59; // rax
  google::protobuf::internal::LogMessage_0 *v60; // rax
  google::protobuf::internal::LogMessage_0 *v61; // rax
  __int64 v62; // rax
  int v63; // eax
  google::protobuf::internal::LogMessage_0 *v64; // rax
  google::protobuf::internal::LogMessage_0 *v65; // rax
  google::protobuf::internal::LogMessage_0 *v66; // rax
  google::protobuf::internal::LogMessage_0 *v67; // rax
  google::protobuf::internal::LogMessage_0 *v68; // rax
  google::protobuf::internal::LogMessage_0 *v69; // rax
  __int64 v70; // rax
  google::protobuf::internal::LogMessage_0 *v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  int v74; // eax
  google::protobuf::internal::LogMessage_0 *v75; // rax
  google::protobuf::internal::LogMessage_0 *v76; // rax
  google::protobuf::internal::LogMessage_0 *v77; // rax
  google::protobuf::internal::LogMessage_0 *v78; // rax
  google::protobuf::internal::LogMessage_0 *v79; // rax
  google::protobuf::internal::LogMessage_0 *v80; // rax
  __int64 v81; // rax
  google::protobuf::internal::LogMessage_0 *v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  google::protobuf::internal::LogMessage_0 *v85; // rax
  google::protobuf::internal::LogMessage_0 *v86; // rax
  google::protobuf::internal::LogMessage_0 *v87; // rax
  google::protobuf::internal::LogMessage_0 *v88; // rax
  google::protobuf::internal::LogMessage_0 *v89; // rax
  google::protobuf::internal::LogMessage_0 *v90; // rax
  google::protobuf::internal::LogMessage_0 *v91; // rax
  __int64 v92; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v93; // rdx
  void **table; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v95; // rax
  void **v96; // rbp
  char *v97; // rbx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap **v98; // rax
  int v99; // eax
  google::protobuf::internal::LogMessage_0 *v100; // rax
  google::protobuf::internal::LogMessage_0 *v101; // rax
  google::protobuf::internal::LogMessage_0 *v102; // rax
  google::protobuf::internal::LogMessage_0 *v103; // rax
  google::protobuf::internal::LogMessage_0 *v104; // rax
  google::protobuf::internal::LogMessage_0 *v105; // rax
  __int64 v106; // rax
  google::protobuf::internal::LogMessage_0 *v107; // rax
  int v108; // eax
  google::protobuf::internal::LogMessage_0 *v109; // rax
  google::protobuf::internal::LogMessage_0 *v110; // rax
  google::protobuf::internal::LogMessage_0 *v111; // rax
  google::protobuf::internal::LogMessage_0 *v112; // rax
  google::protobuf::internal::LogMessage_0 *v113; // rax
  google::protobuf::internal::LogMessage_0 *v114; // rax
  __int64 v115; // rax
  google::protobuf::internal::LogMessage_0 *v116; // rax
  int v117; // eax
  google::protobuf::internal::LogMessage_0 *v118; // rax
  google::protobuf::internal::LogMessage_0 *v119; // rax
  google::protobuf::internal::LogMessage_0 *v120; // rax
  google::protobuf::internal::LogMessage_0 *v121; // rax
  google::protobuf::internal::LogMessage_0 *v122; // rax
  google::protobuf::internal::LogMessage_0 *v123; // rax
  __int64 v124; // rax
  google::protobuf::internal::LogMessage_0 *v125; // rax
  int v126; // eax
  google::protobuf::internal::LogMessage_0 *v127; // rax
  google::protobuf::internal::LogMessage_0 *v128; // rax
  google::protobuf::internal::LogMessage_0 *v129; // rax
  google::protobuf::internal::LogMessage_0 *v130; // rax
  google::protobuf::internal::LogMessage_0 *v131; // rax
  google::protobuf::internal::LogMessage_0 *v132; // rax
  __int64 v133; // rax
  int v134; // eax
  google::protobuf::internal::LogMessage_0 *v135; // rax
  google::protobuf::internal::LogMessage_0 *v136; // rax
  google::protobuf::internal::LogMessage_0 *v137; // rax
  google::protobuf::internal::LogMessage_0 *v138; // rax
  google::protobuf::internal::LogMessage_0 *v139; // rax
  google::protobuf::internal::LogMessage_0 *v140; // rax
  int v141; // eax
  google::protobuf::internal::LogMessage_0 *v142; // rax
  google::protobuf::internal::LogMessage_0 *v143; // rax
  google::protobuf::internal::LogMessage_0 *v144; // rax
  google::protobuf::internal::LogMessage_0 *v145; // rax
  google::protobuf::internal::LogMessage_0 *v146; // rax
  google::protobuf::internal::LogMessage_0 *v147; // rax
  google::protobuf::internal::LogMessage_0 *v148; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v149; // rax
  __int64 allocated_size; // rdx
  int *v151; // rax
  __int64 v152; // rcx
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type **v153; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v154; // rax
  google::protobuf::internal::LogMessage_0 *v155; // rax
  google::protobuf::internal::LogMessage_0 *v156; // rax
  google::protobuf::internal::LogMessage_0 *v157; // rax
  google::protobuf::internal::LogMessage_0 *v158; // rax
  google::protobuf::internal::LogMessage_0 *v159; // rax
  google::protobuf::internal::LogMessage_0 *v160; // rax
  google::protobuf::internal::LogMessage_0 *v161; // rax
  google::protobuf::internal::LogMessage_0 *v162; // rax
  google::protobuf::internal::LogMessage_0 *v163; // rax
  google::protobuf::internal::LogMessage_0 *v164; // rax
  google::protobuf::internal::LogMessage_0 *v165; // rax
  google::protobuf::internal::LogMessage_0 *v166; // rax
  google::protobuf::internal::LogMessage_0 *v167; // rax
  google::protobuf::internal::LogMessage_0 *v168; // rax
  google::protobuf::internal::LogMessage_0 *v169; // rax
  google::protobuf::internal::LogMessage_0 *v170; // rax
  google::protobuf::internal::LogMessage_0 *v171; // rax
  google::protobuf::internal::LogMessage_0 *v172; // rax
  google::protobuf::internal::LogMessage_0 *v173; // rax
  google::protobuf::internal::LogMessage_0 *v174; // rax
  google::protobuf::internal::LogMessage_0 *v175; // rax
  google::protobuf::internal::LogMessage_0 *v176; // rax
  google::protobuf::internal::LogMessage_0 *v177; // rax
  google::protobuf::internal::LogMessage_0 *v178; // rax
  google::protobuf::internal::LogMessage_0 *v179; // rax
  google::protobuf::internal::LogMessage_0 *v180; // rax
  google::protobuf::internal::LogMessage_0 *v181; // rax
  google::protobuf::internal::LogMessage_0 *v182; // rax
  google::protobuf::internal::LogMessage_0 *v183; // rax
  google::protobuf::internal::LogMessage_0 *v184; // rax
  google::protobuf::internal::LogMessage_0 *v185; // rax
  google::protobuf::internal::LogMessage_0 *v186; // rax
  __int64 v187; // rax
  google::protobuf::internal::LogMessage_0 *v188; // rax
  google::protobuf::internal::LogMessage_0 *v189; // rax
  google::protobuf::internal::LogMessage_0 *v190; // rax
  google::protobuf::internal::LogMessage_0 *v191; // rax
  google::protobuf::internal::LogMessage_0 *v192; // rax
  google::protobuf::internal::LogMessage_0 *v193; // rax
  google::protobuf::internal::LogMessage_0 *v194; // rax
  void **v195; // rcx
  google::protobuf::internal::LogMessage_0 *v196; // rax
  google::protobuf::internal::LogMessage_0 *v197; // rax
  google::protobuf::internal::LogMessage_0 *v198; // rax
  google::protobuf::internal::LogMessage_0 *v199; // rax
  google::protobuf::internal::LogMessage_0 *v200; // rax
  google::protobuf::internal::LogMessage_0 *v201; // rax
  google::protobuf::internal::LogMessage_0 *v202; // rax
  google::protobuf::internal::LogMessage_0 *v203; // rax
  google::protobuf::internal::LogMessage_0 *v204; // rax
  google::protobuf::internal::LogMessage_0 *v205; // rax
  google::protobuf::internal::LogMessage_0 *v206; // rax
  google::protobuf::internal::LogMessage_0 *v207; // rax
  google::protobuf::internal::LogMessage_0 *v208; // rax
  google::protobuf::internal::LogMessage_0 *v209; // rax
  google::protobuf::internal::LogMessage_0 *v210; // rax
  google::protobuf::internal::LogMessage_0 *v211; // rax
  google::protobuf::internal::LogMessage_0 *v212; // rax
  google::protobuf::internal::LogMessage_0 *v213; // rax
  google::protobuf::Arena *arena; // rbx
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *AlignedAndAddCleanup; // rax
  google::protobuf::internal::LogMessage_0 *v216; // rax
  google::protobuf::internal::LogMessage_0 *v217; // rax
  google::protobuf::internal::LogMessage_0 *v218; // rax
  google::protobuf::internal::LogMessage_0 *v219; // rax
  google::protobuf::internal::LogMessage_0 *v220; // rax
  google::protobuf::internal::LogMessage_0 *v221; // rax
  google::protobuf::internal::LogMessage_0 *v222; // rax
  google::protobuf::internal::LogMessage_0 *v223; // rax
  google::protobuf::internal::LogMessage_0 *v224; // rax
  google::protobuf::internal::LogMessage_0 *v225; // rax
  google::protobuf::internal::LogMessage_0 *v226; // rax
  google::protobuf::internal::LogMessage_0 *v227; // rax
  google::protobuf::internal::LogMessage_0 *v228; // rax
  google::protobuf::internal::LogMessage_0 *v229; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v230; // rdx
  google::protobuf::internal::LogMessage_0 *v231; // rax
  google::protobuf::internal::LogMessage_0 *v232; // rax
  google::protobuf::internal::LogMessage_0 *v233; // rax
  google::protobuf::internal::LogMessage_0 *v234; // rax
  google::protobuf::internal::LogMessage_0 *v235; // rax
  google::protobuf::internal::LogMessage_0 *v236; // rax
  google::protobuf::internal::LogMessage_0 *v237; // rax
  google::protobuf::internal::LogMessage_0 *v238; // rax
  google::protobuf::internal::LogMessage_0 *v239; // rax
  google::protobuf::internal::LogMessage_0 *v240; // rax
  google::protobuf::internal::LogMessage_0 *v241; // rax
  google::protobuf::internal::LogMessage_0 *v242; // rax
  google::protobuf::internal::LogMessage_0 *v243; // rax
  google::protobuf::internal::LogMessage_0 *v244; // rax
  google::protobuf::internal::LogMessage_0 *v245; // rax
  google::protobuf::internal::LogMessage_0 *v246; // rax
  google::protobuf::internal::LogMessage_0 *v247; // rax
  google::protobuf::internal::LogMessage_0 *v248; // rax
  __int64 v249; // rax
  google::protobuf::FieldDescriptor *FieldByName; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v251; // [rsp+10h] [rbp-E8h]
  google::protobuf::Arena *my_arenag; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arena; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arenaa; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arenab; // [rsp+18h] [rbp-E0h]
  google::protobuf::internal::LogMessage_0 *my_arenac; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arenad; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arenae; // [rsp+18h] [rbp-E0h]
  google::protobuf::Arena *my_arenaf; // [rsp+18h] [rbp-E0h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v260; // [rsp+20h] [rbp-D8h]
  google::protobuf::internal::LogMessage_0 *v261; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v262; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v263; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v264; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v265; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v266; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v267; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v268; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v269; // [rsp+28h] [rbp-D0h]
  google::protobuf::internal::LogFinisher v270; // [rsp+3Fh] [rbp-B9h] BYREF
  google::protobuf::internal::LogMessage_0 v271; // [rsp+40h] [rbp-B8h] BYREF
  google::protobuf::internal::LogMessage_0 key[2]; // [rsp+80h] [rbp-78h] BYREF

  default_entry = this->default_entry_;
  v3 = (__int64 (*)(void))*((_QWORD *)default_entry->_vptr_MessageLite + 23);
  if ( (char *)v3 == (char *)google::protobuf::Message::GetReflection )
  {
    (*((void (**)(void))default_entry->_vptr_MessageLite + 24))();
    v5 = v4;
  }
  else
  {
    v5 = v3();
  }
  v6 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))this->default_entry_->_vptr_MessageLite
                                              + 24))(this->default_entry_);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  key[0].line_ = 7955819;
  key[0].filename_ = (const char *)3;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v6,
                                                       (const std::string *)key);
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  v7 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))this->default_entry_->_vptr_MessageLite
                                              + 24))(this->default_entry_);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  strcpy((char *)&key[0].line_, "value");
  key[0].filename_ = (const char *)5;
  v8 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v7, (const std::string *)key);
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  repeated_field = this->repeated_field_;
  if ( repeated_field )
  {
    current_size = repeated_field->current_size_;
    if ( current_size > 0 )
    {
      rep = repeated_field->rep_;
      elements = rep->elements;
      v13 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
      do
      {
        v14 = (__int64)*elements++;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
      }
      while ( (void **)v13 != elements );
      repeated_field->current_size_ = 0;
    }
  }
  else
  {
    arena = this->arena_;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          this->arena_,
          (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::Message>,
          0x18uLL);
      AlignedAndAddCleanup = (google::protobuf::RepeatedPtrField<google::protobuf::Message> *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                                &arena->impl_,
                                                                                                0x18uLL,
                                                                                                google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::Message>>);
      AlignedAndAddCleanup->arena_ = arena;
      *(_QWORD *)&AlignedAndAddCleanup->current_size_ = 0LL;
      AlignedAndAddCleanup->rep_ = 0LL;
      this->repeated_field_ = AlignedAndAddCleanup;
    }
    else
    {
      v249 = operator new(0x18uLL);
      *(_QWORD *)(v249 + 8) = 0LL;
      *(_QWORD *)(v249 + 16) = 0LL;
      *(_QWORD *)v249 = 0LL;
      this->repeated_field_ = (google::protobuf::RepeatedPtrField<google::protobuf::Message> *)v249;
    }
  }
  result = this->map_.elements_;
  index_of_first_non_null = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)result->index_of_first_non_null_;
  num_buckets = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)result->num_buckets_;
  v260 = result;
  key[0].filename_ = (const char *)result;
  v251 = (unsigned __int64)index_of_first_non_null;
  if ( num_buckets > index_of_first_non_null )
  {
    result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)result->table_;
    while ( 1 )
    {
      v18 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)*(&result->num_elements_ + v251);
      if ( v18 )
        break;
      if ( num_buckets == (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)++v251 )
        return result;
    }
    if ( v18 != *((google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap **)&result->num_elements_
                + (v251 ^ 1))
      || (result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v18->table_,
          (v18 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)result->table_) != 0LL) )
    {
      while ( 2 )
      {
        v19 = (google::protobuf::Message *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))this->default_entry_->_vptr_MessageLite
                                            + 3))(this->default_entry_);
        v20 = this->repeated_field_;
        v21 = v19;
        if ( v20->arena_ == google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetMaybeArenaPointer(v19)
          && (v149 = v20->rep_) != 0LL
          && (allocated_size = v149->allocated_size, (int)allocated_size < v20->total_size_) )
        {
          v151 = (int *)v149->elements;
          v152 = v20->current_size_;
          v153 = (google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type **)&v151[2 * v152];
          if ( (int)allocated_size > (int)v152 )
            *(_QWORD *)&v151[2 * allocated_size] = *v153;
          *v153 = v21;
          v154 = v20->rep_;
          v20->current_size_ = v152 + 1;
          ++v154->allocated_size;
        }
        else
        {
          my_arenag = v20->arena_;
          v22 = google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::GetArena(v21);
          google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
            v20,
            v21,
            v22,
            my_arenag);
        }
        seed = (unsigned int *)v18->seed_;
        switch ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByName) )
        {
          case 1u:
          case 2u:
          case 0xAu:
          case 0xBu:
          case 0xEu:
            google::protobuf::internal::LogMessage::LogMessage(
              key,
              LOGLEVEL_FATAL_0,
              "google/protobuf/map_field.cc",
              284);
            v24 = google::protobuf::internal::LogMessage::operator<<(
                    key,
                    (const char *)&stru_1A17003B.lowercase_name_ + 3);
            google::protobuf::internal::LogFinisher::operator=(
              (google::protobuf::internal::LogFinisher *const)&v271,
              v24);
            google::protobuf::internal::LogMessage::~LogMessage(key);
            break;
          case 3u:
          case 0x10u:
          case 0x12u:
            my_arena = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 240LL);
            v29 = seed[2];
            if ( !v29 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v196 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v197 = google::protobuf::internal::LogMessage::operator<<(
                       v196,
                       "MapKey::type MapKey is not initialized. ");
              v198 = google::protobuf::internal::LogMessage::operator<<(v197, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v198);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v29 = seed[2];
            }
            if ( v29 == 2 )
              goto LABEL_24;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              403);
            v30 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v31 = google::protobuf::internal::LogMessage::operator<<(v30, "MapKey::GetInt64Value");
            v32 = google::protobuf::internal::LogMessage::operator<<(v31, " type does not match\n");
            v33 = google::protobuf::internal::LogMessage::operator<<(v32, "  Expected : ");
            v34 = google::protobuf::internal::LogMessage::operator<<(
                    v33,
                    google::protobuf::FieldDescriptor::kCppTypeToName[2]);
            v35 = google::protobuf::internal::LogMessage::operator<<(v34, "\n");
            v261 = google::protobuf::internal::LogMessage::operator<<(v35, "  Actual   : ");
            v36 = (int)seed[2];
            if ( !(_DWORD)v36 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v234 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v235 = google::protobuf::internal::LogMessage::operator<<(
                       v234,
                       "MapKey::type MapKey is not initialized. ");
              v236 = google::protobuf::internal::LogMessage::operator<<(v235, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(&v270, v236);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v36 = (int)seed[2];
            }
            goto LABEL_46;
          case 4u:
          case 6u:
            my_arena = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 256LL);
            v26 = seed[2];
            if ( !v26 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v211 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v212 = google::protobuf::internal::LogMessage::operator<<(
                       v211,
                       "MapKey::type MapKey is not initialized. ");
              v213 = google::protobuf::internal::LogMessage::operator<<(v212, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v213);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v26 = seed[2];
            }
            if ( v26 == 4 )
              goto LABEL_24;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              408);
            v189 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v190 = google::protobuf::internal::LogMessage::operator<<(v189, "MapKey::GetUInt64Value");
            v191 = google::protobuf::internal::LogMessage::operator<<(v190, " type does not match\n");
            v192 = google::protobuf::internal::LogMessage::operator<<(v191, "  Expected : ");
            v193 = google::protobuf::internal::LogMessage::operator<<(
                     v192,
                     google::protobuf::FieldDescriptor::kCppTypeToName[4]);
            v194 = google::protobuf::internal::LogMessage::operator<<(v193, "\n");
            v261 = google::protobuf::internal::LogMessage::operator<<(v194, "  Actual   : ");
            v36 = (int)seed[2];
            if ( !(_DWORD)v36 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v243 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v244 = google::protobuf::internal::LogMessage::operator<<(
                       v243,
                       "MapKey::type MapKey is not initialized. ");
              v245 = google::protobuf::internal::LogMessage::operator<<(v244, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(&v270, v245);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v36 = (int)seed[2];
            }
            goto LABEL_46;
          case 5u:
          case 0xFu:
          case 0x11u:
            my_arenaa = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 232LL);
            v37 = seed[2];
            if ( !v37 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v208 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v209 = google::protobuf::internal::LogMessage::operator<<(
                       v208,
                       "MapKey::type MapKey is not initialized. ");
              v210 = google::protobuf::internal::LogMessage::operator<<(v209, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v210);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v37 = seed[2];
            }
            if ( v37 == 1 )
              goto LABEL_28;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              413);
            v38 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v39 = google::protobuf::internal::LogMessage::operator<<(v38, "MapKey::GetInt32Value");
            v40 = google::protobuf::internal::LogMessage::operator<<(v39, " type does not match\n");
            v41 = google::protobuf::internal::LogMessage::operator<<(v40, "  Expected : ");
            v42 = google::protobuf::internal::LogMessage::operator<<(
                    v41,
                    google::protobuf::FieldDescriptor::kCppTypeToName[1]);
            v43 = google::protobuf::internal::LogMessage::operator<<(v42, "\n");
            v262 = google::protobuf::internal::LogMessage::operator<<(v43, "  Actual   : ");
            v44 = (int)seed[2];
            if ( !(_DWORD)v44 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v237 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v238 = google::protobuf::internal::LogMessage::operator<<(
                       v237,
                       "MapKey::type MapKey is not initialized. ");
              v239 = google::protobuf::internal::LogMessage::operator<<(v238, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(&v270, v239);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v44 = (int)seed[2];
            }
            goto LABEL_40;
          case 7u:
          case 0xDu:
            my_arenaa = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 248LL);
            v27 = seed[2];
            if ( !v27 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v202 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v203 = google::protobuf::internal::LogMessage::operator<<(
                       v202,
                       "MapKey::type MapKey is not initialized. ");
              v204 = google::protobuf::internal::LogMessage::operator<<(v203, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v204);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v27 = seed[2];
            }
            if ( v27 == 3 )
            {
LABEL_28:
              v28 = *seed;
            }
            else
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                418);
              v155 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v156 = google::protobuf::internal::LogMessage::operator<<(v155, "MapKey::GetUInt32Value");
              v157 = google::protobuf::internal::LogMessage::operator<<(v156, " type does not match\n");
              v158 = google::protobuf::internal::LogMessage::operator<<(v157, "  Expected : ");
              v159 = google::protobuf::internal::LogMessage::operator<<(
                       v158,
                       google::protobuf::FieldDescriptor::kCppTypeToName[3]);
              v160 = google::protobuf::internal::LogMessage::operator<<(v159, "\n");
              v262 = google::protobuf::internal::LogMessage::operator<<(v160, "  Actual   : ");
              v44 = (int)seed[2];
              if ( !(_DWORD)v44 )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  369);
                v231 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v232 = google::protobuf::internal::LogMessage::operator<<(
                         v231,
                         "MapKey::type MapKey is not initialized. ");
                v233 = google::protobuf::internal::LogMessage::operator<<(
                         v232,
                         "Call set methods to initialize MapKey.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v233);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v44 = (int)seed[2];
              }
LABEL_40:
              v45 = google::protobuf::internal::LogMessage::operator<<(
                      v262,
                      google::protobuf::FieldDescriptor::kCppTypeToName[v44]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v45);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
              v28 = *seed;
            }
LABEL_51:
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, __int64))my_arenaa)(
              v5,
              v21,
              FieldByName,
              v28);
            break;
          case 8u:
            my_arenaa = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 280LL);
            v54 = seed[2];
            if ( !v54 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v199 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v200 = google::protobuf::internal::LogMessage::operator<<(
                       v199,
                       "MapKey::type MapKey is not initialized. ");
              v201 = google::protobuf::internal::LogMessage::operator<<(v200, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v201);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v54 = seed[2];
            }
            if ( v54 != 7 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                423);
              v181 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v182 = google::protobuf::internal::LogMessage::operator<<(v181, "MapKey::GetBoolValue");
              v183 = google::protobuf::internal::LogMessage::operator<<(v182, " type does not match\n");
              v184 = google::protobuf::internal::LogMessage::operator<<(v183, "  Expected : ");
              v185 = google::protobuf::internal::LogMessage::operator<<(
                       v184,
                       google::protobuf::FieldDescriptor::kCppTypeToName[7]);
              v186 = google::protobuf::internal::LogMessage::operator<<(v185, "\n");
              v269 = google::protobuf::internal::LogMessage::operator<<(v186, "  Actual   : ");
              v187 = (int)seed[2];
              if ( !(_DWORD)v187 )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  369);
                v246 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v247 = google::protobuf::internal::LogMessage::operator<<(
                         v246,
                         "MapKey::type MapKey is not initialized. ");
                v248 = google::protobuf::internal::LogMessage::operator<<(
                         v247,
                         "Call set methods to initialize MapKey.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v248);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v187 = (int)seed[2];
              }
              v188 = google::protobuf::internal::LogMessage::operator<<(
                       v269,
                       google::protobuf::FieldDescriptor::kCppTypeToName[v187]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v188);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            v28 = *(unsigned __int8 *)seed;
            goto LABEL_51;
          case 9u:
          case 0xCu:
            my_arena = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 288LL);
            v46 = seed[2];
            if ( !v46 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v205 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v206 = google::protobuf::internal::LogMessage::operator<<(
                       v205,
                       "MapKey::type MapKey is not initialized. ");
              v207 = google::protobuf::internal::LogMessage::operator<<(v206, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v207);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v46 = seed[2];
            }
            if ( v46 == 9 )
              goto LABEL_24;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              428);
            v47 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v48 = google::protobuf::internal::LogMessage::operator<<(v47, "MapKey::GetStringValue");
            v49 = google::protobuf::internal::LogMessage::operator<<(v48, " type does not match\n");
            v50 = google::protobuf::internal::LogMessage::operator<<(v49, "  Expected : ");
            v51 = google::protobuf::internal::LogMessage::operator<<(
                    v50,
                    google::protobuf::FieldDescriptor::kCppTypeToName[9]);
            v52 = google::protobuf::internal::LogMessage::operator<<(v51, "\n");
            v261 = google::protobuf::internal::LogMessage::operator<<(v52, "  Actual   : ");
            v36 = (int)seed[2];
            if ( !(_DWORD)v36 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                369);
              v240 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v241 = google::protobuf::internal::LogMessage::operator<<(
                       v240,
                       "MapKey::type MapKey is not initialized. ");
              v242 = google::protobuf::internal::LogMessage::operator<<(v241, "Call set methods to initialize MapKey.");
              google::protobuf::internal::LogFinisher::operator=(&v270, v242);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v36 = (int)seed[2];
            }
LABEL_46:
            v53 = google::protobuf::internal::LogMessage::operator<<(
                    v261,
                    google::protobuf::FieldDescriptor::kCppTypeToName[v36]);
            google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v53);
            google::protobuf::internal::LogMessage::~LogMessage(&v271);
LABEL_24:
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, _QWORD))my_arena)(
              v5,
              v21,
              FieldByName,
              *(_QWORD *)seed);
            break;
          default:
            break;
        }
        v25 = v18->seed_;
        switch ( (unsigned int)google::protobuf::FieldDescriptor::type(v8) )
        {
          case 1u:
            my_arenaf = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 272LL);
            v117 = *(_DWORD *)(v25 + 24);
            if ( !v117 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v169 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v170 = google::protobuf::internal::LogMessage::operator<<(
                       v169,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v170);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v117 = *(_DWORD *)(v25 + 24);
            }
            if ( v117 != 5 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                645);
              v118 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v119 = google::protobuf::internal::LogMessage::operator<<(v118, "MapValueRef::GetDoubleValue");
              v120 = google::protobuf::internal::LogMessage::operator<<(v119, " type does not match\n");
              v121 = google::protobuf::internal::LogMessage::operator<<(v120, "  Expected : ");
              v122 = google::protobuf::internal::LogMessage::operator<<(
                       v121,
                       google::protobuf::FieldDescriptor::kCppTypeToName[5]);
              v123 = google::protobuf::internal::LogMessage::operator<<(v122, "\n");
              v267 = google::protobuf::internal::LogMessage::operator<<(v123, "  Actual   : ");
              v124 = *(int *)(v25 + 24);
              if ( !(_DWORD)v124 || !*(_QWORD *)(v25 + 16) )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  680);
                v224 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v225 = google::protobuf::internal::LogMessage::operator<<(
                         v224,
                         "MapValueRef::type MapValueRef is not initialized.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v225);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v124 = *(int *)(v25 + 24);
              }
              v125 = google::protobuf::internal::LogMessage::operator<<(
                       v267,
                       google::protobuf::FieldDescriptor::kCppTypeToName[v124]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v125);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, double))my_arenaf)(
              v5,
              v21,
              v8,
              **(double **)(v25 + 16));
            goto LABEL_65;
          case 2u:
            my_arenae = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 264LL);
            v108 = *(_DWORD *)(v25 + 24);
            if ( !v108 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v177 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v178 = google::protobuf::internal::LogMessage::operator<<(
                       v177,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v178);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v108 = *(_DWORD *)(v25 + 24);
            }
            if ( v108 != 6 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                640);
              v109 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v110 = google::protobuf::internal::LogMessage::operator<<(v109, "MapValueRef::GetFloatValue");
              v111 = google::protobuf::internal::LogMessage::operator<<(v110, " type does not match\n");
              v112 = google::protobuf::internal::LogMessage::operator<<(v111, "  Expected : ");
              v113 = google::protobuf::internal::LogMessage::operator<<(
                       v112,
                       google::protobuf::FieldDescriptor::kCppTypeToName[6]);
              v114 = google::protobuf::internal::LogMessage::operator<<(v113, "\n");
              v266 = google::protobuf::internal::LogMessage::operator<<(v114, "  Actual   : ");
              v115 = *(int *)(v25 + 24);
              if ( !(_DWORD)v115 || !*(_QWORD *)(v25 + 16) )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  680);
                v218 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v219 = google::protobuf::internal::LogMessage::operator<<(
                         v218,
                         "MapValueRef::type MapValueRef is not initialized.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v219);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v115 = *(int *)(v25 + 24);
              }
              v116 = google::protobuf::internal::LogMessage::operator<<(
                       v266,
                       google::protobuf::FieldDescriptor::kCppTypeToName[v115]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v116);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, float))my_arenae)(
              v5,
              v21,
              v8,
              **(float **)(v25 + 16));
            goto LABEL_65;
          case 3u:
          case 0x10u:
          case 0x12u:
            my_arenad = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 240LL);
            v141 = *(_DWORD *)(v25 + 24);
            if ( !v141 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v179 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v180 = google::protobuf::internal::LogMessage::operator<<(
                       v179,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v180);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v141 = *(_DWORD *)(v25 + 24);
            }
            if ( v141 == 2 )
              goto LABEL_133;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              605);
            v142 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v143 = google::protobuf::internal::LogMessage::operator<<(v142, "MapValueRef::GetInt64Value");
            v144 = google::protobuf::internal::LogMessage::operator<<(v143, " type does not match\n");
            v145 = google::protobuf::internal::LogMessage::operator<<(v144, "  Expected : ");
            v146 = google::protobuf::internal::LogMessage::operator<<(
                     v145,
                     google::protobuf::FieldDescriptor::kCppTypeToName[2]);
            v147 = google::protobuf::internal::LogMessage::operator<<(v146, "\n");
            v268 = google::protobuf::internal::LogMessage::operator<<(v147, "  Actual   : ");
            v133 = *(int *)(v25 + 24);
            if ( (_DWORD)v133 && *(_QWORD *)(v25 + 16) )
              goto LABEL_132;
            goto LABEL_185;
          case 4u:
          case 6u:
            my_arenad = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 256LL);
            v126 = *(_DWORD *)(v25 + 24);
            if ( !v126 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v171 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v172 = google::protobuf::internal::LogMessage::operator<<(
                       v171,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v172);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v126 = *(_DWORD *)(v25 + 24);
            }
            if ( v126 == 4 )
              goto LABEL_133;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              610);
            v127 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v128 = google::protobuf::internal::LogMessage::operator<<(v127, "MapValueRef::GetUInt64Value");
            v129 = google::protobuf::internal::LogMessage::operator<<(v128, " type does not match\n");
            v130 = google::protobuf::internal::LogMessage::operator<<(v129, "  Expected : ");
            v131 = google::protobuf::internal::LogMessage::operator<<(
                     v130,
                     google::protobuf::FieldDescriptor::kCppTypeToName[4]);
            v132 = google::protobuf::internal::LogMessage::operator<<(v131, "\n");
            v268 = google::protobuf::internal::LogMessage::operator<<(v132, "  Actual   : ");
            v133 = *(int *)(v25 + 24);
            if ( (_DWORD)v133 && *(_QWORD *)(v25 + 16) )
              goto LABEL_132;
LABEL_185:
            google::protobuf::internal::LogMessage::LogMessage(
              key,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              680);
            v228 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
            v229 = google::protobuf::internal::LogMessage::operator<<(
                     v228,
                     "MapValueRef::type MapValueRef is not initialized.");
            google::protobuf::internal::LogFinisher::operator=(&v270, v229);
            google::protobuf::internal::LogMessage::~LogMessage(key);
            v133 = *(int *)(v25 + 24);
LABEL_132:
            v148 = google::protobuf::internal::LogMessage::operator<<(
                     v268,
                     google::protobuf::FieldDescriptor::kCppTypeToName[v133]);
            google::protobuf::internal::LogFinisher::operator=(
              (google::protobuf::internal::LogFinisher *const)key,
              v148);
            google::protobuf::internal::LogMessage::~LogMessage(&v271);
LABEL_133:
            v83 = **(_QWORD **)(v25 + 16);
LABEL_134:
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, __int64))my_arenad)(
              v5,
              v21,
              v8,
              v83);
LABEL_65:
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v18->index_of_first_non_null_;
            if ( result )
              goto LABEL_66;
            goto LABEL_82;
          case 5u:
          case 0xFu:
          case 0x11u:
            my_arenab = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 232LL);
            v55 = *(_DWORD *)(v25 + 24);
            if ( !v55 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v163 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v164 = google::protobuf::internal::LogMessage::operator<<(
                       v163,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v164);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v55 = *(_DWORD *)(v25 + 24);
            }
            if ( v55 == 1 )
              goto LABEL_80;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              615);
            v56 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v57 = google::protobuf::internal::LogMessage::operator<<(v56, "MapValueRef::GetInt32Value");
            v58 = google::protobuf::internal::LogMessage::operator<<(v57, " type does not match\n");
            v59 = google::protobuf::internal::LogMessage::operator<<(v58, "  Expected : ");
            v60 = google::protobuf::internal::LogMessage::operator<<(
                    v59,
                    google::protobuf::FieldDescriptor::kCppTypeToName[1]);
            v61 = google::protobuf::internal::LogMessage::operator<<(v60, "\n");
            v263 = google::protobuf::internal::LogMessage::operator<<(v61, "  Actual   : ");
            v62 = *(int *)(v25 + 24);
            if ( (_DWORD)v62 && *(_QWORD *)(v25 + 16) )
              goto LABEL_79;
            goto LABEL_184;
          case 7u:
          case 0xDu:
            my_arenab = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 248LL);
            v134 = *(_DWORD *)(v25 + 24);
            if ( !v134 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v167 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v168 = google::protobuf::internal::LogMessage::operator<<(
                       v167,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v168);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v134 = *(_DWORD *)(v25 + 24);
            }
            if ( v134 == 3 )
              goto LABEL_80;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              620);
            v135 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v136 = google::protobuf::internal::LogMessage::operator<<(v135, "MapValueRef::GetUInt32Value");
            v137 = google::protobuf::internal::LogMessage::operator<<(v136, " type does not match\n");
            v138 = google::protobuf::internal::LogMessage::operator<<(v137, "  Expected : ");
            v139 = google::protobuf::internal::LogMessage::operator<<(
                     v138,
                     google::protobuf::FieldDescriptor::kCppTypeToName[3]);
            v140 = google::protobuf::internal::LogMessage::operator<<(v139, "\n");
            v263 = google::protobuf::internal::LogMessage::operator<<(v140, "  Actual   : ");
            v62 = *(int *)(v25 + 24);
            if ( (_DWORD)v62 && *(_QWORD *)(v25 + 16) )
              goto LABEL_79;
            goto LABEL_184;
          case 8u:
            my_arenab = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 280LL);
            v99 = *(_DWORD *)(v25 + 24);
            if ( !v99 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v173 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v174 = google::protobuf::internal::LogMessage::operator<<(
                       v173,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v174);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v99 = *(_DWORD *)(v25 + 24);
            }
            if ( v99 != 7 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                625);
              v100 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v101 = google::protobuf::internal::LogMessage::operator<<(v100, "MapValueRef::GetBoolValue");
              v102 = google::protobuf::internal::LogMessage::operator<<(v101, " type does not match\n");
              v103 = google::protobuf::internal::LogMessage::operator<<(v102, "  Expected : ");
              v104 = google::protobuf::internal::LogMessage::operator<<(
                       v103,
                       google::protobuf::FieldDescriptor::kCppTypeToName[7]);
              v105 = google::protobuf::internal::LogMessage::operator<<(v104, "\n");
              v265 = google::protobuf::internal::LogMessage::operator<<(v105, "  Actual   : ");
              v106 = *(int *)(v25 + 24);
              if ( !(_DWORD)v106 || !*(_QWORD *)(v25 + 16) )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  680);
                v220 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v221 = google::protobuf::internal::LogMessage::operator<<(
                         v220,
                         "MapValueRef::type MapValueRef is not initialized.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v221);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v106 = *(int *)(v25 + 24);
              }
              v107 = google::protobuf::internal::LogMessage::operator<<(
                       v265,
                       google::protobuf::FieldDescriptor::kCppTypeToName[v106]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v107);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            v92 = **(unsigned __int8 **)(v25 + 16);
            goto LABEL_81;
          case 9u:
          case 0xCu:
            my_arenad = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 288LL);
            v74 = *(_DWORD *)(v25 + 24);
            if ( !v74 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v175 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v176 = google::protobuf::internal::LogMessage::operator<<(
                       v175,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v176);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v74 = *(_DWORD *)(v25 + 24);
            }
            if ( v74 != 9 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                635);
              v75 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v76 = google::protobuf::internal::LogMessage::operator<<(v75, "MapValueRef::GetStringValue");
              v77 = google::protobuf::internal::LogMessage::operator<<(v76, " type does not match\n");
              v78 = google::protobuf::internal::LogMessage::operator<<(v77, "  Expected : ");
              v79 = google::protobuf::internal::LogMessage::operator<<(
                      v78,
                      google::protobuf::FieldDescriptor::kCppTypeToName[9]);
              v80 = google::protobuf::internal::LogMessage::operator<<(v79, "\n");
              v264 = google::protobuf::internal::LogMessage::operator<<(v80, "  Actual   : ");
              v81 = *(int *)(v25 + 24);
              if ( !(_DWORD)v81 || !*(_QWORD *)(v25 + 16) )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  680);
                v222 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v223 = google::protobuf::internal::LogMessage::operator<<(
                         v222,
                         "MapValueRef::type MapValueRef is not initialized.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v223);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v81 = *(int *)(v25 + 24);
              }
              v82 = google::protobuf::internal::LogMessage::operator<<(
                      v264,
                      google::protobuf::FieldDescriptor::kCppTypeToName[v81]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v82);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            v83 = *(_QWORD *)(v25 + 16);
            goto LABEL_134;
          case 0xAu:
          case 0xBu:
            v63 = *(_DWORD *)(v25 + 24);
            if ( !v63 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v165 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v166 = google::protobuf::internal::LogMessage::operator<<(
                       v165,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v166);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v63 = *(_DWORD *)(v25 + 24);
            }
            if ( v63 != 10 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                &v271,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                651);
              v64 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
              v65 = google::protobuf::internal::LogMessage::operator<<(v64, "MapValueRef::GetMessageValue");
              v66 = google::protobuf::internal::LogMessage::operator<<(v65, " type does not match\n");
              v67 = google::protobuf::internal::LogMessage::operator<<(v66, "  Expected : ");
              v68 = google::protobuf::internal::LogMessage::operator<<(
                      v67,
                      google::protobuf::FieldDescriptor::kCppTypeToName[10]);
              v69 = google::protobuf::internal::LogMessage::operator<<(v68, "\n");
              my_arenac = google::protobuf::internal::LogMessage::operator<<(v69, "  Actual   : ");
              v70 = *(int *)(v25 + 24);
              if ( !(_DWORD)v70 || !*(_QWORD *)(v25 + 16) )
              {
                google::protobuf::internal::LogMessage::LogMessage(
                  key,
                  LOGLEVEL_FATAL_0,
                  "./google/protobuf/map_field.h",
                  680);
                v216 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
                v217 = google::protobuf::internal::LogMessage::operator<<(
                         v216,
                         "MapValueRef::type MapValueRef is not initialized.");
                google::protobuf::internal::LogFinisher::operator=(&v270, v217);
                google::protobuf::internal::LogMessage::~LogMessage(key);
                v70 = *(int *)(v25 + 24);
              }
              v71 = google::protobuf::internal::LogMessage::operator<<(
                      my_arenac,
                      google::protobuf::FieldDescriptor::kCppTypeToName[v70]);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)key,
                v71);
              google::protobuf::internal::LogMessage::~LogMessage(&v271);
            }
            v72 = *(_QWORD *)(v25 + 16);
            v73 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v5 + 312LL))(
                    v5,
                    v21,
                    v8,
                    0LL);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 144LL))(v73, v72);
            goto LABEL_65;
          case 0xEu:
            my_arenab = *(google::protobuf::Arena **)(*(_QWORD *)v5 + 304LL);
            v84 = *(_DWORD *)(v25 + 24);
            if ( !v84 || !*(_QWORD *)(v25 + 16) )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                680);
              v161 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
              v162 = google::protobuf::internal::LogMessage::operator<<(
                       v161,
                       "MapValueRef::type MapValueRef is not initialized.");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v271,
                v162);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              v84 = *(_DWORD *)(v25 + 24);
            }
            if ( v84 == 8 )
              goto LABEL_80;
            google::protobuf::internal::LogMessage::LogMessage(
              &v271,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              630);
            v85 = google::protobuf::internal::LogMessage::operator<<(&v271, "Protocol Buffer map usage error:\n");
            v86 = google::protobuf::internal::LogMessage::operator<<(v85, aMapvalueref);
            v87 = google::protobuf::internal::LogMessage::operator<<(v86, " type does not match\n");
            v88 = google::protobuf::internal::LogMessage::operator<<(v87, "  Expected : ");
            v89 = google::protobuf::internal::LogMessage::operator<<(
                    v88,
                    google::protobuf::FieldDescriptor::kCppTypeToName[8]);
            v90 = google::protobuf::internal::LogMessage::operator<<(v89, "\n");
            v263 = google::protobuf::internal::LogMessage::operator<<(v90, "  Actual   : ");
            v62 = *(int *)(v25 + 24);
            if ( (_DWORD)v62 && *(_QWORD *)(v25 + 16) )
              goto LABEL_79;
LABEL_184:
            google::protobuf::internal::LogMessage::LogMessage(
              key,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              680);
            v226 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
            v227 = google::protobuf::internal::LogMessage::operator<<(
                     v226,
                     "MapValueRef::type MapValueRef is not initialized.");
            google::protobuf::internal::LogFinisher::operator=(&v270, v227);
            google::protobuf::internal::LogMessage::~LogMessage(key);
            v62 = *(int *)(v25 + 24);
LABEL_79:
            v91 = google::protobuf::internal::LogMessage::operator<<(
                    v263,
                    google::protobuf::FieldDescriptor::kCppTypeToName[v62]);
            google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v91);
            google::protobuf::internal::LogMessage::~LogMessage(&v271);
LABEL_80:
            v92 = **(unsigned int **)(v25 + 16);
LABEL_81:
            ((void (__fastcall *)(__int64, google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, google::protobuf::FieldDescriptor *, __int64))my_arenab)(
              v5,
              v21,
              v8,
              v92);
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v18->index_of_first_non_null_;
            if ( result )
              goto LABEL_66;
LABEL_82:
            *(_QWORD *)&v271.level_ = 0LL;
            v93 = v260->num_buckets_;
            table = v260->table_;
            v251 &= v93 - 1;
            v95 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)table[v251];
            if ( v18 == v95 )
              goto LABEL_164;
            if ( !v95 || v95 == table[v251 ^ 1] )
              goto LABEL_88;
            break;
          default:
            goto LABEL_65;
        }
        while ( 1 )
        {
          v95 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v95->index_of_first_non_null_;
          if ( !v95 )
            break;
          if ( v18 == v95 )
            goto LABEL_164;
        }
LABEL_88:
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
          (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)key,
          v260,
          (const google::protobuf::MapKey *)v18,
          (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator *)&v271);
        v96 = v260->table_;
        v97 = (char *)v96[*(_QWORD *)&key[0].line_];
        v251 = *(_QWORD *)&key[0].line_;
        if ( v97 && v97 == v96[*(_QWORD *)&key[0].line_ ^ 1LL] )
        {
          v98 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap **)std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)&v271.level_);
          *(_QWORD *)&v271.level_ = v98;
          if ( v98 != (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap **)(v97 + 16) )
          {
            result = v98[4];
            goto LABEL_92;
          }
          v251 += 2LL;
          result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v251;
          v230 = v260->num_buckets_;
          if ( v230 <= v251 )
            return result;
          while ( 1 )
          {
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v96[v251];
            if ( result )
              break;
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)++v251;
            if ( v230 <= v251 )
              return result;
          }
          if ( result == v96[v251 ^ 1] )
          {
LABEL_168:
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)*((_QWORD *)result->table_ + 4);
LABEL_92:
            if ( !result )
              return result;
          }
        }
        else
        {
          v93 = v260->num_buckets_;
LABEL_164:
          result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)++v251;
          if ( v93 <= v251 )
            return result;
          v195 = v260->table_;
          while ( 1 )
          {
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)v195[v251];
            if ( result )
              break;
            result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)++v251;
            if ( v93 <= v251 )
              return result;
          }
          if ( result == v195[v251 ^ 1] )
            goto LABEL_168;
        }
LABEL_66:
        v18 = result;
        continue;
      }
    }
  }
  return result;
};

// Line 325: range 000000000C8B4720-000000000C8B6079
google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *__fastcall google::protobuf::internal::DynamicMapField::SyncMapWithRepeatedFieldNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *p_map; // rax
  google::protobuf::internal::DynamicMapField *v2; // rbx
  const google::protobuf::Message *default_entry; // rdi
  const google::protobuf::Message::Reflection *(__fastcall *v4)(const google::protobuf::Message *const); // rdx
  __int64 v5; // rdx
  __int64 v6; // r12
  const google::protobuf::Descriptor *v7; // rax
  const google::protobuf::Descriptor *v8; // rax
  google::protobuf::FieldDescriptor *v9; // r13
  const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *elements; // rbp
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type index_of_first_non_null; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rcx
  void **table; // rax
  char *int64_value; // r15
  __int64 v15; // rax
  void *v16; // rdi
  google::protobuf::MapKey::KeyValue v17; // rax
  void *v18; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v19; // rdx
  void **v20; // rcx
  char *v21; // rax
  void **v22; // rbx
  char *v23; // r15
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v24; // rax
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *v26; // rcx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *result; // rax
  void **v30; // rbx
  __int64 v31; // rdi
  void *v32; // rdi
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::uint64 space_allocated; // rax
  void *v35; // rdi
  int type; // eax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v37; // r15
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *node; // r14
  google::protobuf::MapValueRef *v; // rbp
  void *v41; // rdi
  google::protobuf::MapKey::KeyValue v42; // rbp
  google::protobuf::int32 v43; // ebp
  google::protobuf::MapKey::KeyValue v44; // rdi
  char v45; // bp
  __int64 v46; // rax
  google::protobuf::Arena *v47; // r15
  google::protobuf::Arena **v48; // r14
  google::protobuf::Arena *v49; // rdi
  google::protobuf::Arena *v50; // rdx
  google::protobuf::Arena *v51; // rcx
  google::protobuf::Arena *v52; // rsi
  _DWORD *v53; // r14
  int v54; // eax
  _BYTE *v55; // r14
  float *v56; // r14
  double *v57; // r14
  __int64 *v58; // r14
  __int64 v59; // rax
  __int64 v60; // r15
  google::protobuf::internal::LogMessage_0 *v61; // rax
  google::protobuf::internal::LogMessage_0 *v62; // rax
  google::protobuf::internal::LogMessage_0 *v63; // rax
  int v64; // ebp
  void *v65; // r14
  google::protobuf::MapKey::KeyValue v66; // rax
  google::protobuf::internal::ArenaImpl *v67; // rbp
  google::protobuf::MapKey *v68; // rax
  google::protobuf::Arena *v69; // rdi
  google::protobuf::Arena *v70; // rdi
  int v71; // r15d
  int v72; // eax
  unsigned __int64 v73; // rsi
  size_t v74; // r8
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rdi
  google::protobuf::internal::ArenaImpl *p_impl; // rbp
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *Aligned; // rax
  int v79; // ebp
  google::protobuf::internal::LogMessage_0 *v80; // rax
  google::protobuf::internal::LogMessage_0 *v81; // rax
  void **v82; // rsi
  std::_Rb_tree_node<google::protobuf::MapKey*> **v83; // rcx
  std::_Rb_tree_node<google::protobuf::MapKey*> *v84; // rdx
  std::_Rb_tree_node<google::protobuf::MapKey*> *M_right; // rbp
  unsigned __int64 v86; // rax
  void *v87; // rdi
  void **v88; // rbp
  __int64 v89; // rdi
  google::protobuf::internal::LogMessage_0 *v90; // rax
  google::protobuf::internal::LogMessage_0 *v91; // rax
  google::protobuf::internal::LogMessage_0 *v92; // rax
  int v93; // eax
  void **v94; // r8
  google::protobuf::MapKey::KeyValue v95; // rax
  void **v96; // rcx
  unsigned __int64 v97; // rax
  google::protobuf::MapValueRef *v98; // rax
  int v99; // r15d
  google::protobuf::internal::LogMessage_0 *v100; // rax
  google::protobuf::internal::LogMessage_0 *v101; // rax
  google::protobuf::internal::LogMessage_0 *v102; // rax
  google::protobuf::internal::LogMessage_0 *v103; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v104; // rdi
  void *v105; // r14
  void *v106; // r14
  void *v107; // r14
  void *v108; // r14
  void *v109; // r14
  void **v110; // r8
  _BYTE *v111; // rax
  google::protobuf::MapKey::KeyValue v112; // rax
  google::protobuf::int32 int32_value; // eax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v114; // rcx
  google::protobuf::internal::LogMessage_0 *v115; // rax
  google::protobuf::internal::LogMessage_0 *v116; // rax
  google::protobuf::internal::LogMessage_0 *v117; // rax
  int v118; // eax
  void **v119; // r8
  google::protobuf::internal::ArenaImpl *v120; // rax
  google::protobuf::Arena *v121; // rax
  std::_Rb_tree_node_base *p_space_allocated; // rdx
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_color M_color; // ecx
  void **v125; // rax
  google::protobuf::Arena *v126; // rbp
  google::protobuf::Arena *v127; // rax
  google::protobuf::internal::ArenaImpl **v128; // rax
  google::protobuf::internal::ArenaImpl *v129; // rbp
  google::protobuf::internal::ArenaImpl *v130; // rax
  void **v131; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v132; // rdi
  _QWORD *v133; // rax
  unsigned __int64 v134; // rdx
  __int64 v135; // rcx
  char v136; // r8
  unsigned __int64 v137; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *v138; // [rsp+0h] [rbp-118h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *v139; // [rsp+0h] [rbp-118h]
  google::protobuf::internal::DynamicMapField *v140; // [rsp+8h] [rbp-110h]
  google::protobuf::FieldDescriptor *FieldByName; // [rsp+10h] [rbp-108h]
  unsigned __int64 second; // [rsp+20h] [rbp-F8h]
  void **data; // [rsp+20h] [rbp-F8h]
  void **v144; // [rsp+20h] [rbp-F8h]
  __int64 v145; // [rsp+28h] [rbp-F0h]
  void **v146; // [rsp+28h] [rbp-F0h]
  google::protobuf::Arena *arena; // [rsp+30h] [rbp-E8h]
  google::protobuf::internal::ArenaImpl *v148; // [rsp+30h] [rbp-E8h]
  __int64 v149; // [rsp+38h] [rbp-E0h]
  google::protobuf::internal::LogFinisher v150; // [rsp+4Fh] [rbp-C9h] BYREF
  google::protobuf::MapKey k; // [rsp+50h] [rbp-C8h] BYREF
  google::protobuf::MapKey v152; // [rsp+60h] [rbp-B8h] BYREF
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *v153; // [rsp+70h] [rbp-A8h]
  std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> it; // [rsp+80h] [rbp-98h] BYREF
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > key[2]; // [rsp+A0h] [rbp-78h] BYREF

  p_map = &this->map_;
  v2 = this;
  default_entry = this->default_entry_;
  v138 = p_map;
  v4 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)default_entry->_vptr_MessageLite + 23);
  if ( v4 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(const google::protobuf::Message *))default_entry->_vptr_MessageLite + 24))(default_entry);
    v6 = v5;
  }
  else
  {
    v6 = (__int64)v4(default_entry);
  }
  v7 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))v2->default_entry_->_vptr_MessageLite
                                              + 24))(v2->default_entry_);
  key[0]._M_impl.arena_ = (google::protobuf::Arena *const)&key[0]._M_impl.std::_Rb_tree_header;
  key[0]._M_impl._M_header._M_color = 7955819;
  *(_QWORD *)key[0]._M_impl._M_key_compare.gap0 = 3LL;
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v7,
                                                       (const std::string *)key);
  if ( (std::_Rb_tree_header *)key[0]._M_impl.arena_ != &key[0]._M_impl.std::_Rb_tree_header )
    operator delete(key[0]._M_impl.arena_);
  v8 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(const google::protobuf::Message *))v2->default_entry_->_vptr_MessageLite
                                              + 24))(v2->default_entry_);
  strcpy((char *)&key[0]._M_impl.std::_Rb_tree_header, "value");
  key[0]._M_impl.arena_ = (google::protobuf::Arena *const)&key[0]._M_impl.std::_Rb_tree_header;
  *(_QWORD *)key[0]._M_impl._M_key_compare.gap0 = 5LL;
  v9 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(v8, (const std::string *)key);
  if ( (std::_Rb_tree_header *)key[0]._M_impl.arena_ != &key[0]._M_impl.std::_Rb_tree_header )
    operator delete(key[0]._M_impl.arena_);
  elements = v2->map_.elements_;
  index_of_first_non_null = elements->index_of_first_non_null_;
  num_buckets = elements->num_buckets_;
  if ( index_of_first_non_null >= num_buckets )
    goto LABEL_31;
  table = elements->table_;
  while ( 1 )
  {
    int64_value = (char *)table[index_of_first_non_null];
    if ( int64_value )
      break;
    if ( num_buckets == ++index_of_first_non_null )
      goto LABEL_31;
  }
  if ( int64_value == table[index_of_first_non_null ^ 1] )
  {
    int64_value = *(char **)(*((_QWORD *)int64_value + 4) + 32LL);
    if ( !int64_value )
      goto LABEL_31;
  }
  v140 = v2;
  while ( 2 )
  {
    v15 = *((_QWORD *)int64_value + 2);
    switch ( *(_DWORD *)(v15 + 24) )
    {
      case 1:
      case 3:
      case 6:
      case 8:
        v16 = *(void **)(v15 + 16);
        if ( v16 )
          operator delete(v16, 4uLL);
        goto LABEL_15;
      case 2:
      case 4:
      case 5:
        v18 = *(void **)(v15 + 16);
        if ( !v18 )
          goto LABEL_15;
        operator delete(v18, 8uLL);
        v17.string_value_ = *(std::string **)(int64_value + 24);
        if ( !v17.int64_value_ )
          goto LABEL_19;
        goto LABEL_16;
      case 7:
        v32 = *(void **)(v15 + 16);
        if ( v32 )
          operator delete(v32, 1uLL);
        goto LABEL_15;
      case 9:
        v30 = *(void ***)(v15 + 16);
        if ( v30 )
        {
          if ( *v30 != v30 + 2 )
            operator delete(*v30);
          operator delete(v30, 0x20uLL);
        }
        goto LABEL_15;
      case 0xA:
        v31 = *(_QWORD *)(v15 + 16);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
        goto LABEL_15;
      default:
LABEL_15:
        v17.string_value_ = *(std::string **)(int64_value + 24);
        if ( v17.int64_value_ )
          goto LABEL_16;
LABEL_19:
        v19 = elements->num_buckets_;
        v20 = elements->table_;
        it.first.node_ = 0LL;
        index_of_first_non_null &= v19 - 1;
        v21 = (char *)v20[index_of_first_non_null];
        if ( v21 == int64_value )
          goto LABEL_165;
        if ( !v21 || v21 == v20[index_of_first_non_null ^ 1] )
          goto LABEL_25;
        break;
    }
    while ( 1 )
    {
      v21 = (char *)*((_QWORD *)v21 + 3);
      if ( !v21 )
        break;
      if ( v21 == int64_value )
        goto LABEL_165;
    }
LABEL_25:
    google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
      (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)key,
      elements,
      (const google::protobuf::MapKey *)int64_value,
      (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator *)&it);
    index_of_first_non_null = *(_QWORD *)&key[0]._M_impl._M_header._M_color;
    v22 = elements->table_;
    v23 = (char *)v22[*(_QWORD *)&key[0]._M_impl._M_header._M_color];
    if ( !v23 || v23 != v22[*(_QWORD *)&key[0]._M_impl._M_header._M_color ^ 1LL] )
    {
      v19 = elements->num_buckets_;
LABEL_165:
      if ( ++index_of_first_non_null >= v19 )
        goto LABEL_30;
      v96 = elements->table_;
      while ( 1 )
      {
        v17.int64_value_ = (google::protobuf::int64)v96[index_of_first_non_null];
        if ( v17.int64_value_ )
          break;
        if ( ++index_of_first_non_null >= v19 )
          goto LABEL_30;
      }
      if ( v17.string_value_ == v96[index_of_first_non_null ^ 1] )
        goto LABEL_169;
LABEL_16:
      int64_value = (char *)v17.int64_value_;
      continue;
    }
    break;
  }
  v24 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)it.first.node_);
  it.first.node_ = v24;
  if ( v24 != (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)(v23 + 16) )
  {
    v17.string_value_ = (std::string *)v24[1].kv.k_.val_;
    goto LABEL_29;
  }
  v114 = elements->num_buckets_;
  index_of_first_non_null += 2LL;
  if ( index_of_first_non_null >= v114 )
    goto LABEL_30;
  while ( 1 )
  {
    v17.int64_value_ = (google::protobuf::int64)v22[index_of_first_non_null];
    if ( v17.int64_value_ )
      break;
    if ( ++index_of_first_non_null >= v114 )
      goto LABEL_30;
  }
  if ( v17.string_value_ != v22[index_of_first_non_null ^ 1] )
    goto LABEL_16;
LABEL_169:
  v17.string_value_ = *(std::string **)(*(_QWORD *)(v17.int64_value_ + 32) + 32LL);
LABEL_29:
  if ( v17.int64_value_ )
    goto LABEL_16;
LABEL_30:
  v2 = v140;
LABEL_31:
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::clear(v138);
  repeated_field = v2->repeated_field_;
  v26 = 0LL;
  rep = repeated_field->rep_;
  if ( rep )
    v26 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *)rep->elements;
  v139 = v26;
  while ( 1 )
  {
    current_size = repeated_field->current_size_;
    if ( rep )
      rep = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)((char *)rep + 8);
    result = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *)((char *)rep
                                                                                             + 8 * current_size);
    if ( v139 == result )
      return result;
    k.type_ = 0;
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(FieldByName) )
    {
      case 1u:
      case 2u:
      case 0xAu:
      case 0xBu:
      case 0xEu:
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)key,
          LOGLEVEL_FATAL_0,
          "google/protobuf/map_field.cc",
          366);
        v33 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)key,
                (const char *)&stru_1A17003B.lowercase_name_ + 3);
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v152, v33);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
        break;
      case 3u:
      case 0x10u:
      case 0x12u:
        v42.int64_value_ = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 144LL))(
                             v6,
                             v139->arena_,
                             FieldByName);
        if ( k.type_ != 2 )
        {
          if ( k.type_ == 9 )
          {
            v107 = (void *)k.val_.int64_value_;
            if ( k.val_.int64_value_ )
            {
              if ( k.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(k.val_.int64_value_ + 16) )
                operator delete(k.val_.string_value_->_M_dataplus._M_p);
              operator delete(v107, 0x20uLL);
            }
          }
          k.type_ = 2;
        }
        goto LABEL_65;
      case 4u:
      case 6u:
        v42.int64_value_ = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 160LL))(
                             v6,
                             v139->arena_,
                             FieldByName);
        if ( k.type_ != 4 )
        {
          if ( k.type_ == 9 )
          {
            v109 = (void *)k.val_.int64_value_;
            if ( k.val_.int64_value_ )
            {
              if ( k.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(k.val_.int64_value_ + 16) )
                operator delete(k.val_.string_value_->_M_dataplus._M_p);
              operator delete(v109, 0x20uLL);
            }
          }
          k.type_ = 4;
        }
LABEL_65:
        k.val_ = v42;
        break;
      case 5u:
      case 0xFu:
      case 0x11u:
        v43 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 136LL))(
                v6,
                v139->arena_,
                FieldByName);
        if ( k.type_ != 1 )
        {
          if ( k.type_ == 9 )
          {
            v106 = (void *)k.val_.int64_value_;
            if ( k.val_.int64_value_ )
            {
              if ( k.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(k.val_.int64_value_ + 16) )
                operator delete(k.val_.string_value_->_M_dataplus._M_p);
              operator delete(v106, 0x20uLL);
            }
          }
          k.type_ = 1;
        }
        goto LABEL_69;
      case 7u:
      case 0xDu:
        v43 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 152LL))(
                v6,
                v139->arena_,
                FieldByName);
        if ( k.type_ != 3 )
        {
          if ( k.type_ == 9 )
          {
            v108 = (void *)k.val_.int64_value_;
            if ( k.val_.int64_value_ )
            {
              if ( k.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(k.val_.int64_value_ + 16) )
                operator delete(k.val_.string_value_->_M_dataplus._M_p);
              operator delete(v108, 0x20uLL);
            }
          }
          k.type_ = 3;
        }
LABEL_69:
        k.val_.int32_value_ = v43;
        break;
      case 8u:
        v45 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 184LL))(
                v6,
                v139->arena_,
                FieldByName);
        if ( k.type_ != 7 )
        {
          if ( k.type_ == 9 )
          {
            v105 = (void *)k.val_.int64_value_;
            if ( k.val_.int64_value_ )
            {
              if ( k.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(k.val_.int64_value_ + 16) )
                operator delete(k.val_.string_value_->_M_dataplus._M_p);
              operator delete(v105, 0x20uLL);
            }
          }
          k.type_ = 7;
        }
        k.val_.bool_value_ = v45;
        break;
      case 9u:
      case 0xCu:
        (*(void (__fastcall **)(std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *, __int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 192LL))(
          key,
          v6,
          v139->arena_,
          FieldByName);
        v44.string_value_ = (std::string *)k.val_;
        if ( k.type_ != 9 )
        {
          k.type_ = 9;
          v44.int64_value_ = operator new(0x20uLL);
          v44.string_value_->_M_dataplus._M_p = (std::string::pointer)(v44.int64_value_ + 16);
          *(_QWORD *)(v44.int64_value_ + 8) = 0LL;
          *(_BYTE *)(v44.int64_value_ + 16) = 0;
          k.val_ = v44;
        }
        ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
          (google::protobuf::MapKey::KeyValue)v44.int64_value_,
          key);
        if ( (std::_Rb_tree_header *)key[0]._M_impl.arena_ != &key[0]._M_impl.std::_Rb_tree_header )
          operator delete(key[0]._M_impl.arena_);
        break;
      default:
        break;
    }
    google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
      (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)key,
      v2->map_.elements_,
      &k,
      0LL);
    if ( key[0]._M_impl.arena_ )
    {
      space_allocated = key[0]._M_impl.arena_->impl_.space_allocated_;
      switch ( *(_DWORD *)(space_allocated + 24) )
      {
        case 1:
        case 3:
        case 6:
        case 8:
          v35 = *(void **)(space_allocated + 16);
          if ( v35 )
            operator delete(v35, 4uLL);
          break;
        case 2:
        case 4:
        case 5:
          v41 = *(void **)(space_allocated + 16);
          if ( v41 )
            operator delete(v41, 8uLL);
          break;
        case 7:
          v87 = *(void **)(space_allocated + 16);
          if ( v87 )
            operator delete(v87, 1uLL);
          break;
        case 9:
          v88 = *(void ***)(space_allocated + 16);
          if ( v88 )
          {
            if ( *v88 != v88 + 2 )
              operator delete(*v88);
            operator delete(v88, 0x20uLL);
          }
          break;
        case 0xA:
          v89 = *(_QWORD *)(space_allocated + 16);
          if ( v89 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 8LL))(v89);
          break;
        default:
          break;
      }
    }
    type = k.type_;
    v37 = v2->map_.elements_;
    v152.type_ = 0;
    if ( k.type_ )
      goto LABEL_52;
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)key,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/map_field.h",
      369);
    v61 = google::protobuf::internal::LogMessage::operator<<(
            (google::protobuf::internal::LogMessage_0 *const)key,
            "Protocol Buffer map usage error:\n");
    v62 = google::protobuf::internal::LogMessage::operator<<(v61, "MapKey::type MapKey is not initialized. ");
    v63 = google::protobuf::internal::LogMessage::operator<<(v62, "Call set methods to initialize MapKey.");
    google::protobuf::internal::LogFinisher::operator=(&v150, v63);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
    v64 = k.type_;
    type = v152.type_;
    if ( k.type_ == v152.type_ )
      goto LABEL_53;
    if ( v152.type_ != 9 )
    {
      type = k.type_;
LABEL_52:
      v152.type_ = type;
      if ( type != 9 )
        goto LABEL_53;
LABEL_111:
      v66.int64_value_ = operator new(0x20uLL);
      *(_QWORD *)(v66.int64_value_ + 8) = 0LL;
      v66.string_value_->_M_dataplus._M_p = (std::string::pointer)(v66.int64_value_ + 16);
      *(_BYTE *)(v66.int64_value_ + 16) = 0;
      v152.val_ = v66;
      type = v152.type_;
      goto LABEL_53;
    }
    v65 = (void *)v152.val_.int64_value_;
    type = k.type_;
    if ( !v152.val_.int64_value_ )
      goto LABEL_52;
    if ( v152.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(v152.val_.int64_value_ + 16) )
      operator delete(v152.val_.string_value_->_M_dataplus._M_p);
    operator delete(v65, 0x20uLL);
    type = v64;
    v152.type_ = v64;
    if ( v64 == 9 )
      goto LABEL_111;
LABEL_53:
    switch ( type )
    {
      case 1:
      case 3:
        v152.val_.int32_value_ = k.val_.int32_value_;
        break;
      case 2:
      case 4:
        v152.val_.int64_value_ = k.val_.int64_value_;
        break;
      case 5:
      case 6:
      case 8:
      case 10:
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)key,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          498);
        v38 = google::protobuf::internal::LogMessage::operator<<(
                (google::protobuf::internal::LogMessage_0 *const)key,
                "Unsupported");
        google::protobuf::internal::LogFinisher::operator=(&v150, v38);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
        break;
      case 7:
        v152.val_.bool_value_ = k.val_.bool_value_;
        break;
      case 9:
        ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
          (google::protobuf::MapKey::KeyValue)v152.val_.int64_value_,
          (google::protobuf::MapKey::KeyValue)k.val_.int64_value_);
        break;
      default:
        break;
    }
    v153 = 0LL;
    google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
      &it,
      v37,
      &v152,
      0LL);
    node = it.first.node_;
    if ( !it.first.node_ )
    {
      v73 = v37->num_buckets_;
      second = it.second;
      v74 = 2 * v73;
      v75 = v37->num_elements_ + 1;
      v76 = (12 * v73) >> 4;
      if ( v75 >= v76 )
      {
        if ( v73 > 0x800000000000000LL )
          goto LABEL_124;
      }
      else
      {
        if ( v73 <= 8 || v75 > (12 * v73) >> 6 )
        {
LABEL_124:
          p_impl = &v37->alloc_.arena_->impl_;
          if ( p_impl )
          {
            if ( p_impl[1].blocks_lock_.mInternal )
              google::protobuf::Arena::OnArenaAllocation(
                v37->alloc_.arena_,
                (const std::type_info *)&`typeinfo for'unsigned char,
                0x20uLL);
            Aligned = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)google::protobuf::internal::ArenaImpl::AllocateAligned(p_impl, 0x20uLL);
          }
          else
          {
            Aligned = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)operator new(0x20uLL);
          }
          Aligned->kv.k_.type_ = 0;
          v79 = v152.type_;
          node = Aligned;
          if ( v152.type_ )
          {
LABEL_129:
            node->kv.k_.type_ = v79;
            if ( v79 != 9 )
              goto LABEL_130;
LABEL_163:
            v95.int64_value_ = operator new(0x20uLL);
            *(_BYTE *)(v95.int64_value_ + 16) = 0;
            v79 = node->kv.k_.type_;
            v95.string_value_->_M_dataplus._M_p = (std::string::pointer)(v95.int64_value_ + 16);
            *(_QWORD *)(v95.int64_value_ + 8) = 0LL;
            node->kv.k_.val_ = v95;
          }
          else
          {
            google::protobuf::internal::LogMessage::LogMessage(
              (google::protobuf::internal::LogMessage_0 *const)key,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              369);
            v90 = google::protobuf::internal::LogMessage::operator<<(
                    (google::protobuf::internal::LogMessage_0 *const)key,
                    "Protocol Buffer map usage error:\n");
            v91 = google::protobuf::internal::LogMessage::operator<<(v90, "MapKey::type MapKey is not initialized. ");
            v92 = google::protobuf::internal::LogMessage::operator<<(v91, "Call set methods to initialize MapKey.");
            google::protobuf::internal::LogFinisher::operator=(&v150, v92);
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
            v79 = v152.type_;
            v93 = node->kv.k_.type_;
            if ( v152.type_ != v93 )
            {
              if ( v93 != 9 )
                goto LABEL_129;
              v94 = (void **)node->kv.k_.val_.int64_value_;
              if ( !node->kv.k_.val_.int64_value_ )
                goto LABEL_129;
              if ( *v94 != v94 + 2 )
              {
                v146 = (void **)node->kv.k_.val_.int64_value_;
                operator delete(*v94);
                v94 = v146;
              }
              operator delete(v94, 0x20uLL);
              node->kv.k_.type_ = v79;
              if ( v79 == 9 )
                goto LABEL_163;
            }
          }
LABEL_130:
          switch ( v79 )
          {
            case 1:
            case 3:
              node->kv.k_.val_.int32_value_ = v152.val_.int32_value_;
              break;
            case 2:
            case 4:
              node->kv.k_.val_.int64_value_ = v152.val_.int64_value_;
              break;
            case 5:
            case 6:
            case 8:
            case 10:
              google::protobuf::internal::LogMessage::LogMessage(
                (google::protobuf::internal::LogMessage_0 *const)key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                498);
              v81 = google::protobuf::internal::LogMessage::operator<<(
                      (google::protobuf::internal::LogMessage_0 *const)key,
                      "Unsupported");
              google::protobuf::internal::LogFinisher::operator=(&v150, v81);
              google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
              break;
            case 7:
              node->kv.k_.val_.bool_value_ = v152.val_.bool_value_;
              break;
            case 9:
              ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
                (google::protobuf::MapKey::KeyValue)node->kv.k_.val_.int64_value_,
                (google::protobuf::MapKey::KeyValue)v152.val_.int64_value_);
              break;
            default:
              break;
          }
          node->kv.v_ = v153;
          v82 = v37->table_;
          v83 = (std::_Rb_tree_node<google::protobuf::MapKey*> **)&v82[second];
          v145 = second;
          v84 = *v83;
          if ( *v83 )
          {
            M_right = *v83;
            v149 = second ^ 1;
            v86 = 0LL;
            if ( v84 == v82[v149] )
            {
              node->next = 0LL;
              v104 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)*v83;
              key[0]._M_impl.arena_ = (google::protobuf::Arena *const)node;
              node = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(v104, (google::protobuf::MapKey **)key).first._M_node[1]._M_color;
              goto LABEL_139;
            }
            do
            {
              M_right = (std::_Rb_tree_node<google::protobuf::MapKey*> *)M_right->_M_right;
              ++v86;
            }
            while ( M_right );
            if ( v86 <= 7 )
            {
              node->next = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)v84;
              *v83 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)node;
LABEL_139:
              ++v37->num_elements_;
              goto LABEL_56;
            }
            arena = v37->alloc_.arena_;
            if ( arena )
            {
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  arena,
                  (const std::type_info *)&`typeinfo for'unsigned char,
                  0x38uLL);
              v120 = (google::protobuf::internal::ArenaImpl *)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                                &arena->impl_,
                                                                0x38uLL);
            }
            else
            {
              v120 = (google::protobuf::internal::ArenaImpl *)operator new(0x38uLL);
            }
            v148 = v120;
            v121 = v37->alloc_.arena_;
            key[0]._M_impl._M_header._M_parent = 0LL;
            key[0]._M_impl._M_header._M_color = _S_red;
            key[0]._M_impl.arena_ = v121;
            p_space_allocated = (std::_Rb_tree_node_base *)&v148->space_allocated_;
            key[0]._M_impl._M_header._M_left = &key[0]._M_impl._M_header;
            key[0]._M_impl._M_header._M_right = &key[0]._M_impl._M_header;
            key[0]._M_impl._M_node_count = 0LL;
            v148->blocks_ = (google::protobuf::internal::AtomicWord)v121;
            M_parent = key[0]._M_impl._M_header._M_parent;
            if ( key[0]._M_impl._M_header._M_parent )
            {
              M_color = key[0]._M_impl._M_header._M_color;
              *(_QWORD *)&v148->owns_first_block_ = key[0]._M_impl._M_header._M_parent;
              LODWORD(v148->space_allocated_) = M_color;
              v148->blocks_lock_.mInternal = (google::protobuf::internal::Mutex::Internal *)key[0]._M_impl._M_header._M_left;
              v148->lifecycle_id_ = (google::protobuf::int64)key[0]._M_impl._M_header._M_right;
              M_parent->_M_parent = p_space_allocated;
              v148->options_.start_block_size = key[0]._M_impl._M_node_count;
              key[0]._M_impl._M_header._M_parent = 0LL;
              key[0]._M_impl._M_header._M_left = &key[0]._M_impl._M_header;
              key[0]._M_impl._M_header._M_right = &key[0]._M_impl._M_header;
              key[0]._M_impl._M_node_count = 0LL;
            }
            else
            {
              *(_QWORD *)&v148->owns_first_block_ = 0LL;
              v148->blocks_lock_.mInternal = (google::protobuf::internal::Mutex::Internal *)p_space_allocated;
              v148->lifecycle_id_ = (google::protobuf::int64)p_space_allocated;
              M_right = (std::_Rb_tree_node<google::protobuf::MapKey*> *)key[0]._M_impl._M_header._M_parent;
              LODWORD(v148->space_allocated_) = 0;
              v148->options_.start_block_size = 0LL;
            }
            std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
              key,
              M_right);
            v125 = v37->table_;
            v126 = (google::protobuf::Arena *)v125[second];
            if ( v126 )
            {
              while ( 1 )
              {
                key[0]._M_impl.arena_ = v126;
                std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                  (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v148,
                  (google::protobuf::MapKey **)key);
                v127 = *(google::protobuf::Arena **)&v126->impl_.owns_first_block_;
                *(_QWORD *)&v126->impl_.owns_first_block_ = 0LL;
                if ( !v127 )
                  break;
                v126 = v127;
              }
              v125 = v37->table_;
            }
            v128 = (google::protobuf::internal::ArenaImpl **)&v125[v149];
            v129 = *v128;
            if ( *v128 )
            {
              while ( 1 )
              {
                key[0]._M_impl.arena_ = (google::protobuf::Arena *const)v129;
                std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                  (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v148,
                  (google::protobuf::MapKey **)key);
                v130 = *(google::protobuf::internal::ArenaImpl **)&v129->owns_first_block_;
                *(_QWORD *)&v129->owns_first_block_ = 0LL;
                if ( !v130 )
                  break;
                v129 = v130;
              }
              v128 = (google::protobuf::internal::ArenaImpl **)&v37->table_[v149];
            }
            second &= ~1uLL;
            *v128 = v148;
            v37->table_[v145] = v148;
            v131 = v37->table_;
            node->next = 0LL;
            v132 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)v131[v145];
            key[0]._M_impl.arena_ = (google::protobuf::Arena *const)node;
            node = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(v132, (google::protobuf::MapKey **)key).first._M_node[1]._M_color;
          }
          else
          {
            node->next = 0LL;
            *v83 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)node;
          }
          v97 = second;
          if ( v37->index_of_first_non_null_ <= second )
            v97 = v37->index_of_first_non_null_;
          v37->index_of_first_non_null_ = v97;
          goto LABEL_139;
        }
        v134 = ((5 * v75) >> 2) + 1;
        if ( v76 <= 2 * v134 )
        {
          v136 = 1;
        }
        else
        {
          v135 = 1LL;
          do
            v136 = ++v135;
          while ( v76 > v134 << v135 );
        }
        v137 = v73 >> v136;
        v74 = v137;
        if ( v137 > 8 )
        {
          if ( v73 == v137 )
            goto LABEL_124;
        }
        else
        {
          v74 = 8LL;
        }
      }
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Resize(v37, v74);
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
        (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)key,
        v37,
        &v152,
        0LL);
      second = (unsigned __int64)key[0]._M_impl._M_header._M_parent;
      goto LABEL_124;
    }
LABEL_56:
    google::protobuf::MapKey::~MapKey(&v152);
    v = (google::protobuf::MapValueRef *)node->kv.v_;
    if ( v )
      goto LABEL_57;
    v67 = &v2->map_.arena_->impl_;
    if ( v67 )
    {
      if ( v67[1].blocks_lock_.mInternal )
        google::protobuf::Arena::OnArenaAllocation(
          v2->map_.arena_,
          (const std::type_info *)&`typeinfo for'unsigned char,
          0x20uLL);
      v68 = (google::protobuf::MapKey *)google::protobuf::internal::ArenaImpl::AllocateAligned(v67, 0x20uLL);
      v69 = v2->map_.arena_;
      v68->type_ = 0;
      v = (google::protobuf::MapValueRef *)v68;
      google::protobuf::Arena::OwnDestructor<google::protobuf::MapKey>(v69, v68);
      v70 = v2->map_.arena_;
      v[1].data_ = 0LL;
      v[1].type_ = 0;
      google::protobuf::Arena::OwnDestructor<google::protobuf::MapValueRef>(v70, v + 1);
      v71 = k.type_;
      if ( !k.type_ )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)key,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          369);
        v101 = google::protobuf::internal::LogMessage::operator<<(
                 (google::protobuf::internal::LogMessage_0 *const)key,
                 "Protocol Buffer map usage error:\n");
        v102 = google::protobuf::internal::LogMessage::operator<<(v101, "MapKey::type MapKey is not initialized. ");
        v103 = google::protobuf::internal::LogMessage::operator<<(v102, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v152, v103);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
        v71 = k.type_;
      }
      v72 = v->type_;
      if ( v71 != v72 )
      {
        if ( v72 == 9 && (v110 = (void **)v->data_) != 0LL )
        {
          if ( *v110 != v110 + 2 )
          {
            data = (void **)v->data_;
            operator delete(*v110);
            v110 = data;
          }
          operator delete(v110, 0x20uLL);
          v->type_ = v71;
          if ( v71 == 9 )
          {
LABEL_208:
            v111 = (_BYTE *)operator new(0x20uLL);
            v111[16] = 0;
            v71 = v->type_;
            *(_QWORD *)v111 = v111 + 16;
            *((_QWORD *)v111 + 1) = 0LL;
            v->data_ = v111;
          }
        }
        else
        {
          v->type_ = v71;
          if ( v71 == 9 )
            goto LABEL_208;
        }
      }
      switch ( v71 )
      {
        case 1:
        case 3:
          LODWORD(v->data_) = k.val_.int32_value_;
          node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
          break;
        case 2:
        case 4:
          v->data_ = (void *)k.val_.int64_value_;
          node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
          break;
        case 5:
        case 6:
        case 8:
        case 10:
          google::protobuf::internal::LogMessage::LogMessage(
            (google::protobuf::internal::LogMessage_0 *const)key,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            498);
          v80 = google::protobuf::internal::LogMessage::operator<<(
                  (google::protobuf::internal::LogMessage_0 *const)key,
                  "Unsupported");
          google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v152, v80);
          google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
          goto LABEL_132;
        case 7:
          LOBYTE(v->data_) = k.val_.bool_value_;
          node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
          break;
        case 9:
          ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
            v->data_,
            (google::protobuf::MapKey::KeyValue)k.val_.int64_value_);
          node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
          break;
        default:
LABEL_132:
          node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
          break;
      }
      goto LABEL_57;
    }
    v98 = (google::protobuf::MapValueRef *)operator new(0x20uLL);
    v99 = k.type_;
    v98->type_ = 0;
    v = v98;
    if ( v99 )
      goto LABEL_175;
    google::protobuf::internal::LogMessage::LogMessage(
      (google::protobuf::internal::LogMessage_0 *const)key,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/map_field.h",
      369);
    v115 = google::protobuf::internal::LogMessage::operator<<(
             (google::protobuf::internal::LogMessage_0 *const)key,
             "Protocol Buffer map usage error:\n");
    v116 = google::protobuf::internal::LogMessage::operator<<(v115, "MapKey::type MapKey is not initialized. ");
    v117 = google::protobuf::internal::LogMessage::operator<<(v116, "Call set methods to initialize MapKey.");
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v152, v117);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
    v99 = k.type_;
    v118 = v->type_;
    if ( k.type_ != v118 )
    {
      if ( v118 == 9 )
      {
        v119 = (void **)v->data_;
        if ( v->data_ )
        {
          if ( *v119 != v119 + 2 )
          {
            v144 = (void **)v->data_;
            operator delete(*v119);
            v119 = v144;
          }
          operator delete(v119, 0x20uLL);
        }
      }
LABEL_175:
      v->type_ = v99;
      if ( v99 == 9 )
      {
        v133 = (_QWORD *)operator new(0x20uLL);
        v133[1] = 0LL;
        v99 = v->type_;
        *v133 = v133 + 2;
        *((_BYTE *)v133 + 16) = 0;
        v->data_ = v133;
      }
    }
    switch ( v99 )
    {
      case 1:
      case 3:
        int32_value = k.val_.int32_value_;
        v[1].data_ = 0LL;
        v[1].type_ = 0;
        LODWORD(v->data_) = int32_value;
        goto LABEL_180;
      case 2:
      case 4:
        v112.string_value_ = (std::string *)k.val_;
        v[1].data_ = 0LL;
        v[1].type_ = 0;
        v->data_ = v112.string_value_;
        goto LABEL_180;
      case 5:
      case 6:
      case 8:
      case 10:
        google::protobuf::internal::LogMessage::LogMessage(
          (google::protobuf::internal::LogMessage_0 *const)key,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          498);
        v100 = google::protobuf::internal::LogMessage::operator<<(
                 (google::protobuf::internal::LogMessage_0 *const)key,
                 "Unsupported");
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v152, v100);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage_0 *const)key);
        goto LABEL_179;
      case 7:
        LOBYTE(v->data_) = k.val_.bool_value_;
        goto LABEL_179;
      case 9:
        ((void (__fastcall *)(_QWORD, _QWORD))std::string::_M_assign)(
          v->data_,
          (google::protobuf::MapKey::KeyValue)k.val_.int64_value_);
        goto LABEL_179;
      default:
LABEL_179:
        v[1].data_ = 0LL;
        v[1].type_ = 0;
LABEL_180:
        node->kv.v_ = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::value_type *)v;
        break;
    }
LABEL_57:
    v[1].type_ = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v9)];
    switch ( (unsigned int)google::protobuf::FieldDescriptor::type(v9) )
    {
      case 1u:
        v57 = (double *)operator new(8uLL);
        *v57 = (*(double (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 176LL))(
                 v6,
                 v139->arena_,
                 v9);
        v[1].data_ = v57;
        goto LABEL_94;
      case 2u:
        v56 = (float *)operator new(4uLL);
        *v56 = (*(float (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 168LL))(
                 v6,
                 v139->arena_,
                 v9);
        v[1].data_ = v56;
        goto LABEL_94;
      case 3u:
      case 0x10u:
      case 0x12u:
        v58 = (__int64 *)operator new(8uLL);
        v59 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 144LL))(
                v6,
                v139->arena_,
                v9);
        goto LABEL_100;
      case 4u:
      case 6u:
        v58 = (__int64 *)operator new(8uLL);
        v59 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 160LL))(
                v6,
                v139->arena_,
                v9);
LABEL_100:
        *v58 = v59;
        v[1].data_ = v58;
        goto LABEL_94;
      case 5u:
      case 0xFu:
      case 0x11u:
        v53 = (_DWORD *)operator new(4uLL);
        v54 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 136LL))(
                v6,
                v139->arena_,
                v9);
        goto LABEL_93;
      case 7u:
      case 0xDu:
        v53 = (_DWORD *)operator new(4uLL);
        v54 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 152LL))(
                v6,
                v139->arena_,
                v9);
        goto LABEL_93;
      case 8u:
        v55 = (_BYTE *)operator new(1uLL);
        *v55 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 184LL))(
                 v6,
                 v139->arena_,
                 v9);
        v[1].data_ = v55;
        goto LABEL_94;
      case 9u:
      case 0xCu:
        v46 = operator new(0x20uLL);
        v47 = (google::protobuf::Arena *)(v46 + 16);
        *(_BYTE *)(v46 + 16) = 0;
        v48 = (google::protobuf::Arena **)v46;
        *(_QWORD *)v46 = v46 + 16;
        *(_QWORD *)(v46 + 8) = 0LL;
        (*(void (__fastcall **)(std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *, __int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 192LL))(
          key,
          v6,
          v139->arena_,
          v9);
        v49 = *v48;
        v50 = *(google::protobuf::Arena **)key[0]._M_impl._M_key_compare.gap0;
        if ( (std::_Rb_tree_header *)key[0]._M_impl.arena_ == &key[0]._M_impl.std::_Rb_tree_header )
        {
          if ( *(_QWORD *)key[0]._M_impl._M_key_compare.gap0 )
          {
            if ( *(_QWORD *)key[0]._M_impl._M_key_compare.gap0 == 1LL )
              LOBYTE(v49->impl_.blocks_) = key[0]._M_impl._M_header._M_color;
            else
              memcpy(v49, &key[0]._M_impl.std::_Rb_tree_header, *(size_t *)key[0]._M_impl._M_key_compare.gap0);
            v50 = *(google::protobuf::Arena **)key[0]._M_impl._M_key_compare.gap0;
            v49 = *v48;
          }
          v48[1] = v50;
          *((_BYTE *)&v50->impl_.blocks_ + (_QWORD)v49) = 0;
          v49 = key[0]._M_impl.arena_;
        }
        else
        {
          v51 = *(google::protobuf::Arena **)&key[0]._M_impl._M_header._M_color;
          if ( v47 == v49 )
          {
            *v48 = key[0]._M_impl.arena_;
            v48[1] = v50;
            v48[2] = v51;
          }
          else
          {
            v52 = v48[2];
            *v48 = key[0]._M_impl.arena_;
            v48[1] = v50;
            v48[2] = v51;
            if ( v49 )
            {
              key[0]._M_impl.arena_ = v49;
              *(_QWORD *)&key[0]._M_impl._M_header._M_color = v52;
              goto LABEL_90;
            }
          }
          key[0]._M_impl.arena_ = (google::protobuf::Arena *const)&key[0]._M_impl.std::_Rb_tree_header;
          v49 = (google::protobuf::Arena *)&key[0]._M_impl.std::_Rb_tree_header;
        }
LABEL_90:
        *(_QWORD *)key[0]._M_impl._M_key_compare.gap0 = 0LL;
        LOBYTE(v49->impl_.blocks_) = 0;
        if ( (std::_Rb_tree_header *)key[0]._M_impl.arena_ != &key[0]._M_impl.std::_Rb_tree_header )
          operator delete(key[0]._M_impl.arena_);
LABEL_104:
        v[1].data_ = v48;
LABEL_94:
        google::protobuf::MapKey::~MapKey(&k);
        repeated_field = v2->repeated_field_;
        v139 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *)((char *)v139 + 8);
        rep = repeated_field->rep_;
        break;
      case 0xAu:
      case 0xBu:
        v60 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v6 + 216LL))(
                v6,
                v139->arena_,
                v9,
                0LL);
        v48 = (google::protobuf::Arena **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 24LL))(v60);
        ((void (__fastcall *)(google::protobuf::Arena **, __int64))(*v48)[1].impl_.hint_)(v48, v60);
        goto LABEL_104;
      case 0xEu:
        v53 = (_DWORD *)operator new(4uLL);
        v54 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *, google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 208LL))(
                v6,
                v139->arena_,
                v9);
LABEL_93:
        *v53 = v54;
        v[1].data_ = v53;
        goto LABEL_94;
      default:
        goto LABEL_94;
    }
  }
};

// Line 407: range 000000000C8B06C0-000000000C8B0C48
__int64 __fastcall google::protobuf::internal::DynamicMapField::SpaceUsedExcludingSelfNoLock(
        google::protobuf::internal::DynamicMapField *this)
{
  __int64 v1; // r12
  google::protobuf::RepeatedPtrField<google::protobuf::Message> *repeated_field; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 v4; // r12
  int v5; // ebp
  __int64 v6; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *elements; // rbx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_elements; // rbp
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type index_of_first_non_null; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rdx
  void **table; // rax
  const google::protobuf::MapKey *v13; // r13
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogMessage_0 *v19; // rax
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  google::protobuf::internal::LogMessage_0 *v23; // r15
  __int64 v24; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rsi
  const google::protobuf::Message *v26; // rbp
  const google::protobuf::Message::Reflection *(__fastcall *v27)(const google::protobuf::Message *const); // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  const google::protobuf::MapKey *v30; // rax
  google::protobuf::MapKey::KeyValue v31; // rbp
  int v32; // eax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rsi
  google::protobuf::internal::LogMessage_0 *v35; // rax
  google::protobuf::internal::LogMessage_0 *v36; // rsi
  google::protobuf::internal::LogMessage_0 *v37; // rax
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rsi
  google::protobuf::internal::LogMessage_0 *v40; // rax
  google::protobuf::internal::LogMessage_0 *v41; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v42; // rdx
  void **v43; // rcx
  const google::protobuf::MapKey *v44; // rax
  void **v45; // r13
  char *v46; // rbp
  char *v47; // rax
  void **v48; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v49; // rdx
  google::protobuf::MapKey::KeyValue v50; // [rsp+0h] [rbp-D8h]
  __int64 v51; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogFinisher v52; // [rsp+1Fh] [rbp-B9h] BYREF
  google::protobuf::internal::LogMessage_0 v53; // [rsp+20h] [rbp-B8h] BYREF
  google::protobuf::internal::LogMessage_0 v54[2]; // [rsp+60h] [rbp-78h] BYREF

  v1 = 24LL;
  repeated_field = this->repeated_field_;
  if ( repeated_field )
  {
    rep = repeated_field->rep_;
    v4 = 8LL * repeated_field->total_size_;
    if ( rep )
    {
      if ( rep->allocated_size > 0 )
      {
        v5 = 0;
        do
        {
          v6 = v5++;
          v4 += (*(__int64 (__fastcall **)(void *))(*(_QWORD *)rep->elements[v6] + 168LL))(rep->elements[v6]);
          rep = repeated_field->rep_;
        }
        while ( rep->allocated_size > v5 );
      }
      v1 = v4 + 32;
    }
    else
    {
      v1 = v4 + 24;
    }
  }
  elements = this->map_.elements_;
  num_elements = elements->num_elements_;
  if ( elements->num_elements_ )
  {
    index_of_first_non_null = elements->index_of_first_non_null_;
    num_buckets = elements->num_buckets_;
    if ( index_of_first_non_null >= num_buckets )
LABEL_34:
      google::protobuf::internal::DynamicMapField::SpaceUsedExcludingSelfNoLock();
    table = elements->table_;
    while ( 1 )
    {
      v13 = (const google::protobuf::MapKey *)table[index_of_first_non_null];
      if ( v13 )
        break;
      if ( num_buckets == ++index_of_first_non_null )
        goto LABEL_34;
    }
    if ( v13 == table[index_of_first_non_null ^ 1] )
      v13 = *(const google::protobuf::MapKey **)(v13[2].val_.int64_value_ + 32);
    v51 = 32 * num_elements;
    v1 += 32 * num_elements;
    v50.string_value_ = (std::string *)v13[1].val_;
    v14 = *(_DWORD *)(v50.int64_value_ + 8);
    if ( !v14 )
    {
      google::protobuf::internal::LogMessage::LogMessage(v54, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
      v37 = google::protobuf::internal::LogMessage::operator<<(v54, "Protocol Buffer map usage error:\n");
      v38 = google::protobuf::internal::LogMessage::operator<<(v37, "MapKey::type MapKey is not initialized. ");
      v39 = google::protobuf::internal::LogMessage::operator<<(v38, "Call set methods to initialize MapKey.");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v53, v39);
      google::protobuf::internal::LogMessage::~LogMessage(v54);
      v14 = *(_DWORD *)(v50.int64_value_ + 8);
      v50.string_value_ = (std::string *)v13[1].val_;
    }
    v15 = v14 == 9;
    v16 = *(unsigned int *)(v50.int64_value_ + 24);
    if ( v15 )
      v1 += v51;
    if ( !(_DWORD)v16 || !*(_QWORD *)(v50.int64_value_ + 16) )
    {
      google::protobuf::internal::LogMessage::LogMessage(v54, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
      v35 = google::protobuf::internal::LogMessage::operator<<(v54, "Protocol Buffer map usage error:\n");
      v36 = google::protobuf::internal::LogMessage::operator<<(v35, "MapValueRef::type MapValueRef is not initialized.");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v53, v36);
      google::protobuf::internal::LogMessage::~LogMessage(v54);
      v16 = *(unsigned int *)(v50.int64_value_ + 24);
    }
    if ( (unsigned int)v16 <= 0xA )
    {
      switch ( v16 )
      {
        case 0LL:
          return v1;
        case 1LL:
        case 3LL:
        case 6LL:
        case 8LL:
          v1 += 4 * num_elements;
          return v1;
        case 2LL:
        case 4LL:
        case 5LL:
          v1 += 8 * num_elements;
          return v1;
        case 7LL:
          v1 += num_elements;
          return v1;
        case 9LL:
          v1 += v51;
          return v1;
        case 10LL:
          goto LABEL_31;
      }
      while ( 1 )
      {
LABEL_31:
        v31.string_value_ = (std::string *)v13[1].val_;
        v32 = *(_DWORD *)(v31.int64_value_ + 24);
        if ( !v32 || !*(_QWORD *)(v31.int64_value_ + 16) )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            v54,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            680);
          v33 = google::protobuf::internal::LogMessage::operator<<(v54, "Protocol Buffer map usage error:\n");
          v34 = google::protobuf::internal::LogMessage::operator<<(
                  v33,
                  "MapValueRef::type MapValueRef is not initialized.");
          google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v53, v34);
          google::protobuf::internal::LogMessage::~LogMessage(v54);
          v32 = *(_DWORD *)(v31.int64_value_ + 24);
        }
        if ( v32 != 10 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v53,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            651);
          v17 = google::protobuf::internal::LogMessage::operator<<(&v53, "Protocol Buffer map usage error:\n");
          v18 = google::protobuf::internal::LogMessage::operator<<(v17, "MapValueRef::GetMessageValue");
          v19 = google::protobuf::internal::LogMessage::operator<<(v18, " type does not match\n");
          v20 = google::protobuf::internal::LogMessage::operator<<(v19, "  Expected : ");
          v21 = google::protobuf::internal::LogMessage::operator<<(
                  v20,
                  google::protobuf::FieldDescriptor::kCppTypeToName[10]);
          v22 = google::protobuf::internal::LogMessage::operator<<(v21, "\n");
          v23 = google::protobuf::internal::LogMessage::operator<<(v22, "  Actual   : ");
          v24 = *(int *)(v31.int64_value_ + 24);
          if ( !(_DWORD)v24 || !*(_QWORD *)(v31.int64_value_ + 16) )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              v54,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              680);
            v40 = google::protobuf::internal::LogMessage::operator<<(v54, "Protocol Buffer map usage error:\n");
            v41 = google::protobuf::internal::LogMessage::operator<<(
                    v40,
                    "MapValueRef::type MapValueRef is not initialized.");
            google::protobuf::internal::LogFinisher::operator=(&v52, v41);
            google::protobuf::internal::LogMessage::~LogMessage(v54);
            v24 = *(int *)(v31.int64_value_ + 24);
          }
          v25 = google::protobuf::internal::LogMessage::operator<<(
                  v23,
                  google::protobuf::FieldDescriptor::kCppTypeToName[v24]);
          google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)v54, v25);
          google::protobuf::internal::LogMessage::~LogMessage(&v53);
        }
        v26 = *(const google::protobuf::Message **)(v31.int64_value_ + 16);
        v27 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)v26->_vptr_MessageLite + 23);
        if ( v27 == google::protobuf::Message::GetReflection )
        {
          (*((void (__fastcall **)(const google::protobuf::Message *))v26->_vptr_MessageLite + 24))(v26);
          v29 = v28;
        }
        else
        {
          v29 = (__int64)v27(v26);
        }
        v1 += (*(__int64 (__fastcall **)(__int64, const google::protobuf::Message *))(*(_QWORD *)v29 + 32LL))(v29, v26);
        v30 = *(const google::protobuf::MapKey **)&v13[1].type_;
        if ( v30 )
          goto LABEL_30;
        v42 = elements->num_buckets_;
        v43 = elements->table_;
        *(_QWORD *)&v53.level_ = 0LL;
        index_of_first_non_null &= v42 - 1;
        v44 = (const google::protobuf::MapKey *)v43[index_of_first_non_null];
        if ( v44 == v13 )
          goto LABEL_56;
        if ( v44 && v44 != v43[index_of_first_non_null ^ 1] )
        {
          while ( 1 )
          {
            v44 = *(const google::protobuf::MapKey **)&v44[1].type_;
            if ( !v44 )
              break;
            if ( v44 == v13 )
              goto LABEL_56;
          }
        }
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
          (std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *)v54,
          elements,
          v13,
          (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator *)&v53);
        index_of_first_non_null = *(_QWORD *)&v54[0].line_;
        v45 = elements->table_;
        v46 = (char *)v45[*(_QWORD *)&v54[0].line_];
        if ( !v46 || v46 != v45[*(_QWORD *)&v54[0].line_ ^ 1LL] )
          break;
        v47 = (char *)std::_Rb_tree_increment(*(const std::_Rb_tree_node_base **)&v53.level_);
        *(_QWORD *)&v53.level_ = v47;
        if ( v47 != v46 + 16 )
        {
          v30 = (const google::protobuf::MapKey *)*((_QWORD *)v47 + 4);
          goto LABEL_53;
        }
        v49 = elements->num_buckets_;
        index_of_first_non_null += 2LL;
        if ( index_of_first_non_null >= v49 )
          return v1;
        while ( 1 )
        {
          v30 = (const google::protobuf::MapKey *)v45[index_of_first_non_null];
          if ( v30 )
            break;
          if ( ++index_of_first_non_null >= v49 )
            return v1;
        }
        if ( v30 == v45[index_of_first_non_null ^ 1] )
        {
LABEL_60:
          v30 = *(const google::protobuf::MapKey **)(v30[2].val_.int64_value_ + 32);
LABEL_53:
          if ( !v30 )
            return v1;
        }
LABEL_30:
        v13 = v30;
      }
      v42 = elements->num_buckets_;
LABEL_56:
      if ( ++index_of_first_non_null >= v42 )
        return v1;
      v48 = elements->table_;
      while ( 1 )
      {
        v30 = (const google::protobuf::MapKey *)v48[index_of_first_non_null];
        if ( v30 )
          break;
        if ( ++index_of_first_non_null >= v42 )
          return v1;
      }
      if ( v30 == v48[index_of_first_non_null ^ 1] )
        goto LABEL_60;
      goto LABEL_30;
    }
  }
  return v1;
};

// Line 454: range 000000000C746A60-000000000C746A81
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal12MapFieldBaseD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
