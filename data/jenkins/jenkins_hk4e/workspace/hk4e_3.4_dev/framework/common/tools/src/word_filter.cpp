// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/word_filter.cpp

// Line 29: range 000000000E777148-000000000E777AB4
int __fastcall common::tools::WordFilter::init(
        common::tools::WordFilter *const this,
        const std::vector<std::string> *word_vec)
{
  const char *M_finish; // r15
  unsigned __int64 M_start; // rbp
  _DWORD *v5; // r13
  common::tools::WordFilter *v6; // r14
  void *p_M_parent; // rdi
  std::_Rb_tree_header *v8; // rax
  __int64 v9; // rax
  common::tools::WordFilter *M_left; // rax
  unsigned __int64 p_M_right; // rax
  unsigned __int64 v12; // rdi
  std::forward_iterator_tag v13; // cl
  const char *v14; // rdx
  std::forward_iterator_tag v15; // cl
  std::string::size_type i; // rcx
  char *v17; // rax
  char v18; // dl
  char v19; // dl
  unsigned __int64 v20; // rdi
  std::string::pointer M_p; // rsi
  char v22; // dl
  std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::iterator v23; // rax
  std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::iterator v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  std::string::size_type M_string_length; // rax
  std::string::size_type v29; // rax
  char v30; // dl
  char v31; // al
  char v32; // al
  std::vector<std::string> *v33; // rax
  std::__detail::_Hash_node_base *v34; // rdi
  void *v35; // rdi
  char *v36; // rdi
  char *v37; // rdi
  int Utf8Len; // eax
  std::forward_iterator_tag v39; // cl
  const char *M_right; // rsi
  std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *p_M_before_begin; // rdi
  std::__detail::_Hash_node_base *M_nxt; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 j; // rdx
  int v45; // eax
  char v46; // cl
  char v47; // cl
  char *v48; // rdi
  common::tools::WordFilter::WordVecMap *p_word_vec_map; // [rsp+8h] [rbp-180h]
  std::string::size_type v51; // [rsp+18h] [rbp-170h]
  unsigned __int64 v52; // [rsp+20h] [rbp-168h]
  std::string v53; // [rsp+30h] [rbp-158h] BYREF
  char v54[312]; // [rsp+50h] [rbp-138h] BYREF

  M_start = (unsigned __int64)word_vec;
  v52 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(256LL);
    if ( v9 )
      v52 = v9;
  }
  *(_QWORD *)v52 = 1102416563LL;
  *(_QWORD *)(v52 + 8) = "4 32 8 4 __an 64 24 15 new_word_vec:50 128 32 7 word:41 192 32 13 ignore_str:74";
  *(_QWORD *)(v52 + 16) = common::tools::WordFilter::init;
  v5 = (_DWORD *)(v52 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  v6 = this;
  p_M_parent = &this->word_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_parent);
    goto LABEL_15;
  }
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
    &this->word_set_._M_t,
    (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Link_type)this->word_set_._M_t._M_impl._M_header._M_parent);
  p_M_parent = &this->word_set_._M_t._M_impl._M_header._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_store8(p_M_parent);
    goto LABEL_16;
  }
  this->word_set_._M_t._M_impl._M_header._M_parent = 0LL;
  v8 = &this->word_set_._M_t._M_impl.std::_Rb_tree_header;
  p_M_parent = &this->word_set_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_store8(p_M_parent);
    goto LABEL_17;
  }
  this->word_set_._M_t._M_impl._M_header._M_left = &v8->_M_header;
  p_M_parent = &this->word_set_._M_t._M_impl._M_header._M_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_store8(p_M_parent);
    goto LABEL_18;
  }
  this->word_set_._M_t._M_impl._M_header._M_right = &v8->_M_header;
  p_M_parent = &this->word_set_._M_t._M_impl._M_node_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(p_M_parent);
    goto LABEL_19;
  }
  this->word_set_._M_t._M_impl._M_node_count = 0LL;
  p_M_parent = &word_vec->_M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&word_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(p_M_parent);
    goto LABEL_20;
  }
  M_finish = (const char *)word_vec->_M_impl._M_finish;
  if ( !*(_BYTE *)(((unsigned __int64)word_vec >> 3) + 0x7FFF8000) )
  {
    M_start = (unsigned __int64)word_vec->_M_impl._M_start;
    *(_QWORD *)(v52 + 32) = this;
    while ( (const char *)M_start != M_finish )
    {
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_unique_<std::string const&,std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_Alloc_node>(
        &this->word_set_._M_t,
        (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::const_iterator)&this->word_set_._M_t._M_impl.std::_Rb_tree_header,
        (const std::string *)M_start,
        (std::_Rb_tree<std::string,std::string,std::_Identity<std::string >,std::less<std::string >,std::allocator<std::string > >::_Alloc_node *)(v52 + 32));
      M_start += 32LL;
    }
    goto LABEL_21;
  }
LABEL_20:
  __asan_report_load8(word_vec);
LABEL_21:
  p_word_vec_map = &this->word_vec_map_;
  std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string>>,std::allocator<std::pair<std::string const,std::vector<std::string>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear(&this->word_vec_map_._M_h);
  if ( !*(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    M_left = (common::tools::WordFilter *)this->word_set_._M_t._M_impl._M_header._M_left;
    goto LABEL_88;
  }
  p_M_right = __asan_report_load8(&this->word_set_._M_t._M_impl._M_header._M_left);
LABEL_24:
  v12 = p_M_right;
  __asan_report_load8(p_M_right);
LABEL_25:
  __asan_report_load8(v12);
LABEL_26:
  v14 = M_finish - 1;
LABEL_94:
  std::string::_M_construct<char const*>((std::string *const)(v52 + 128), M_finish, v14, v13);
  if ( *(_BYTE *)(((unsigned __int64)&v6->word_set_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v6->word_set_._M_t._M_impl._M_header._M_right);
  }
  else
  {
    M_right = (const char *)v6->word_set_._M_t._M_impl._M_header._M_right;
    *(_QWORD *)(v52 + 192) = v52 + 208;
    std::string::_M_construct<char const*>((std::string *const)(v52 + 192), M_right, &M_right[(int)M_start], v39);
  }
  v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &v53,
    *(char **)(v52 + 192),
    (char *)(*(_QWORD *)(v52 + 200) + *(_QWORD *)(v52 + 192)),
    v15);
  for ( i = 0LL; v53._M_string_length > i; ++i )
  {
    v17 = &v53._M_dataplus._M_p[i];
    v18 = *(_BYTE *)(((unsigned __int64)&v53._M_dataplus._M_p[i] >> 3) + 0x7FFF8000);
    if ( v18 <= (char)((LOBYTE(v53._M_dataplus._M_p) + i) & 7) && v18 )
    {
      __asan_report_load1(&v53._M_dataplus._M_p[i]);
    }
    else
    {
      v19 = *v17;
      if ( *v17 > 96 && v19 <= 122 )
        *v17 = v19 - 32;
    }
  }
  v20 = *(_QWORD *)(v52 + 192);
  M_p = v53._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
  {
    if ( v20 != v52 + 208 )
    {
      v51 = *(_QWORD *)(v52 + 208);
      goto LABEL_40;
    }
LABEL_66:
    v20 = 0LL;
LABEL_40:
    *(_QWORD *)(v52 + 192) = M_p;
    *(_QWORD *)(v52 + 200) = v53._M_string_length;
    *(_QWORD *)(v52 + 208) = v53._anon_0._M_allocated_capacity;
    if ( v20 )
    {
      v53._M_dataplus._M_p = (std::string::pointer)v20;
      v53._anon_0._M_allocated_capacity = v51;
    }
    else
    {
      v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
    }
    goto LABEL_42;
  }
  if ( v53._M_string_length )
  {
    if ( v53._M_string_length == 1 )
    {
      v31 = *(_BYTE *)(((unsigned __int64)v53._M_dataplus._M_p >> 3) + 0x7FFF8000);
      if ( v31 <= ((__int64)v53._M_dataplus._M_p & 7) && v31 )
      {
        v20 = (unsigned __int64)v53._M_dataplus._M_p;
        __asan_report_load1(v53._M_dataplus._M_p);
      }
      else
      {
        v32 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
        if ( v32 > (*(_BYTE *)(v52 + 192) & 7) || !v32 )
        {
          *(_BYTE *)v20 = *v53._M_dataplus._M_p;
          goto LABEL_55;
        }
      }
      __asan_report_store1(v20);
LABEL_65:
      __asan_report_store1(v20);
      goto LABEL_66;
    }
    memcpy((void *)v20, v53._M_dataplus._M_p, v53._M_string_length);
  }
LABEL_55:
  M_string_length = v53._M_string_length;
  *(_QWORD *)(v52 + 200) = v53._M_string_length;
  v29 = *(_QWORD *)(v52 + 192) + M_string_length;
  v20 = v29;
  v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
  if ( v30 <= (char)(v29 & 7) && v30 )
    goto LABEL_65;
  *(_BYTE *)v29 = 0;
LABEL_42:
  v53._M_string_length = 0LL;
  v22 = *(_BYTE *)(((unsigned __int64)v53._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v22 <= ((__int64)v53._M_dataplus._M_p & 7) && v22 )
  {
    __asan_report_store1(v53._M_dataplus._M_p);
  }
  else
  {
    *v53._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
      operator delete(v53._M_dataplus._M_p);
    v23._M_cur = std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string>>,std::allocator<std::pair<std::string const,std::vector<std::string>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                   &p_word_vec_map->_M_h,
                   (const std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type *)(v52 + 192))._M_cur;
    if ( v23._M_cur )
    {
      M_start = (unsigned __int64)(&v23._M_cur->_M_storage._M_storage.1 + 4);
      v25 = (unsigned __int64)(&v23._M_cur->_M_storage._M_storage.1 + 5);
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        v27 = __asan_report_load8(v25);
      }
      else
      {
        v26 = *(_QWORD *)(M_start + 8);
        v27 = M_start + 16;
        if ( !*(_BYTE *)(((M_start + 16) >> 3) + 0x7FFF8000) )
        {
          if ( v26 == *(_QWORD *)(M_start + 16) )
          {
            std::vector<std::string>::_M_realloc_insert<std::string const&>(
              (std::vector<std::string> *const)M_start,
              *(std::vector<std::string>::iterator *)(M_start + 8),
              (const std::string *)(v52 + 128),
              (const std::string *)v24._M_cur);
            goto LABEL_83;
          }
          if ( !*(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v26 = v26 + 16;
            std::string::_M_construct<char *>(
              (std::string *const)v26,
              *(char **)(v52 + 128),
              (char *)(*(_QWORD *)(v52 + 136) + *(_QWORD *)(v52 + 128)),
              (std::forward_iterator_tag)v24._M_cur);
LABEL_82:
            *(_QWORD *)(M_start + 8) += 32LL;
            goto LABEL_83;
          }
LABEL_81:
          __asan_report_store8(v26);
          goto LABEL_82;
        }
      }
      v26 = v27;
      __asan_report_load8(v27);
      goto LABEL_81;
    }
  }
  *(_QWORD *)(v52 + 64) = 0LL;
  *(_QWORD *)(v52 + 72) = 0LL;
  *(_QWORD *)(v52 + 80) = 0LL;
  std::vector<std::string>::_M_realloc_insert<std::string const&>(
    (std::vector<std::string> *const)(v52 + 64),
    0LL,
    (const std::string *)(v52 + 128),
    (const std::string *)v24._M_cur);
  v33 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string>>,std::allocator<std::pair<std::string const,std::vector<std::string>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (std::__detail::_Map_base<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *const)p_word_vec_map,
          (const std::__detail::_Map_base<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::key_type *)(v52 + 192));
  std::vector<std::string>::operator=(v33, (const std::vector<std::string> *)(v52 + 64));
  M_finish = *(const char **)(v52 + 72);
  for ( M_start = *(_QWORD *)(v52 + 64); M_finish != (const char *)M_start; M_start += 32LL )
  {
    v34 = (std::__detail::_Hash_node_base *)M_start;
    if ( *(_BYTE *)((M_start >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_start);
LABEL_71:
      operator delete(v34);
      continue;
    }
    v34 = *(std::__detail::_Hash_node_base **)M_start;
    if ( *(_QWORD *)M_start != M_start + 16 )
      goto LABEL_71;
  }
  v35 = *(void **)(v52 + 64);
  if ( v35 )
    operator delete(v35);
LABEL_83:
  v36 = *(char **)(v52 + 192);
  if ( v36 != (char *)(v52 + 208) )
    operator delete(v36);
  v37 = *(char **)(v52 + 128);
  if ( v37 != (char *)(v52 + 144) )
    operator delete(v37);
  while ( 2 )
  {
    M_left = (common::tools::WordFilter *)std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v6);
LABEL_88:
    v6 = M_left;
    if ( M_left != (common::tools::WordFilter *)&this->word_set_._M_t._M_impl.std::_Rb_tree_header )
    {
      p_M_right = (unsigned __int64)&M_left->word_set_._M_t._M_impl._M_header._M_right;
      if ( !*(_BYTE *)((p_M_right >> 3) + 0x7FFF8000) )
      {
        Utf8Len = common::tools::WordFilter::getUtf8Len(
                    this,
                    (const char *)v6->word_set_._M_t._M_impl._M_header._M_right);
        M_start = (unsigned int)Utf8Len;
        if ( Utf8Len <= 0 )
          continue;
        v12 = (unsigned __int64)&v6->word_set_._M_t._M_impl._M_header._M_right;
        if ( !*(_BYTE *)(((unsigned __int64)&v6->word_set_._M_t._M_impl._M_header._M_right >> 3) + 0x7FFF8000) )
        {
          M_finish = (const char *)v6->word_set_._M_t._M_impl._M_header._M_right;
          *(_QWORD *)(v52 + 128) = v52 + 144;
          if ( M_finish )
          {
            v14 = &M_finish[strlen(M_finish)];
            goto LABEL_94;
          }
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_24;
    }
    break;
  }
  p_M_before_begin = &this->word_vec_map_._M_h._M_before_begin;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_vec_map_._M_h._M_before_begin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_before_begin);
    goto LABEL_100;
  }
  M_nxt = this->word_vec_map_._M_h._M_before_begin._M_nxt;
  while ( 2 )
  {
    M_start = (unsigned __int64)M_nxt;
    if ( M_nxt )
    {
      p_M_before_begin = M_nxt + 6;
      if ( *(_BYTE *)(((unsigned __int64)p_M_before_begin >> 3) + 0x7FFF8000) )
      {
LABEL_100:
        __asan_report_load8(p_M_before_begin);
      }
      else
      {
        M_finish = *(const char **)(M_start + 48);
        p_M_before_begin = (std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::__node_base *)(M_start + 40);
        if ( !*(_BYTE *)(((M_start + 40) >> 3) + 0x7FFF8000) )
        {
          v6 = *(common::tools::WordFilter **)(M_start + 40);
          if ( v6 == (common::tools::WordFilter *)M_finish )
            goto LABEL_103;
          goto LABEL_102;
        }
      }
      __asan_report_load8(p_M_before_begin);
LABEL_102:
      _BitScanReverse64(&v43, (M_finish - (const char *)v6) >> 5);
      std::__introsort_loop<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,long,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::string const&,std::string const&)>>(
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)v6,
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_finish,
        2LL * (int)(63 - (v43 ^ 0x3F)),
        (__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const std::string&,const std::string&)>)common::tools::WordFilter::wordLenCmp);
      std::__final_insertion_sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(std::string const&,std::string const&)>>(
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)v6,
        (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_finish,
        (__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const std::string&,const std::string&)>)common::tools::WordFilter::wordLenCmp);
LABEL_103:
      if ( *(_BYTE *)((M_start >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(M_start);
        break;
      }
      M_nxt = *(std::__detail::_Hash_node_base **)M_start;
      continue;
    }
    break;
  }
  bzero(this->ignore_char_map_, 0x100uLL);
  *(_QWORD *)(v52 + 192) = v52 + 208;
  std::string::_M_construct<char const*>(
    (std::string *const)(v52 + 192),
    &byte_1BE7C7C2[-34],
    byte_1BE7C7C2,
    (std::forward_iterator_tag)v52);
  for ( j = 0LL; j < *(_QWORD *)(v52 + 200); ++j )
  {
    v46 = *(_BYTE *)(((*(_QWORD *)(v52 + 192) + j) >> 3) + 0x7FFF8000);
    if ( v46 <= (char)((*(_BYTE *)(v52 + 192) + j) & 7) && v46 )
    {
      v45 = __asan_report_load1(*(_QWORD *)(v52 + 192) + j);
    }
    else
    {
      v45 = *(char *)(*(_QWORD *)(v52 + 192) + j);
      v47 = *(_BYTE *)(((unsigned __int64)&this->ignore_char_map_[*(char *)(*(_QWORD *)(v52 + 192) + j)] >> 3)
                     + 0x7FFF8000);
      if ( v47 <= (((unsigned __int8)this + v45 + 104) & 7) && v47 )
      {
        __asan_report_store1(&this->ignore_char_map_[*(char *)(*(_QWORD *)(v52 + 192) + j)]);
        break;
      }
    }
    this->ignore_char_map_[v45] = 1;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&v53,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/word_filter.cpp",
    "init",
    80);
  if ( *(_BYTE *)(((unsigned __int64)&this->word_set_._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->word_set_._M_t._M_impl._M_node_count);
  else
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v53,
      "init succ with word_set.size=%lu.",
      this->word_set_._M_t._M_impl._M_node_count);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v53);
  v48 = *(char **)(v52 + 192);
  if ( v48 != (char *)(v52 + 208) )
    operator delete(v48);
  if ( v54 == (char *)v52 )
  {
    *(_QWORD *)((v52 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v52 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v52 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v52 = 1172321806LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v52 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return 0;
};

// Line 86: range 000000000E775B40-000000000E776175
bool __fastcall common::tools::WordFilter::isValid(common::tools::WordFilter *const this, const std::string *str)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  std::string::size_type i; // rdx
  char *v9; // rax
  char v10; // cl
  char v11; // cl
  unsigned __int64 p_k; // rsi
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *M_cur; // rbx
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // rax
  size_t v18; // rdi
  size_t v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // dl
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  int v25; // edx
  char v26; // al
  char v27; // dl
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *v28; // r9
  unsigned __int64 v29; // rax
  bool v30; // al
  __int64 v31; // rax
  std::string::size_type *p_M_string_length; // rdi
  unsigned __int64 v33; // rdi
  char v34; // dl
  char v35; // dl
  char v36; // cl
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rdx
  bool v40; // r12
  void **v41; // rbp
  void **j; // rbx
  void *v43; // rdi
  unsigned __int64 v45; // [rsp+0h] [rbp-108h]
  size_t cur_pos; // [rsp+8h] [rbp-100h]
  size_t term_idx; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v48; // [rsp+38h] [rbp-D0h]
  _DWORD *v49; // [rsp+40h] [rbp-C8h]
  std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type __k; // [rsp+50h] [rbp-B8h] BYREF
  char v51[152]; // [rsp+70h] [rbp-98h] BYREF

  v48 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v48 = v7;
  }
  *(_QWORD *)v48 = 1102416563LL;
  *(_QWORD *)(v48 + 8) = "1 32 24 11 term_vec:88";
  *(_QWORD *)(v48 + 16) = common::tools::WordFilter::isValid;
  v49 = (_DWORD *)(v48 >> 3);
  v49[536862720] = -235802127;
  v49[536862721] = -218103808;
  v49[536862722] = -202116109;
  *(_QWORD *)(v48 + 32) = 0LL;
  *(_QWORD *)(v48 + 40) = 0LL;
  *(_QWORD *)(v48 + 48) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    __asan_report_load8(str);
  else
    common::tools::WordFilter::cutWord(this, str->_M_dataplus._M_p, (std::vector<std::string> *)(v48 + 32));
  term_idx = 0LL;
  cur_pos = 0LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v48 + 32);
    if ( term_idx >= (*(_QWORD *)(v48 + 40) - v16) >> 5 )
      goto LABEL_83;
    v17 = 32 * term_idx + v16;
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    v18 = v17;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v17);
    }
    else
    {
      v18 = v17 + 8;
      if ( !*(_BYTE *)(((v17 + 8) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          &__k,
          *(char **)v17,
          (char *)(*(_QWORD *)(v17 + 8) + *(_QWORD *)v17),
          (std::forward_iterator_tag)v6);
        goto LABEL_10;
      }
    }
    __asan_report_load8(v18);
LABEL_10:
    for ( i = 0LL; __k._M_string_length > i; ++i )
    {
      v9 = &__k._M_dataplus._M_p[i];
      v10 = *(_BYTE *)(((unsigned __int64)&__k._M_dataplus._M_p[i] >> 3) + 0x7FFF8000);
      if ( v10 <= (char)((LOBYTE(__k._M_dataplus._M_p) + i) & 7) && v10 )
      {
        __asan_report_load1(&__k._M_dataplus._M_p[i]);
      }
      else
      {
        v11 = *v9;
        if ( *v9 > 96 && v11 <= 122 )
          *v9 = v11 - 32;
      }
    }
    p_k = (unsigned __int64)&__k;
    M_cur = std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string>>,std::allocator<std::pair<std::string const,std::vector<std::string>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              &this->word_vec_map_._M_h,
              &__k)._M_cur;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    v14 = M_cur;
    if ( M_cur )
      break;
LABEL_22:
    v15 = *(_QWORD *)(v48 + 32) + 32 * term_idx;
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v15 + 8);
LABEL_83:
      v40 = 1;
      goto LABEL_81;
    }
    cur_pos += *(_QWORD *)(v15 + 8);
    ++term_idx;
  }
  v45 = 0LL;
  while ( 2 )
  {
    p_M_string_length = (std::string::size_type *)(&v14->_M_storage._M_storage.1 + 5);
    if ( *(_BYTE *)(((unsigned __int64)(&v14->_M_storage._M_storage.1 + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_string_length);
LABEL_30:
      __asan_report_load8(p_M_string_length);
LABEL_31:
      __asan_report_load8(p_M_string_length);
      goto LABEL_32;
    }
    p_M_string_length = (std::string::size_type *)(&v14->_M_storage._M_storage.1 + 4);
    if ( *(_BYTE *)(((unsigned __int64)(&v14->_M_storage._M_storage.1 + 4) >> 3) + 0x7FFF8000) )
      goto LABEL_30;
    v38 = *((_QWORD *)&v14->_M_storage._M_storage.1 + 4);
    if ( v45 >= (*((_QWORD *)&v14->_M_storage._M_storage.1 + 5) - v38) >> 5 )
      goto LABEL_22;
    p_M_string_length = &str->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    v3 = 32 * v45;
    v39 = 32 * v45 + v38;
    p_M_string_length = (std::string::size_type *)(v39 + 8);
    v6 = (unsigned __int64)(v39 + 8) >> 3;
    if ( !*(_BYTE *)(v6 + 0x7FFF8000) )
    {
      if ( str->_M_string_length - cur_pos >= *(_QWORD *)(v39 + 8) )
      {
        v2 = 0LL;
        v28 = 0LL;
        M_cur = 0LL;
        goto LABEL_56;
      }
      goto LABEL_70;
    }
LABEL_32:
    __asan_report_load8(p_M_string_length);
    while ( 2 )
    {
      __asan_report_load8(p_M_string_length);
LABEL_34:
      v19 = cur_pos + v2;
      if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      {
        v20 = __asan_report_load8(str);
      }
      else
      {
        p_k = (unsigned __int64)str->_M_dataplus._M_p;
        v20 = (unsigned __int64)&str->_M_dataplus._M_p[(unsigned __int64)M_cur + cur_pos + v2];
        v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
        if ( v21 > (char)(v20 & 7) || !v21 )
        {
          v22 = *(_BYTE *)v20;
          goto LABEL_42;
        }
      }
      v23 = v20;
      __asan_report_load1(v20);
LABEL_40:
      v24 = __asan_report_load1(v23);
      do
      {
        v22 = *(_BYTE *)v24;
LABEL_42:
        v25 = v22;
        v23 = (unsigned __int64)&this->ignore_char_map_[v22];
        v26 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
        if ( v26 <= (char)(v23 & 7) && v26 )
          goto LABEL_40;
        if ( !this->ignore_char_map_[v25] )
          goto LABEL_48;
        M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *)((char *)M_cur + 1);
        v24 = (unsigned __int64)M_cur + v19 + p_k;
        v27 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
      }
      while ( v27 > (char)((p_k + v19 + (_BYTE)M_cur) & 7) || !v27 );
      __asan_report_load1(v24);
LABEL_48:
      p_k += (unsigned __int64)M_cur + v19;
      v28 = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *)((char *)M_cur + v2 + common::tools::WordFilter::getUtf8Len(this, (const char *)p_k));
LABEL_59:
      v33 = *((_QWORD *)&v14->_M_storage._M_storage.1 + 4) + v3;
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v33);
LABEL_50:
        __asan_report_load1(v33);
LABEL_51:
        v29 = __asan_report_load8(v33);
LABEL_52:
        __asan_report_load1(v29);
        goto LABEL_53;
      }
      p_k = *(_QWORD *)(*((_QWORD *)&v14->_M_storage._M_storage.1 + 4) + v3) + v2;
      v33 = p_k;
      v34 = *(_BYTE *)((p_k >> 3) + 0x7FFF8000);
      if ( v34 <= (char)(p_k & 7) && v34 )
        goto LABEL_50;
      v35 = *(_BYTE *)p_k;
      p_k = (unsigned int)*(char *)p_k;
      v33 = (unsigned __int64)str;
      if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
        goto LABEL_51;
      v29 = (unsigned __int64)&str->_M_dataplus._M_p[(unsigned __int64)M_cur + v2 + cur_pos];
      v36 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
      if ( v36 <= (char)(v29 & 7) && v36 )
        goto LABEL_52;
      v37 = *(_BYTE *)v29;
      LODWORD(v6) = v37;
      if ( v35 == v37 )
        goto LABEL_55;
      if ( (unsigned __int8)(v37 - 97) <= 0x19u )
      {
LABEL_53:
        p_k = (unsigned int)(p_k + 32);
        v30 = (_DWORD)v6 == (_DWORD)p_k;
        goto LABEL_54;
      }
      if ( (unsigned __int8)(v37 - 65) > 0x19u )
      {
        v30 = 0;
        goto LABEL_69;
      }
      LODWORD(v6) = v37 + 32;
      v30 = (_DWORD)p_k == (_DWORD)v6;
LABEL_54:
      if ( !v30 )
        goto LABEL_69;
LABEL_55:
      ++v2;
LABEL_56:
      v31 = *((_QWORD *)&v14->_M_storage._M_storage.1 + 4) + v3;
      p_M_string_length = (std::string::size_type *)(v31 + 8);
      if ( *(_BYTE *)(((unsigned __int64)(v31 + 8) >> 3) + 0x7FFF8000) )
        continue;
      break;
    }
    if ( v2 < *(_QWORD *)(v31 + 8) )
    {
      if ( (std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *)((char *)M_cur + v2) == v28 )
        goto LABEL_34;
      goto LABEL_59;
    }
    v30 = 1;
LABEL_69:
    if ( !v30 )
    {
LABEL_70:
      ++v45;
      continue;
    }
    break;
  }
  v40 = 0;
LABEL_81:
  v41 = *(void ***)(v48 + 40);
  for ( j = *(void ***)(v48 + 32); v41 != j; j += 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)j >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(j);
    }
    else if ( *j != j + 2 )
    {
      operator delete(*j);
    }
  }
  v43 = *(void **)(v48 + 32);
  if ( v43 )
    operator delete(v43);
  if ( v51 == (char *)v48 )
  {
    *(_QWORD *)((v48 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v48 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v48 = 1172321806LL;
    *(_QWORD *)((v48 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v48 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v40;
};

// Line 164: range 000000000E776448-000000000E776D97
std::string *__fastcall common::tools::WordFilter::wordRewrite(
        std::string *retstr,
        common::tools::WordFilter *const this,
        const std::string *str)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r14
  char v6; // al
  std::forward_iterator_tag v7; // cl
  __int64 v8; // rax
  std::string::size_type i; // rdx
  char *v10; // rax
  char v11; // cl
  char v12; // cl
  unsigned __int64 p_k; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  size_t v18; // rcx
  unsigned __int64 v19; // rax
  char v20; // dl
  unsigned __int8 v21; // al
  common::tools::WordFilter *v22; // r9
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  int v25; // edx
  char v26; // al
  char v27; // dl
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  int v30; // ecx
  bool v31; // al
  __int64 v32; // rax
  std::string::size_type *p_M_string_length; // rdi
  unsigned __int64 v34; // rdi
  char v35; // dl
  char v36; // dl
  char v37; // cl
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 j; // rbx
  std::string::size_type *v42; // rdi
  void **v43; // rbp
  void **k; // rbx
  void *v45; // rdi
  char *v46; // rdi
  __int64 v47; // rax
  size_t v48; // rax
  size_t v49; // rdi
  void **v50; // rbp
  void **m; // rbx
  void *v52; // rdi
  void *v53; // rdi
  unsigned __int64 v55; // [rsp+8h] [rbp-1A0h]
  size_t cur_pos; // [rsp+10h] [rbp-198h]
  std::string *v57; // [rsp+18h] [rbp-190h]
  size_t term_idx; // [rsp+28h] [rbp-180h]
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<std::string> >,true>::__node_type *M_cur; // [rsp+30h] [rbp-178h]
  unsigned __int64 v61; // [rsp+50h] [rbp-158h]
  _DWORD *v62; // [rsp+60h] [rbp-148h]
  std::_Hashtable<std::string,std::pair<const std::string,std::vector<std::string> >,std::allocator<std::pair<const std::string,std::vector<std::string> > >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::key_type __k; // [rsp+70h] [rbp-138h] BYREF
  char v64[280]; // [rsp+90h] [rbp-118h] BYREF

  v57 = retstr;
  v61 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v61 = v8;
  }
  *(_QWORD *)v61 = 1102416563LL;
  *(_QWORD *)(v61 + 8) = "3 32 24 12 term_vec:169 96 24 18 hexie_term_vec:243 160 32 14 hexie_word:177";
  *(_QWORD *)(v61 + 16) = common::tools::WordFilter::wordRewrite;
  v62 = (_DWORD *)(v61 >> 3);
  v62[536862720] = -235802127;
  v62[536862721] = -234881024;
  v62[536862722] = -218959118;
  v62[536862723] = -234881024;
  v62[536862724] = -218959118;
  v62[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr);
    goto LABEL_11;
  }
  retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
  retstr = (std::string *)((char *)retstr + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v57->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_store8(retstr);
LABEL_12:
    __asan_report_store1(retstr);
    goto LABEL_13;
  }
  v57->_M_string_length = 0LL;
  retstr = (std::string *)&v57->_anon_0;
  v6 = *(_BYTE *)(((unsigned __int64)&v57->_anon_0 >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)v57 + 16) & 7) && v6 )
    goto LABEL_12;
  v57->_anon_0._M_local_buf[0] = 0;
  *(_QWORD *)(v61 + 32) = 0LL;
  *(_QWORD *)(v61 + 40) = 0LL;
  *(_QWORD *)(v61 + 48) = 0LL;
  if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
    common::tools::WordFilter::cutWord(this, str->_M_dataplus._M_p, (std::vector<std::string> *)(v61 + 32));
    goto LABEL_14;
  }
LABEL_13:
  __asan_report_load8(str);
LABEL_14:
  term_idx = 0LL;
  cur_pos = 0LL;
  while ( 1 )
  {
    v47 = *(_QWORD *)(v61 + 32);
    if ( term_idx >= (*(_QWORD *)(v61 + 40) - v47) >> 5 )
      break;
    *(_QWORD *)(v61 + 160) = v61 + 176;
    *(_QWORD *)(v61 + 168) = 0LL;
    *(_BYTE *)(v61 + 176) = 0;
    v48 = 32 * term_idx + v47;
    __k._M_dataplus._M_p = __k._anon_0._M_local_buf;
    v49 = v48;
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v48);
    }
    else
    {
      v49 = v48 + 8;
      if ( !*(_BYTE *)(((v48 + 8) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(&__k, *(char **)v48, (char *)(*(_QWORD *)(v48 + 8) + *(_QWORD *)v48), v7);
        goto LABEL_17;
      }
    }
    __asan_report_load8(v49);
LABEL_17:
    for ( i = 0LL; __k._M_string_length > i; ++i )
    {
      v10 = &__k._M_dataplus._M_p[i];
      v11 = *(_BYTE *)(((unsigned __int64)&__k._M_dataplus._M_p[i] >> 3) + 0x7FFF8000);
      if ( v11 <= (char)((LOBYTE(__k._M_dataplus._M_p) + i) & 7) && v11 )
      {
        __asan_report_load1(&__k._M_dataplus._M_p[i]);
      }
      else
      {
        v12 = *v10;
        if ( *v10 > 96 && v12 <= 122 )
          *v10 = v12 - 32;
      }
    }
    p_k = (unsigned __int64)&__k;
    M_cur = std::_Hashtable<std::string,std::pair<std::string const,std::vector<std::string>>,std::allocator<std::pair<std::string const,std::vector<std::string>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              &this->word_vec_map_._M_h,
              &__k)._M_cur;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__k._M_dataplus._M_p != &__k._anon_0 )
      operator delete(__k._M_dataplus._M_p);
    if ( !M_cur )
    {
      v14 = 0LL;
      goto LABEL_30;
    }
    v55 = 0LL;
    v14 = 0LL;
    while ( 2 )
    {
      p_M_string_length = (std::string::size_type *)(&M_cur->_M_storage._M_storage.1 + 5);
      if ( *(_BYTE *)(((unsigned __int64)(&M_cur->_M_storage._M_storage.1 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_string_length);
LABEL_36:
        __asan_report_load8(p_M_string_length);
        goto LABEL_37;
      }
      p_M_string_length = (std::string::size_type *)(&M_cur->_M_storage._M_storage.1 + 4);
      if ( *(_BYTE *)(((unsigned __int64)(&M_cur->_M_storage._M_storage.1 + 4) >> 3) + 0x7FFF8000) )
        goto LABEL_36;
      v39 = *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 4);
      if ( v55 >= (*((_QWORD *)&M_cur->_M_storage._M_storage.1 + 5) - v39) >> 5 )
        goto LABEL_30;
      p_M_string_length = &str->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        v4 = 32 * v55;
        v40 = 32 * v55 + v39;
        p_M_string_length = (std::string::size_type *)(v40 + 8);
        if ( !*(_BYTE *)(((unsigned __int64)(v40 + 8) >> 3) + 0x7FFF8000) )
        {
          if ( str->_M_string_length - cur_pos >= *(_QWORD *)(v40 + 8) )
          {
            v3 = 0LL;
            v28 = 0LL;
            v14 = 0LL;
            goto LABEL_62;
          }
          goto LABEL_76;
        }
        goto LABEL_38;
      }
LABEL_37:
      __asan_report_load8(p_M_string_length);
LABEL_38:
      __asan_report_load8(p_M_string_length);
LABEL_39:
      __asan_report_load8(p_M_string_length);
LABEL_40:
      v18 = cur_pos + v3;
      if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
      {
        v19 = __asan_report_load8(str);
      }
      else
      {
        p_k = (unsigned __int64)str->_M_dataplus._M_p;
        v19 = (unsigned __int64)&str->_M_dataplus._M_p[cur_pos + v3 + v14];
        v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
        if ( v20 > (char)(v19 & 7) || !v20 )
        {
          v21 = *(_BYTE *)v19;
          v22 = this;
          goto LABEL_48;
        }
      }
      v23 = v19;
      __asan_report_load1(v19);
LABEL_46:
      v24 = __asan_report_load1(v23);
      do
      {
        v21 = *(_BYTE *)v24;
LABEL_48:
        v25 = v21;
        v23 = (unsigned __int64)&v22->ignore_char_map_[v21];
        v26 = *(_BYTE *)((v23 >> 3) + 0x7FFF8000);
        if ( v26 <= (char)(v23 & 7) && v26 )
          goto LABEL_46;
        if ( !v22->ignore_char_map_[v25] )
          goto LABEL_54;
        ++v14;
        v24 = p_k + v18 + v14;
        v27 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
      }
      while ( v27 > (char)((p_k + v18 + v14) & 7) || !v27 );
      __asan_report_load1(v24);
LABEL_54:
      p_k += v14 + v18;
      v28 = common::tools::WordFilter::getUtf8Len(this, (const char *)p_k) + v14 + v3;
      while ( 1 )
      {
        v34 = *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 4) + v4;
        if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v34);
LABEL_56:
          __asan_report_load1(v34);
LABEL_57:
          v29 = __asan_report_load8(v34);
LABEL_58:
          __asan_report_load1(v29);
          goto LABEL_59;
        }
        p_k = *(_QWORD *)(*((_QWORD *)&M_cur->_M_storage._M_storage.1 + 4) + v4) + v3;
        v34 = p_k;
        v35 = *(_BYTE *)((p_k >> 3) + 0x7FFF8000);
        if ( v35 <= (char)(p_k & 7) && v35 )
          goto LABEL_56;
        v36 = *(_BYTE *)p_k;
        p_k = (unsigned int)*(char *)p_k;
        v34 = (unsigned __int64)str;
        if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
          goto LABEL_57;
        v29 = (unsigned __int64)&str->_M_dataplus._M_p[v14 + v3 + cur_pos];
        v37 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
        if ( v37 <= (char)(v29 & 7) && v37 )
          goto LABEL_58;
        v38 = *(_BYTE *)v29;
        v30 = v38;
        if ( v36 == v38 )
          goto LABEL_61;
        if ( (unsigned __int8)(v38 - 97) > 0x19u )
        {
          if ( (unsigned __int8)(v38 - 65) > 0x19u )
          {
            v31 = 0;
            goto LABEL_75;
          }
          v31 = (_DWORD)p_k == v38 + 32;
          goto LABEL_60;
        }
LABEL_59:
        p_k = (unsigned int)(p_k + 32);
        v31 = v30 == (_DWORD)p_k;
LABEL_60:
        if ( !v31 )
          goto LABEL_75;
LABEL_61:
        ++v3;
LABEL_62:
        v32 = *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 4) + v4;
        p_M_string_length = (std::string::size_type *)(v32 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v32 + 8) >> 3) + 0x7FFF8000) )
          goto LABEL_39;
        if ( v3 >= *(_QWORD *)(v32 + 8) )
          break;
        if ( v14 + v3 == v28 )
          goto LABEL_40;
      }
      v31 = 1;
LABEL_75:
      if ( !v31 )
      {
LABEL_76:
        ++v55;
        continue;
      }
      break;
    }
    std::string::_M_assign(v61 + 160, *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 4) + v4);
LABEL_30:
    if ( !*(_QWORD *)(v61 + 168) )
    {
      v15 = *(_QWORD *)(v61 + 32) + 32 * term_idx;
      v16 = v15 + 8;
      if ( *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v16);
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        cur_pos += v17;
        v16 = *(_QWORD *)(v61 + 32) + 32 * term_idx;
        if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        {
          std::string::_M_append(v57, *(_QWORD *)v15, v17);
          goto LABEL_105;
        }
      }
      __asan_report_load8(v16);
    }
    *(_QWORD *)(v61 + 96) = 0LL;
    *(_QWORD *)(v61 + 104) = 0LL;
    *(_QWORD *)(v61 + 112) = 0LL;
    common::tools::WordFilter::cutWord(this, *(const char **)(v61 + 160), (std::vector<std::string> *)(v61 + 96));
    cur_pos += v14 + *(_QWORD *)(v61 + 168);
    term_idx = v14 + term_idx + ((__int64)(*(_QWORD *)(v61 + 104) - *(_QWORD *)(v61 + 96)) >> 5) - 1;
    for ( j = 0LL; j < (__int64)(*(_QWORD *)(v61 + 104) - *(_QWORD *)(v61 + 96)) >> 5; ++j )
    {
      v42 = &v57->_M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v57->_M_string_length >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v42);
LABEL_91:
        __asan_handle_no_return(v42);
        std::__throw_length_error("basic_string::append");
      }
      if ( v57->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_91;
      std::string::_M_append(v57, "*", 1LL);
    }
    v43 = *(void ***)(v61 + 104);
    for ( k = *(void ***)(v61 + 96); v43 != k; k += 4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(k);
      }
      else if ( *k != k + 2 )
      {
        operator delete(*k);
      }
    }
    v45 = *(void **)(v61 + 96);
    if ( v45 )
      operator delete(v45);
LABEL_105:
    v46 = *(char **)(v61 + 160);
    if ( v46 != (char *)(v61 + 176) )
      operator delete(v46);
    ++term_idx;
  }
  v50 = *(void ***)(v61 + 40);
  for ( m = *(void ***)(v61 + 32); v50 != m; m += 4 )
  {
    v52 = m;
    if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(m);
LABEL_114:
      operator delete(v52);
      continue;
    }
    v52 = *m;
    if ( *m != m + 2 )
      goto LABEL_114;
  }
  v53 = *(void **)(v61 + 32);
  if ( v53 )
    operator delete(v53);
  if ( v64 == (char *)v61 )
  {
    *(_QWORD *)((v61 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v61 = 1172321806LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v61 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v61 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v57;
};

// Line 264: range 000000000E7754FA-000000000E775849
bool __fastcall common::tools::WordFilter::isContainNumber(
        common::tools::WordFilter *const this,
        const std::map<std::string,char> *replace_map,
        const std::string *number,
        const std::string *str)
{
  unsigned __int64 v4; // r12
  __int64 v8; // rax
  const std::string *v9; // rbp
  std::string::size_type v10; // r13
  std::_Rb_tree_const_iterator<std::pair<const std::string,char> >::_Base_ptr M_node; // rax
  char M_color; // si
  unsigned __int64 v13; // rdi
  char v14; // dl
  __int64 v15; // rsi
  char v16; // dl
  void *p_M_string_length; // rdi
  void *v18; // rdi
  unsigned __int64 v20; // [rsp+8h] [rbp-B0h]
  _DWORD *v21; // [rsp+18h] [rbp-A0h]
  char v22[152]; // [rsp+20h] [rbp-98h] BYREF

  LOBYTE(v4) = (_BYTE)this;
  v20 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v20 = v8;
  }
  *(_QWORD *)v20 = 1102416563LL;
  *(_QWORD *)(v20 + 8) = "1 32 24 12 term_vec:266";
  *(_QWORD *)(v20 + 16) = common::tools::WordFilter::isContainNumber;
  v21 = (_DWORD *)(v20 >> 3);
  v21[536862720] = -235802127;
  v21[536862721] = -218103808;
  v21[536862722] = -202116109;
  *(_QWORD *)(v20 + 32) = 0LL;
  *(_QWORD *)(v20 + 40) = 0LL;
  *(_QWORD *)(v20 + 48) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    __asan_report_load8(str);
  else
    common::tools::WordFilter::cutWord(this, str->_M_dataplus._M_p, (std::vector<std::string> *)(v20 + 32));
  v9 = 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)v9 >= (*(_QWORD *)(v20 + 40) - v15) >> 5 )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&number->_M_string_length >> 3) + 0x7FFF8000) )
    {
      M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,char> >::_Base_ptr)__asan_report_load8(&number->_M_string_length);
LABEL_9:
      M_color = M_node[2]._M_color;
      goto LABEL_10;
    }
    if ( v10 >= number->_M_string_length )
      break;
    v4 = 32LL * (_QWORD)v9;
    M_node = std::_Rb_tree<std::string,std::pair<std::string const,char>,std::_Select1st<std::pair<std::string const,char>>,std::less<std::string>,std::allocator<std::pair<std::string const,char>>>::find(
               &replace_map->_M_t,
               (const std::string *)(32LL * (_QWORD)v9 + v15))._M_node;
    if ( &replace_map->_M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)M_node )
    {
      if ( *(char *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000) >= 0 )
        goto LABEL_9;
      __asan_report_load1(&M_node[2]);
    }
    v4 += *(_QWORD *)(v20 + 32);
    if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v4 + 8);
    }
    else if ( *(_QWORD *)(v4 + 8) != 1LL )
    {
      M_color = 0;
      goto LABEL_10;
    }
    v13 = v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v4);
LABEL_30:
      __asan_report_load1(v13);
LABEL_31:
      __asan_report_load8(v13);
      goto LABEL_32;
    }
    v13 = *(_QWORD *)v4;
    v16 = *(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL);
    if ( v16 <= (*(_BYTE *)v4 & 7) && v16 )
      goto LABEL_30;
    M_color = **(_BYTE **)v4;
LABEL_10:
    v13 = (unsigned __int64)number;
    if ( *(_BYTE *)(((unsigned __int64)number >> 3) + 0x7FFF8000) )
      goto LABEL_31;
    v13 = (unsigned __int64)&number->_M_dataplus._M_p[v10];
    v14 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v14 > (char)((LOBYTE(number->_M_dataplus._M_p) + v10) & 7) || !v14 )
    {
      if ( number->_M_dataplus._M_p[v10] != M_color )
        goto LABEL_14;
      goto LABEL_33;
    }
LABEL_32:
    __asan_report_load1(v13);
LABEL_33:
    ++v10;
LABEL_14:
    v9 = (const std::string *)((char *)v9 + 1);
  }
  p_M_string_length = &number->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&number->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_string_length);
    goto LABEL_37;
  }
  LOBYTE(v4) = v10 >= number->_M_string_length;
  v9 = *(const std::string **)(v20 + 40);
  for ( number = *(const std::string **)(v20 + 32); v9 != number; ++number )
  {
    p_M_string_length = (void *)number;
    if ( *(_BYTE *)(((unsigned __int64)number >> 3) + 0x7FFF8000) )
    {
LABEL_37:
      __asan_report_load8(p_M_string_length);
    }
    else if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)number->_M_dataplus._M_p != &number->_anon_0 )
    {
      operator delete(number->_M_dataplus._M_p);
    }
  }
  v18 = *(void **)(v20 + 32);
  if ( v18 )
    operator delete(v18);
  if ( v22 == (char *)v20 )
  {
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v20 = 1172321806LL;
    *(_QWORD *)((v20 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v20 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v4;
};

// Line 307: range 000000000E775120-000000000E77522E
int __fastcall common::tools::WordFilter::getUtf8Len(common::tools::WordFilter *const this, const char *str)
{
  char v2; // al
  char v3; // al

  if ( !str )
    return -1;
  v2 = *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000);
  if ( v2 <= ((unsigned __int8)str & 7) && v2 )
  {
    __asan_report_load1(str);
    return -1;
  }
  v3 = *str;
  if ( !*str )
    return 0;
  if ( v3 >= 0 )
    return 1;
  if ( (unsigned __int8)v3 <= 0xDFu )
    return 2;
  if ( (unsigned __int8)v3 <= 0xEFu )
    return 3;
  if ( (unsigned __int8)v3 <= 0xF7u )
    return 4;
  if ( (unsigned __int8)v3 <= 0xF9u )
    return 5;
  return 6;
};

// Line 427: range 000000000E777ABA-000000000E7787A7
int __fastcall common::tools::WordFilterMgr::init(
        common::tools::WordFilterMgr *const this,
        const std::vector<std::string> *word_vec)
{
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v2; // r14
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r15
  unsigned __int64 v5; // r12
  char *v6; // rbx
  _DWORD *v7; // r13
  bool *p_M_use_count; // rdi
  char v9; // al
  std::forward_iterator_tag v10; // cl
  char v11; // al
  char v12; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rdi
  char v14; // al
  int (**v15)(...); // rax
  char v16; // al
  common::tools::WordFilter *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  std::forward_iterator_tag v20; // cl
  struct _Unwind_Exception *v21; // rbp
  std::string::pointer M_p; // rdi
  char v23; // al
  unsigned __int64 v24; // rdi
  char v25; // al
  unsigned __int64 v26; // rdx
  char v27; // cl
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rax
  std::shared_mutex *p_filter_mu; // rdi
  char v44; // dl
  char v45; // dl
  signed __int32 M_use_count; // eax
  bool v47; // zf
  unsigned __int64 v48; // rbx
  volatile signed __int32 *v49; // rdi
  char v50; // dl
  signed __int32 v51; // eax
  char v53; // dl
  char v54; // dl
  char v55; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v57; // rdi
  char v58; // dl
  pthread_rwlock_t *v59; // rdi
  char v60; // dl
  unsigned __int64 v61; // rdi
  char v62; // dl
  signed __int32 v63; // eax
  unsigned __int64 v64; // rdi
  char v65; // dl
  struct _Unwind_Exception *v66; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // rdi
  int word_veca; // [rsp+8h] [rbp-F0h]
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // [rsp+18h] [rbp-E0h]
  std::string type; // [rsp+20h] [rbp-D8h] BYREF
  char v71[184]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_1(128LL);
    if ( v19 )
      v5 = v19;
  }
  v6 = (char *)(v5 + 128);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 4 __a2 64 16 18 new_filter_ptr:429 96 16 7 __guard";
  *(_QWORD *)(v5 + 16) = common::tools::WordFilterMgr::init;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  p_M_use_count = &common::tools::perf::MemoryPerf::is_record;
  v9 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v9 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v9 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_31;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::WordFilter,common::tools::perf::allocator<common::tools::WordFilter,common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2>,common::tools::WordFilter>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::WordFilter,common::tools::perf::allocator<common::tools::WordFilter,common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2>,common::tools::WordFilter> *)(v5 + 48));
    M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 104);
    p_M_use_count = (bool *)&M_pi->_M_use_count;
    v11 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( !v11 || v11 > 3 )
    {
      M_pi->_M_use_count = 1;
      p_M_use_count = (bool *)&M_pi->_M_weak_count;
      v12 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) < v12 || !v12 )
      {
        M_pi->_M_weak_count = 1;
        if ( !*(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
        {
          M_pi->_vptr__Sp_counted_base = (int (**)(...))(&`vtable for'std::_Sp_counted_ptr_inplace<common::tools::WordFilter,common::tools::perf::allocator<common::tools::WordFilter,common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2>
                                                       + 2);
          v2 = M_pi + 1;
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_11;
          goto LABEL_34;
        }
LABEL_33:
        __asan_report_store8(M_pi);
LABEL_34:
        type._M_dataplus._M_p = type._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&type, "N6common5tools10WordFilterE", "", v10);
        common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0x168uLL);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
          operator delete(type._M_dataplus._M_p);
LABEL_11:
        v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&v2->_M_use_count;
        v14 = *(_BYTE *)(((unsigned __int64)&v2->_M_use_count >> 3) + 0x7FFF8000);
        if ( v14 && v14 <= 3 )
        {
          __asan_report_store4(v13);
        }
        else
        {
          v2->_M_use_count = 0;
          v13 = v2 + 1;
          if ( !*(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
          {
            v2[1]._vptr__Sp_counted_base = 0LL;
            v15 = (int (**)(...))&v2->_M_use_count;
            v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 24);
            if ( !*(_BYTE *)(((unsigned __int64)&v2[1]._M_use_count >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)&v2[1]._M_use_count = v15;
              v13 = v2 + 2;
              if ( !*(_BYTE *)(((unsigned __int64)&v2[2] >> 3) + 0x7FFF8000) )
              {
                v2[2]._vptr__Sp_counted_base = v15;
                v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 40);
                if ( !*(_BYTE *)(((unsigned __int64)&v2[2]._M_use_count >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)&v2[2]._M_use_count = 0LL;
                  v13 = v2 + 3;
                  if ( !*(_BYTE *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) )
                  {
                    v2[3]._vptr__Sp_counted_base = (int (**)(...))&v2[6];
                    v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 56);
                    if ( !*(_BYTE *)(((unsigned __int64)&v2[3]._M_use_count >> 3) + 0x7FFF8000) )
                    {
                      *(_QWORD *)&v2[3]._M_use_count = 1LL;
                      v13 = v2 + 4;
                      if ( !*(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
                      {
                        v2[4]._vptr__Sp_counted_base = 0LL;
                        v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 72);
                        if ( !*(_BYTE *)(((unsigned __int64)&v2[4]._M_use_count >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)&v2[4]._M_use_count = 0LL;
                          v13 = v2 + 5;
                          v16 = *(_BYTE *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000);
                          if ( !v16 || v16 > 3 )
                          {
                            LODWORD(v2[5]._vptr__Sp_counted_base) = 1065353216;
                            v13 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((char *)v2 + 88);
                            if ( !*(_BYTE *)(((unsigned __int64)&v2[5]._M_use_count >> 3) + 0x7FFF8000) )
                            {
                              *(_QWORD *)&v2[5]._M_use_count = 0LL;
                              v13 = v2 + 6;
                              if ( !*(_BYTE *)(((unsigned __int64)&v2[6] >> 3) + 0x7FFF8000) )
                              {
                                v2[6]._vptr__Sp_counted_base = 0LL;
                                *(_QWORD *)(v5 + 104) = 0LL;
                                *(_QWORD *)(v5 + 72) = M_pi;
                                *(_QWORD *)(v5 + 64) = v2;
                                goto LABEL_26;
                              }
LABEL_47:
                              v21 = (struct _Unwind_Exception *)__asan_report_store8(v13);
                              M_p = type._M_dataplus._M_p;
                              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                                operator delete(type._M_dataplus._M_p);
                              while ( 1 )
                              {
                                v6 = (char *)*((_QWORD *)v6 - 3);
                                if ( !v6 )
                                  goto LABEL_57;
                                M_p = (std::string::pointer)&common::tools::perf::MemoryPerf::is_record;
                                v23 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3)
                                               + 0x7FFF8000);
                                if ( v23 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7)
                                  || !v23 )
                                {
                                  break;
                                }
                                v21 = (struct _Unwind_Exception *)__asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
                              }
                              if ( common::tools::perf::MemoryPerf::is_record )
                              {
                                type._M_dataplus._M_p = type._anon_0._M_local_buf;
                                std::string::_M_construct<char const*>(&type, "N6common5tools10WordFilterE", "", v20);
                                common::tools::perf::MemoryPerfRecorder::deallocate(
                                  &common::tools::perf::MemoryPerf::recorder,
                                  &type);
                                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                                  operator delete(type._M_dataplus._M_p);
                              }
                              M_p = v6;
                              free(v6);
LABEL_57:
                              __asan_handle_no_return(M_p);
                              _Unwind_Resume(v21);
                            }
LABEL_46:
                            __asan_report_store8(v13);
                            goto LABEL_47;
                          }
LABEL_45:
                          __asan_report_store4(v13);
                          goto LABEL_46;
                        }
LABEL_44:
                        __asan_report_store8(v13);
                        goto LABEL_45;
                      }
LABEL_43:
                      __asan_report_store8(v13);
                      goto LABEL_44;
                    }
LABEL_42:
                    __asan_report_store8(v13);
                    goto LABEL_43;
                  }
LABEL_41:
                  __asan_report_store8(v13);
                  goto LABEL_42;
                }
LABEL_40:
                __asan_report_store8(v13);
                goto LABEL_41;
              }
LABEL_39:
              __asan_report_store8(v13);
              goto LABEL_40;
            }
LABEL_38:
            __asan_report_store8(v13);
            goto LABEL_39;
          }
        }
        __asan_report_store8(v13);
        goto LABEL_38;
      }
LABEL_32:
      __asan_report_store4(p_M_use_count);
      goto LABEL_33;
    }
LABEL_31:
    __asan_report_store4(p_M_use_count);
    goto LABEL_32;
  }
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::tools::WordFilter,std::allocator<common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::tools::WordFilter,std::allocator<common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
  v24 = *(_QWORD *)(v5 + 104);
  v25 = *(_BYTE *)(((v24 + 8) >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
  {
    __asan_report_store4(v24 + 8);
LABEL_79:
    v24 = v26;
    __asan_report_store4(v26);
    goto LABEL_80;
  }
  *(_DWORD *)(v24 + 8) = 1;
  v26 = v24 + 12;
  v27 = *(_BYTE *)(((v24 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v24 + 12) & 7) + 3) >= v27 && v27 )
    goto LABEL_79;
  *(_DWORD *)(v24 + 12) = 1;
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_store8(v24);
LABEL_81:
    v30 = __asan_report_store4(v28);
    goto LABEL_82;
  }
  *(_QWORD *)v24 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::WordFilter,std::allocator<common::tools::WordFilter>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v28 = v24 + 24;
  v29 = *(_BYTE *)(((v24 + 24) >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
    goto LABEL_81;
  *(_DWORD *)(v24 + 24) = 0;
  v30 = v24 + 32;
  if ( *(_BYTE *)(((v24 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_82:
    __asan_report_store8(v30);
    goto LABEL_83;
  }
  *(_QWORD *)(v24 + 32) = 0LL;
  v31 = v24 + 24;
  v32 = v24 + 40;
  if ( *(_BYTE *)(((v24 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    __asan_report_store8(v32);
    goto LABEL_84;
  }
  *(_QWORD *)(v24 + 40) = v31;
  v33 = v24 + 48;
  if ( *(_BYTE *)(((v24 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    v34 = __asan_report_store8(v33);
    goto LABEL_85;
  }
  *(_QWORD *)(v24 + 48) = v31;
  v34 = v24 + 56;
  if ( *(_BYTE *)(((v24 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_85:
    v35 = __asan_report_store8(v34);
    goto LABEL_86;
  }
  *(_QWORD *)(v24 + 56) = 0LL;
  v35 = v24 + 64;
  if ( *(_BYTE *)(((v24 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    v36 = __asan_report_store8(v35);
    goto LABEL_87;
  }
  *(_QWORD *)(v24 + 64) = v24 + 112;
  v36 = v24 + 72;
  if ( *(_BYTE *)(((v24 + 72) >> 3) + 0x7FFF8000) )
  {
LABEL_87:
    v37 = __asan_report_store8(v36);
    goto LABEL_88;
  }
  *(_QWORD *)(v24 + 72) = 1LL;
  v37 = v24 + 80;
  if ( *(_BYTE *)(((v24 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    v38 = __asan_report_store8(v37);
    goto LABEL_89;
  }
  *(_QWORD *)(v24 + 80) = 0LL;
  v38 = v24 + 88;
  if ( *(_BYTE *)(((v24 + 88) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_store8(v38);
LABEL_90:
    v41 = __asan_report_store4(v39);
    goto LABEL_91;
  }
  *(_QWORD *)(v24 + 88) = 0LL;
  v39 = v24 + 96;
  v40 = *(_BYTE *)(((v24 + 96) >> 3) + 0x7FFF8000);
  if ( v40 && v40 <= 3 )
    goto LABEL_90;
  *(_DWORD *)(v24 + 96) = 1065353216;
  v41 = v24 + 104;
  if ( *(_BYTE *)(((v24 + 104) >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    v42 = __asan_report_store8(v41);
    goto LABEL_92;
  }
  *(_QWORD *)(v24 + 104) = 0LL;
  v42 = v24 + 112;
  if ( *(_BYTE *)(((v24 + 112) >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8(v42);
    goto LABEL_93;
  }
  *(_QWORD *)(v24 + 112) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 72) = v24;
  *(_QWORD *)(v5 + 64) = v24 + 16;
LABEL_26:
  v17 = *(common::tools::WordFilter **)(v5 + 64);
  if ( !v17 )
  {
LABEL_93:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&type,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/word_filter.cpp",
      "init",
      432);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&type, "malloc for new filter failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
    word_veca = -1;
    goto LABEL_115;
  }
  v18 = common::tools::WordFilter::init(v17, word_vec);
  word_veca = v18;
  if ( v18 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&type,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/word_filter.cpp",
      "init",
      437);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&type, "init new filter failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
    word_veca = -1;
    goto LABEL_115;
  }
  p_filter_mu = &this->filter_mu_;
  *(_QWORD *)(v5 + 96) = &this->filter_mu_;
  if ( this == (common::tools::WordFilterMgr *const)-16LL )
  {
    __asan_handle_no_return(p_filter_mu);
    std::__throw_system_error(1);
  }
  if ( &_pthread_key_create && pthread_rwlock_wrlock(&p_filter_mu->_M_impl._M_rwlock) == 35 )
  {
    __asan_handle_no_return(p_filter_mu);
    std::__throw_system_error(35);
  }
  *(_BYTE *)(v5 + 104) = 1;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this);
    goto LABEL_128;
  }
  this->word_filter_ptr_._M_ptr = *(std::__shared_ptr<common::tools::WordFilter,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 64);
  p_M_refcount = &this->word_filter_ptr_._M_refcount;
  v2 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
  if ( *(_BYTE *)(((unsigned __int64)&this->word_filter_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    p_filter_mu = (std::shared_mutex *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
    goto LABEL_129;
  }
  if ( v2 == this->word_filter_ptr_._M_refcount._M_pi )
    goto LABEL_114;
  if ( !v2 )
    goto LABEL_106;
  p_filter_mu = (std::shared_mutex *)&v2->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_130;
  v44 = *(_BYTE *)(((unsigned __int64)p_filter_mu >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_filter_mu & 7) + 3) < v44 || !v44 )
  {
    _InterlockedAdd(&p_filter_mu->_M_impl._M_rwlock.__lock, 1u);
    goto LABEL_106;
  }
LABEL_129:
  __asan_report_store4(p_filter_mu);
LABEL_130:
  p_filter_mu = (std::shared_mutex *)&v2->_M_use_count;
  v53 = *(_BYTE *)(((unsigned __int64)&v2->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v2 + 8) & 7) + 3) >= v53 && v53 )
  {
    __asan_report_load4(p_filter_mu);
    goto LABEL_134;
  }
  ++v2->_M_use_count;
LABEL_106:
  M_pi = this->word_filter_ptr_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_112;
  p_filter_mu = (std::shared_mutex *)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_135;
  v45 = *(_BYTE *)(((unsigned __int64)p_filter_mu >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_filter_mu & 7) + 3) < v45 || !v45 )
  {
    M_use_count = _InterlockedExchangeAdd(&p_filter_mu->_M_impl._M_rwlock.__lock, 0xFFFFFFFF);
    goto LABEL_111;
  }
LABEL_134:
  __asan_report_store4(p_filter_mu);
LABEL_135:
  p_filter_mu = (std::shared_mutex *)&M_pi->_M_use_count;
  v54 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v54 && v54 )
  {
    __asan_report_load4(p_filter_mu);
    goto LABEL_139;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_111:
  if ( M_use_count != 1 )
    goto LABEL_112;
LABEL_139:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_filter_mu = (std::shared_mutex *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_150;
  }
  p_filter_mu = (std::shared_mutex *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_filter_mu >> 3) + 0x7FFF8000) )
  {
LABEL_150:
    __asan_report_load8(p_filter_mu);
    goto LABEL_151;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_filter_mu = (std::shared_mutex *)&M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_152;
  v55 = *(_BYTE *)(((unsigned __int64)p_filter_mu >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_filter_mu & 7) + 3) < v55 || !v55 )
  {
    M_weak_count = _InterlockedExchangeAdd(&p_filter_mu->_M_impl._M_rwlock.__lock, 0xFFFFFFFF);
    goto LABEL_145;
  }
LABEL_151:
  __asan_report_store4(p_filter_mu);
LABEL_152:
  p_filter_mu = (std::shared_mutex *)&M_pi->_M_weak_count;
  v58 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v58 && v58 )
  {
    __asan_report_load4(p_filter_mu);
LABEL_156:
    v57 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_157;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_145:
  if ( M_weak_count != 1 )
    goto LABEL_112;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_156;
  v57 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
  {
LABEL_157:
    __asan_report_load8(v57);
    goto LABEL_158;
  }
  p_filter_mu = (std::shared_mutex *)M_pi;
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_112:
  if ( !*(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
    this->word_filter_ptr_._M_refcount._M_pi = v2;
LABEL_114:
    v47 = *(_BYTE *)(v5 + 104) == 0;
    if ( !*(_BYTE *)(v5 + 104) )
      goto LABEL_115;
    goto LABEL_159;
  }
LABEL_158:
  p_filter_mu = (std::shared_mutex *)p_M_refcount;
  __asan_report_store8(p_M_refcount);
LABEL_159:
  if ( v47 )
  {
    __asan_handle_no_return(p_filter_mu);
    std::__throw_system_error(1);
  }
  v59 = *(pthread_rwlock_t **)(v5 + 96);
  if ( v59 && &_pthread_key_create )
    pthread_rwlock_unlock(v59);
LABEL_115:
  v48 = *(_QWORD *)(v5 + 72);
  if ( !v48 )
    goto LABEL_121;
  v49 = (volatile signed __int32 *)(v48 + 8);
  if ( &_pthread_key_create )
  {
    v50 = *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v49 & 7) + 3) < v50 || !v50 )
    {
      v51 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
      goto LABEL_120;
    }
    __asan_report_store4(v49);
  }
  v60 = *(_BYTE *)(((v48 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v48 + 8) & 7) + 3) >= v60 && v60 )
  {
    __asan_report_load4(v48 + 8);
    goto LABEL_169;
  }
  v51 = *(_DWORD *)(v48 + 8);
  *(_DWORD *)(v48 + 8) = v51 - 1;
LABEL_120:
  if ( v51 != 1 )
    goto LABEL_121;
LABEL_169:
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
    v61 = v48;
    __asan_report_load8(v48);
    goto LABEL_180;
  }
  v61 = *(_QWORD *)v48 + 16LL;
  if ( *(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
  {
LABEL_180:
    __asan_report_load8(v61);
    goto LABEL_181;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v48 + 16LL))(v48);
  v61 = v48 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_182;
  v62 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
  if ( (char)((v61 & 7) + 3) < v62 || !v62 )
  {
    v63 = _InterlockedExchangeAdd((volatile signed __int32 *)v61, 0xFFFFFFFF);
    goto LABEL_175;
  }
LABEL_181:
  __asan_report_store4(v61);
LABEL_182:
  v65 = *(_BYTE *)(((v48 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v48 + 12) & 7) + 3) >= v65 && v65 )
  {
    __asan_report_load4(v48 + 12);
LABEL_186:
    v64 = v48;
    __asan_report_load8(v48);
LABEL_187:
    v66 = (struct _Unwind_Exception *)__asan_report_load8(v64);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
    v67 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v48 - 56);
    if ( v67 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
    __asan_handle_no_return(v67);
    _Unwind_Resume(v66);
  }
  v63 = *(_DWORD *)(v48 + 12);
  *(_DWORD *)(v48 + 12) = v63 - 1;
LABEL_175:
  if ( v63 != 1 )
    goto LABEL_121;
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
    goto LABEL_186;
  v64 = *(_QWORD *)v48 + 24LL;
  if ( *(_BYTE *)((v64 >> 3) + 0x7FFF8000) )
    goto LABEL_187;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v48 + 24LL))(v48);
LABEL_121:
  if ( v71 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return word_veca;
};

// Line 450: range 000000000E776178-000000000E776443
bool __fastcall common::tools::WordFilterMgr::isValid(common::tools::WordFilterMgr *const this, const std::string *str)
{
  unsigned __int64 v2; // rbx
  char *v3; // r15
  unsigned __int64 v4; // r12
  common::tools::WordFilter *v5; // rdi
  __int64 v6; // rax
  bool isValid; // r13
  unsigned __int64 v8; // rbp
  volatile signed __int32 *v9; // rdi
  char v10; // dl
  signed __int32 v11; // eax
  char v13; // dl
  unsigned __int64 v14; // rdi
  char v15; // dl
  signed __int32 v16; // eax
  unsigned __int64 v17; // rdi
  char v18; // dl
  struct _Unwind_Exception *v19; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  common::milog::MiLogStream v21; // [rsp+0h] [rbp-98h] BYREF
  char v22[120]; // [rsp+20h] [rbp-78h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v2 = v6;
  }
  v3 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 filter_ptr:451";
  *(_QWORD *)(v2 + 16) = common::tools::WordFilterMgr::isValid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::WordFilterMgr::getWordFilter(this);
  v5 = *(common::tools::WordFilter **)(v2 + 32);
  if ( v5 )
  {
    isValid = common::tools::WordFilter::isValid(v5, str);
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/word_filter.cpp",
      "isValid",
      454);
    common::milog::MiLogStream::operator()(&v21, off_1BE7C660);
    common::milog::MiLogStream::~MiLogStream(&v21);
    isValid = 1;
  }
  v8 = *(_QWORD *)(v2 + 40);
  if ( v8 )
  {
    v9 = (volatile signed __int32 *)(v8 + 8);
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v9 & 7) + 3) < v10 || !v10 )
      {
        v11 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
        goto LABEL_12;
      }
      __asan_report_store4(v9);
    }
    v13 = *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v8 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(v8 + 8);
      goto LABEL_21;
    }
    v11 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v11 - 1;
LABEL_12:
    if ( v11 != 1 )
      goto LABEL_13;
LABEL_21:
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    {
      v14 = v8;
      __asan_report_load8(v8);
    }
    else
    {
      v14 = *(_QWORD *)v8 + 16LL;
      if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
        v14 = v8 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_34;
        v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
        if ( (char)((v14 & 7) + 3) < v15 || !v15 )
        {
          v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF);
          goto LABEL_27;
        }
LABEL_33:
        __asan_report_store4(v14);
LABEL_34:
        v18 = *(_BYTE *)(((v8 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v8 + 12) & 7) + 3) >= v18 && v18 )
        {
          __asan_report_load4(v8 + 12);
          goto LABEL_38;
        }
        v16 = *(_DWORD *)(v8 + 12);
        *(_DWORD *)(v8 + 12) = v16 - 1;
LABEL_27:
        if ( v16 != 1 )
          goto LABEL_13;
        if ( !*(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        {
          v17 = *(_QWORD *)v8 + 24LL;
          if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 24LL))(v8);
            goto LABEL_13;
          }
LABEL_39:
          v19 = (struct _Unwind_Exception *)__asan_report_load8(v17);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v3 - 3);
          if ( v20 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
          __asan_handle_no_return(v20);
          _Unwind_Resume(v19);
        }
LABEL_38:
        v17 = v8;
        __asan_report_load8(v8);
        goto LABEL_39;
      }
    }
    __asan_report_load8(v14);
    goto LABEL_33;
  }
LABEL_13:
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return isValid;
};

// Line 462: range 000000000E776D9C-000000000E777143
std::string *__fastcall common::tools::WordFilterMgr::wordRewrite(
        std::string *retstr,
        common::tools::WordFilterMgr *const this,
        const std::string *str)
{
  unsigned __int64 v5; // rbx
  char *v6; // r15
  unsigned __int64 v7; // r13
  common::tools::WordFilter *v8; // rsi
  __int64 v9; // rax
  std::forward_iterator_tag v10; // cl
  void *p_M_string_length; // rdi
  unsigned __int64 v12; // r12
  volatile signed __int32 *v13; // rdi
  char v14; // dl
  signed __int32 v15; // eax
  char v17; // dl
  unsigned __int64 v18; // rdi
  char v19; // dl
  signed __int32 v20; // eax
  unsigned __int64 v21; // rdi
  char v22; // dl
  struct _Unwind_Exception *v23; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-98h] BYREF
  char v26[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  v6 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 filter_ptr:463";
  *(_QWORD *)(v5 + 16) = common::tools::WordFilterMgr::wordRewrite;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::WordFilterMgr::getWordFilter(this);
  v8 = *(common::tools::WordFilter **)(v5 + 32);
  if ( v8 )
  {
    if ( (*(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) == 0
       || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) > (((unsigned __int8)retstr + 31) & 7))
      && *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) >= 0 )
    {
      common::tools::WordFilter::wordRewrite(retstr, v8, str);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  common::milog::MiLogStream::MiLogStream(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/word_filter.cpp",
    "wordRewrite",
    466);
  common::milog::MiLogStream::operator()(&v25, off_1BE7C660);
  common::milog::MiLogStream::~MiLogStream(&v25);
  if ( *(_BYTE *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(retstr);
  }
  else
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( !*(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
    {
      p_M_string_length = &str->_M_string_length;
      if ( !*(_BYTE *)(((unsigned __int64)&str->_M_string_length >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(
          retstr,
          str->_M_dataplus._M_p,
          &str->_M_dataplus._M_p[str->_M_string_length],
          v10);
        goto LABEL_16;
      }
      goto LABEL_14;
    }
  }
  p_M_string_length = (void *)str;
  __asan_report_load8(str);
LABEL_14:
  __asan_report_load8(p_M_string_length);
LABEL_15:
  __asan_report_store_n(retstr, 32LL);
LABEL_16:
  v12 = *(_QWORD *)(v5 + 40);
  if ( !v12 )
    goto LABEL_22;
  v13 = (volatile signed __int32 *)(v12 + 8);
  if ( &_pthread_key_create )
  {
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) < v14 || !v14 )
    {
      v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
      goto LABEL_21;
    }
    __asan_report_store4(v13);
  }
  v17 = *(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 8) & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(v12 + 8);
    goto LABEL_30;
  }
  v15 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = v15 - 1;
LABEL_21:
  if ( v15 != 1 )
    goto LABEL_22;
LABEL_30:
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    v18 = v12;
    __asan_report_load8(v12);
    goto LABEL_41;
  }
  v18 = *(_QWORD *)v12 + 16LL;
  if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
  {
LABEL_41:
    __asan_report_load8(v18);
    goto LABEL_42;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
  v18 = v12 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_43;
  v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
  if ( (char)((v18 & 7) + 3) < v19 || !v19 )
  {
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF);
    goto LABEL_36;
  }
LABEL_42:
  __asan_report_store4(v18);
LABEL_43:
  v22 = *(_BYTE *)(((v12 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v12 + 12) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(v12 + 12);
LABEL_47:
    v21 = v12;
    __asan_report_load8(v12);
LABEL_48:
    v23 = (struct _Unwind_Exception *)__asan_report_load8(v21);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v24 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 3);
    if ( v24 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
    __asan_handle_no_return(v24);
    _Unwind_Resume(v23);
  }
  v20 = *(_DWORD *)(v12 + 12);
  *(_DWORD *)(v12 + 12) = v20 - 1;
LABEL_36:
  if ( v20 != 1 )
    goto LABEL_22;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    goto LABEL_47;
  v21 = *(_QWORD *)v12 + 24LL;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
    goto LABEL_48;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 24LL))(v12);
LABEL_22:
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 474: range 000000000E77584C-000000000E775B3A
bool __fastcall common::tools::WordFilterMgr::isContainNumber(
        common::tools::WordFilterMgr *const this,
        const std::map<std::string,char> *replace_map,
        const std::string *number,
        const std::string *str)
{
  unsigned __int64 v5; // rbx
  char *v6; // r14
  unsigned __int64 v7; // rbp
  common::tools::WordFilter *v8; // rdi
  __int64 v9; // rax
  bool isContainNumber; // r13
  unsigned __int64 v11; // r12
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  char v16; // dl
  unsigned __int64 v17; // rdi
  char v18; // dl
  signed __int32 v19; // eax
  unsigned __int64 v20; // rdi
  char v21; // dl
  struct _Unwind_Exception *v22; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-98h] BYREF
  char v26[120]; // [rsp+30h] [rbp-78h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  v6 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 14 filter_ptr:475";
  *(_QWORD *)(v5 + 16) = common::tools::WordFilterMgr::isContainNumber;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  common::tools::WordFilterMgr::getWordFilter(this);
  v8 = *(common::tools::WordFilter **)(v5 + 32);
  if ( v8 )
  {
    isContainNumber = common::tools::WordFilter::isContainNumber(v8, replace_map, number, str);
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/word_filter.cpp",
      "isContainNumber",
      478);
    common::milog::MiLogStream::operator()(&v25, off_1BE7C660);
    common::milog::MiLogStream::~MiLogStream(&v25);
    isContainNumber = 0;
  }
  v11 = *(_QWORD *)(v5 + 40);
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)(v11 + 8);
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
      {
        v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
        goto LABEL_12;
      }
      __asan_report_store4(v12);
    }
    v16 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(v11 + 8);
      goto LABEL_21;
    }
    v14 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v14 - 1;
LABEL_12:
    if ( v14 != 1 )
      goto LABEL_13;
LABEL_21:
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      v17 = v11;
      __asan_report_load8(v11);
    }
    else
    {
      v17 = *(_QWORD *)v11 + 16LL;
      if ( !*(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        v17 = v11 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_34;
        v18 = *(_BYTE *)((v17 >> 3) + 0x7FFF8000);
        if ( (char)((v17 & 7) + 3) < v18 || !v18 )
        {
          v19 = _InterlockedExchangeAdd((volatile signed __int32 *)v17, 0xFFFFFFFF);
          goto LABEL_27;
        }
LABEL_33:
        __asan_report_store4(v17);
LABEL_34:
        v21 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v11 + 12) & 7) + 3) >= v21 && v21 )
        {
          __asan_report_load4(v11 + 12);
          goto LABEL_38;
        }
        v19 = *(_DWORD *)(v11 + 12);
        *(_DWORD *)(v11 + 12) = v19 - 1;
LABEL_27:
        if ( v19 != 1 )
          goto LABEL_13;
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          v20 = *(_QWORD *)v11 + 24LL;
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 24LL))(v11);
            goto LABEL_13;
          }
LABEL_39:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          common::milog::MiLogStream::~MiLogStream(&v25);
          v23 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v6 - 3);
          if ( v23 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v23);
          __asan_handle_no_return(v23);
          _Unwind_Resume(v22);
        }
LABEL_38:
        v20 = v11;
        __asan_report_load8(v11);
        goto LABEL_39;
      }
    }
    __asan_report_load8(v17);
    goto LABEL_33;
  }
LABEL_13:
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return isContainNumber;
};

// Line 486: range 000000000E775230-000000000E7754F4
std::__shared_count<(__gnu_cxx::_Lock_policy)2> *__fastcall common::tools::WordFilterMgr::getWordFilter(
        std::shared_mutex *p_filter_mu,
        common::tools::WordFilterMgr *const this)
{
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v2; // rbp
  int v3; // eax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v6; // dl
  char v8; // cl

  v2 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)p_filter_mu;
  while ( &_pthread_key_create )
  {
    p_filter_mu = &this->filter_mu_;
    v3 = pthread_rwlock_rdlock(&this->filter_mu_._M_impl._M_rwlock);
    if ( v3 != 11 )
      goto LABEL_6;
  }
  v3 = 0;
LABEL_6:
  if ( v3 == 35 )
  {
    __asan_handle_no_return(p_filter_mu);
    std::__throw_system_error(35);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_M_refcount = v2;
    __asan_report_store8(v2);
    goto LABEL_22;
  }
  v2->_M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this->word_filter_ptr_._M_ptr;
  p_M_refcount = &this->word_filter_ptr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_filter_ptr_._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_refcount);
    goto LABEL_23;
  }
  M_pi = this->word_filter_ptr_._M_refcount._M_pi;
  p_M_refcount = v2 + 1;
  if ( *(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(p_M_refcount);
    goto LABEL_24;
  }
  v2[1]._M_pi = M_pi;
  if ( !M_pi )
    goto LABEL_16;
  p_M_refcount = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_25;
  v6 = *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_refcount & 7) + 3) < v6 || !v6 )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_refcount, 1u);
    goto LABEL_16;
  }
LABEL_24:
  M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_refcount);
LABEL_25:
  v8 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    JUMPOUT(0xE775383LL);
  }
  ++M_pi->_M_use_count;
LABEL_16:
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(&this->filter_mu_._M_impl._M_rwlock);
  return v2;
};

// Line 490: range 000000000E7787AC-000000000E7787C3
void __cdecl GLOBAL__sub_I_word_filter_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};
