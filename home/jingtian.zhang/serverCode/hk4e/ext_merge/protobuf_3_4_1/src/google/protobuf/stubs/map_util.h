// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/map_util.h

// Line 328: range 000000000C958AC0-000000000C958CD2
bool __fastcall google::protobuf::InsertIfNotPresent<google::protobuf::hash_map<std::string,int,google::protobuf::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,int>>>>(
        google::protobuf::hash_map<std::string,int,google::protobuf::hash<std::string >,std::equal_to<std::string >,std::allocator<std::pair<const std::string,int> > > *const collection,
        std::pair<const std::string,int>::first_type *key,
        const std::pair<const std::string,int>::second_type *value)
{
  std::forward_iterator_tag v3; // cl
  char *v5; // rdx
  char *M_p; // rsi
  std::pair<const std::string,int>::second_type v7; // eax
  std::string *v8; // rbp
  __int64 v9; // rax
  std::string::pointer v10; // rdx
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__hash_code v11; // r12
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v12; // r14
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *v13; // rax
  bool v14; // r15
  __int64 v16; // rax
  char *v17; // rsi
  __int64 v18; // rbp
  std::string::size_type M_string_length; // rdx
  std::forward_iterator_tag v20; // cl
  unsigned __int64 M_element_count; // rdx
  unsigned __int64 M_bucket_count; // rsi
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::size_type v23; // rdx
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type *M_buckets; // rsi
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type *v25; // rcx
  std::__detail::_Hash_node_base *M_nxt; // rax
  std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__rehash_state __state; // [rsp+8h] [rbp-70h] BYREF
  std::string __k; // [rsp+10h] [rbp-68h] BYREF
  std::pair<const std::string,int>::second_type v29; // [rsp+30h] [rbp-48h]

  v5 = &key->_M_dataplus._M_p[key->_M_string_length];
  M_p = key->_M_dataplus._M_p;
  __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__k, M_p, v5, v3);
  v7 = *value;
  v8 = (std::string *)__k._M_dataplus._M_p;
  v29 = v7;
  v9 = *__k._M_dataplus._M_p;
  if ( (_BYTE)v9 )
  {
    v10 = __k._M_dataplus._M_p;
    v11 = 0LL;
    do
    {
      ++v10;
      v11 = v9 + 5 * v11;
      v9 = *v10;
    }
    while ( (_BYTE)v9 );
  }
  else
  {
    v11 = 0LL;
  }
  v12 = v11 % collection->_M_h._M_bucket_count;
  v13 = std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_find_before_node(
          &collection->_M_h,
          v12,
          &__k,
          v11);
  if ( !v13 || (v14 = 0, !v13->_M_nxt) )
  {
    v16 = operator new(0x38uLL);
    v17 = __k._M_dataplus._M_p;
    v18 = v16;
    M_string_length = __k._M_string_length;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 8) = v16 + 24;
    std::string::_M_construct<char *>((std::string *const)(v16 + 8), v17, &v17[M_string_length], v20);
    M_element_count = collection->_M_h._M_element_count;
    M_bucket_count = collection->_M_h._M_bucket_count;
    *(_DWORD *)(v18 + 40) = v29;
    __state = collection->_M_h._M_rehash_policy._M_next_resize;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            &collection->_M_h._M_rehash_policy,
                            M_bucket_count,
                            M_element_count,
                            1uLL) )
    {
      std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_rehash(
        &collection->_M_h,
        v23,
        &__state);
      v12 = v11 % collection->_M_h._M_bucket_count;
    }
    M_buckets = collection->_M_h._M_buckets;
    *(_QWORD *)(v18 + 48) = v11;
    v25 = &M_buckets[v12];
    if ( *v25 )
    {
      *(std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,int>,true> > >::__node_base *)v18 = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,int>,true> > >::__node_base)(*v25)->_M_nxt;
      (*v25)->_M_nxt = (std::__detail::_Hash_node_base *)v18;
    }
    else
    {
      M_nxt = collection->_M_h._M_before_begin._M_nxt;
      collection->_M_h._M_before_begin._M_nxt = (std::__detail::_Hash_node_base *)v18;
      *(_QWORD *)v18 = M_nxt;
      if ( M_nxt )
        M_buckets[(unsigned __int64)M_nxt[6]._M_nxt % collection->_M_h._M_bucket_count] = (std::_Hashtable<std::string,std::pair<const std::string,int>,std::allocator<std::pair<const std::string,int> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__bucket_type)v18;
      *v25 = &collection->_M_h._M_before_begin;
    }
    ++collection->_M_h._M_element_count;
    v8 = (std::string *)__k._M_dataplus._M_p;
    v14 = 1;
  }
  if ( v8 != (std::string *)&__k._anon_0 )
    operator delete(v8);
  return v14;
};

// Line 328: range 000000000C921570-000000000C921A0A
bool __fastcall google::protobuf::InsertIfNotPresent<std::map<std::pair<std::string,int>,google::protobuf::FileDescriptorProto const*>>(
        std::map<std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*> *const collection,
        std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*>::first_type *key,
        const std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*>::second_type *value)
{
  std::forward_iterator_tag v3; // cl
  char *M_p; // rsi
  char *v7; // rdx
  std::_Rb_tree_header *M_parent; // r14
  std::string::size_type M_string_length; // r13
  std::string::pointer v10; // rcx
  int v11; // eax
  signed __int64 v12; // rax
  signed __int64 v13; // rax
  std::_Rb_tree_header *M_left; // rax
  char v15; // si
  std::string::size_type v16; // rbp
  const void *M_node_count; // r12
  size_t v18; // rbx
  std::string::size_type v19; // rdx
  std::_Rb_tree_header *v20; // r15
  const void *v21; // rbx
  std::string::pointer v22; // r12
  int v23; // eax
  signed __int64 v24; // rax
  int v25; // eax
  bool v26; // bp
  __int64 v27; // r12
  char *v28; // rsi
  std::string::size_type v29; // rdx
  std::forward_iterator_tag v30; // cl
  bool v31; // r13
  __int64 v33; // rax
  std::string::size_type v34; // r12
  std::string::size_type v35; // rbx
  const void *v36; // r14
  std::string::pointer v37; // r9
  std::string::size_type v38; // r13
  int v39; // eax
  int v40; // eax
  signed __int64 v41; // rax
  std::string *v42; // [rsp+8h] [rbp-90h]
  std::string::pointer v43; // [rsp+8h] [rbp-90h]
  int second; // [rsp+14h] [rbp-84h]
  std::_Rb_tree_header *v45; // [rsp+18h] [rbp-80h]
  char *s2a; // [rsp+28h] [rbp-70h]
  char *s2b; // [rsp+28h] [rbp-70h]
  void *s2; // [rsp+28h] [rbp-70h]
  std::string v49; // [rsp+30h] [rbp-68h] BYREF
  int v50; // [rsp+50h] [rbp-48h]
  std::pair<const std::pair<std::string,int>,const google::protobuf::FileDescriptorProto*>::second_type v51; // [rsp+58h] [rbp-40h]

  M_p = key->first._M_dataplus._M_p;
  v7 = &M_p[key->first._M_string_length];
  v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&v49, M_p, v7, v3);
  M_parent = (std::_Rb_tree_header *)collection->_M_t._M_impl._M_header._M_parent;
  second = key->second;
  v50 = second;
  v51 = *value;
  v45 = &collection->_M_t._M_impl.std::_Rb_tree_header;
  if ( !M_parent )
  {
    M_parent = &collection->_M_t._M_impl.std::_Rb_tree_header;
    goto LABEL_48;
  }
  M_string_length = v49._M_string_length;
  v42 = (std::string *)v49._M_dataplus._M_p;
  v10 = v49._M_dataplus._M_p;
  while ( 1 )
  {
    v16 = *(_QWORD *)&M_parent[1]._M_header._M_color;
    M_node_count = (const void *)M_parent->_M_node_count;
    v18 = v16;
    if ( M_string_length <= v16 )
      v18 = M_string_length;
    if ( !v18 )
    {
      v12 = M_string_length - v16;
      if ( (__int64)(M_string_length - v16) >= 0x80000000LL )
        goto LABEL_9;
      goto LABEL_5;
    }
    s2a = v10;
    v11 = memcmp(v10, (const void *)M_parent->_M_node_count, v18);
    v10 = s2a;
    if ( !v11 )
      break;
    if ( v11 >= 0 )
      goto LABEL_8;
LABEL_13:
    M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_left;
    v15 = 1;
    if ( !M_left )
      goto LABEL_23;
LABEL_14:
    M_parent = M_left;
  }
  v12 = M_string_length - v16;
  if ( (__int64)(M_string_length - v16) >= 0x80000000LL )
    goto LABEL_8;
LABEL_5:
  if ( v12 <= (__int64)0xFFFFFFFF7FFFFFFFLL || (int)v12 < 0 )
    goto LABEL_13;
  if ( !v18 )
    goto LABEL_9;
LABEL_8:
  s2b = v10;
  LODWORD(v13) = memcmp(M_node_count, v10, v18);
  v10 = s2b;
  if ( (_DWORD)v13 )
    goto LABEL_11;
LABEL_9:
  v13 = v16 - M_string_length;
  if ( (__int64)(v16 - M_string_length) >= 0x80000000LL )
    goto LABEL_12;
  if ( v13 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
    goto LABEL_22;
LABEL_11:
  if ( (int)v13 < 0 )
    goto LABEL_22;
LABEL_12:
  if ( second < SLODWORD(M_parent[1]._M_header._M_right) )
    goto LABEL_13;
LABEL_22:
  M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_right;
  v15 = 0;
  if ( M_left )
    goto LABEL_14;
LABEL_23:
  v19 = v18;
  v20 = M_parent;
  v21 = M_node_count;
  v22 = v10;
  if ( v15 )
  {
LABEL_48:
    if ( M_parent == (std::_Rb_tree_header *)collection->_M_t._M_impl._M_header._M_left )
    {
      v20 = M_parent;
      v26 = 1;
      if ( v45 == M_parent )
        goto LABEL_38;
LABEL_55:
      v34 = v49._M_string_length;
      v35 = *(_QWORD *)&v20[1]._M_header._M_color;
      v36 = (const void *)v20->_M_node_count;
      v37 = v49._M_dataplus._M_p;
      v38 = v35;
      if ( v49._M_string_length <= v35 )
        v38 = v49._M_string_length;
      if ( v38 )
      {
        v43 = v49._M_dataplus._M_p;
        v39 = memcmp(v49._M_dataplus._M_p, (const void *)v20->_M_node_count, v38);
        v37 = v43;
        if ( v39 )
        {
          if ( v39 < 0 )
            goto LABEL_38;
LABEL_60:
          v40 = memcmp(v36, v37, v38);
          if ( v40 )
          {
LABEL_64:
            v26 = 0;
            if ( v40 >= 0 )
              goto LABEL_65;
LABEL_38:
            v27 = operator new(0x50uLL);
            v28 = v49._M_dataplus._M_p;
            v29 = v49._M_string_length;
            *(_QWORD *)(v27 + 32) = v27 + 48;
            std::string::_M_construct<char *>((std::string *const)(v27 + 32), v28, &v28[v29], v30);
            v31 = 1;
            *(_DWORD *)(v27 + 64) = v50;
            *(_QWORD *)(v27 + 72) = v51;
            std::_Rb_tree_insert_and_rebalance(v26, (std::_Rb_tree_node_base *)v27, &v20->_M_header, &v45->_M_header);
            ++collection->_M_t._M_impl._M_node_count;
            v42 = (std::string *)v49._M_dataplus._M_p;
            goto LABEL_44;
          }
LABEL_61:
          if ( (__int64)(v35 - v34) > 0x7FFFFFFF )
          {
LABEL_65:
            v26 = second < SLODWORD(v20[1]._M_header._M_right);
            goto LABEL_38;
          }
          if ( (__int64)(v35 - v34) < (__int64)0xFFFFFFFF80000000LL )
          {
            v26 = 0;
            goto LABEL_38;
          }
          v40 = v35 - v34;
          goto LABEL_64;
        }
        v41 = v34 - v35;
        if ( (__int64)(v34 - v35) > 0x7FFFFFFF )
          goto LABEL_60;
      }
      else
      {
        v41 = v49._M_string_length - v35;
        if ( (__int64)(v49._M_string_length - v35) > 0x7FFFFFFF )
          goto LABEL_61;
      }
      v26 = 1;
      if ( v41 < (__int64)0xFFFFFFFF80000000LL || (int)v41 < 0 )
        goto LABEL_38;
      if ( !v38 )
        goto LABEL_61;
      goto LABEL_60;
    }
    v20 = M_parent;
    v33 = std::_Rb_tree_decrement(&M_parent->_M_header);
    M_string_length = v49._M_string_length;
    v22 = v49._M_dataplus._M_p;
    v16 = *(_QWORD *)(v33 + 40);
    v21 = *(const void **)(v33 + 32);
    M_parent = (std::_Rb_tree_header *)v33;
    v42 = (std::string *)v49._M_dataplus._M_p;
    v19 = v16;
    if ( v49._M_string_length <= v16 )
      v19 = v49._M_string_length;
    if ( !v19 )
      goto LABEL_52;
LABEL_25:
    s2 = (void *)v19;
    v23 = memcmp(v21, v22, v19);
    v19 = (std::string::size_type)s2;
    if ( v23 )
    {
      if ( v23 < 0 )
        goto LABEL_36;
      v25 = memcmp(v22, v21, (size_t)s2);
      if ( !v25 )
        goto LABEL_31;
      goto LABEL_34;
    }
    v24 = v16 - M_string_length;
    if ( (__int64)(v16 - M_string_length) > 0x7FFFFFFF )
    {
LABEL_30:
      v25 = memcmp(v22, v21, v19);
      if ( !v25 )
        goto LABEL_31;
LABEL_34:
      if ( v25 < 0 )
        goto LABEL_43;
LABEL_35:
      if ( second <= SLODWORD(M_parent[1]._M_header._M_right) )
        goto LABEL_43;
LABEL_36:
      if ( !v20 )
      {
        v42 = (std::string *)v22;
        goto LABEL_43;
      }
      v26 = 1;
      if ( v45 == v20 )
        goto LABEL_38;
      goto LABEL_55;
    }
LABEL_27:
    if ( v24 < (__int64)0xFFFFFFFF80000000LL || (int)v24 < 0 )
      goto LABEL_36;
    if ( !v19 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( v19 )
    goto LABEL_25;
LABEL_52:
  v24 = v16 - M_string_length;
  if ( (__int64)(v16 - M_string_length) <= 0x7FFFFFFF )
    goto LABEL_27;
LABEL_31:
  if ( (__int64)(M_string_length - v16) > 0x7FFFFFFF )
    goto LABEL_35;
  if ( (__int64)(M_string_length - v16) >= (__int64)0xFFFFFFFF80000000LL )
  {
    v25 = M_string_length - v16;
    goto LABEL_34;
  }
LABEL_43:
  v31 = 0;
LABEL_44:
  if ( v42 != (std::string *)&v49._anon_0 )
    operator delete(v42);
  return v31;
};

// Line 328: range 000000000C9225A0-000000000C92271F
bool __fastcall google::protobuf::InsertIfNotPresent<std::map<std::string,google::protobuf::FileDescriptorProto const*>>(
        std::map<std::string,const google::protobuf::FileDescriptorProto*> *const collection,
        std::pair<const std::string,const google::protobuf::FileDescriptorProto*>::first_type *key,
        const std::pair<const std::string,const google::protobuf::FileDescriptorProto*>::second_type *value)
{
  std::forward_iterator_tag v3; // cl
  char *v5; // rdx
  char *M_p; // rsi
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_unique_pos; // rax
  std::_Rb_tree_node_base *second; // r12
  _BOOL4 v9; // r14d
  __int64 v10; // rbp
  char *v11; // rsi
  std::string::size_type v12; // rdx
  std::forward_iterator_tag v13; // cl
  std::_Rb_tree_node_base *v14; // rdx
  bool v15; // r12
  std::string::size_type M_string_length; // rbp
  size_t v18; // r15
  size_t M_parent; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rbp
  std::string __beg; // [rsp+0h] [rbp-68h] BYREF
  std::pair<const std::string,const google::protobuf::FileDescriptorProto*>::second_type v23; // [rsp+20h] [rbp-48h]

  v5 = &key->_M_dataplus._M_p[key->_M_string_length];
  M_p = key->_M_dataplus._M_p;
  __beg._M_dataplus._M_p = __beg._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&__beg, M_p, v5, v3);
  v23 = *value;
  insert_unique_pos = std::_Rb_tree<std::string,std::pair<std::string const,google::protobuf::FileDescriptorProto const*>,std::_Select1st<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>,std::less<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FileDescriptorProto const*>>>::_M_get_insert_unique_pos(
                        &collection->_M_t,
                        &__beg);
  if ( insert_unique_pos.second )
  {
    second = insert_unique_pos.second;
    LOBYTE(v9) = 1;
    if ( insert_unique_pos.first
      || (std::_Rb_tree_header *)insert_unique_pos.second == &collection->_M_t._M_impl.std::_Rb_tree_header )
    {
      goto LABEL_3;
    }
    M_string_length = __beg._M_string_length;
    M_parent = (size_t)insert_unique_pos.second[1]._M_parent;
    v18 = M_parent;
    if ( __beg._M_string_length <= M_parent )
      M_parent = __beg._M_string_length;
    if ( !M_parent || (v20 = memcmp(__beg._M_dataplus._M_p, *(const void **)&second[1]._M_color, M_parent)) == 0 )
    {
      v21 = M_string_length - v18;
      LOBYTE(v9) = 0;
      if ( v21 > 0x7FFFFFFF )
      {
LABEL_3:
        v10 = operator new(0x48uLL);
        v11 = __beg._M_dataplus._M_p;
        v12 = __beg._M_string_length;
        *(_QWORD *)(v10 + 32) = v10 + 48;
        std::string::_M_construct<char *>((std::string *const)(v10 + 32), v11, &v11[v12], v13);
        v14 = second;
        v15 = 1;
        *(_QWORD *)(v10 + 64) = v23;
        std::_Rb_tree_insert_and_rebalance(v9, (std::_Rb_tree_node_base *)v10, v14, &collection->_M_t._M_impl._M_header);
        ++collection->_M_t._M_impl._M_node_count;
        goto LABEL_4;
      }
      if ( v21 < (__int64)0xFFFFFFFF80000000LL )
      {
        LOBYTE(v9) = 1;
        goto LABEL_3;
      }
      v20 = v21;
    }
    v9 = v20 >> 31;
    goto LABEL_3;
  }
  v15 = 0;
LABEL_4:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__beg._M_dataplus._M_p != &__beg._anon_0 )
    operator delete(__beg._M_dataplus._M_p);
  return v15;
};
