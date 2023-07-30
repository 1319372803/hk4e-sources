// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/random_set.hpp

// Line 22: range 000000000C659E78-000000000C659EB2
void __cdecl common::tools::RandomSet<unsigned int>::RandomSet(common::tools::RandomSet<unsigned int> *const this)
{
  std::vector<unsigned int>::vector(&this->item_vec_);
  std::unordered_map<unsigned int,unsigned long>::unordered_map(&this->index_map_);
  std::mutex::mutex(&this->mu_);
};

// Line 26: range 000000000C659EB4-000000000C659EDE
void __cdecl common::tools::RandomSet<unsigned int>::~RandomSet(common::tools::RandomSet<unsigned int> *const this)
{
  std::unordered_map<unsigned int,unsigned long>::~unordered_map(&this->index_map_);
  std::vector<unsigned int>::~vector(&this->item_vec_);
};

// Line 45: range 0000000014E2D2BE-0000000014E2D4B3
size_t __fastcall common::tools::RandomSet<unsigned int>::size(common::tools::RandomSet<unsigned int> *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    this = (common::tools::RandomSet<unsigned int> *const)((char *)this + 8);
    __asan_report_load8(this);
    goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8(this);
    JUMPOUT(0x14E2D303LL);
  }
  return this->item_vec_._M_impl._M_finish - this->item_vec_._M_impl._M_start;
};

// Line 52: range 0000000014E2E0B4-0000000014E2E30B
void __fastcall common::tools::RandomSet<unsigned int>::insert(
        common::tools::RandomSet<unsigned int> *const this,
        unsigned int item)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  std::mutex *p_mu; // r14
  int v6; // r15d
  std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *p_index_map; // r15
  std::vector<unsigned int>::iterator v8; // rsi
  std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::iterator v9; // rcx
  __int64 v10; // rax
  std::_Vector_base<unsigned int>::pointer *p_M_finish; // rdi
  char v12; // dl
  unsigned __int64 v13; // rax
  struct _Unwind_Exception *v14; // rbx
  char v15[120]; // [rsp+10h] [rbp-78h] BYREF

  v2 = (unsigned __int64)this;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v3 = v10;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 item:52";
  *(_QWORD *)(v3 + 16) = common::tools::RandomSet<unsigned int>::insert;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = item;
  p_mu = &this->mu_;
  if ( &_pthread_key_create )
  {
    v6 = pthread_mutex_lock(&this->mu_._M_mutex);
    if ( v6 )
    {
      __asan_handle_no_return();
      std::__throw_system_error(v6);
    }
  }
  p_index_map = (std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true> *)&this->index_map_;
  v8._M_current = (unsigned int *)(v3 + 32);
  if ( std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
         &this->index_map_._M_h,
         (const std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v3 + 32))._M_cur )
  {
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&this->mu_._M_mutex);
    goto LABEL_7;
  }
  p_M_finish = &this->item_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_22;
  }
  v8._M_current = *(unsigned int **)(v2 + 8);
  p_M_finish = (std::_Vector_base<unsigned int>::pointer *)(v2 + 16);
  if ( *(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_finish);
LABEL_23:
    __asan_report_store4(v8._M_current);
    goto LABEL_24;
  }
  if ( v8._M_current != *(unsigned int **)(v2 + 16) )
  {
    v12 = *(_BYTE *)(((unsigned __int64)v8._M_current >> 3) + 0x7FFF8000);
    if ( (char)(((__int64)v8._M_current & 7) + 3) < v12 || !v12 )
    {
      *v8._M_current = *(_DWORD *)(v3 + 32);
      *(_QWORD *)(v2 + 8) += 4LL;
      goto LABEL_18;
    }
    goto LABEL_23;
  }
LABEL_24:
  std::vector<unsigned int>::_M_realloc_insert<unsigned int const&>(
    (std::vector<unsigned int> *const)v2,
    v8,
    (const unsigned int *)(v3 + 32),
    (const unsigned int *)v9._M_cur);
LABEL_18:
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v2 + 8);
    goto LABEL_26;
  }
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    v13 = __asan_report_load8(v2);
    goto LABEL_27;
  }
  v2 = ((__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 2) - 1;
  v13 = (unsigned __int64)std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::operator[](
                            p_index_map,
                            (const std::__detail::_Map_base<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>,true>::key_type *)(v3 + 32));
LABEL_27:
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
    v14 = (struct _Unwind_Exception *)__asan_report_store8(v13);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(&p_mu->_M_mutex);
    __asan_handle_no_return();
    _Unwind_Resume(v14);
  }
  *(_QWORD *)v13 = v2;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mu->_M_mutex);
LABEL_7:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 71: range 0000000014E2DD42-0000000014E2DFCB
void __fastcall common::tools::RandomSet<unsigned int>::erase(
        common::tools::RandomSet<unsigned int> *const this,
        unsigned int item)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r14
  int v5; // r12d
  std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::iterator v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,long unsigned int>,false>::__node_type *M_cur; // r12
  std::_Vector_base<unsigned int>::pointer *p_M_finish; // rdi
  __int64 v9; // rsi
  std::_Vector_base<unsigned int>::pointer M_finish; // rdx
  std::_Vector_base<unsigned int>::pointer M_start; // rcx
  std::_Vector_base<unsigned int>::pointer v12; // rdi
  char v13; // r8
  unsigned int v14; // r8d
  char v15; // dl
  std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::iterator v16; // rax
  __int64 v17; // rax
  std::true_type *v18; // [rsp+0h] [rbp-88h]
  std::true_type v19; // [rsp+10h] [rbp-78h] BYREF

  v3 = (unsigned __int64)&v19;
  v18 = &v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_0(64LL);
    if ( v17 )
      v3 = v17;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 item:71";
  *(_QWORD *)(v3 + 16) = common::tools::RandomSet<unsigned int>::erase;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = item;
  if ( &_pthread_key_create )
  {
    v5 = pthread_mutex_lock(&this->mu_._M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return();
      std::__throw_system_error(v5);
    }
  }
  v6._M_cur = std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
                &this->index_map_._M_h,
                (const std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v3 + 32))._M_cur;
  M_cur = v6._M_cur;
  if ( v6._M_cur )
  {
    p_M_finish = (std::_Vector_base<unsigned int>::pointer *)(&v6._M_cur->_M_storage._M_storage.1 + 1);
    if ( *(_BYTE *)(((unsigned __int64)(&v6._M_cur->_M_storage._M_storage.1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
    }
    else
    {
      v9 = *((_QWORD *)&v6._M_cur->_M_storage._M_storage.1 + 1);
      p_M_finish = &this->item_vec_._M_impl._M_finish;
      if ( !*(_BYTE *)(((unsigned __int64)&this->item_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        M_finish = this->item_vec_._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        {
          M_start = this->item_vec_._M_impl._M_start;
          if ( v9 != M_finish - this->item_vec_._M_impl._M_start - 1 )
          {
            v12 = M_finish - 1;
            v13 = *(_BYTE *)(((unsigned __int64)(M_finish - 1) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)M_finish - 4) & 7) + 3) >= v13 && v13 )
            {
              __asan_report_load4();
            }
            else
            {
              v14 = *(M_finish - 1);
              v12 = &M_start[v9];
              v15 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)M_start + 4 * v9) & 7) + 3) < v15 || !v15 )
              {
                *v12 = v14;
                --this->item_vec_._M_impl._M_finish;
                v16._M_cur = std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
                               &this->index_map_._M_h,
                               &this->item_vec_._M_impl._M_start[*((_QWORD *)&v6._M_cur->_M_storage._M_storage.1 + 1)])._M_cur;
                v12 = (std::_Vector_base<unsigned int>::pointer)(&v16._M_cur->_M_storage._M_storage.1 + 1);
                if ( !*(_BYTE *)(((unsigned __int64)(&v16._M_cur->_M_storage._M_storage.1 + 1) >> 3) + 0x7FFF8000) )
                {
                  *((_QWORD *)&v16._M_cur->_M_storage._M_storage.1 + 1) = *((_QWORD *)&M_cur->_M_storage._M_storage.1 + 1);
                  std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
                    &this->index_map_._M_h,
                    (std::true_type)&v19,
                    (const std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v3 + 32));
                  if ( !&_pthread_key_create )
                    goto LABEL_16;
                  goto LABEL_15;
                }
LABEL_29:
                __asan_report_store8(v12);
                goto LABEL_30;
              }
            }
            __asan_report_store4(v12);
            goto LABEL_29;
          }
          goto LABEL_24;
        }
LABEL_23:
        __asan_report_load8(this);
LABEL_24:
        this->item_vec_._M_impl._M_finish = M_finish - 1;
        std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
          &this->index_map_._M_h,
          (std::true_type)&v19,
          (const std::_Hashtable<unsigned int,std::pair<unsigned int const,long unsigned int>,std::allocator<std::pair<unsigned int const,long unsigned int> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(v3 + 32));
        goto LABEL_25;
      }
    }
    __asan_report_load8(p_M_finish);
    goto LABEL_23;
  }
LABEL_25:
  if ( &_pthread_key_create )
LABEL_15:
    pthread_mutex_unlock(&this->mu_._M_mutex);
LABEL_16:
  if ( v18 == (std::true_type *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_30:
  *(_QWORD *)v3 = 1172321806LL;
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 104: range 0000000014E2D91E-0000000014E2DD40
void __fastcall common::tools::RandomSet<unsigned int>::clear(common::tools::RandomSet<unsigned int> *const this)
{
  common::tools::RandomSet<unsigned int> *v1; // rbx
  std::mutex *p_mu; // r12
  int v3; // ebp
  std::_Vector_base<unsigned int>::pointer M_start; // rax

  v1 = this;
  p_mu = &this->mu_;
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock(&this->mu_._M_mutex);
    if ( v3 )
    {
      __asan_handle_no_return();
      std::__throw_system_error(v3);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_12;
  }
  M_start = this->item_vec_._M_impl._M_start;
  this = (common::tools::RandomSet<unsigned int> *const)((char *)this + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v1->item_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(this);
    JUMPOUT(0x14E2D9ABLL);
  }
  if ( M_start != v1->item_vec_._M_impl._M_finish )
    v1->item_vec_._M_impl._M_finish = M_start;
  std::_Hashtable<unsigned int,std::pair<unsigned int const,unsigned long>,std::allocator<std::pair<unsigned int const,unsigned long>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::clear(&v1->index_map_._M_h);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mu->_M_mutex);
};

// Line 190: range 0000000014E2D7E0-0000000014E2D91B
int32_t __fastcall common::tools::RandomSet<unsigned int>::randomSelect(
        common::tools::RandomSet<unsigned int> *const this,
        unsigned int *select_item)
{
  int v2; // ebp
  unsigned int *M_finish; // rax
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int *v6; // rdx
  char v7; // cl
  unsigned int v8; // ecx
  char v9; // dl
  int32_t v10; // ebx

  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock(&this->mu_._M_mutex);
    if ( v2 )
    {
      __asan_handle_no_return();
      std::__throw_system_error(v2);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->item_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->item_vec_._M_impl._M_finish);
    goto LABEL_17;
  }
  M_finish = this->item_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(this);
    goto LABEL_18;
  }
  if ( this->item_vec_._M_impl._M_start != M_finish )
  {
    v4 = M_finish - this->item_vec_._M_impl._M_start;
    v5 = common::tools::RandomUtils::rand<unsigned int>();
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v6 = &this->item_vec_._M_impl._M_start[v5 % (unsigned int)v4];
      v7 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v6 & 7) + 3) < v7 || !v7 )
      {
        v8 = *v6;
        v9 = *(_BYTE *)(((unsigned __int64)select_item >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)select_item & 7) + 3) < v9 || !v9 )
        {
          *select_item = v8;
          v10 = 1;
          goto LABEL_12;
        }
        goto LABEL_20;
      }
LABEL_19:
      __asan_report_load4(v6);
LABEL_20:
      __asan_report_store4(select_item);
      goto LABEL_21;
    }
LABEL_18:
    __asan_report_load8(this);
    goto LABEL_19;
  }
LABEL_21:
  v10 = 0;
LABEL_12:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->mu_._M_mutex);
  return v10;
};
