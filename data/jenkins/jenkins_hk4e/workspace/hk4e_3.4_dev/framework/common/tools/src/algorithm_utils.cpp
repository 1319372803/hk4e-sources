// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/algorithm_utils.cpp

// Line 28: range 0000000019B4A636-0000000019B4B0D2
bool __fastcall common::tools::AlgorithmUtils::hasCycle(
        const std::vector<std::pair<unsigned int,unsigned int>> *edge_vec,
        std::vector<unsigned int> *cycle,
        std::string *err_msg)
{
  unsigned __int64 j; // r12
  unsigned __int64 i; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::mapped_type *v9; // rax
  char v10; // cl
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  char v15; // cl
  unsigned __int64 v16; // r14
  char v17; // dl
  unsigned __int64 v18; // rax
  char v19; // cl
  std::vector<unsigned int>::size_type v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::mapped_type *v23; // rax
  char v24; // cl
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  std::vector<unsigned int>::size_type v27; // rax
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // cl
  char v31; // cl
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  const unsigned int *v34; // rcx
  unsigned __int64 v35; // rax
  std::vector<unsigned int>::iterator v36; // rsi
  std::vector<unsigned int> *M_current; // rdi
  __int64 p_M_end_of_storage; // rax
  char v39; // dl
  const std::vector<std::pair<unsigned int,unsigned int>> *p_M_finish; // rdi
  __int64 v41; // r14
  void *v42; // rdi
  bool v43; // r12
  void *v44; // rdi
  void **v45; // rbp
  void **k; // rbx
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rbp
  unsigned __int64 v49; // rax
  char v50; // cl
  std::_Vector_base<unsigned int>::pointer M_finish; // rsi
  std::_Vector_base<unsigned int>::pointer M_start; // rax
  std::vector<unsigned int> *v53; // rdi
  unsigned __int64 v54; // rax
  _DWORD *v55; // rdx
  char v56; // cl
  unsigned __int64 v57; // rdi
  __int64 v58; // rcx
  char v59; // di
  void *v60; // rdi
  void *v61; // rdi
  uint32_t index; // [rsp+Ch] [rbp-1CCh]
  std::vector<unsigned int>::size_type v65; // [rsp+18h] [rbp-1C0h]
  unsigned __int64 v66; // [rsp+20h] [rbp-1B8h]
  _DWORD *v68; // [rsp+30h] [rbp-1A8h]
  char v69[408]; // [rsp+40h] [rbp-198h] BYREF

  v66 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v66 = v6;
  }
  *(_QWORD *)v66 = 1102416563LL;
  *(_QWORD *)(v66 + 8) = "5 48 4 10 index_r:36 64 24 18 adjacentcy_list:29 128 24 21 new_index_to_point:31 192 24 8 color"
                         ":69 256 56 21 point_to_new_index:30";
  *(_QWORD *)(v66 + 16) = common::tools::AlgorithmUtils::hasCycle;
  v68 = (_DWORD *)(v66 >> 3);
  v68[536862720] = -235802127;
  v68[536862721] = -234556943;
  v68[536862722] = -234881024;
  v68[536862723] = -218959118;
  v68[536862724] = -234881024;
  v68[536862725] = -218959118;
  v68[536862726] = -234881024;
  v68[536862727] = -218959118;
  v68[536862729] = -218103808;
  v68[536862730] = -202116109;
  *(_QWORD *)(v66 + 64) = 0LL;
  *(_QWORD *)(v66 + 72) = 0LL;
  *(_QWORD *)(v66 + 80) = 0LL;
  *(_QWORD *)(v66 + 256) = v66 + 304;
  *(_QWORD *)(v66 + 264) = 1LL;
  *(_QWORD *)(v66 + 272) = 0LL;
  *(_QWORD *)(v66 + 280) = 0LL;
  *(_DWORD *)(v66 + 288) = 1065353216;
  *(_QWORD *)(v66 + 296) = 0LL;
  *(_QWORD *)(v66 + 304) = 0LL;
  *(_QWORD *)(v66 + 128) = 0LL;
  *(_QWORD *)(v66 + 136) = 0LL;
  *(_QWORD *)(v66 + 144) = 0LL;
  for ( i = 0LL; ; ++i )
  {
    p_M_finish = (const std::vector<std::pair<unsigned int,unsigned int>> *)&edge_vec->_M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&edge_vec->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_6:
      __asan_report_load8(p_M_finish);
LABEL_7:
      v7 = *(_QWORD *)(v66 + 280);
      index = v7;
      v8 = (unsigned __int64)edge_vec->_M_impl._M_start + j;
      v9 = std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
             (std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *const)(v66 + 256),
             (const std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::key_type *)v8);
      v10 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v9 & 7) + 3) >= v10 && v10 )
      {
        v12 = __asan_report_store4(v9);
      }
      else
      {
        *v9 = v7;
        v8 = (unsigned int)(v7 + 1);
        v11 = *(_QWORD *)(v66 + 128);
        v12 = (*(_QWORD *)(v66 + 136) - v11) >> 2;
        if ( v8 <= v12 )
        {
          if ( v8 < v12 )
          {
            v13 = v11 + 4 * v8;
            if ( *(_QWORD *)(v66 + 136) != v13 )
              *(_QWORD *)(v66 + 136) = v13;
          }
LABEL_13:
          v14 = (unsigned __int64)edge_vec;
          if ( *(_BYTE *)(((unsigned __int64)edge_vec >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(edge_vec);
          }
          else
          {
            v14 = (unsigned __int64)edge_vec->_M_impl._M_start + j;
            v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
            if ( (char)(((LOBYTE(edge_vec->_M_impl._M_start) + j) & 7) + 3) < v15 || !v15 )
            {
              v16 = *(_QWORD *)(v66 + 128) + 4LL * (unsigned int)v7;
              v14 = v16;
              v17 = *(_BYTE *)((v16 >> 3) + 0x7FFF8000);
              if ( (char)((v16 & 7) + 3) < v17 || !v17 )
              {
                *(_DWORD *)v16 = *(unsigned int *)((char *)&edge_vec->_M_impl._M_start->first + j);
                goto LABEL_27;
              }
              goto LABEL_23;
            }
          }
          __asan_report_load4(v14);
LABEL_23:
          v18 = __asan_report_store4(v14);
          goto LABEL_24;
        }
      }
      std::vector<unsigned int>::_M_default_append((std::vector<unsigned int> *const)(v66 + 128), v8 - v12);
      goto LABEL_13;
    }
    p_M_finish = edge_vec;
    if ( *(_BYTE *)(((unsigned __int64)edge_vec >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    if ( i >= edge_vec->_M_impl._M_finish - edge_vec->_M_impl._M_start )
      break;
    *(_DWORD *)(v66 + 48) = 0;
    j = 8 * i;
    if ( !std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
            (std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)(v66 + 256),
            (const std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)&edge_vec->_M_impl._M_start[i])._M_cur )
      goto LABEL_7;
    v18 = (unsigned __int64)std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                              (std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *const)(v66 + 256),
                              (const std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::key_type *)((char *)edge_vec->_M_impl._M_start + j));
LABEL_24:
    v19 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( (char)((v18 & 7) + 3) >= v19 && v19 )
    {
      __asan_report_load4(v18);
      goto LABEL_30;
    }
    index = *(_DWORD *)v18;
LABEL_27:
    if ( std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
           (std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)(v66 + 256),
           (const std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)((char *)&edge_vec->_M_impl._M_start->second + j))._M_cur )
    {
      v20 = (std::vector<unsigned int>::size_type)&edge_vec->_M_impl._M_start->second + j;
      v21 = (unsigned __int64)std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                                (std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *const)(v66 + 256),
                                (const std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::key_type *)v20);
      goto LABEL_47;
    }
LABEL_30:
    v22 = *(_QWORD *)(v66 + 280);
    v20 = (std::vector<unsigned int>::size_type)&edge_vec->_M_impl._M_start->second + j;
    v23 = std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
            (std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *const)(v66 + 256),
            (const std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::key_type *)v20);
    v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v23 & 7) + 3) >= v24 && v24 )
    {
      v26 = __asan_report_store4(v23);
LABEL_43:
      v20 -= v26;
      std::vector<unsigned int>::_M_default_append((std::vector<unsigned int> *const)(v66 + 128), v20);
      goto LABEL_36;
    }
    *v23 = v22;
    v20 = (unsigned int)(v22 + 1);
    v25 = *(_QWORD *)(v66 + 128);
    v26 = (*(_QWORD *)(v66 + 136) - v25) >> 2;
    if ( v20 > v26 )
      goto LABEL_43;
    if ( v20 < v26 )
    {
      v27 = v25 + 4 * v20;
      if ( *(_QWORD *)(v66 + 136) != v27 )
        *(_QWORD *)(v66 + 136) = v27;
    }
LABEL_36:
    v28 = (unsigned __int64)edge_vec;
    if ( *(_BYTE *)(((unsigned __int64)edge_vec >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(edge_vec);
    }
    else
    {
      j += (unsigned __int64)edge_vec->_M_impl._M_start;
      v28 = j + 4;
      v29 = *(_BYTE *)(((j + 4) >> 3) + 0x7FFF8000);
      if ( (char)(((j + 4) & 7) + 3) < v29 || !v29 )
      {
        v20 = *(unsigned int *)(j + 4);
        v28 = *(_QWORD *)(v66 + 128) + 4LL * (unsigned int)v22;
        v30 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
        if ( (char)(((*(_BYTE *)(v66 + 128) + 4 * v22) & 7) + 3) < v30 || !v30 )
        {
          *(_DWORD *)(*(_QWORD *)(v66 + 128) + 4LL * (unsigned int)v22) = v20;
          *(_DWORD *)(v66 + 48) = v22;
          goto LABEL_50;
        }
        goto LABEL_46;
      }
    }
    __asan_report_load4(v28);
LABEL_46:
    v21 = __asan_report_store4(v28);
LABEL_47:
    v31 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
    if ( (char)((v21 & 7) + 3) >= v31 && v31 )
    {
      v33 = __asan_report_load4(v21);
LABEL_67:
      std::vector<std::vector<unsigned int>>::_M_default_append(
        (std::vector<std::vector<unsigned int>> *const)(v66 + 64),
        v20 - v33);
      goto LABEL_52;
    }
    *(_DWORD *)(v66 + 48) = *(_DWORD *)v21;
LABEL_50:
    v20 = *(_QWORD *)(v66 + 280);
    v32 = *(_QWORD *)(v66 + 64);
    v33 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(v66 + 72) - v32) >> 3);
    if ( v20 > v33 )
      goto LABEL_67;
    if ( v20 < v33 )
    {
      v65 = v32 + 24 * v20;
      v41 = *(_QWORD *)(v66 + 72);
      if ( v65 != v41 )
      {
        for ( j = v32 + 24 * v20; ; j += 24LL )
        {
          if ( v41 == j )
          {
            *(_QWORD *)(v66 + 72) = v65;
            goto LABEL_52;
          }
          v42 = (void *)j;
          if ( *(_BYTE *)((j >> 3) + 0x7FFF8000) )
            break;
          v42 = *(void **)j;
          if ( *(_QWORD *)j )
            goto LABEL_71;
LABEL_72:
          ;
        }
        __asan_report_load8(j);
LABEL_71:
        operator delete(v42);
        goto LABEL_72;
      }
    }
LABEL_52:
    v34 = *(const unsigned int **)(v66 + 64);
    v35 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v66 + 72) - (_QWORD)v34) >> 3);
    if ( index >= v35
      || (v36._M_current = (unsigned int *)*(unsigned int *)(v66 + 48), (unsigned __int64)v36._M_current >= v35) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&err_msg->_M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(&err_msg->_M_string_length);
      else
        std::string::_M_replace(err_msg, 0LL, err_msg->_M_string_length, "index_error", 11LL);
      v43 = 0;
      goto LABEL_82;
    }
    M_current = (std::vector<unsigned int> *)&v34[6 * index];
    if ( *(_BYTE *)(((unsigned __int64)&M_current->_M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      p_M_end_of_storage = __asan_report_load8(&M_current->_M_impl._M_finish);
LABEL_86:
      __asan_report_load8(p_M_end_of_storage);
LABEL_87:
      M_current = (std::vector<unsigned int> *)v36._M_current;
      __asan_report_store4(v36._M_current);
      goto LABEL_88;
    }
    v36._M_current = M_current->_M_impl._M_finish;
    p_M_end_of_storage = (__int64)&M_current->_M_impl._M_end_of_storage;
    if ( *(_BYTE *)(((unsigned __int64)&M_current->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
      goto LABEL_86;
    if ( v36._M_current != M_current->_M_impl._M_end_of_storage )
    {
      v39 = *(_BYTE *)(((unsigned __int64)v36._M_current >> 3) + 0x7FFF8000);
      if ( (char)(((__int64)v36._M_current & 7) + 3) < v39 || !v39 )
      {
        *v36._M_current = *(_DWORD *)(v66 + 48);
        ++M_current->_M_impl._M_finish;
        continue;
      }
      goto LABEL_87;
    }
LABEL_88:
    std::vector<unsigned int>::_M_realloc_insert<unsigned int const&>(
      M_current,
      v36,
      (const unsigned int *)(v66 + 48),
      v34);
  }
  v47 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v66 + 72) - *(_QWORD *)(v66 + 64)) >> 3);
  v48 = v47;
  if ( v47 > 0x1FFFFFFFFFFFFFFFLL )
  {
    __asan_handle_no_return(p_M_finish);
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  *(_QWORD *)(v66 + 192) = 0LL;
  *(_QWORD *)(v66 + 200) = 0LL;
  *(_QWORD *)(v66 + 208) = 0LL;
  if ( v47 )
    v49 = operator new(4 * v47);
  else
    v49 = 0LL;
  *(_QWORD *)(v66 + 192) = v49;
  *(_QWORD *)(v66 + 200) = v49;
  *(_QWORD *)(v66 + 208) = v49 + 4 * v47;
  while ( v48 )
  {
    v50 = *(_BYTE *)((v49 >> 3) + 0x7FFF8000);
    if ( (char)((v49 & 7) + 3) >= v50 && v50 )
    {
      v49 = __asan_report_store4(v49);
      break;
    }
    *(_DWORD *)v49 = 0;
    --v48;
    v49 += 4LL;
  }
  *(_QWORD *)(v66 + 200) = v49;
  while ( 2 )
  {
    if ( v48 < 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(v66 + 72) - *(_QWORD *)(v66 + 64)) >> 3) )
    {
      if ( common::tools::AlgorithmUtils::getColor(v48, (const std::vector<int> *)(v66 + 192))
        || (M_finish = (std::_Vector_base<unsigned int>::pointer)cycle,
            !(v43 = common::tools::AlgorithmUtils::stackDfs(
                      (const std::vector<std::vector<unsigned int>> *)(v66 + 64),
                      cycle,
                      v48,
                      (std::vector<int> *)(v66 + 192),
                      err_msg))) )
      {
        ++v48;
        continue;
      }
      if ( *(_BYTE *)(((unsigned __int64)cycle >> 3) + 0x7FFF8000) )
      {
        v53 = cycle;
        __asan_report_load8(cycle);
      }
      else
      {
        M_start = cycle->_M_impl._M_start;
        v53 = (std::vector<unsigned int> *)&cycle->_M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&cycle->_M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          M_finish = cycle->_M_impl._M_finish;
          while ( 1 )
          {
            v55 = M_start;
            if ( M_finish == M_start )
              goto LABEL_122;
            v53 = (std::vector<unsigned int> *)M_start;
            v56 = *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)M_start & 7) + 3) >= v56 )
            {
              if ( v56 )
                break;
            }
            v57 = *M_start;
            v58 = *(_QWORD *)(v66 + 128);
            if ( v57 < (*(_QWORD *)(v66 + 136) - v58) >> 2 )
            {
              v54 = v58 + 4 * v57;
              v59 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
              if ( (char)((v54 & 7) + 3) >= v59 && v59 )
              {
                __asan_report_load4(v54);
                goto LABEL_121;
              }
              goto LABEL_112;
            }
LABEL_113:
            M_start = v55 + 1;
          }
LABEL_111:
          v54 = __asan_report_load4(v53);
LABEL_112:
          *v55 = *(_DWORD *)v54;
          goto LABEL_113;
        }
      }
      __asan_report_load8(v53);
      goto LABEL_111;
    }
    break;
  }
LABEL_121:
  v43 = 0;
LABEL_122:
  v60 = *(void **)(v66 + 192);
  if ( v60 )
    operator delete(v60);
LABEL_82:
  v44 = *(void **)(v66 + 128);
  if ( v44 )
    operator delete(v44);
  std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::~_Hashtable((std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> > *const)(v66 + 256));
  v45 = *(void ***)(v66 + 72);
  for ( k = *(void ***)(v66 + 64); v45 != k; k += 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(k);
    }
    else if ( *k )
    {
      operator delete(*k);
    }
  }
  v61 = *(void **)(v66 + 64);
  if ( v61 )
    operator delete(v61);
  if ( v69 == (char *)v66 )
  {
    *(_QWORD *)((v66 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v66 = 1172321806LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v66 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v66 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v43;
};

// Line 159: range 0000000019B49CA8-0000000019B49D29
int32_t __fastcall common::tools::AlgorithmUtils::getColor(uint32_t index, const std::vector<int> *color)
{
  int32_t *v2; // rdi
  char v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)&color->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&color->_M_impl._M_finish);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(((unsigned __int64)color >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    v2 = (int32_t *)color;
    __asan_report_load8(color);
LABEL_9:
    __asan_report_load4(v2);
    return 0;
  }
  if ( index < (unsigned __int64)(color->_M_impl._M_finish - color->_M_impl._M_start) )
  {
    v2 = &color->_M_impl._M_start[index];
    v3 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v2 & 7) + 3) < v3 || !v3 )
      return *v2;
    goto LABEL_9;
  }
  return 0;
};

// Line 171: range 0000000019B49D2C-0000000019B4A633
void __fastcall common::tools::AlgorithmUtils::setColor(uint32_t index, std::vector<int> *color, int32_t index_color)
{
  std::vector<int> *v3; // rdi
  char v4; // cl
  uint32_t v5; // edx
  std::vector<int> *v6; // rcx
  std::string *v7; // r8

  if ( *(_BYTE *)(((unsigned __int64)&color->_M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&color->_M_impl._M_finish);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)color >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    v3 = color;
    __asan_report_load8(color);
    goto LABEL_10;
  }
  if ( index >= (unsigned __int64)(color->_M_impl._M_finish - color->_M_impl._M_start) )
    return;
  v3 = (std::vector<int> *)&color->_M_impl._M_start[index];
  v4 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v3 & 7) + 3) >= v4 && v4 )
  {
LABEL_10:
    __asan_report_store4(v3);
    common::tools::AlgorithmUtils::stackDfs(
      (const std::vector<std::vector<unsigned int>> *)v3,
      (std::vector<unsigned int> *)color,
      v5,
      v6,
      v7);
    return;
  }
  LODWORD(v3->_M_impl._M_start) = index_color;
};
