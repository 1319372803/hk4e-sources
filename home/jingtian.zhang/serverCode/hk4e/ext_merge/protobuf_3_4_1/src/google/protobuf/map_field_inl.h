// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/map_field_inl.h

// Line 112: range 000000000C8B6140-000000000C8B61CA
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapBegin(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        google::protobuf::MapIterator *map_iter)
{
  __int64 v4; // rax
  _QWORD *iter; // rsi
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdx
  int (**vptr_MapFieldBase)(...); // rax

  v4 = (*((__int64 (__fastcall **)(const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const))this->_vptr_MapFieldBase
        + 16))(this);
  iter = map_iter->iter_;
  v6 = *(_QWORD **)(v4 + 16);
  v7 = v6[3];
  v8 = v6[1];
  if ( v7 >= v8 )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = v6[4];
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8 * v7);
      if ( v10 )
        break;
      if ( v8 == ++v7 )
        goto LABEL_6;
    }
    if ( v10 == *(_QWORD *)(v9 + 8 * (v7 ^ 1)) )
      v10 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL);
  }
LABEL_6:
  iter[2] = v7;
  vptr_MapFieldBase = this->_vptr_MapFieldBase;
  *iter = v10;
  iter[1] = v6;
  vptr_MapFieldBase[18](this, map_iter);
};

// Line 119: range 000000000C8B60B0-000000000C8B60D8
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapEnd(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        google::protobuf::MapIterator *map_iter)
{
  _QWORD *iter; // rax

  (*((void (__fastcall **)(const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const))this->_vptr_MapFieldBase
   + 16))(this);
  iter = map_iter->iter_;
  *iter = 0LL;
  iter[1] = 0LL;
  iter[2] = 0LL;
};

// Line 130: range 000000000C8B7440-000000000C8B75DE
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::IncreaseIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        google::protobuf::MapIterator *map_iter)
{
  _QWORD *iter; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v6; // r14
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rcx
  void **table; // rsi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type bucket_index; // r13
  _QWORD *v10; // rax
  void **v11; // rax
  char *v12; // r15
  __int64 v13; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v14; // r13
  void **v15; // rdx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v16; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator it; // [rsp+8h] [rbp-60h] BYREF
  std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> v18; // [rsp+10h] [rbp-58h] BYREF

  iter = map_iter->iter_;
  v4 = *(_QWORD *)map_iter->iter_;
  v5 = *(_QWORD **)(v4 + 24);
  if ( !v5 )
  {
    it._M_node = 0LL;
    v6 = (const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)iter[1];
    num_buckets = v6->num_buckets_;
    table = v6->table_;
    bucket_index = iter[2] & (num_buckets - 1);
    v10 = table[bucket_index];
    iter[2] = bucket_index;
    if ( (_QWORD *)v4 != v10 )
    {
      if ( v10 && v10 != table[bucket_index ^ 1] )
      {
        while ( 1 )
        {
          v10 = (_QWORD *)v10[3];
          if ( !v10 )
            break;
          if ( (_QWORD *)v4 == v10 )
            goto LABEL_15;
        }
      }
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
        &v18,
        v6,
        (const google::protobuf::MapKey *)v4,
        &it);
      v6 = (const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *)iter[1];
      bucket_index = v18.first.bucket_index_;
      v11 = v6->table_;
      iter[2] = v18.first.bucket_index_;
      v12 = (char *)v11[bucket_index];
      if ( v12 && v12 == v11[bucket_index ^ 1] )
      {
        v13 = std::_Rb_tree_increment(it._M_node);
        it._M_node = (std::_Rb_tree_const_iterator<google::protobuf::MapKey*>::_Base_ptr)v13;
        if ( (char *)v13 != v12 + 16 )
        {
          *iter = *(_QWORD *)(v13 + 32);
          goto LABEL_3;
        }
        v16 = v6->num_buckets_;
        v14 = bucket_index + 2;
        *iter = 0LL;
        iter[2] = v14;
        if ( v14 >= v16 )
          goto LABEL_3;
        v15 = v6->table_;
        while ( 1 )
        {
          v5 = v15[v14];
          if ( v5 )
            goto LABEL_18;
          iter[2] = ++v14;
          if ( v14 >= v16 )
            goto LABEL_3;
        }
      }
      num_buckets = v6->num_buckets_;
    }
LABEL_15:
    v14 = bucket_index + 1;
    *iter = 0LL;
    iter[2] = v14;
    if ( v14 >= num_buckets )
      goto LABEL_3;
    v15 = v6->table_;
    while ( 1 )
    {
      v5 = v15[v14];
      if ( v5 )
        break;
      iter[2] = ++v14;
      if ( v14 >= num_buckets )
        goto LABEL_3;
    }
LABEL_18:
    if ( v5 == v15[v14 ^ 1] )
    {
      *iter = *(_QWORD *)(v5[4] + 32LL);
      goto LABEL_3;
    }
  }
  *iter = v5;
LABEL_3:
  (*((void (__fastcall **)(const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const, google::protobuf::MapIterator *))this->_vptr_MapFieldBase
   + 18))(
    this,
    map_iter);
};

// Line 147: range 000000000C8B60E0-000000000C8B60F8
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::DeleteIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        google::protobuf::MapIterator *map_iter)
{
  if ( map_iter->iter_ )
    operator delete(map_iter->iter_, 0x18uLL);
};

// Line 151: range 000000000C8B61D0-000000000C8B631F
void __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::CopyIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        google::protobuf::MapIterator *this_iter,
        const google::protobuf::MapIterator *that_iter)
{
  __m128i *iter; // rax
  int type; // r13d
  _QWORD *v6; // roff
  int v7; // eax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // rax
  google::protobuf::internal::LogMessage_0 *v10; // rax
  void **p_M_p; // r14
  google::protobuf::MapKey::KeyValue v12; // rax
  google::protobuf::internal::LogFinisher v13; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+10h] [rbp-68h] BYREF

  iter = (__m128i *)this_iter->iter_;
  type = that_iter->key_.type_;
  v6 = that_iter->iter_;
  *iter = _mm_loadu_si128((const __m128i *)that_iter->iter_);
  iter[1].m128i_i64[0] = v6[2];
  if ( !type )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
    v8 = google::protobuf::internal::LogMessage::operator<<(&v14, "Protocol Buffer map usage error:\n");
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, "MapKey::type MapKey is not initialized. ");
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, "Call set methods to initialize MapKey.");
    google::protobuf::internal::LogFinisher::operator=(&v13, v10);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
    type = that_iter->key_.type_;
  }
  v7 = this_iter->key_.type_;
  if ( type != v7 )
  {
    if ( v7 == 9 && (p_M_p = (void **)&this_iter->key_.val_.string_value_->_M_dataplus._M_p) != 0LL )
    {
      if ( *p_M_p != p_M_p + 2 )
        operator delete(*p_M_p);
      operator delete(p_M_p, 0x20uLL);
      this_iter->key_.type_ = type;
      if ( type == 9 )
        goto LABEL_11;
    }
    else
    {
      this_iter->key_.type_ = type;
      if ( type == 9 )
      {
LABEL_11:
        v12.int64_value_ = operator new(0x20uLL);
        *(_QWORD *)(v12.int64_value_ + 8) = 0LL;
        v12.string_value_->_M_dataplus._M_p = (std::string::pointer)(v12.int64_value_ + 16);
        *(_BYTE *)(v12.int64_value_ + 16) = 0;
        this_iter->key_.val_ = v12;
      }
    }
  }
  this_iter->value_.type_ = that_iter->value_.type_;
  (*((void (__fastcall **)(const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const, google::protobuf::MapIterator *))this->_vptr_MapFieldBase
   + 18))(
    this,
    this_iter);
};
