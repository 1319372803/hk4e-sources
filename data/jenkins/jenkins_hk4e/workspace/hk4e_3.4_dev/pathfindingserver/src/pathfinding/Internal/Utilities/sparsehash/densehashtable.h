// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h

// Line 75: range 000000000D00F240-000000000D00F67F
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::copy_from(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *ht,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v6; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v7; // r14
  const std::pair<int const,char const*> *v8; // rax
  PersistentTypeID *v9; // rax
  PersistentTypeID *v10; // rdx
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::reference v11; // rsi
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v12; // rdx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v13; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_probes; // [rsp+20h] [rbp-D0h]
  size_t bucknum; // [rsp+28h] [rbp-C8h]
  size_t resize_to; // [rsp+30h] [rbp-C0h]
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type bucket_count_minus_one; // [rsp+38h] [rbp-B8h]
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator it; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 6 it:539";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::copy_from;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::clear(this);
  v6 = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::size(ht);
  resize_to = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
                this,
                v6,
                min_buckets_wanted);
  if ( resize_to > dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this) )
  {
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::expand_array(
      this,
      resize_to,
      (dense_hash_map_traits::true_type)resize_to);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->num_buckets = resize_to;
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(this);
  }
  v7 = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this);
  if ( (v7 & (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this)
            - 1)) != 0 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x21Au,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value, Key"
      ", HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_"
      "type) [with Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentType"
      "ID; ExtractKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::"
      "SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashta"
      "ble<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
  }
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::begin(
    (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *)(v3 + 32),
    ht);
  while ( 1 )
  {
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
      &it,
      ht);
    if ( !dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator!=(
            (const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 32),
            &it) )
      break;
    num_probes = 0LL;
    bucket_count_minus_one = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this)
                           - 1;
    v8 = dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*((const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 32));
    v9 = (PersistentTypeID *)dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
                               &this->get_key,
                               v8);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    for ( bucknum = bucket_count_minus_one & TypeManager::HashFunctorPersistentTypeID::operator()(&this->hash, *v10);
          !dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
             this,
             bucknum);
          bucknum = bucket_count_minus_one & (bucknum + num_probes) )
    {
      if ( ++num_probes >= dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this) )
      {
        __asan_handle_no_return(this);
        __assert_fail(
          "num_probes < bucket_count()",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x223u,
          "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value,"
          " Key, HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
          ">::size_type) [with Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPe"
          "rsistentTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::e"
          "qual_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const ch"
          "ar*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
      }
    }
    v11 = dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*((const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v11);
    v12 = v11;
    v13 = &this->table[bucknum];
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
      this,
      v13,
      v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, v13);
    ++this->num_elements;
    dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator++((dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 32));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 138: range 000000000CEAFCEE-000000000CEAFDAE
void __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_iterator(
        dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *h,
        dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer it,
        dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::advance_past_empty_and_deleted(this);
};

// Line 138: range 000000000CEAF448-000000000CEAF508
void __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
        dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *h,
        dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer it,
        dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(this);
};

// Line 138: range 000000000CEB07AA-000000000CEB086A
void __cdecl dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_iterator(
        dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *h,
        dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer it,
        dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::advance_past_empty_and_deleted(this);
};

// Line 148: range 000000000CEAFDB0-000000000CEAFDEA
dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::reference __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 148: range 000000000CE4B796-000000000CE4B7D0
dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::reference __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 148: range 000000000CEAF3C4-000000000CEAF3FE
dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::reference __cdecl dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(
        const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 149: range 000000000CE4B6F4-000000000CE4B70D
dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->(
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  return dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(this);
};

// Line 149: range 000000000CDB8868-000000000CDB8881
dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->(
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  return dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(this);
};

// Line 149: range 000000000CE4AD3A-000000000CE4AD53
dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer __cdecl dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator->(
        const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  return dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(this);
};

// Line 153: range 000000000CF4912E-000000000CF4925F
void __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::advance_past_empty_and_deleted(
        dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *v1; // rsi
  std::pair<char const* const,const RTTI*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 153: range 000000000CE4BE7C-000000000CE4BFAD
void __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(
        dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *v1; // rsi
  std::pair<int const,RTTI*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 153: range 000000000CF4AB9C-000000000CF4ACCD
void __cdecl dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::advance_past_empty_and_deleted(
        dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *v1; // rsi
  std::pair<int const,char const*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 157: range 000000000CDB8FF4-000000000CDB90CD
dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++(
        dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer *p_pos; // rax
  std::pair<int const,RTTI*> *pos; // rcx
  dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_pos = &this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 8);
    __asan_report_load8(p_pos, v1);
  }
  pos = thisa->pos;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->end >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)&thisa->end;
    __asan_report_load8(&thisa->end, v1);
  }
  if ( pos == thisa->end )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pos != end",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x9Eu,
      "dense_hashtable_iterator<V, K, HF, ExK, EqK, A>::iterator& dense_hashtable_iterator<V, K, HF, ExK, EqK, A>::operat"
      "or++() [with V = std::pair<const int, RTTI*>; K = int; HF = TypeManager::HashFunctorPersistentTypeID; ExK = dense_"
      "hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqK = std::equal_t"
      "o<int>; A = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable_iterator<V, K, HF, ExK, EqK, A>::iterato"
      "r = dense_hashtable_iterator<std::pair<const int, RTTI*>, int, TypeManager::HashFunctorPersistentTypeID, dense_has"
      "h_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey, std::equal_to<int>, s"
      "td::allocator<std::pair<const int, RTTI*> > >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->pos, v1);
  ++thisa->pos;
  dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(thisa);
  return thisa;
};

// Line 163: range 000000000CDB8486-000000000CDB84F7
bool __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator==(
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *it)
{
  std::pair<char const* const,const RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos == it->pos;
};

// Line 163: range 000000000CDB803C-000000000CDB80AD
bool __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator==(
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *it)
{
  std::pair<int const,RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos == it->pos;
};

// Line 164: range 000000000CE4B682-000000000CE4B6F3
bool __cdecl dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *it)
{
  std::pair<char const* const,const RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 164: range 000000000CDB8F82-000000000CDB8FF3
bool __cdecl dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *it)
{
  std::pair<int const,RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 164: range 000000000CE4ACC8-000000000CE4AD39
bool __cdecl dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator!=(
        const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *it)
{
  std::pair<int const,char const*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 188: range 000000000CEAEF3C-000000000CEAEFFC
void __cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_const_iterator(
        dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *h,
        dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer it,
        dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::advance_past_empty_and_deleted(this);
};

// Line 188: range 000000000CEAEDAC-000000000CEAEE6C
void __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *h,
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer it,
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(this);
};

// Line 188: range 000000000CFA5406-000000000CFA54C6
void __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *h,
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer it,
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer it_end,
        bool advance)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = h;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = it;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = it_end;
  if ( advance )
    dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::advance_past_empty_and_deleted(this);
};

// Line 195: range 000000000CDB8882-000000000CDB8998
void __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *it)
{
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *ht; // rdx
  const std::pair<int const,RTTI*> *pos; // rdx
  const std::pair<int const,RTTI*> *end; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, it);
  ht = it->ht;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = ht;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  pos = it->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->end, it);
  end = it->end;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = end;
};

// Line 195: range 000000000CDB89CC-000000000CDB8AE2
void __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *it)
{
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *ht; // rdx
  const std::pair<int const,char const*> *pos; // rdx
  const std::pair<int const,char const*> *end; // rdx

  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
    __asan_report_load8(it, it);
  ht = it->ht;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->ht = ht;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  pos = it->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pos = pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->end >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->end, it);
  end = it->end;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->end = end;
};

// Line 201: range 000000000CE4A5C2-000000000CE4A5FC
dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::reference __cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(
        const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 201: range 000000000CE4A32C-000000000CE4A366
dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::reference __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 201: range 000000000CE4BA2C-000000000CE4BA66
dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::reference __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(
        const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, v1);
  return this->pos;
};

// Line 202: range 000000000CDB740E-000000000CDB7427
dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer __cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator->(
        const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  return dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(this);
};

// Line 202: range 000000000CDB7326-000000000CDB733F
dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator->(
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  return dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(this);
};

// Line 202: range 000000000CDB8B80-000000000CDB8B99
dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator->(
        const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  return dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(this);
};

// Line 206: range 000000000CE4A694-000000000CE4A7C5
void __cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::advance_past_empty_and_deleted(
        dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *v1; // rsi
  const std::pair<char const* const,const RTTI*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 206: range 000000000CE4BC10-000000000CE4BD41
void __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *v1; // rsi
  const std::pair<int const,RTTI*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 206: range 000000000D00F922-000000000D00FA53
void __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::advance_past_empty_and_deleted(
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *v1; // rsi
  const std::pair<int const,char const*> *pos; // rcx
  char v3; // al

  while ( 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    pos = this->pos;
    if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->end, v1);
    if ( pos == this->end )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, v1);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
           this->ht,
           this) )
    {
      goto LABEL_12;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this, this);
    v1 = this;
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
           this->ht,
           this) )
    {
LABEL_12:
      v3 = 1;
    }
    else
    {
LABEL_13:
      v3 = 0;
    }
    if ( !v3 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pos, v1);
    ++this->pos;
  }
};

// Line 210: range 000000000CDB7452-000000000CDB752B
dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator++(
        dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::pointer *p_pos; // rax
  const std::pair<char const* const,const RTTI*> *pos; // rcx
  dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_pos = &this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 8);
    __asan_report_load8(p_pos, v1);
  }
  pos = thisa->pos;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->end >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)&thisa->end;
    __asan_report_load8(&thisa->end, v1);
  }
  if ( pos == thisa->end )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pos != end",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0xD3u,
      "dense_hashtable_const_iterator<V, K, HF, ExK, EqK, A>::const_iterator& dense_hashtable_const_iterator<V, K, HF, Ex"
      "K, EqK, A>::operator++() [with V = std::pair<const char* const, const RTTI*>; K = const char*; HF = TypeManager::C"
      "onstCharPtrHashFunctor; ExK = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeM"
      "anager::ConstCharPtrEqualTo>::SelectKey; EqK = TypeManager::ConstCharPtrEqualTo; A = std::allocator<std::pair<cons"
      "t char* const, const RTTI*> >; dense_hashtable_const_iterator<V, K, HF, ExK, EqK, A>::const_iterator = dense_hasht"
      "able_const_iterator<std::pair<const char* const, const RTTI*>, const char*, TypeManager::ConstCharPtrHashFunctor, "
      "dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::"
      "SelectKey, TypeManager::ConstCharPtrEqualTo, std::allocator<std::pair<const char* const, const RTTI*> > >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->pos, v1);
  ++thisa->pos;
  dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::advance_past_empty_and_deleted(thisa);
  return thisa;
};

// Line 210: range 000000000CDB8D2A-000000000CDB8E03
dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++(
        dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::pointer *p_pos; // rax
  const std::pair<int const,RTTI*> *pos; // rcx
  dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_pos = &this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 8);
    __asan_report_load8(p_pos, v1);
  }
  pos = thisa->pos;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->end >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)&thisa->end;
    __asan_report_load8(&thisa->end, v1);
  }
  if ( pos == thisa->end )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pos != end",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0xD3u,
      "dense_hashtable_const_iterator<V, K, HF, ExK, EqK, A>::const_iterator& dense_hashtable_const_iterator<V, K, HF, Ex"
      "K, EqK, A>::operator++() [with V = std::pair<const int, RTTI*>; K = int; HF = TypeManager::HashFunctorPersistentTy"
      "peID; ExK = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; "
      "EqK = std::equal_to<int>; A = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable_const_iterator<V, K, H"
      "F, ExK, EqK, A>::const_iterator = dense_hashtable_const_iterator<std::pair<const int, RTTI*>, int, TypeManager::Ha"
      "shFunctorPersistentTypeID, dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int>"
      " >::SelectKey, std::equal_to<int>, std::allocator<std::pair<const int, RTTI*> > >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->pos, v1);
  ++thisa->pos;
  dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::advance_past_empty_and_deleted(thisa);
  return thisa;
};

// Line 210: range 000000000D048CC8-000000000D048DA1
dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *__cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator++(
        dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::pointer *p_pos; // rax
  const std::pair<int const,char const*> *pos; // rcx
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  p_pos = &this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 8);
    __asan_report_load8(p_pos, v1);
  }
  pos = thisa->pos;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->end >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)&thisa->end;
    __asan_report_load8(&thisa->end, v1);
  }
  if ( pos == thisa->end )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "pos != end",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0xD3u,
      "dense_hashtable_const_iterator<V, K, HF, ExK, EqK, A>::const_iterator& dense_hashtable_const_iterator<V, K, HF, Ex"
      "K, EqK, A>::operator++() [with V = std::pair<const int, const char*>; K = int; HF = TypeManager::HashFunctorPersis"
      "tentTypeID; ExK = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >:"
      ":SelectKey; EqK = std::equal_to<int>; A = std::allocator<std::pair<const int, const char*> >; dense_hashtable_cons"
      "t_iterator<V, K, HF, ExK, EqK, A>::const_iterator = dense_hashtable_const_iterator<std::pair<const int, const char"
      "*>, int, TypeManager::HashFunctorPersistentTypeID, dense_hash_map<int, const char*, TypeManager::HashFunctorPersis"
      "tentTypeID, std::equal_to<int> >::SelectKey, std::equal_to<int>, std::allocator<std::pair<const int, const char*> > >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->pos, v1);
  ++thisa->pos;
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::advance_past_empty_and_deleted(thisa);
  return thisa;
};

// Line 216: range 000000000CDB72B4-000000000CDB7325
bool __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator==(
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *it)
{
  const std::pair<int const,RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos == it->pos;
};

// Line 217: range 000000000CDB739C-000000000CDB740D
bool __cdecl dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
        const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *it)
{
  const std::pair<char const* const,const RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 217: range 000000000CDB86B2-000000000CDB8723
bool __cdecl dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *it)
{
  const std::pair<int const,RTTI*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 217: range 000000000CDB8B0E-000000000CDB8B7F
bool __cdecl dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator!=(
        const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *it)
{
  const std::pair<int const,char const*> *pos; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos, it);
  pos = this->pos;
  if ( *(_BYTE *)(((unsigned __int64)&it->pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&it->pos, it);
  return pos != it->pos;
};

// Line 265: range 000000000CE4BDE6-000000000CE4BE7A
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
    retstr,
    this,
    this->table,
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 267: range 000000000CE4B5DE-000000000CE4B681
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *retstr,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 267: range 000000000CE4AF3C-000000000CE4AFDF
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 267: range 000000000CE4B988-000000000CE4BA2B
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *retstr,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 269: range 000000000CE4A5FE-000000000CE4A692
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::begin(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    this->table,
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 269: range 000000000CE4BB7A-000000000CE4BC0E
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    this->table,
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 269: range 000000000D048B8E-000000000D048C22
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::begin(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    this->table,
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 271: range 000000000CE4A51E-000000000CE4A5C1
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 271: range 000000000CE4A288-000000000CE4A32B
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 271: range 000000000D048C24-000000000D048CC7
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, this);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, this);
  dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
    retstr,
    this,
    &this->table[this->num_buckets],
    &table[this->num_buckets],
    1);
  return retstr;
};

// Line 283: range 000000000CEAE906-000000000CEAE985
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *dst,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *src)
{
  unsigned __int64 v3; // rax
  const char **v4; // rcx
  const RTTI *second; // rdx

  v3 = (unsigned __int64)operator new(0x10uLL, dst);
  v4 = (const char **)v3;
  if ( *(_WORD *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3, dst);
  if ( *(_WORD *)(((unsigned __int64)src >> 3) + 0x7FFF8000) )
    __asan_report_load16(src);
  second = src->second;
  *v4 = src->first;
  v4[1] = (const char *)second;
};

// Line 283: range 000000000CEAEBD0-000000000CEAEC4F
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *dst,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *src)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  const char *second; // rdx

  v3 = (unsigned __int64)operator new(0x10uLL, dst);
  v4 = (_QWORD *)v3;
  if ( *(_WORD *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3, dst);
  if ( *(_WORD *)(((unsigned __int64)src >> 3) + 0x7FFF8000) )
    __asan_report_load16(src);
  second = src->second;
  *v4 = *(_QWORD *)&src->first;
  v4[1] = second;
};

// Line 288: range 000000000CE48FF2-000000000CE4903E
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::destroy_buckets(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type first,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type last)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type firsta; // [rsp+10h] [rbp-10h]

  for ( firsta = first; firsta != last; ++firsta )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, first);
  }
};

// Line 288: range 000000000CE4922A-000000000CE49276
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::destroy_buckets(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type first,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type last)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type firsta; // [rsp+10h] [rbp-10h]

  for ( firsta = first; firsta != last; ++firsta )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, first);
  }
};

// Line 288: range 000000000CE49462-000000000CE494AE
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::destroy_buckets(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type first,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type last)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type firsta; // [rsp+10h] [rbp-10h]

  for ( firsta = first; firsta != last; ++firsta )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, first);
  }
};

// Line 325: range 000000000CFA4570-000000000CFA46D6
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type bucknum)
{
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey *p_get_key; // rdx
  const std::pair<char const* const,const RTTI*> *v3; // rsi
  unsigned __int64 v4; // rax
  const char *v5; // rbx
  unsigned __int64 v6; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, bucknum);
  if ( !this->num_deleted )
    return 0;
  p_get_key = &this->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, bucknum);
  v3 = &this->table[bucknum];
  v4 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           p_get_key,
                           v3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4, v3);
  v5 = *(const char **)v4;
  v6 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &this->get_key,
                           &this->delval);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, &this->delval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&this->equals, *(const char **)v6, v5);
};

// Line 325: range 000000000CF4A6FE-000000000CF4A821
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type bucknum)
{
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey *p_get_key; // rdx
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, bucknum);
  if ( !this->num_deleted )
    return 0;
  p_get_key = &this->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, bucknum);
  v3 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         p_get_key,
         &this->table[bucknum]);
  v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &this->get_key,
         &this->delval);
  return std::equal_to<int>::operator()(&this->equals, v4, v3);
};

// Line 325: range 000000000CFA52E2-000000000CFA5405
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type bucknum)
{
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey *p_get_key; // rdx
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, bucknum);
  if ( !this->num_deleted )
    return 0;
  p_get_key = &this->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, bucknum);
  v3 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         p_get_key,
         &this->table[bucknum]);
  v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &this->get_key,
         &this->delval);
  return std::equal_to<int>::operator()(&this->equals, v4, v3);
};

// Line 331: range 000000000CFA5802-000000000CFA593C
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *it)
{
  const std::pair<char const* const,const RTTI*> *v2; // rsi
  unsigned __int64 v3; // rax
  const char *v4; // rbx
  unsigned __int64 v5; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( !this->num_deleted )
    return 0;
  v2 = dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(it);
  v3 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &this->get_key,
                           v2);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3, v2);
  v4 = *(const char **)v3;
  v5 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &this->get_key,
                           &this->delval);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5, &this->delval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&this->equals, *(const char **)v5, v4);
};

// Line 331: range 000000000CEB0D5E-000000000CEB0E51
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *it)
{
  const std::pair<int const,RTTI*> *v2; // rax
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( this->num_deleted
    && (v2 = dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(it),
        v3 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
               &this->get_key,
               v2),
        v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
               &this->get_key,
               &this->delval),
        std::equal_to<int>::operator()(&this->equals, v4, v3)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 331: range 000000000CFA7028-000000000CFA711B
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *it)
{
  const std::pair<int const,char const*> *v2; // rax
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( this->num_deleted
    && (v2 = dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(it),
        v3 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
               &this->get_key,
               v2),
        v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
               &this->get_key,
               &this->delval),
        std::equal_to<int>::operator()(&this->equals, v4, v3)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 335: range 000000000CEAF118-000000000CEAF252
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *it)
{
  const std::pair<char const* const,const RTTI*> *v2; // rsi
  unsigned __int64 v3; // rax
  const char *v4; // rbx
  unsigned __int64 v5; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( !this->num_deleted )
    return 0;
  v2 = dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(it);
  v3 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &this->get_key,
                           v2);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3, v2);
  v4 = *(const char **)v3;
  v5 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &this->get_key,
                           &this->delval);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5, &this->delval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&this->equals, *(const char **)v5, v4);
};

// Line 335: range 000000000CEB0944-000000000CEB0A37
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *it)
{
  const std::pair<int const,RTTI*> *v2; // rax
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( this->num_deleted
    && (v2 = dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(it),
        v3 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
               &this->get_key,
               v2),
        v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
               &this->get_key,
               &this->delval),
        std::equal_to<int>::operator()(&this->equals, v4, v3)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 335: range 000000000D00FA54-000000000D00FB47
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *it)
{
  const std::pair<int const,char const*> *v2; // rax
  const int *v3; // r12
  const int *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_deleted);
  if ( !this->use_deleted )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, it);
  if ( this->num_deleted
    && (v2 = dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(it),
        v3 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
               &this->get_key,
               v2),
        v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
               &this->get_key,
               &this->delval),
        std::equal_to<int>::operator()(&this->equals, v4, v3)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 349: range 000000000CFA650C-000000000CFA6593
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::clear_deleted(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *it)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
  {
    this = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 16);
    __asan_report_load1(this);
  }
  if ( !thisa->use_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x15Eu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear_deleted(dense_hashtable<Value, Key, "
      "HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator&) [with Value = std::pair<const char* const, const RTTI*>; K"
      "ey = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const R"
      "TTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::"
      "ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >; dense_hashtable<Value, Ke"
      "y, HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator = dense_hashtable_const_iterator<std::pair<const char* co"
      "nst, const RTTI*>, const char*, TypeManager::ConstCharPtrHashFunctor, dense_hash_map<const char*, const RTTI*, Typ"
      "eManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey, TypeManager::ConstCharPtrEqualTo,"
      " std::allocator<std::pair<const char* const, const RTTI*> > >]");
  }
  return dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
           thisa,
           it);
};

// Line 349: range 000000000CF4A822-000000000CF4A8A9
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::clear_deleted(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *it)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
  {
    this = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 16);
    __asan_report_load1(this);
  }
  if ( !thisa->use_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x15Eu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear_deleted(dense_hashtable<Value, Key, "
      "HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator&) [with Value = std::pair<const int, RTTI*>; Key = int; Hash"
      "Fcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPe"
      "rsistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<c"
      "onst int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator = dense_hash"
      "table_const_iterator<std::pair<const int, RTTI*>, int, TypeManager::HashFunctorPersistentTypeID, dense_hash_map<in"
      "t, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey, std::equal_to<int>, std::allo"
      "cator<std::pair<const int, RTTI*> > >]");
  }
  return dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
           thisa,
           it);
};

// Line 349: range 000000000CFA54C8-000000000CFA554F
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::clear_deleted(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *it)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-8h]

  thisa = this;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
  {
    this = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 16);
    __asan_report_load1(this);
  }
  if ( !thisa->use_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x15Eu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear_deleted(dense_hashtable<Value, Key, "
      "HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator&) [with Value = std::pair<const int, const char*>; Key = int"
      "; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::H"
      "ashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator"
      "<std::pair<const int, const char*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::const_ite"
      "rator = dense_hashtable_const_iterator<std::pair<const int, const char*>, int, TypeManager::HashFunctorPersistentT"
      "ypeID, dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey,"
      " std::equal_to<int>, std::allocator<std::pair<const int, const char*> > >]");
  }
  return dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
           thisa,
           it);
};

// Line 356: range 000000000CEAEAB6-000000000CEAEB35
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *dst,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *src)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rcx
  RTTI *second; // rdx

  v3 = (unsigned __int64)operator new(0x10uLL, dst);
  v4 = (_QWORD *)v3;
  if ( *(_WORD *)((v3 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3, dst);
  if ( *(_WORD *)(((unsigned __int64)src >> 3) + 0x7FFF8000) )
    __asan_report_load16(src);
  second = src->second;
  *v4 = *(_QWORD *)&src->first;
  v4[1] = second;
};

// Line 364: range 000000000CFA442A-000000000CFA456F
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type bucknum)
{
  bool *p_use_empty; // rax
  __int64 v3; // rsi
  const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey *p_get_key; // rdx
  const std::pair<char const* const,const RTTI*> *v5; // rsi
  unsigned __int64 v6; // rax
  const char *v7; // rbx
  unsigned __int64 v8; // rax
  const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  v3 = ((_BYTE)this + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x16Du,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(dense_hashtable<Value, Key, Has"
      "hFcn, ExtractKey, EqualKey, Alloc>::size_type) const [with Value = std::pair<const char* const, const RTTI*>; Key "
      "= const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI"
      "*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::Con"
      "stCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >; dense_hashtable<Value, Key, "
      "HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
  }
  p_get_key = &thisa->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, v3);
  v5 = &thisa->table[bucknum];
  v6 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           p_get_key,
                           v5);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, v5);
  v7 = *(const char **)v6;
  v8 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &thisa->get_key,
                           &thisa->emptyval);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8, &thisa->emptyval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&thisa->equals, *(const char **)v8, v7);
};

// Line 364: range 000000000CFA4162-000000000CFA4264
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type bucknum)
{
  bool *p_use_empty; // rax
  __int64 v3; // rsi
  const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey *p_get_key; // rdx
  const int *v5; // r12
  const int *v6; // rax
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  v3 = ((_BYTE)this + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x16Du,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(dense_hashtable<Value, Key, Has"
      "hFcn, ExtractKey, EqualKey, Alloc>::size_type) const [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn"
      " = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersi"
      "stentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<cons"
      "t int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
  }
  p_get_key = &thisa->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, v3);
  v5 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         p_get_key,
         &thisa->table[bucknum]);
  v6 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v6, v5);
};

// Line 364: range 000000000CFA6E4C-000000000CFA6F4E
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type bucknum)
{
  bool *p_use_empty; // rax
  __int64 v3; // rsi
  const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey *p_get_key; // rdx
  const int *v5; // r12
  const int *v6; // rax
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  v3 = ((_BYTE)this + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x16Du,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(dense_hashtable<Value, Key, Has"
      "hFcn, ExtractKey, EqualKey, Alloc>::size_type) const [with Value = std::pair<const int, const char*>; Key = int; H"
      "ashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::Hash"
      "FunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<st"
      "d::pair<const int, const char*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = "
      "long unsigned int]");
  }
  p_get_key = &thisa->get_key;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, v3);
  v5 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         p_get_key,
         &thisa->table[bucknum]);
  v6 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v6, v5);
};

// Line 368: range 000000000CFA56E8-000000000CFA5801
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<char const* const,const RTTI*> *v3; // rsi
  unsigned __int64 v4; // rax
  const char *v5; // rbx
  unsigned __int64 v6; // rax
  const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x171u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const iterator&) const [with Va"
      "lue = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor"
      "; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCh"
      "arPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char"
      "* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::iterator = dense_hasht"
      "able_iterator<std::pair<const char* const, const RTTI*>, const char*, TypeManager::ConstCharPtrHashFunctor, dense_"
      "hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::Select"
      "Key, TypeManager::ConstCharPtrEqualTo, std::allocator<std::pair<const char* const, const RTTI*> > >]");
  }
  v3 = dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(it);
  v4 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &thisa->get_key,
                           v3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4, v3);
  v5 = *(const char **)v4;
  v6 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &thisa->get_key,
                           &thisa->emptyval);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, &thisa->emptyval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&thisa->equals, *(const char **)v6, v5);
};

// Line 368: range 000000000CEB0C86-000000000CEB0D5C
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<int const,RTTI*> *v3; // rax
  const int *v4; // r12
  const int *v5; // rax
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x171u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const iterator&) const [with Va"
      "lue = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = den"
      "se_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std:"
      ":equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, Extract"
      "Key, EqualKey, Alloc>::iterator = dense_hashtable_iterator<std::pair<const int, RTTI*>, int, TypeManager::HashFunc"
      "torPersistentTypeID, dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::Se"
      "lectKey, std::equal_to<int>, std::allocator<std::pair<const int, RTTI*> > >]");
  }
  v3 = dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(it);
  v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &thisa->get_key,
         v3);
  v5 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v5, v4);
};

// Line 368: range 000000000CFA6F50-000000000CFA7026
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<int const,char const*> *v3; // rax
  const int *v4; // r12
  const int *v5; // rax
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x171u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const iterator&) const [with Va"
      "lue = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey"
      " = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; Equ"
      "alKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Value, Key"
      ", HashFcn, ExtractKey, EqualKey, Alloc>::iterator = dense_hashtable_iterator<std::pair<const int, const char*>, in"
      "t, TypeManager::HashFunctorPersistentTypeID, dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTy"
      "peID, std::equal_to<int> >::SelectKey, std::equal_to<int>, std::allocator<std::pair<const int, const char*> > >]");
  }
  v3 = dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(it);
  v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &thisa->get_key,
         v3);
  v5 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v5, v4);
};

// Line 372: range 000000000CEAEFFE-000000000CEAF117
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<char const* const,const RTTI*> *v3; // rsi
  unsigned __int64 v4; // rax
  const char *v5; // rbx
  unsigned __int64 v6; // rax
  const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x175u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const const_iterator&) const [w"
      "ith Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashF"
      "unctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::C"
      "onstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<cons"
      "t char* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator ="
      " dense_hashtable_const_iterator<std::pair<const char* const, const RTTI*>, const char*, TypeManager::ConstCharPtrH"
      "ashFunctor, dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharP"
      "trEqualTo>::SelectKey, TypeManager::ConstCharPtrEqualTo, std::allocator<std::pair<const char* const, const RTTI*> > >]");
  }
  v3 = dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*(it);
  v4 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &thisa->get_key,
                           v3);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4, v3);
  v5 = *(const char **)v4;
  v6 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                           &thisa->get_key,
                           &thisa->emptyval);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6, &thisa->emptyval);
  return TypeManager::ConstCharPtrEqualTo::operator()(&thisa->equals, *(const char **)v6, v5);
};

// Line 372: range 000000000CEB086C-000000000CEB0942
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<int const,RTTI*> *v3; // rax
  const int *v4; // r12
  const int *v5; // rax
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x175u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const const_iterator&) const [w"
      "ith Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey"
      " = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey "
      "= std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, E"
      "xtractKey, EqualKey, Alloc>::const_iterator = dense_hashtable_const_iterator<std::pair<const int, RTTI*>, int, Typ"
      "eManager::HashFunctorPersistentTypeID, dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::e"
      "qual_to<int> >::SelectKey, std::equal_to<int>, std::allocator<std::pair<const int, RTTI*> > >]");
  }
  v3 = dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*(it);
  v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &thisa->get_key,
         v3);
  v5 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v5, v4);
};

// Line 372: range 000000000D048DA2-000000000D048E78
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *it)
{
  bool *p_use_empty; // rax
  const std::pair<int const,char const*> *v3; // rax
  const int *v4; // r12
  const int *v5; // rax
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( !thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x175u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::test_empty(const const_iterator&) const [w"
      "ith Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; Extr"
      "actKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKe"
      "y; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Valu"
      "e, Key, HashFcn, ExtractKey, EqualKey, Alloc>::const_iterator = dense_hashtable_const_iterator<std::pair<const int"
      ", const char*>, int, TypeManager::HashFunctorPersistentTypeID, dense_hash_map<int, const char*, TypeManager::HashF"
      "unctorPersistentTypeID, std::equal_to<int> >::SelectKey, std::equal_to<int>, std::allocator<std::pair<const int, c"
      "onst char*> > >]");
  }
  v3 = dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::operator*(it);
  v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &thisa->get_key,
         v3);
  v5 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &thisa->get_key,
         &thisa->emptyval);
  return std::equal_to<int>::operator()(&thisa->equals, v5, v4);
};

// Line 383: range 000000000CEAE9CE-000000000CEAE9FF
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::fill_range_with_empty(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table_start,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table_end)
{
  std::uninitialized_fill<std::pair<char const* const,RTTI const*> *,std::pair<char const* const,RTTI const*>>(
    table_start,
    table_end,
    &this->emptyval);
};

// Line 383: range 000000000CEAEB7E-000000000CEAEBAF
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::fill_range_with_empty(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table_start,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table_end)
{
  std::uninitialized_fill<std::pair<int const,RTTI *> *,std::pair<int const,RTTI *>>(
    table_start,
    table_end,
    &this->emptyval);
};

// Line 383: range 000000000CEAEC98-000000000CEAECC9
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::fill_range_with_empty(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table_start,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table_end)
{
  std::uninitialized_fill<std::pair<int const,char const*> *,std::pair<int const,char const*>>(
    table_start,
    table_end,
    &this->emptyval);
};

// Line 396: range 000000000CE49596-000000000CE498E9
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_empty_key(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *val)
{
  bool *p_use_empty; // rax
  const TypeManager::ConstCharPtrEqualTo *p_equals; // r12
  unsigned __int64 v4; // rax
  const char *v5; // rbx
  unsigned __int64 v6; // rax
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *p_emptyval; // rsi
  void *p_table; // rdi
  __gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> > *p_Alval; // rcx
  __gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::size_type num_buckets; // rsi
  void *v11; // rdi
  __int64 v12; // rax
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x18Eu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor;"
      " ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCha"
      "rPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char*"
      " const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<"
      "const char* const, const RTTI*>]");
  }
  if ( *(char *)(((unsigned __int64)&thisa->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->use_deleted);
  if ( thisa->use_deleted )
  {
    p_equals = &thisa->equals;
    v4 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                             &thisa->get_key,
                             &thisa->delval);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4, &thisa->delval);
    v5 = *(const char **)v4;
    v6 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                             &thisa->get_key,
                             val);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, val);
    if ( TypeManager::ConstCharPtrEqualTo::operator()(p_equals, *(const char **)v6, v5) )
    {
      __asan_handle_no_return(p_equals);
      __assert_fail(
        "!use_deleted || !equals(get_key(val), get_key(delval))",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x191u,
        "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with V"
        "alue = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunc"
        "tor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::Co"
        "nstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<con"
        "st char* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = "
        "std::pair<const char* const, const RTTI*>]");
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->use_empty);
  }
  thisa->use_empty = 1;
  p_emptyval = &thisa->emptyval;
  p_table = thisa;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    thisa,
    &thisa->emptyval,
    val);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    p_table = &thisa->table;
    __asan_report_load8(&thisa->table, p_emptyval);
  }
  if ( thisa->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "!table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x195u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor;"
      " ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCha"
      "rPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char*"
      " const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<"
      "const char* const, const RTTI*>]");
  }
  p_Alval = &thisa->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, p_emptyval);
  num_buckets = thisa->num_buckets;
  v11 = p_Alval;
  v12 = (__int64)__gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::allocate(p_Alval, num_buckets, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    v11 = &thisa->table;
    v12 = __asan_report_store8();
  }
  thisa->table = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *)v12;
  if ( !thisa->table )
  {
    __asan_handle_no_return(v11);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x198u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor;"
      " ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCha"
      "rPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char*"
      " const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<"
      "const char* const, const RTTI*>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, num_buckets);
  table = thisa->table;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, num_buckets);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::fill_range_with_empty(
    thisa,
    thisa->table,
    &table[thisa->num_buckets]);
};

// Line 396: range 000000000CE499D0-000000000CE49CDC
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_empty_key(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *val)
{
  bool *p_use_empty; // rax
  const int *v3; // r12
  const int *v4; // rax
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *p_emptyval; // rsi
  void *p_table; // rdi
  __gnu_cxx::new_allocator<std::pair<int const,RTTI*> > *p_Alval; // rcx
  __gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::size_type num_buckets; // rsi
  void *v9; // rdi
  __int64 v10; // rax
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x18Eu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dens"
      "e_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::"
      "equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractK"
      "ey, EqualKey, Alloc>::value_type = std::pair<const int, RTTI*>]");
  }
  if ( *(char *)(((unsigned __int64)&thisa->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->use_deleted);
  if ( thisa->use_deleted )
  {
    v3 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
           &thisa->get_key,
           &thisa->delval);
    v4 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
           &thisa->get_key,
           val);
    if ( std::equal_to<int>::operator()(&thisa->equals, v4, v3) )
    {
      __asan_handle_no_return(&thisa->equals);
      __assert_fail(
        "!use_deleted || !equals(get_key(val), get_key(delval))",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x191u,
        "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with V"
        "alue = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = "
        "dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey ="
        " std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, "
        "ExtractKey, EqualKey, Alloc>::value_type = std::pair<const int, RTTI*>]");
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->use_empty);
  }
  thisa->use_empty = 1;
  p_emptyval = &thisa->emptyval;
  p_table = thisa;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    thisa,
    &thisa->emptyval,
    val);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    p_table = &thisa->table;
    __asan_report_load8(&thisa->table, p_emptyval);
  }
  if ( thisa->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "!table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x195u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dens"
      "e_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::"
      "equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractK"
      "ey, EqualKey, Alloc>::value_type = std::pair<const int, RTTI*>]");
  }
  p_Alval = &thisa->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, p_emptyval);
  num_buckets = thisa->num_buckets;
  v9 = p_Alval;
  v10 = (__int64)__gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::allocate(p_Alval, num_buckets, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    v9 = &thisa->table;
    v10 = __asan_report_store8();
  }
  thisa->table = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *)v10;
  if ( !thisa->table )
  {
    __asan_handle_no_return(v9);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x198u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dens"
      "e_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::"
      "equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractK"
      "ey, EqualKey, Alloc>::value_type = std::pair<const int, RTTI*>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, num_buckets);
  table = thisa->table;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, num_buckets);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::fill_range_with_empty(
    thisa,
    thisa->table,
    &table[thisa->num_buckets]);
};

// Line 396: range 000000000CE49DC4-000000000CE4A0D0
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_empty_key(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *val)
{
  bool *p_use_empty; // rax
  const int *v3; // r12
  const int *v4; // rax
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *p_emptyval; // rsi
  void *p_table; // rdi
  __gnu_cxx::new_allocator<std::pair<int const,char const*> > *p_Alval; // rcx
  __gnu_cxx::new_allocator<std::pair<int const,char const*> >::size_type num_buckets; // rsi
  void *v9; // rdi
  __int64 v10; // rax
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-18h]

  thisa = this;
  p_use_empty = &this->use_empty;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)((char *)this + 17);
    __asan_report_load1(p_use_empty);
  }
  if ( thisa->use_empty )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!use_empty",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x18Eu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey "
      "= dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; Equa"
      "lKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Value, Key,"
      " HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<const int, const char*>]");
  }
  if ( *(char *)(((unsigned __int64)&thisa->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->use_deleted);
  if ( thisa->use_deleted )
  {
    v3 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
           &thisa->get_key,
           &thisa->delval);
    v4 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
           &thisa->get_key,
           val);
    if ( std::equal_to<int>::operator()(&thisa->equals, v4, v3) )
    {
      __asan_handle_no_return(&thisa->equals);
      __assert_fail(
        "!use_deleted || !equals(get_key(val), get_key(delval))",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x191u,
        "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with V"
        "alue = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; Extract"
        "Key = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey"
        "; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Val"
        "ue, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<const int, const char*>]");
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->use_empty);
  }
  thisa->use_empty = 1;
  p_emptyval = &thisa->emptyval;
  p_table = thisa;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    thisa,
    &thisa->emptyval,
    val);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    p_table = &thisa->table;
    __asan_report_load8(&thisa->table, p_emptyval);
  }
  if ( thisa->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "!table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x195u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey "
      "= dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; Equa"
      "lKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Value, Key,"
      " HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<const int, const char*>]");
  }
  p_Alval = &thisa->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, p_emptyval);
  num_buckets = thisa->num_buckets;
  v9 = p_Alval;
  v10 = (__int64)__gnu_cxx::new_allocator<std::pair<int const,char const*>>::allocate(p_Alval, num_buckets, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
  {
    v9 = &thisa->table;
    v10 = __asan_report_store8();
  }
  thisa->table = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *)v10;
  if ( !thisa->table )
  {
    __asan_handle_no_return(v9);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x198u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::set_empty_key(const value_type&) [with Val"
      "ue = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey "
      "= dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; Equa"
      "lKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; dense_hashtable<Value, Key,"
      " HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<const int, const char*>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->table, num_buckets);
  table = thisa->table;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_buckets, num_buckets);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::fill_range_with_empty(
    thisa,
    thisa->table,
    &table[thisa->num_buckets]);
};

// Line 414: range 000000000CEAEE6E-000000000CEAEEDB
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::size(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_elements; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, v1);
  num_elements = this->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, v1);
  return num_elements - this->num_deleted;
};

// Line 414: range 000000000CEAECCA-000000000CEAED37
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::size(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_elements; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, v1);
  num_elements = this->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, v1);
  return num_elements - this->num_deleted;
};

// Line 414: range 000000000CEB06C8-000000000CEB0735
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::size(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_elements; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, v1);
  num_elements = this->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_deleted, v1);
  return num_elements - this->num_deleted;
};

// Line 417: range 000000000CE4AB64-000000000CE4AB83
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::empty(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  return dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::size(this) == 0;
};

// Line 418: range 000000000CFA43EE-000000000CFA4428
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  return this->num_buckets;
};

// Line 418: range 000000000CF49FB0-000000000CF49FEA
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  return this->num_buckets;
};

// Line 418: range 000000000CFA4B94-000000000CFA4BCE
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  return this->num_buckets;
};

// Line 429: range 000000000CEAE0A8-000000000CEAE138
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_elts,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type min_buckets_wanted)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned __int64 sz; // [rsp+20h] [rbp-8h]

  for ( sz = 32LL; ; sz *= 2LL )
  {
    if ( sz >= min_buckets_wanted )
    {
      v3 = (num_elts & 0x8000000000000000LL) != 0LL
         ? (float)(int)(num_elts & 1 | (num_elts >> 1)) + (float)(int)(num_elts & 1 | (num_elts >> 1))
         : (float)(int)num_elts;
      v4 = (sz & 0x8000000000000000LL) != 0LL
         ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
         : (float)(int)sz;
      if ( v3 < (float)(v4 * 0.5) )
        break;
    }
  }
  return sz;
};

// Line 429: range 000000000CEAE35E-000000000CEAE3EE
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_elts,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type min_buckets_wanted)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned __int64 sz; // [rsp+20h] [rbp-8h]

  for ( sz = 32LL; ; sz *= 2LL )
  {
    if ( sz >= min_buckets_wanted )
    {
      v3 = (num_elts & 0x8000000000000000LL) != 0LL
         ? (float)(int)(num_elts & 1 | (num_elts >> 1)) + (float)(int)(num_elts & 1 | (num_elts >> 1))
         : (float)(int)num_elts;
      v4 = (sz & 0x8000000000000000LL) != 0LL
         ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
         : (float)(int)sz;
      if ( v3 < (float)(v4 * 0.5) )
        break;
    }
  }
  return sz;
};

// Line 429: range 000000000CEAE622-000000000CEAE6B2
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_elts,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type min_buckets_wanted)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  unsigned __int64 sz; // [rsp+20h] [rbp-8h]

  for ( sz = 32LL; ; sz *= 2LL )
  {
    if ( sz >= min_buckets_wanted )
    {
      v3 = (num_elts & 0x8000000000000000LL) != 0LL
         ? (float)(int)(num_elts & 1 | (num_elts >> 1)) + (float)(int)(num_elts & 1 | (num_elts >> 1))
         : (float)(int)num_elts;
      v4 = (sz & 0x8000000000000000LL) != 0LL
         ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
         : (float)(int)sz;
      if ( v3 < (float)(v4 * 0.5) )
        break;
    }
  }
  return sz;
};

// Line 438: range 000000000CFA593E-000000000CFA5DF9
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::maybe_shrink(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_elements; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v6; // r14
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v7; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v8; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v10; // rcx
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  bool result; // al
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *thisa; // [rsp+8h] [rbp-108h]
  bool did_resize; // [rsp+17h] [rbp-F9h]
  unsigned __int64 sz; // [rsp+18h] [rbp-F8h]
  char v18[240]; // [rsp+20h] [rbp-F0h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)192;
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 104 7 tmp:450";
  *(_QWORD *)(v2 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::maybe_shrink;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  did_resize = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)&thisa->num_elements;
    __asan_report_load8(&thisa->num_elements, v1);
  }
  num_elements = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)&thisa->num_deleted;
    __asan_report_load8(&thisa->num_deleted, v1);
  }
  if ( num_elements < thisa->num_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "num_elements >= num_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B8u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dens"
      "e_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::Sele"
      "ctKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >]");
  }
  v6 = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(thisa);
  if ( (v6 & (dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(thisa)
            - 1)) != 0 )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B9u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dens"
      "e_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::Sele"
      "ctKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >]");
  }
  if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(thisa) <= 0x1F )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "bucket_count() >= HT_MIN_BUCKETS",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1BAu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dens"
      "e_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::Sele"
      "ctKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_elements, v1);
  v7 = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_deleted, v1);
  v8 = v7 - thisa->num_deleted;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->shrink_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->shrink_threshold, v1);
  if ( v8 < thisa->shrink_threshold
    && dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(thisa) > 0x20 )
  {
    for ( sz = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(thisa) >> 1;
          sz > 0x20;
          sz >>= 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_elements, v1);
      v10 = thisa->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_deleted, v1);
      v11 = v10 - thisa->num_deleted;
      v12 = v11 < 0
          ? (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          : (float)(int)v11;
      v13 = (sz & 0x8000000000000000LL) != 0LL
          ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
          : (float)(int)sz;
      if ( (float)(v13 * 0.2) <= v12 )
        break;
    }
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable(
      (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v2 + 48),
      thisa,
      sz);
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::swap(
      thisa,
      (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *)(v2 + 48));
    did_resize = 1;
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hashtable((dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v2 + 48));
  }
  if ( *(char *)(((unsigned __int64)&thisa->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&thisa->consider_shrink);
  thisa->consider_shrink = 0;
  result = did_resize;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 438: range 000000000CF49AF4-000000000CF49FAF
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::maybe_shrink(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_elements; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v6; // r14
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v7; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v8; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v10; // rcx
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  bool result; // al
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *thisa; // [rsp+8h] [rbp-108h]
  bool did_resize; // [rsp+17h] [rbp-F9h]
  unsigned __int64 sz; // [rsp+18h] [rbp-F8h]
  char v18[240]; // [rsp+20h] [rbp-F0h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)192;
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 104 7 tmp:450";
  *(_QWORD *)(v2 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::maybe_shrink;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  did_resize = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)&thisa->num_elements;
    __asan_report_load8(&thisa->num_elements, v1);
  }
  num_elements = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)&thisa->num_deleted;
    __asan_report_load8(&thisa->num_deleted, v1);
  }
  if ( num_elements < thisa->num_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "num_elements >= num_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B8u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RT"
      "TI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; All"
      "oc = std::allocator<std::pair<const int, RTTI*> >]");
  }
  v6 = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(thisa);
  if ( (v6 & (dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(thisa)
            - 1)) != 0 )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B9u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RT"
      "TI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; All"
      "oc = std::allocator<std::pair<const int, RTTI*> >]");
  }
  if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(thisa) <= 0x1F )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "bucket_count() >= HT_MIN_BUCKETS",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1BAu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RT"
      "TI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; All"
      "oc = std::allocator<std::pair<const int, RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_elements, v1);
  v7 = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_deleted, v1);
  v8 = v7 - thisa->num_deleted;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->shrink_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->shrink_threshold, v1);
  if ( v8 < thisa->shrink_threshold
    && dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(thisa) > 0x20 )
  {
    for ( sz = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(thisa) >> 1;
          sz > 0x20;
          sz >>= 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_elements, v1);
      v10 = thisa->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_deleted, v1);
      v11 = v10 - thisa->num_deleted;
      v12 = v11 < 0
          ? (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          : (float)(int)v11;
      v13 = (sz & 0x8000000000000000LL) != 0LL
          ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
          : (float)(int)sz;
      if ( (float)(v13 * 0.2) <= v12 )
        break;
    }
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable(
      (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 48),
      thisa,
      sz);
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::swap(
      thisa,
      (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *)(v2 + 48));
    did_resize = 1;
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hashtable((dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v2 + 48));
  }
  if ( *(char *)(((unsigned __int64)&thisa->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&thisa->consider_shrink);
  thisa->consider_shrink = 0;
  result = did_resize;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 438: range 000000000CFA46D8-000000000CFA4B93
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::maybe_shrink(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_elements; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v6; // r14
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v7; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v8; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v10; // rcx
  __int64 v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm1_4
  bool result; // al
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *thisa; // [rsp+8h] [rbp-108h]
  bool did_resize; // [rsp+17h] [rbp-F9h]
  unsigned __int64 sz; // [rsp+18h] [rbp-F8h]
  char v18[240]; // [rsp+20h] [rbp-F0h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)192;
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 104 7 tmp:450";
  *(_QWORD *)(v2 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::maybe_shrink;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  did_resize = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)&thisa->num_elements;
    __asan_report_load8(&thisa->num_elements, v1);
  }
  num_elements = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
  {
    this = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)&thisa->num_deleted;
    __asan_report_load8(&thisa->num_deleted, v1);
  }
  if ( num_elements < thisa->num_deleted )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "num_elements >= num_deleted",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B8u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<i"
      "nt, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_"
      "to<int>; Alloc = std::allocator<std::pair<const int, const char*> >]");
  }
  v6 = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(thisa);
  if ( (v6 & (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(thisa)
            - 1)) != 0 )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1B9u,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<i"
      "nt, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_"
      "to<int>; Alloc = std::allocator<std::pair<const int, const char*> >]");
  }
  if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(thisa) <= 0x1F )
  {
    __asan_handle_no_return(thisa);
    __assert_fail(
      "bucket_count() >= HT_MIN_BUCKETS",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1BAu,
      "bool dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::maybe_shrink() [with Value = std::pair<con"
      "st int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<i"
      "nt, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_"
      "to<int>; Alloc = std::allocator<std::pair<const int, const char*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_elements, v1);
  v7 = thisa->num_elements;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->num_deleted, v1);
  v8 = v7 - thisa->num_deleted;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->shrink_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->shrink_threshold, v1);
  if ( v8 < thisa->shrink_threshold
    && dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(thisa) > 0x20 )
  {
    for ( sz = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(thisa) >> 1;
          sz > 0x20;
          sz >>= 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_elements, v1);
      v10 = thisa->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->num_deleted, v1);
      v11 = v10 - thisa->num_deleted;
      v12 = v11 < 0
          ? (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          : (float)(int)v11;
      v13 = (sz & 0x8000000000000000LL) != 0LL
          ? (float)(int)(sz & 1 | (sz >> 1)) + (float)(int)(sz & 1 | (sz >> 1))
          : (float)(int)sz;
      if ( (float)(v13 * 0.2) <= v12 )
        break;
    }
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable(
      (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v2 + 48),
      thisa,
      sz);
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::swap(
      thisa,
      (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *)(v2 + 48));
    did_resize = 1;
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hashtable((dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v2 + 48));
  }
  if ( *(char *)(((unsigned __int64)&thisa->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&thisa->consider_shrink);
  thisa->consider_shrink = 0;
  result = did_resize;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 461: range 000000000CF49260-000000000CF49610
bool __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::resize_delta(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type delta,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v6; // rcx
  char v7; // al
  bool result; // al
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v9; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_elements; // rcx
  char did_resize; // [rsp+2Fh] [rbp-F1h]
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type needed_size; // [rsp+30h] [rbp-F0h]
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type resize_to; // [rsp+38h] [rbp-E8h]
  char v16[224]; // [rsp+40h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 104 7 tmp:480";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::resize_delta;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  did_resize = 0;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->consider_shrink);
  if ( this->consider_shrink )
    did_resize = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::maybe_shrink(this);
  if ( min_buckets_wanted >= dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, delta);
  v6 = this->num_elements + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->enlarge_threshold, delta);
  if ( v6 > this->enlarge_threshold )
LABEL_15:
    v7 = 0;
  else
    v7 = 1;
  if ( v7 )
  {
    result = did_resize;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, delta);
    v9 = this->num_elements + delta;
    needed_size = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
                    this,
                    v9,
                    min_buckets_wanted);
    if ( needed_size > dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v9);
      num_elements = this->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v9);
      resize_to = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
                    this,
                    num_elements - this->num_deleted + delta,
                    min_buckets_wanted);
      dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable(
        (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 48),
        this,
        resize_to);
      dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::swap(
        this,
        (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *)(v3 + 48));
      did_resize = 1;
      dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hashtable((dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 48));
    }
    result = did_resize;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 461: range 000000000CEAFE34-000000000CEB01E4
bool __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::resize_delta(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type delta,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v6; // rcx
  char v7; // al
  bool result; // al
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v9; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_elements; // rcx
  char did_resize; // [rsp+2Fh] [rbp-F1h]
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type needed_size; // [rsp+30h] [rbp-F0h]
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type resize_to; // [rsp+38h] [rbp-E8h]
  char v16[224]; // [rsp+40h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 104 7 tmp:480";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::resize_delta;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  did_resize = 0;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->consider_shrink);
  if ( this->consider_shrink )
    did_resize = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::maybe_shrink(this);
  if ( min_buckets_wanted >= dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, delta);
  v6 = this->num_elements + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->enlarge_threshold, delta);
  if ( v6 > this->enlarge_threshold )
LABEL_15:
    v7 = 0;
  else
    v7 = 1;
  if ( v7 )
  {
    result = did_resize;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, delta);
    v9 = this->num_elements + delta;
    needed_size = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
                    this,
                    v9,
                    min_buckets_wanted);
    if ( needed_size > dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v9);
      num_elements = this->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v9);
      resize_to = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
                    this,
                    num_elements - this->num_deleted + delta,
                    min_buckets_wanted);
      dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable(
        (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 48),
        this,
        resize_to);
      dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::swap(
        this,
        (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *)(v3 + 48));
      did_resize = 1;
      dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hashtable((dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 48));
    }
    result = did_resize;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 461: range 000000000CF48304-000000000CF486B4
bool __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::resize_delta(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type delta,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v6; // rcx
  char v7; // al
  bool result; // al
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v9; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_elements; // rcx
  char did_resize; // [rsp+2Fh] [rbp-F1h]
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type needed_size; // [rsp+30h] [rbp-F0h]
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type resize_to; // [rsp+38h] [rbp-E8h]
  char v16[224]; // [rsp+40h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 104 7 tmp:480";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::resize_delta;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  did_resize = 0;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->consider_shrink);
  if ( this->consider_shrink )
    did_resize = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::maybe_shrink(this);
  if ( min_buckets_wanted >= dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_elements, delta);
  v6 = this->num_elements + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->enlarge_threshold, delta);
  if ( v6 > this->enlarge_threshold )
LABEL_15:
    v7 = 0;
  else
    v7 = 1;
  if ( v7 )
  {
    result = did_resize;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, delta);
    v9 = this->num_elements + delta;
    needed_size = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
                    this,
                    v9,
                    min_buckets_wanted);
    if ( needed_size > dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v9);
      num_elements = this->num_elements;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v9);
      resize_to = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
                    this,
                    num_elements - this->num_deleted + delta,
                    min_buckets_wanted);
      dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable(
        (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 48),
        this,
        resize_to);
      dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::swap(
        this,
        (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *)(v3 + 48));
      did_resize = 1;
      dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hashtable((dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 48));
    }
    result = did_resize;
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 493: range 000000000D0492AA-000000000D0494BC
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::expand_array(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        size_t resize_to,
        dense_hash_map_traits::true_type a3)
{
  std::allocator<std::pair<char const* const,const RTTI*> > *p_Alval; // rdi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  std::pair<char const* const,const RTTI*> *v5; // rsi
  std::allocator<std::pair<char const* const,const RTTI*> > *v6; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_buckets; // rdx
  __int64 v8; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v9; // rdx
  void *p_table; // rdi
  size_t resize_toa; // [rsp+0h] [rbp-20h]
  __gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  resize_toa = resize_to;
  p_Alval = &this->_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::allocate(p_Alval, resize_to, 0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_Alval);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1EFu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::Co"
      "nstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor,"
      " TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator"
      "<std::pair<const char* const, const RTTI*> >; size_t = long unsigned int; dense_hash_map_traits::true_type = dense"
      "_hash_map_traits::integral_constant<bool, true>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, resize_to);
  if ( this->table )
  {
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, resize_to);
    v5 = &table[this->num_buckets];
    std::uninitialized_copy<std::pair<char const* const,RTTI const*> *,std::pair<char const* const,RTTI const*> *>(
      this->table,
      v5,
      new_table);
    v6 = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v5);
    num_buckets = this->num_buckets;
    v8 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_load8(&this->table, v8);
    resize_to = (size_t)this->table;
    __gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::deallocate(
      v6,
      (__gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::pointer)resize_to,
      num_buckets);
  }
  v9 = &new_table[resize_toa];
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, resize_to);
  p_table = this;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::fill_range_with_empty(
    this,
    &new_table[this->num_buckets],
    v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1F7u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::Co"
      "nstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor,"
      " TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator"
      "<std::pair<const char* const, const RTTI*> >; size_t = long unsigned int; dense_hash_map_traits::true_type = dense"
      "_hash_map_traits::integral_constant<bool, true>]");
  }
};

// Line 493: range 000000000D010826-000000000D010A38
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::expand_array(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        size_t resize_to,
        dense_hash_map_traits::true_type a3)
{
  std::allocator<std::pair<int const,RTTI*> > *p_Alval; // rdi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  std::pair<int const,RTTI*> *v5; // rsi
  std::allocator<std::pair<int const,RTTI*> > *v6; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_buckets; // rdx
  __int64 v8; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v9; // rdx
  void *p_table; // rdi
  size_t resize_toa; // [rsp+0h] [rbp-20h]
  __gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  resize_toa = resize_to;
  p_Alval = &this->_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::allocate(p_Alval, resize_to, 0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_Alval);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1EFu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTyp"
      "eID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::Selec"
      "tKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; size_t = long unsigned "
      "int; dense_hash_map_traits::true_type = dense_hash_map_traits::integral_constant<bool, true>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, resize_to);
  if ( this->table )
  {
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, resize_to);
    v5 = &table[this->num_buckets];
    std::uninitialized_copy<std::pair<int const,RTTI *> *,std::pair<int const,RTTI *> *>(this->table, v5, new_table);
    v6 = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v5);
    num_buckets = this->num_buckets;
    v8 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_load8(&this->table, v8);
    resize_to = (size_t)this->table;
    __gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::deallocate(
      v6,
      (__gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::pointer)resize_to,
      num_buckets);
  }
  v9 = &new_table[resize_toa];
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, resize_to);
  p_table = this;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::fill_range_with_empty(
    this,
    &new_table[this->num_buckets],
    v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1F7u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTyp"
      "eID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::Selec"
      "tKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; size_t = long unsigned "
      "int; dense_hash_map_traits::true_type = dense_hash_map_traits::integral_constant<bool, true>]");
  }
};

// Line 493: range 000000000D04897A-000000000D048B8C
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::expand_array(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        size_t resize_to,
        dense_hash_map_traits::true_type a3)
{
  std::allocator<std::pair<int const,char const*> > *p_Alval; // rdi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx
  std::pair<int const,char const*> *v5; // rsi
  std::allocator<std::pair<int const,char const*> > *v6; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_buckets; // rdx
  __int64 v8; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v9; // rdx
  void *p_table; // rdi
  size_t resize_toa; // [rsp+0h] [rbp-20h]
  __gnu_cxx::new_allocator<std::pair<int const,char const*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  resize_toa = resize_to;
  p_Alval = &this->_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<int const,char const*>>::allocate(p_Alval, resize_to, 0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_Alval);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1EFu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersist"
      "entTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<i"
      "nt> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; size_"
      "t = long unsigned int; dense_hash_map_traits::true_type = dense_hash_map_traits::integral_constant<bool, true>]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, resize_to);
  if ( this->table )
  {
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, resize_to);
    v5 = &table[this->num_buckets];
    std::uninitialized_copy<std::pair<int const,char const*> *,std::pair<int const,char const*> *>(
      this->table,
      v5,
      new_table);
    v6 = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v5);
    num_buckets = this->num_buckets;
    v8 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_load8(&this->table, v8);
    resize_to = (size_t)this->table;
    __gnu_cxx::new_allocator<std::pair<int const,char const*>>::deallocate(
      v6,
      (__gnu_cxx::new_allocator<std::pair<int const,char const*> >::pointer)resize_to,
      num_buckets);
  }
  v9 = &new_table[resize_toa];
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, resize_to);
  p_table = this;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::fill_range_with_empty(
    this,
    &new_table[this->num_buckets],
    v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x1F7u,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::expand_array(size_t, dense_hash_map_traits"
      "::true_type) [with Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersist"
      "entTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<i"
      "nt> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*> >; size_"
      "t = long unsigned int; dense_hash_map_traits::true_type = dense_hash_map_traits::integral_constant<bool, true>]");
  }
};

// Line 520: range 000000000D00FC84-000000000D0100AB
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::copy_from(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *ht,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v6; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v7; // r14
  const std::pair<char const* const,const RTTI*> *v8; // rsi
  unsigned __int64 v9; // rax
  dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::reference v10; // rsi
  const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v11; // rdx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v12; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_probes; // [rsp+20h] [rbp-D0h]
  size_t bucknum; // [rsp+28h] [rbp-C8h]
  size_t resize_to; // [rsp+30h] [rbp-C0h]
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type bucket_count_minus_one; // [rsp+38h] [rbp-B8h]
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator it; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 6 it:539";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::copy_from;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::clear(this);
  v6 = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::size(ht);
  resize_to = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
                this,
                v6,
                min_buckets_wanted);
  if ( resize_to > dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this) )
  {
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::expand_array(
      this,
      resize_to,
      (dense_hash_map_traits::true_type)resize_to);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->num_buckets = resize_to;
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(this);
  }
  v7 = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this);
  if ( (v7 & (dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this)
            - 1)) != 0 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x21Au,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value, Key"
      ", HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_"
      "type) [with Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstChar"
      "PtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeMa"
      "nager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::p"
      "air<const char* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_typ"
      "e = long unsigned int]");
  }
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::begin(
    (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *)(v3 + 32),
    ht);
  while ( 1 )
  {
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
      &it,
      ht);
    if ( !dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator!=(
            (const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 32),
            &it) )
      break;
    num_probes = 0LL;
    bucket_count_minus_one = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this)
                           - 1;
    v8 = dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*((const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 32));
    v9 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                             &this->get_key,
                             v8);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9, v8);
    for ( bucknum = bucket_count_minus_one & TypeManager::ConstCharPtrHashFunctor::operator()(
                                               &this->hash,
                                               *(const char **)v9);
          !dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
             this,
             bucknum);
          bucknum = bucket_count_minus_one & (bucknum + num_probes) )
    {
      if ( ++num_probes >= dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this) )
      {
        __asan_handle_no_return(this);
        __assert_fail(
          "num_probes < bucket_count()",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x223u,
          "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value,"
          " Key, HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
          ">::size_type) [with Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManage"
          "r::ConstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHas"
          "hFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = s"
          "td::allocator<std::pair<const char* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, Eq"
          "ualKey, Alloc>::size_type = long unsigned int]");
      }
    }
    v10 = dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator*((const dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v10);
    v11 = v10;
    v12 = &this->table[bucknum];
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
      this,
      v12,
      v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, v12);
    ++this->num_elements;
    dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::operator++((dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 32));
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 520: range 000000000CFA6594-000000000CFA69D3
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::copy_from(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *ht,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type min_buckets_wanted)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v6; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v7; // r14
  const std::pair<int const,RTTI*> *v8; // rax
  PersistentTypeID *v9; // rax
  PersistentTypeID *v10; // rdx
  dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::reference v11; // rsi
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v12; // rdx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v13; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_probes; // [rsp+20h] [rbp-D0h]
  size_t bucknum; // [rsp+28h] [rbp-C8h]
  size_t resize_to; // [rsp+30h] [rbp-C0h]
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type bucket_count_minus_one; // [rsp+38h] [rbp-B8h]
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator it; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 6 it:539";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::copy_from;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::clear(this);
  v6 = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::size(ht);
  resize_to = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
                this,
                v6,
                min_buckets_wanted);
  if ( resize_to > dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this) )
  {
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::expand_array(
      this,
      resize_to,
      (dense_hash_map_traits::true_type)resize_to);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->num_buckets = resize_to;
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(this);
  }
  v7 = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this);
  if ( (v7 & (dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this)
            - 1)) != 0 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "(bucket_count() & (bucket_count()-1)) == 0",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x21Au,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value, Key"
      ", HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_"
      "type) [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; Ex"
      "tractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; E"
      "qualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, Ha"
      "shFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
  }
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::begin(
    (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v3 + 32),
    ht);
  while ( 1 )
  {
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      &it,
      ht);
    if ( !dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator!=(
            (const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 32),
            &it) )
      break;
    num_probes = 0LL;
    bucket_count_minus_one = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this)
                           - 1;
    v8 = dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 32));
    v9 = (PersistentTypeID *)dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
                               &this->get_key,
                               v8);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    for ( bucknum = bucket_count_minus_one & TypeManager::HashFunctorPersistentTypeID::operator()(&this->hash, *v10);
          !dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
             this,
             bucknum);
          bucknum = bucket_count_minus_one & (bucknum + num_probes) )
    {
      if ( ++num_probes >= dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this) )
      {
        __asan_handle_no_return(this);
        __assert_fail(
          "num_probes < bucket_count()",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x223u,
          "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::copy_from(const dense_hashtable<Value,"
          " Key, HashFcn, ExtractKey, EqualKey, Alloc>&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
          ">::size_type) [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersiste"
          "ntTypeID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int>"
          " >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hash"
          "table<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
      }
    }
    v11 = dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator*((const dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v11);
    v12 = v11;
    v13 = &this->table[bucknum];
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
      this,
      v13,
      v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_elements, v13);
    ++this->num_elements;
    dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::operator++((dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 32));
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 571: range 000000000CE48E2A-000000000CE48FD4
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type n,
        const TypeManager::ConstCharPtrHashFunctor *hf,
        const TypeManager::ConstCharPtrEqualTo *eql,
        const dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey *ext)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->use_empty);
  }
  this->use_empty = 0;
  std::pair<char const* const,RTTI const*>::pair<char const* const,RTTI const*,true>(&this->delval);
  std::pair<char const* const,RTTI const*>::pair<char const* const,RTTI const*,true>(&this->emptyval);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  v5 = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
         this,
         0LL,
         n);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->num_buckets = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<char const* const,RTTI const*>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(this);
};

// Line 571: range 000000000CE49062-000000000CE4920C
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type n,
        const TypeManager::HashFunctorPersistentTypeID *hf,
        const std::equal_to<int> *eql,
        const dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey *ext)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->use_empty);
  }
  this->use_empty = 0;
  std::pair<int const,RTTI *>::pair<int const,RTTI *,true>(&this->delval);
  std::pair<int const,RTTI *>::pair<int const,RTTI *,true>(&this->emptyval);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  v5 = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
         this,
         0LL,
         n);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->num_buckets = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<int const,RTTI *>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(this);
};

// Line 571: range 000000000CE4929A-000000000CE49444
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type n,
        const TypeManager::HashFunctorPersistentTypeID *hf,
        const std::equal_to<int> *eql,
        const dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey *ext)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v5; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->use_empty);
  }
  this->use_empty = 0;
  std::pair<int const,char const*>::pair<int const,char const*,true>(&this->delval);
  std::pair<int const,char const*>::pair<int const,char const*,true>(&this->emptyval);
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  v5 = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
         this,
         0LL,
         n);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v5 = __asan_report_store8();
  this->num_buckets = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<int const,char const*>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(this);
};

// Line 586: range 000000000CFA5DFA-000000000CFA60EC
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *ht,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type min_buckets_wanted)
{
  bool use_deleted; // cl
  __int64 v4; // rsi
  bool use_empty; // cl
  char v6; // dl
  const RTTI *second; // rdx
  const RTTI *v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&ht->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&ht->use_deleted);
  use_deleted = ht->use_deleted;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = use_deleted;
  v4 = ((_BYTE)ht + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&ht->use_empty);
  }
  use_empty = ht->use_empty;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (((unsigned __int8)this + 17) & 7) >= v6 )
    __asan_report_store1(&this->use_empty);
  this->use_empty = use_empty;
  if ( *(_WORD *)(((unsigned __int64)&this->delval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->delval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->delval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->delval);
  second = ht->delval.second;
  this->delval.first = ht->delval.first;
  this->delval.second = second;
  if ( *(_WORD *)(((unsigned __int64)&this->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->emptyval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->emptyval);
  v8 = ht->emptyval.second;
  this->emptyval.first = ht->emptyval.first;
  this->emptyval.second = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_buckets = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<char const* const,RTTI const*>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(this);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::copy_from(
    this,
    ht,
    min_buckets_wanted);
};

// Line 586: range 000000000CF49FEC-000000000CF4A2DE
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *ht,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type min_buckets_wanted)
{
  bool use_deleted; // cl
  __int64 v4; // rsi
  bool use_empty; // cl
  char v6; // dl
  RTTI *second; // rdx
  RTTI *v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&ht->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&ht->use_deleted);
  use_deleted = ht->use_deleted;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = use_deleted;
  v4 = ((_BYTE)ht + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&ht->use_empty);
  }
  use_empty = ht->use_empty;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (((unsigned __int8)this + 17) & 7) >= v6 )
    __asan_report_store1(&this->use_empty);
  this->use_empty = use_empty;
  if ( *(_WORD *)(((unsigned __int64)&this->delval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->delval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->delval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->delval);
  second = ht->delval.second;
  *(_QWORD *)&this->delval.first = *(_QWORD *)&ht->delval.first;
  this->delval.second = second;
  if ( *(_WORD *)(((unsigned __int64)&this->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->emptyval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->emptyval);
  v8 = ht->emptyval.second;
  *(_QWORD *)&this->emptyval.first = *(_QWORD *)&ht->emptyval.first;
  this->emptyval.second = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_buckets = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<int const,RTTI *>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(this);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::copy_from(
    this,
    ht,
    min_buckets_wanted);
};

// Line 586: range 000000000CFA4BD0-000000000CFA4EC2
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *ht,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type min_buckets_wanted)
{
  bool use_deleted; // cl
  __int64 v4; // rsi
  bool use_empty; // cl
  char v6; // dl
  const char *second; // rdx
  const char *v8; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
  if ( *(char *)(((unsigned __int64)&ht->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&ht->use_deleted);
  use_deleted = ht->use_deleted;
  if ( *(char *)(((unsigned __int64)&this->use_deleted >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_deleted);
  this->use_deleted = use_deleted;
  v4 = ((_BYTE)ht + 17) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) != 0
    && (char)v4 >= *(_BYTE *)(((unsigned __int64)&ht->use_empty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&ht->use_empty);
  }
  use_empty = ht->use_empty;
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_empty >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (((unsigned __int8)this + 17) & 7) >= v6 )
    __asan_report_store1(&this->use_empty);
  this->use_empty = use_empty;
  if ( *(_WORD *)(((unsigned __int64)&this->delval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->delval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->delval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->delval);
  second = ht->delval.second;
  *(_QWORD *)&this->delval.first = *(_QWORD *)&ht->delval.first;
  this->delval.second = second;
  if ( *(_WORD *)(((unsigned __int64)&this->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->emptyval, v4);
  if ( *(_WORD *)(((unsigned __int64)&ht->emptyval >> 3) + 0x7FFF8000) )
    __asan_report_load16(&ht->emptyval);
  v8 = ht->emptyval.second;
  *(_QWORD *)&this->emptyval.first = *(_QWORD *)&ht->emptyval.first;
  this->emptyval.second = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->table = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_buckets = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  std::allocator<std::pair<int const,char const*>>::allocator(&this->_Alval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(this);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::copy_from(
    this,
    ht,
    min_buckets_wanted);
};

// Line 610: range 000000000CDB6DFA-000000000CDB6EFA
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::~dense_hashtable(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  std::allocator<std::pair<char const* const,const RTTI*> > *p_Alval; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_buckets; // rdx
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
    p_Alval = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, 0LL);
    num_buckets = this->num_buckets;
    v4 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      __asan_report_load8(&this->table, v4);
    __gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::deallocate(p_Alval, this->table, num_buckets);
  }
  std::allocator<std::pair<char const* const,RTTI const*>>::~allocator(&this->_Alval);
};

// Line 610: range 000000000CDB6F36-000000000CDB7036
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::~dense_hashtable(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  std::allocator<std::pair<int const,RTTI*> > *p_Alval; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_buckets; // rdx
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
    p_Alval = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, 0LL);
    num_buckets = this->num_buckets;
    v4 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      __asan_report_load8(&this->table, v4);
    __gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::deallocate(p_Alval, this->table, num_buckets);
  }
  std::allocator<std::pair<int const,RTTI *>>::~allocator(&this->_Alval);
};

// Line 610: range 000000000CDB7072-000000000CDB7172
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::~dense_hashtable(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  std::allocator<std::pair<int const,char const*> > *p_Alval; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_buckets; // rdx
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
    p_Alval = &this->_Alval;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, 0LL);
    num_buckets = this->num_buckets;
    v4 = *(unsigned __int8 *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      __asan_report_load8(&this->table, v4);
    __gnu_cxx::new_allocator<std::pair<int const,char const*>>::deallocate(p_Alval, this->table, num_buckets);
  }
  std::allocator<std::pair<int const,char const*>>::~allocator(&this->_Alval);
};

// Line 618: range 000000000CFA60EE-000000000CFA6377
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::swap(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *ht)
{
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *)v3;
  }
  v2->first = (const char *const)1102416563;
  v2->second = (const RTTI *)"1 32 16 7 tmp:630";
  v2[1].first = (const char *const)dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::swap;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::swap<TypeManager::ConstCharPtrHashFunctor>(&this->hash, &ht->hash);
  std::swap<TypeManager::ConstCharPtrEqualTo>(&this->equals, &ht->equals);
  std::swap<dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey>(
    &this->get_key,
    &ht->get_key);
  std::swap<unsigned long>(&this->num_deleted, &ht->num_deleted);
  std::swap<bool>(&this->use_deleted, &ht->use_deleted);
  std::swap<bool>(&this->use_empty, &ht->use_empty);
  v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    v2 + 2,
    &this->delval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    &this->delval,
    &ht->delval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    &ht->delval,
    v2 + 2);
  v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    v2 + 2,
    &this->emptyval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    &this->emptyval,
    &ht->emptyval);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
    this,
    &ht->emptyval,
    v2 + 2);
  std::swap<std::pair<char const* const,RTTI const*> *>(&this->table, &ht->table);
  std::swap<unsigned long>(&this->num_buckets, &ht->num_buckets);
  std::swap<unsigned long>(&this->num_elements, &ht->num_elements);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(this);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(ht);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->first = (const char *const)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 618: range 000000000CF4A2E0-000000000CF4A569
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::swap(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *ht)
{
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *)v3;
  }
  *(_QWORD *)&v2->first = 1102416563LL;
  v2->second = (RTTI *)"1 32 16 7 tmp:630";
  *(_QWORD *)&v2[1].first = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::swap;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::swap<TypeManager::HashFunctorPersistentTypeID>(&this->hash, &ht->hash);
  std::swap<std::equal_to<int>>(&this->equals, &ht->equals);
  std::swap<dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey>(
    &this->get_key,
    &ht->get_key);
  std::swap<unsigned long>(&this->num_deleted, &ht->num_deleted);
  std::swap<bool>(&this->use_deleted, &ht->use_deleted);
  std::swap<bool>(&this->use_empty, &ht->use_empty);
  *(_QWORD *)&v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    v2 + 2,
    &this->delval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    &this->delval,
    &ht->delval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    &ht->delval,
    v2 + 2);
  *(_QWORD *)&v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    v2 + 2,
    &this->emptyval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    &this->emptyval,
    &ht->emptyval);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
    this,
    &ht->emptyval,
    v2 + 2);
  std::swap<std::pair<int const,RTTI *> *>(&this->table, &ht->table);
  std::swap<unsigned long>(&this->num_buckets, &ht->num_buckets);
  std::swap<unsigned long>(&this->num_elements, &ht->num_elements);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(this);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(ht);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)&v2->first = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 618: range 000000000CFA4EC4-000000000CFA514D
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::swap(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *ht)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *)v3;
  }
  *(_QWORD *)&v2->first = 1102416563LL;
  v2->second = "1 32 16 7 tmp:630";
  *(_QWORD *)&v2[1].first = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::swap;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::swap<TypeManager::HashFunctorPersistentTypeID>(&this->hash, &ht->hash);
  std::swap<std::equal_to<int>>(&this->equals, &ht->equals);
  std::swap<dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey>(
    &this->get_key,
    &ht->get_key);
  std::swap<unsigned long>(&this->num_deleted, &ht->num_deleted);
  std::swap<bool>(&this->use_deleted, &ht->use_deleted);
  std::swap<bool>(&this->use_empty, &ht->use_empty);
  *(_QWORD *)&v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    v2 + 2,
    &this->delval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    &this->delval,
    &ht->delval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    &ht->delval,
    v2 + 2);
  *(_QWORD *)&v2[2].first = 0LL;
  v2[2].second = 0LL;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    v2 + 2,
    &this->emptyval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    &this->emptyval,
    &ht->emptyval);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
    this,
    &ht->emptyval,
    v2 + 2);
  std::swap<std::pair<int const,char const*> *>(&this->table, &ht->table);
  std::swap<unsigned long>(&this->num_buckets, &ht->num_buckets);
  std::swap<unsigned long>(&this->num_elements, &ht->num_elements);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(this);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(ht);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)&v2->first = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 643: range 000000000D048FA8-000000000D0492A8
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::clear(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v2; // rax
  std::allocator<std::pair<char const* const,const RTTI*> > *p_Alval; // rcx
  std::pair<char const* const,const RTTI*> *num_buckets; // rsi
  void *p_table; // rdi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  __gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::size_type old_bucket_count; // [rsp+10h] [rbp-10h]
  __gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    v1 = 0LL;
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  old_bucket_count = this->num_buckets;
  v2 = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::min_size(
         this,
         0LL,
         0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->num_buckets = v2;
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(this);
  p_Alval = &this->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, 0LL);
  num_buckets = (std::pair<char const* const,const RTTI*> *)this->num_buckets;
  p_table = p_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::allocate(
                p_Alval,
                (__gnu_cxx::new_allocator<std::pair<char const* const,const RTTI*> >::size_type)num_buckets,
                0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Bu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const char"
      "* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dense_hash_"
      "map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; "
      "EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_load8(&this->table, num_buckets);
  }
  if ( this->table )
  {
    num_buckets = this->table;
    p_table = &this->_Alval;
    __gnu_cxx::new_allocator<std::pair<char const* const,RTTI const*>>::deallocate(
      &this->_Alval,
      num_buckets,
      old_bucket_count);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Fu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const char"
      "* const, const RTTI*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dense_hash_"
      "map<const char*, const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; "
      "EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, num_buckets);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, num_buckets);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::fill_range_with_empty(
    this,
    this->table,
    &table[this->num_buckets]);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
};

// Line 643: range 000000000D010524-000000000D010824
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::clear(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v2; // rax
  std::allocator<std::pair<int const,RTTI*> > *p_Alval; // rcx
  std::pair<int const,RTTI*> *num_buckets; // rsi
  void *p_table; // rdi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  __gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::size_type old_bucket_count; // [rsp+10h] [rbp-10h]
  __gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    v1 = 0LL;
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  old_bucket_count = this->num_buckets;
  v2 = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::min_size(
         this,
         0LL,
         0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->num_buckets = v2;
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(this);
  p_Alval = &this->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, 0LL);
  num_buckets = (std::pair<int const,RTTI*> *)this->num_buckets;
  p_table = p_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::allocate(
                p_Alval,
                (__gnu_cxx::new_allocator<std::pair<int const,RTTI*> >::size_type)num_buckets,
                0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Bu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const int,"
      " RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RTTI*, Ty"
      "peManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = st"
      "d::allocator<std::pair<const int, RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_load8(&this->table, num_buckets);
  }
  if ( this->table )
  {
    num_buckets = this->table;
    p_table = &this->_Alval;
    __gnu_cxx::new_allocator<std::pair<int const,RTTI *>>::deallocate(&this->_Alval, num_buckets, old_bucket_count);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Fu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const int,"
      " RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RTTI*, Ty"
      "peManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = st"
      "d::allocator<std::pair<const int, RTTI*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, num_buckets);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, num_buckets);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::fill_range_with_empty(
    this,
    this->table,
    &table[this->num_buckets]);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
};

// Line 643: range 000000000D048678-000000000D048978
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::clear(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v2; // rax
  std::allocator<std::pair<int const,char const*> > *p_Alval; // rcx
  std::pair<int const,char const*> *num_buckets; // rsi
  void *p_table; // rdi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx
  __gnu_cxx::new_allocator<std::pair<int const,char const*> >::size_type old_bucket_count; // [rsp+10h] [rbp-10h]
  __gnu_cxx::new_allocator<std::pair<int const,char const*> >::pointer new_table; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, v1);
  if ( this->table )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v1);
    v1 = 0LL;
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::destroy_buckets(
      this,
      0LL,
      this->num_buckets);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  old_bucket_count = this->num_buckets;
  v2 = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::min_size(
         this,
         0LL,
         0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    v2 = __asan_report_store8();
  this->num_buckets = v2;
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(this);
  p_Alval = &this->_Alval;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, 0LL);
  num_buckets = (std::pair<int const,char const*> *)this->num_buckets;
  p_table = p_Alval;
  new_table = __gnu_cxx::new_allocator<std::pair<int const,char const*>>::allocate(
                p_Alval,
                (__gnu_cxx::new_allocator<std::pair<int const,char const*> >::size_type)num_buckets,
                0LL);
  if ( !new_table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "new_table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Bu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const int,"
      " const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, con"
      "st char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>"
      "; Alloc = std::allocator<std::pair<const int, const char*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_load8(&this->table, num_buckets);
  }
  if ( this->table )
  {
    num_buckets = this->table;
    p_table = &this->_Alval;
    __gnu_cxx::new_allocator<std::pair<int const,char const*>>::deallocate(&this->_Alval, num_buckets, old_bucket_count);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
  {
    p_table = &this->table;
    __asan_report_store8();
  }
  this->table = new_table;
  if ( !this->table )
  {
    __asan_handle_no_return(p_table);
    __assert_fail(
      "table",
      "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
      0x28Fu,
      "void dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::clear() [with Value = std::pair<const int,"
      " const char*>; Key = int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, con"
      "st char*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>"
      "; Alloc = std::allocator<std::pair<const int, const char*> >]");
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->table, num_buckets);
  table = this->table;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, num_buckets);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::fill_range_with_empty(
    this,
    this->table,
    &table[this->num_buckets]);
  if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_elements = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->num_deleted = 0LL;
};

// Line 681: range 000000000CF47FBC-000000000CF482F4
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position_with_hash(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type hash_)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::pair<long unsigned int,long unsigned int> result; // rax
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v7; // rsi
  dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::SelectKey *p_get_key; // rdx
  const std::pair<char const* const,const RTTI*> *v9; // rsi
  unsigned __int64 v10; // rax
  const char *v11; // rdx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type num_probes; // [rsp+20h] [rbp-B0h]
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type bucket_count_minus_one; // [rsp+28h] [rbp-A8h]
  std::pair<long unsigned int,long unsigned int> v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 11 bucknum:684 64 8 14 insert_pos:685";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position_with_hash;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  num_probes = 0LL;
  bucket_count_minus_one = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this)
                         - 1;
  *(_QWORD *)(v3 + 32) = bucket_count_minus_one & hash_;
  *(_QWORD *)(v3 + 64) = -1LL;
  while ( !dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_empty(
             this,
             *(_QWORD *)(v3 + 32)) )
  {
    v7 = *(_QWORD *)(v3 + 32);
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
           this,
           v7) )
    {
      if ( *(_QWORD *)(v3 + 64) == -1LL )
        *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      p_get_key = &this->get_key;
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v7);
      v9 = &this->table[*(_QWORD *)(v3 + 32)];
      v10 = (unsigned __int64)dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
                                p_get_key,
                                v9);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10, v9);
      v11 = *(const char **)v10;
      if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
        __asan_report_load8(key, v9);
      if ( TypeManager::ConstCharPtrEqualTo::operator()(&this->equals, *key, v11) )
      {
        std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
          &v16,
          (unsigned __int64 *)(v3 + 32),
          &dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::ILLEGAL_BUCKET);
        result = v16;
        goto LABEL_23;
      }
    }
    ++num_probes;
    *(_QWORD *)(v3 + 32) = bucket_count_minus_one & (*(_QWORD *)(v3 + 32) + num_probes);
    if ( num_probes >= dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::bucket_count(this) )
    {
      __asan_handle_no_return(this);
      __assert_fail(
        "num_probes < bucket_count()",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x2BEu,
        "std::pair<long unsigned int, long unsigned int> dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
        ">::find_position_with_hash(const key_type&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::s"
        "ize_type) const [with Value = std::pair<const char* const, const RTTI*>; Key = const char*; HashFcn = TypeManage"
        "r::ConstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*, const RTTI*, TypeManager::ConstCharPtrHashF"
        "unctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = TypeManager::ConstCharPtrEqualTo; Alloc = std::"
        "allocator<std::pair<const char* const, const RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey"
        ", Alloc>::key_type = const char*; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::size_type ="
        " long unsigned int]");
    }
  }
  if ( *(_QWORD *)(v3 + 64) == -1LL )
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v16,
      &dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 32));
  else
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v16,
      &dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 64));
  result = v16;
LABEL_23:
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 681: range 000000000CF47CCA-000000000CF47FBB
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position_with_hash(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type hash_)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::pair<long unsigned int,long unsigned int> result; // rax
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v7; // rsi
  dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::SelectKey *p_get_key; // rdx
  const int *v9; // rdx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type num_probes; // [rsp+20h] [rbp-B0h]
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type bucket_count_minus_one; // [rsp+28h] [rbp-A8h]
  std::pair<long unsigned int,long unsigned int> v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 11 bucknum:684 64 8 14 insert_pos:685";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position_with_hash;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  num_probes = 0LL;
  bucket_count_minus_one = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this)
                         - 1;
  *(_QWORD *)(v3 + 32) = bucket_count_minus_one & hash_;
  *(_QWORD *)(v3 + 64) = -1LL;
  while ( !dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_empty(
             this,
             *(_QWORD *)(v3 + 32)) )
  {
    v7 = *(_QWORD *)(v3 + 32);
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
           this,
           v7) )
    {
      if ( *(_QWORD *)(v3 + 64) == -1LL )
        *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      p_get_key = &this->get_key;
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v7);
      v9 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
             p_get_key,
             &this->table[*(_QWORD *)(v3 + 32)]);
      if ( std::equal_to<int>::operator()(&this->equals, key, v9) )
      {
        std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
          &v14,
          (unsigned __int64 *)(v3 + 32),
          &dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::ILLEGAL_BUCKET);
        result = v14;
        goto LABEL_19;
      }
    }
    ++num_probes;
    *(_QWORD *)(v3 + 32) = bucket_count_minus_one & (*(_QWORD *)(v3 + 32) + num_probes);
    if ( num_probes >= dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::bucket_count(this) )
    {
      __asan_handle_no_return(this);
      __assert_fail(
        "num_probes < bucket_count()",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x2BEu,
        "std::pair<long unsigned int, long unsigned int> dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
        ">::find_position_with_hash(const key_type&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::s"
        "ize_type) const [with Value = std::pair<const int, RTTI*>; Key = int; HashFcn = TypeManager::HashFunctorPersiste"
        "ntTypeID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::HashFunctorPersistentTypeID, std::equal_to<int> >"
        "::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, RTTI*> >; dense_hashtabl"
        "e<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::key_type = int; dense_hashtable<Value, Key, HashFcn, Extrac"
        "tKey, EqualKey, Alloc>::size_type = long unsigned int]");
    }
  }
  if ( *(_QWORD *)(v3 + 64) == -1LL )
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v14,
      &dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 32));
  else
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v14,
      &dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 64));
  result = v14;
LABEL_19:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 681: range 000000000CF4A8AA-000000000CF4AB9B
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position_with_hash(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type hash_)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::pair<long unsigned int,long unsigned int> result; // rax
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v7; // rsi
  dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::SelectKey *p_get_key; // rdx
  const int *v9; // rdx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type num_probes; // [rsp+20h] [rbp-B0h]
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type bucket_count_minus_one; // [rsp+28h] [rbp-A8h]
  std::pair<long unsigned int,long unsigned int> v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 11 bucknum:684 64 8 14 insert_pos:685";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position_with_hash;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  num_probes = 0LL;
  bucket_count_minus_one = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this)
                         - 1;
  *(_QWORD *)(v3 + 32) = bucket_count_minus_one & hash_;
  *(_QWORD *)(v3 + 64) = -1LL;
  while ( !dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_empty(
             this,
             *(_QWORD *)(v3 + 32)) )
  {
    v7 = *(_QWORD *)(v3 + 32);
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
           this,
           v7) )
    {
      if ( *(_QWORD *)(v3 + 64) == -1LL )
        *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 32);
    }
    else
    {
      p_get_key = &this->get_key;
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v7);
      v9 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
             p_get_key,
             &this->table[*(_QWORD *)(v3 + 32)]);
      if ( std::equal_to<int>::operator()(&this->equals, key, v9) )
      {
        std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
          &v14,
          (unsigned __int64 *)(v3 + 32),
          &dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::ILLEGAL_BUCKET);
        result = v14;
        goto LABEL_19;
      }
    }
    ++num_probes;
    *(_QWORD *)(v3 + 32) = bucket_count_minus_one & (*(_QWORD *)(v3 + 32) + num_probes);
    if ( num_probes >= dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::bucket_count(this) )
    {
      __asan_handle_no_return(this);
      __assert_fail(
        "num_probes < bucket_count()",
        "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
        0x2BEu,
        "std::pair<long unsigned int, long unsigned int> dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc"
        ">::find_position_with_hash(const key_type&, dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::s"
        "ize_type) const [with Value = std::pair<const int, const char*>; Key = int; HashFcn = TypeManager::HashFunctorPe"
        "rsistentTypeID; ExtractKey = dense_hash_map<int, const char*, TypeManager::HashFunctorPersistentTypeID, std::equ"
        "al_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocator<std::pair<const int, const char*>"
        " >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::key_type = int; dense_hashtable<Value, Ke"
        "y, HashFcn, ExtractKey, EqualKey, Alloc>::size_type = long unsigned int]");
    }
  }
  if ( *(_QWORD *)(v3 + 64) == -1LL )
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v14,
      &dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 32));
  else
    std::pair<unsigned long,unsigned long>::pair<unsigned long &,true>(
      &v14,
      &dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::ILLEGAL_BUCKET,
      (unsigned __int64 *)(v3 + 64));
  result = v14;
LABEL_19:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 706: range 000000000CEAEEDC-000000000CEAEF3A
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position(
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *v2; // rdx
  size_t v3; // rdx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    __asan_report_load8(key, key);
  v3 = TypeManager::ConstCharPtrHashFunctor::operator()(&v2->hash, *key);
  return dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position_with_hash(
           this,
           key,
           v3);
};

// Line 706: range 000000000CEAED38-000000000CEAEDAB
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position(
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *v2; // rcx
  size_t v3; // rdx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  v3 = TypeManager::HashFunctorPersistentTypeID::operator()(&v2->hash, *key);
  return dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position_with_hash(
           this,
           key,
           v3);
};

// Line 706: range 000000000CEB0736-000000000CEB07A9
std::pair<long unsigned int,long unsigned int> __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position(
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key)
{
  const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *v2; // rcx
  size_t v3; // rdx

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(key);
  }
  v3 = TypeManager::HashFunctorPersistentTypeID::operator()(&v2->hash, *key);
  return dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position_with_hash(
           this,
           key,
           v3);
};

// Line 710: range 000000000CE4B428-000000000CE4B5DC
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::iterator *retstr,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 pos:712";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::size(this)
    || (*(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position(
                                                                         this,
                                                                         key),
        *(_QWORD *)(v3 + 32) == -1LL) )
  {
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
      retstr,
      this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, key);
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, key);
    dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_iterator(
      retstr,
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &table[this->num_buckets],
      0);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 710: range 000000000CE4AD86-000000000CE4AF3A
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::iterator *retstr,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 pos:712";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::size(this)
    || (*(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position(
                                                                         this,
                                                                         key),
        *(_QWORD *)(v3 + 32) == -1LL) )
  {
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      retstr,
      this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, key);
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, key);
    dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
      retstr,
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &table[this->num_buckets],
      0);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 710: range 000000000CE4B7D2-000000000CE4B986
dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::iterator *retstr,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::key_type *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 pos:712";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::size(this)
    || (*(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position(
                                                                         this,
                                                                         key),
        *(_QWORD *)(v3 + 32) == -1LL) )
  {
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::end(
      retstr,
      this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, key);
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, key);
    dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_iterator(
      retstr,
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &table[this->num_buckets],
      0);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 719: range 000000000CE4A368-000000000CE4A51C
dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::key_type *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 pos:721";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::size(this)
    || (*(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position(
                                                                         this,
                                                                         key),
        *(_QWORD *)(v3 + 32) == -1LL) )
  {
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::end(
      retstr,
      this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, key);
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, key);
    dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_const_iterator(
      retstr,
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &table[this->num_buckets],
      0);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 719: range 000000000CE4A0D2-000000000CE4A286
dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *retstr,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::key_type *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 pos:721";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::size(this)
    || (*(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position(
                                                                         this,
                                                                         key),
        *(_QWORD *)(v3 + 32) == -1LL) )
  {
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::end(
      retstr,
      this);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, key);
    table = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, key);
    dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
      retstr,
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &table[this->num_buckets],
      0);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 748: range 000000000CF49612-000000000CF49AF3
std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert_noresize(
        std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *retstr,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *obj)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const char *const *v6; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v7; // rcx
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v8; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *table; // rcx
  void *p_num_deleted; // rdi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v11; // rsi
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *v12; // rcx
  bool __y; // [rsp+2Fh] [rbp-A1h] BYREF
  char v18[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 7 pos:749 64 24 10 delpos:756";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert_noresize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey::operator()(
         &this->get_key,
         obj);
  *(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::find_position(
                                                                   this,
                                                                   v6);
  if ( *(_QWORD *)(v3 + 32) == -1LL )
  {
    v8 = *(_QWORD *)(v3 + 40);
    if ( dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::test_deleted(
           this,
           v8) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v8);
      table = this->table;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_buckets, v8);
      dense_hashtable_const_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_const_iterator(
        (dense_hashtable_const_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64),
        this,
        &this->table[*(_QWORD *)(v3 + 40)],
        &table[this->num_buckets],
        0);
      v8 = v3 + 64;
      p_num_deleted = this;
      dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::clear_deleted(
        this,
        (dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::const_iterator *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
      {
        p_num_deleted = &this->num_deleted;
        __asan_report_load8(&this->num_deleted, v8);
      }
      if ( !this->num_deleted )
      {
        __asan_handle_no_return(p_num_deleted);
        __assert_fail(
          "num_deleted > 0",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x2F7u,
          "std::pair<dense_hashtable_iterator<V, K, HF, ExK, EqK, A>, bool> dense_hashtable<Value, Key, HashFcn, ExtractK"
          "ey, EqualKey, Alloc>::insert_noresize(const value_type&) [with Value = std::pair<const char* const, const RTTI"
          "*>; Key = const char*; HashFcn = TypeManager::ConstCharPtrHashFunctor; ExtractKey = dense_hash_map<const char*"
          ", const RTTI*, TypeManager::ConstCharPtrHashFunctor, TypeManager::ConstCharPtrEqualTo>::SelectKey; EqualKey = "
          "TypeManager::ConstCharPtrEqualTo; Alloc = std::allocator<std::pair<const char* const, const RTTI*> >; dense_ha"
          "shtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type = std::pair<const char* const, const RTTI*>]");
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v8);
      --this->num_deleted;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v8);
      ++this->num_elements;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v8);
    v11 = &this->table[*(_QWORD *)(v3 + 40)];
    dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::set_value(
      this,
      v11,
      obj);
    __y = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v11);
    v12 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v11);
    dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 40)],
      &v12[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>,bool>::pair<dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *)(v3 + 64),
      &__y);
  }
  else
  {
    __y = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v6);
    v7 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v6);
    dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &v7[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>,bool>::pair<dense_hashtable_iterator<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *)(v3 + 64),
      &__y);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 748: range 000000000CEB01E6-000000000CEB06C7
std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert_noresize(
        std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *retstr,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *obj)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const int *v6; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v7; // rcx
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v8; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *table; // rcx
  void *p_num_deleted; // rdi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v11; // rsi
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *v12; // rcx
  bool __y; // [rsp+2Fh] [rbp-A1h] BYREF
  char v18[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 7 pos:749 64 24 10 delpos:756";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert_noresize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey::operator()(
         &this->get_key,
         obj);
  *(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::find_position(
                                                                   this,
                                                                   v6);
  if ( *(_QWORD *)(v3 + 32) == -1LL )
  {
    v8 = *(_QWORD *)(v3 + 40);
    if ( dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::test_deleted(
           this,
           v8) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v8);
      table = this->table;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_buckets, v8);
      dense_hashtable_const_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_const_iterator(
        (dense_hashtable_const_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64),
        this,
        &this->table[*(_QWORD *)(v3 + 40)],
        &table[this->num_buckets],
        0);
      v8 = v3 + 64;
      p_num_deleted = this;
      dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::clear_deleted(
        this,
        (dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::const_iterator *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
      {
        p_num_deleted = &this->num_deleted;
        __asan_report_load8(&this->num_deleted, v8);
      }
      if ( !this->num_deleted )
      {
        __asan_handle_no_return(p_num_deleted);
        __assert_fail(
          "num_deleted > 0",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x2F7u,
          "std::pair<dense_hashtable_iterator<V, K, HF, ExK, EqK, A>, bool> dense_hashtable<Value, Key, HashFcn, ExtractK"
          "ey, EqualKey, Alloc>::insert_noresize(const value_type&) [with Value = std::pair<const int, RTTI*>; Key = int;"
          " HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, RTTI*, TypeManager::Hash"
          "FunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = std::allocato"
          "r<std::pair<const int, RTTI*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, Alloc>::value_type"
          " = std::pair<const int, RTTI*>]");
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v8);
      --this->num_deleted;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v8);
      ++this->num_elements;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v8);
    v11 = &this->table[*(_QWORD *)(v3 + 40)];
    dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::set_value(
      this,
      v11,
      obj);
    __y = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v11);
    v12 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v11);
    dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 40)],
      &v12[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>,bool>::pair<dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *)(v3 + 64),
      &__y);
  }
  else
  {
    __y = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v6);
    v7 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v6);
    dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &v7[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>,bool>::pair<dense_hashtable_iterator<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *)(v3 + 64),
      &__y);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 748: range 000000000CF486B6-000000000CF48B97
std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert_noresize(
        std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *retstr,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *obj)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const int *v6; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v7; // rcx
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v8; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *table; // rcx
  void *p_num_deleted; // rdi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v11; // rsi
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *v12; // rcx
  bool __y; // [rsp+2Fh] [rbp-A1h] BYREF
  char v18[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 7 pos:749 64 24 10 delpos:756";
  *(_QWORD *)(v3 + 16) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert_noresize;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey::operator()(
         &this->get_key,
         obj);
  *(std::pair<long unsigned int,long unsigned int> *)(v3 + 32) = dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::find_position(
                                                                   this,
                                                                   v6);
  if ( *(_QWORD *)(v3 + 32) == -1LL )
  {
    v8 = *(_QWORD *)(v3 + 40);
    if ( dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::test_deleted(
           this,
           v8) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->table, v8);
      table = this->table;
      if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_buckets, v8);
      dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_const_iterator(
        (dense_hashtable_const_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 64),
        this,
        &this->table[*(_QWORD *)(v3 + 40)],
        &table[this->num_buckets],
        0);
      v8 = v3 + 64;
      p_num_deleted = this;
      dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::clear_deleted(
        this,
        (dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::const_iterator *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
      {
        p_num_deleted = &this->num_deleted;
        __asan_report_load8(&this->num_deleted, v8);
      }
      if ( !this->num_deleted )
      {
        __asan_handle_no_return(p_num_deleted);
        __assert_fail(
          "num_deleted > 0",
          "./src/pathfinding/Internal/Utilities/sparsehash/densehashtable.h",
          0x2F7u,
          "std::pair<dense_hashtable_iterator<V, K, HF, ExK, EqK, A>, bool> dense_hashtable<Value, Key, HashFcn, ExtractK"
          "ey, EqualKey, Alloc>::insert_noresize(const value_type&) [with Value = std::pair<const int, const char*>; Key "
          "= int; HashFcn = TypeManager::HashFunctorPersistentTypeID; ExtractKey = dense_hash_map<int, const char*, TypeM"
          "anager::HashFunctorPersistentTypeID, std::equal_to<int> >::SelectKey; EqualKey = std::equal_to<int>; Alloc = s"
          "td::allocator<std::pair<const int, const char*> >; dense_hashtable<Value, Key, HashFcn, ExtractKey, EqualKey, "
          "Alloc>::value_type = std::pair<const int, const char*>]");
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->num_deleted >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_deleted, v8);
      --this->num_deleted;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->num_elements >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->num_elements, v8);
      ++this->num_elements;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v8);
    v11 = &this->table[*(_QWORD *)(v3 + 40)];
    dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::set_value(
      this,
      v11,
      obj);
    __y = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v11);
    v12 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v11);
    dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 40)],
      &v12[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>,bool>::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *)(v3 + 64),
      &__y);
  }
  else
  {
    __y = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->table >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->table, v6);
    v7 = this->table;
    if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->num_buckets, v6);
    dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::dense_hashtable_iterator(
      (dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const)(v3 + 64),
      this,
      &this->table[*(_QWORD *)(v3 + 32)],
      &v7[this->num_buckets],
      0);
    std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>,bool>::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>,bool,true>(
      retstr,
      (dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *)(v3 + 64),
      &__y);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 812: range 000000000CEAFDEC-000000000CEAFE32
std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *__cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >,bool> *retstr,
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this,
        const dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::value_type *obj)
{
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::resize_delta(
    this,
    1uLL,
    0LL);
  dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::insert_noresize(
    retstr,
    this,
    obj);
  return retstr;
};

// Line 812: range 000000000CE4B74E-000000000CE4B794
std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *__cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >,bool> *retstr,
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this,
        const dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::value_type *obj)
{
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::resize_delta(
    this,
    1uLL,
    0LL);
  dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::insert_noresize(
    retstr,
    this,
    obj);
  return retstr;
};

// Line 812: range 000000000CEAF400-000000000CEAF446
std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *__cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert(
        std::pair<dense_hashtable_iterator<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >,bool> *retstr,
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this,
        const dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::value_type *obj)
{
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::resize_delta(
    this,
    1uLL,
    0LL);
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::insert_noresize(
    retstr,
    this,
    obj);
  return retstr;
};

// Line 990: range 000000000CEAE1C2-000000000CEAE350
void __cdecl dense_hashtable<std::pair<char const* const,RTTI const*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,RTTI const*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,RTTI const*>>>::reset_thresholds(
        dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > > *const this)
{
  __int64 v1; // rsi
  signed __int64 num_buckets; // rax
  float v3; // xmm0_4
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v4; // rdx
  float v5; // xmm0_4
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v6; // rax
  signed __int64 v7; // rax
  float v8; // xmm0_4
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v9; // rdx
  float v10; // xmm0_4
  dense_hashtable<std::pair<char const* const,const RTTI*>,char const*,TypeManager::ConstCharPtrHashFunctor,dense_hash_map<char const*,const RTTI*,TypeManager::ConstCharPtrHashFunctor,TypeManager::ConstCharPtrEqualTo>::SelectKey,TypeManager::ConstCharPtrEqualTo,std::allocator<std::pair<char const* const,const RTTI*> > >::size_type v11; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  num_buckets = this->num_buckets;
  if ( num_buckets < 0 )
  {
    v4 = this->num_buckets & 1 | ((unsigned __int64)num_buckets >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)num_buckets;
  }
  v5 = v3 * 0.5;
  if ( v5 >= 9.223372e18 )
    v6 = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v6 = (unsigned int)(int)v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  this->enlarge_threshold = v6;
  v7 = this->num_buckets;
  if ( v7 < 0 )
  {
    v9 = this->num_buckets & 1 | ((unsigned __int64)v7 >> 1);
    v8 = (float)(int)v9 + (float)(int)v9;
  }
  else
  {
    v8 = (float)(int)v7;
  }
  v10 = v8 * 0.2;
  if ( v10 >= 9.223372e18 )
    v11 = (unsigned int)(int)(float)(v10 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v11 = (unsigned int)(int)v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->shrink_threshold >> 3) + 0x7FFF8000) )
    v11 = __asan_report_store8();
  this->shrink_threshold = v11;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->consider_shrink);
  this->consider_shrink = 0;
};

// Line 990: range 000000000CEAE486-000000000CEAE614
void __cdecl dense_hashtable<std::pair<int const,RTTI *>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI *,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI *>>>::reset_thresholds(
        dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > > *const this)
{
  __int64 v1; // rsi
  signed __int64 num_buckets; // rax
  float v3; // xmm0_4
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v4; // rdx
  float v5; // xmm0_4
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v6; // rax
  signed __int64 v7; // rax
  float v8; // xmm0_4
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v9; // rdx
  float v10; // xmm0_4
  dense_hashtable<std::pair<int const,RTTI*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,RTTI*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,RTTI*> > >::size_type v11; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  num_buckets = this->num_buckets;
  if ( num_buckets < 0 )
  {
    v4 = this->num_buckets & 1 | ((unsigned __int64)num_buckets >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)num_buckets;
  }
  v5 = v3 * 0.5;
  if ( v5 >= 9.223372e18 )
    v6 = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v6 = (unsigned int)(int)v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  this->enlarge_threshold = v6;
  v7 = this->num_buckets;
  if ( v7 < 0 )
  {
    v9 = this->num_buckets & 1 | ((unsigned __int64)v7 >> 1);
    v8 = (float)(int)v9 + (float)(int)v9;
  }
  else
  {
    v8 = (float)(int)v7;
  }
  v10 = v8 * 0.2;
  if ( v10 >= 9.223372e18 )
    v11 = (unsigned int)(int)(float)(v10 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v11 = (unsigned int)(int)v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->shrink_threshold >> 3) + 0x7FFF8000) )
    v11 = __asan_report_store8();
  this->shrink_threshold = v11;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->consider_shrink);
  this->consider_shrink = 0;
};

// Line 990: range 000000000CEAE74A-000000000CEAE8D8
void __cdecl dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*>>>::reset_thresholds(
        dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > > *const this)
{
  __int64 v1; // rsi
  signed __int64 num_buckets; // rax
  float v3; // xmm0_4
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v4; // rdx
  float v5; // xmm0_4
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v6; // rax
  signed __int64 v7; // rax
  float v8; // xmm0_4
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v9; // rdx
  float v10; // xmm0_4
  dense_hashtable<std::pair<int const,char const*>,int,TypeManager::HashFunctorPersistentTypeID,dense_hash_map<int,char const*,TypeManager::HashFunctorPersistentTypeID,std::equal_to<int> >::SelectKey,std::equal_to<int>,std::allocator<std::pair<int const,char const*> > >::size_type v11; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->num_buckets >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->num_buckets, v1);
  num_buckets = this->num_buckets;
  if ( num_buckets < 0 )
  {
    v4 = this->num_buckets & 1 | ((unsigned __int64)num_buckets >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)num_buckets;
  }
  v5 = v3 * 0.5;
  if ( v5 >= 9.223372e18 )
    v6 = (unsigned int)(int)(float)(v5 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v6 = (unsigned int)(int)v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->enlarge_threshold >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  this->enlarge_threshold = v6;
  v7 = this->num_buckets;
  if ( v7 < 0 )
  {
    v9 = this->num_buckets & 1 | ((unsigned __int64)v7 >> 1);
    v8 = (float)(int)v9 + (float)(int)v9;
  }
  else
  {
    v8 = (float)(int)v7;
  }
  v10 = v8 * 0.2;
  if ( v10 >= 9.223372e18 )
    v11 = (unsigned int)(int)(float)(v10 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v11 = (unsigned int)(int)v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->shrink_threshold >> 3) + 0x7FFF8000) )
    v11 = __asan_report_store8();
  this->shrink_threshold = v11;
  if ( *(char *)(((unsigned __int64)&this->consider_shrink >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->consider_shrink);
  this->consider_shrink = 0;
};
