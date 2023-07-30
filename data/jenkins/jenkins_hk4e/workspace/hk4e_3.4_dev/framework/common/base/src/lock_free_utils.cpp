// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/src/lock_free_utils.cpp

// Line 50: range 000000000C9F56C0-000000000C9F5A1A
// local variable allocation has failed, the output may be wrong!
void __fastcall common::tools::LockFreeQueueBase::LockFreeQueueBase(
        common::tools::LockFreeQueueBase *const this,
        uint32_t size)
{
  unsigned __int64 p_pool; // r12
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r14
  common::tools::LockFreeQueueBase::Impl *v5; // rbx
  __int64 v6; // rsi
  common::tools::LockFreeQueueBase::Impl *p_tail; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rtt
  bool v13; // dl
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rbp
  __int64 i; // [rsp+8h] [rbp-90h]
  __int64 v19; // [rsp+10h] [rbp-88h]
  char v20[120]; // [rsp+20h] [rbp-78h] BYREF

  p_pool = size;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_0(64LL);
    if ( v8 )
      v3 = v8;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 8 old_pool";
  *(_QWORD *)(v3 + 16) = common::tools::LockFreeQueueBase::LockFreeQueueBase;
  v4 = v3 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = (common::tools::LockFreeQueueBase::Impl *)operator new(0x88uLL);
  v6 = size;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    p_tail = v5;
    __asan_report_store8(v5, size);
    goto LABEL_9;
  }
  v5->queue_.head_._M_i.ptr = 0LL;
  p_tail = (common::tools::LockFreeQueueBase::Impl *)&v5->queue_.tail_;
  if ( *(_BYTE *)(((unsigned __int64)&v5->queue_.tail_ >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store8(p_tail, size);
    goto LABEL_10;
  }
  v5->queue_.tail_._M_i.ptr = 0LL;
  p_pool = (unsigned __int64)&v5->queue_.pool;
  v19 = size + 1LL;
  if ( *(_BYTE *)(((unsigned __int64)&v5->queue_.pool >> 3) + 0x7FFF8000) )
  {
LABEL_10:
    v9 = __asan_report_store8(p_pool, size);
    goto LABEL_11;
  }
  v5->queue_.pool.pool_._M_i.ptr = 0LL;
  for ( i = 0LL; v19 != i; ++i )
  {
    *(_QWORD *)&size = 64LL;
    v9 = operator new(0x40uLL, (std::align_val_t)64LL);
LABEL_11:
    v10 = p_pool;
    if ( *(_BYTE *)((p_pool >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_pool);
LABEL_17:
      __asan_report_load8(v10);
      __asan_report_store8(v10, *(_QWORD *)&size);
      break;
    }
    *(_QWORD *)&size = (HIWORD(*(_QWORD *)p_pool) << 48) | v9 & 0xFFFFFFFFFFFFLL;
    v10 = v9 & 0xFFFFFFFFFFFFLL;
    if ( *(_BYTE *)(((v9 & 0xFFFFFFFFFFFFuLL) >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    *(_QWORD *)(v9 & 0xFFFFFFFFFFFFLL) = (HIWORD(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFLL)) << 48) | *(_QWORD *)p_pool & 0xFFFFFFFFFFFFLL;
    *(_QWORD *)p_pool = *(_QWORD *)&size;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&v5->queue_.pool >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v3 + 32) = v5->queue_.pool.pool_._M_i.ptr;
    while ( 1 )
    {
      if ( (*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFLL) == 0 )
        goto LABEL_33;
      if ( *(_BYTE *)(((*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFuLL) >> 3) + 0x7FFF8000) )
        break;
      *(_QWORD *)&size = 0xFFFFFFFFFFFFLL;
      v12 = *(_QWORD *)(v3 + 32);
      v11 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&v5->queue_.pool,
              ((unsigned __int64)((unsigned int)HIWORD(v12) + 1) << 48) | *(_QWORD *)(v12 & 0xFFFFFFFFFFFFLL) & 0xFFFFFFFFFFFFLL,
              v12);
      v13 = v12 == v11;
      if ( v12 != v11 )
        *(_QWORD *)(v3 + 32) = v11;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFLL;
        goto LABEL_26;
      }
    }
    v14 = __asan_report_load8(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFLL);
    goto LABEL_35;
  }
  __asan_report_load8(&v5->queue_.pool);
LABEL_33:
  *(_QWORD *)&size = 64LL;
  v14 = operator new(0x40uLL, (std::align_val_t)64LL);
LABEL_26:
  if ( v14 )
  {
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    {
LABEL_35:
      __asan_report_store8(v14, *(_QWORD *)&size);
LABEL_36:
      v16 = (struct _Unwind_Exception *)__asan_report_store8(this, *(_QWORD *)&size);
      boost::lockfree::detail::freelist_stack<boost::lockfree::queue<unsigned long>::node,std::allocator<boost::lockfree::queue<unsigned long>::node>>::~freelist_stack((boost::lockfree::detail::freelist_stack<boost::lockfree::queue<long unsigned int>::node,std::allocator<boost::lockfree::queue<long unsigned int>::node> > *const)p_pool);
      operator delete(v5, 0x88uLL);
      __asan_handle_no_return(v5, 136LL);
      _Unwind_Resume(v16);
    }
    *(_QWORD *)v14 = 0LL;
  }
  v15 = v14 & 0xFFFFFFFFFFFFLL;
  v5->queue_.head_._M_i.ptr = v15;
  v5->queue_.tail_._M_i.ptr = v15;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  this->impl_ptr_._M_t._M_t._M_head_impl = v5;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 52: range 000000000C9F5A1C-000000000C9F5D95
void __fastcall common::tools::LockFreeQueueBase::~LockFreeQueueBase(common::tools::LockFreeQueueBase *const this)
{
  common::tools::LockFreeQueueBase *v1; // rbp
  __int64 v2; // rsi
  common::tools::LockFreeQueueBase::Impl *M_head_impl; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  common::tools::LockFreeQueueBase v8; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdi
  char v13; // al
  unsigned __int64 p_pool; // rdi
  boost::lockfree::detail::tagged_ptr<boost::lockfree::detail::freelist_stack<boost::lockfree::queue<long unsigned int>::node,std::allocator<boost::lockfree::queue<long unsigned int>::node> >::freelist_node>::compressed_ptr_t ptr; // rbx
  __int64 v16; // [rsp+0h] [rbp-98h]
  unsigned __int64 v17; // [rsp+18h] [rbp-80h]
  char v18[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 5 dummy";
  *(_QWORD *)(v4 + 16) = common::tools::LockFreeQueueBase::~LockFreeQueueBase;
  v17 = v4 >> 3;
  *(_DWORD *)(v17 + 2147450880) = -235802127;
  *(_DWORD *)(v17 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_8;
  }
  M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
  if ( this->impl_ptr_._M_t._M_t._M_head_impl )
  {
    v1 = (common::tools::LockFreeQueueBase *)this->impl_ptr_._M_t._M_t._M_head_impl;
    while ( 1 )
    {
      this = v1;
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        break;
      v2 = (__int64)v1->impl_ptr_._M_t._M_t._M_head_impl;
      v8.impl_ptr_._M_t._M_t._M_head_impl = v1->impl_ptr_._M_t._M_t._M_head_impl;
      v9 = (unsigned __int64)&v1[16];
      v10 = (__int64)v1->impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL;
      this = v1 + 8;
      if ( *(_BYTE *)(((unsigned __int64)&v1[8] >> 3) + 0x7FFF8000) )
        goto LABEL_9;
      v6 = (unsigned __int64)v1[8].impl_ptr_._M_t._M_t._M_head_impl;
      this = (common::tools::LockFreeQueueBase *const)((__int64)v1->impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        goto LABEL_10;
      v16 = *(_QWORD *)v10;
      v7 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFLL;
      v2 &= 0xFFFFFFFFFFFFuLL;
      if ( v2 == (v6 & 0xFFFFFFFFFFFFLL) )
      {
LABEL_11:
        if ( !v7 )
          goto LABEL_27;
        v1[8].impl_ptr_._M_t._M_t._M_head_impl = (common::tools::LockFreeQueueBase::Impl *)(v7 | ((unsigned __int64)((unsigned int)HIWORD(v6) + 1) << 48));
        _mm_mfence();
      }
      else if ( v7 )
      {
        v2 = v4 + 32;
        boost::lockfree::detail::copy_payload<unsigned long,unsigned long>(
          (unsigned __int64 *)((*(_QWORD *)v10 & 0xFFFFFFFFFFFFLL) + 8),
          (unsigned __int64 *)(v4 + 32));
        v1->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::LockFreeQueueBase::Impl *)(((unsigned __int64)((unsigned int)((unsigned __int64)v8.impl_ptr_._M_t._M_t._M_head_impl >> 48) + 1) << 48) | v16 & 0xFFFFFFFFFFFFLL);
        _mm_mfence();
        v11 = (unsigned __int64)v8.impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL;
        v12 = (__int64)&v1[16];
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v12);
LABEL_26:
          __asan_report_load8(v12);
          __asan_report_store8(v12, v2);
LABEL_27:
          v13 = 0;
          goto LABEL_21;
        }
        v2 = (HIWORD(*(_QWORD *)v9) << 48) | v11;
        v12 = v11 & 0xFFFFFFFFFFFFLL;
        if ( *(_BYTE *)(((v11 & 0xFFFFFFFFFFFFuLL) >> 3) + 0x7FFF8000) )
          goto LABEL_26;
        *(_QWORD *)(v11 & 0xFFFFFFFFFFFFLL) = (HIWORD(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFLL)) << 48) | *(_QWORD *)v9 & 0xFFFFFFFFFFFFLL;
        *(_QWORD *)v9 = v2;
        v13 = 1;
LABEL_21:
        if ( !v13 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->queue_.pool >> 3) + 0x7FFF8000) )
          {
            p_pool = (unsigned __int64)&M_head_impl->queue_.pool;
            __asan_report_load8(&M_head_impl->queue_.pool);
          }
          else
          {
            v2 = (HIWORD(M_head_impl->queue_.pool.pool_._M_i.ptr) << 48) | M_head_impl->queue_.head_._M_i.ptr & 0xFFFFFFFFFFFFLL;
            p_pool = M_head_impl->queue_.head_._M_i.ptr & 0xFFFFFFFFFFFFLL;
            if ( !*(_BYTE *)((p_pool >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)p_pool = (HIWORD(*(_QWORD *)p_pool) << 48) | M_head_impl->queue_.pool.pool_._M_i.ptr & 0xFFFFFFFFFFFFLL;
              M_head_impl->queue_.pool.pool_._M_i.ptr = v2;
              ptr = M_head_impl->queue_.pool.pool_._M_i.ptr;
              while ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
              {
                p_pool = ptr & 0xFFFFFFFFFFFFLL;
                if ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
                {
                  if ( *(_BYTE *)((p_pool >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(p_pool);
                    break;
                  }
LABEL_30:
                  ptr = *(_QWORD *)p_pool;
                }
                operator delete((void *)p_pool, (std::align_val_t)64LL);
              }
              operator delete(M_head_impl, 0x88uLL);
              goto LABEL_37;
            }
          }
          __asan_report_load8(p_pool);
          __asan_report_store8(p_pool, v2);
          goto LABEL_30;
        }
      }
    }
LABEL_8:
    __asan_report_load8(this);
LABEL_9:
    __asan_report_load8(this);
LABEL_10:
    v6 = __asan_report_load8(this);
    goto LABEL_11;
  }
LABEL_37:
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 57: range 000000000C9F5544-000000000C9F5549
bool __fastcall common::tools::LockFreeQueueBase::isLockFree(const common::tools::LockFreeQueueBase *const this)
{
  return 1;
};

// Line 62: range 000000000C9F554A-000000000C9F554F
bool __fastcall common::tools::LockFreeQueueBase::push(
        common::tools::LockFreeQueueBase *const this,
        common::tools::LockFreeQueueBase::ElemType *p)
{
  return 0;
};

// Line 67: range 000000000C9F5550-000000000C9F5555
bool __fastcall common::tools::LockFreeQueueBase::pop(
        common::tools::LockFreeQueueBase *const this,
        common::tools::LockFreeQueueBase::ElemType *p)
{
  return 0;
};

// Line 101: range 000000000C9F5556-000000000C9F56A8
// local variable allocation has failed, the output may be wrong!
void __fastcall common::tools::LockFreeStackBase::LockFreeStackBase(
        common::tools::LockFreeStackBase *const this,
        uint32_t size)
{
  __int64 i; // r14
  __int64 v4; // r12
  common::tools::LockFreeStackBase::Impl *v5; // rbx
  boost::lockfree::stack<long unsigned int>::pool_t *p_pool; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rax
  struct _Unwind_Exception *v12; // rbp

  v4 = size;
  v5 = (common::tools::LockFreeStackBase::Impl *)operator new(0x48uLL);
  p_pool = &v5->queue_.pool;
  if ( *(_BYTE *)(((unsigned __int64)&v5->queue_.pool >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_store8(p_pool, *(_QWORD *)&size);
    goto LABEL_4;
  }
  v4 = size;
  v5->queue_.pool.pool_._M_i.ptr = 0LL;
  for ( i = 0LL; v4 != i; ++i )
  {
    v7 = operator new(0x10uLL);
LABEL_4:
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)p_pool >> 3) + 0x7FFF8000) )
    {
      v10 = (_QWORD *)__asan_report_load8(p_pool);
LABEL_10:
      v11 = __asan_report_load8(v10);
      __asan_report_store8(v11, *(_QWORD *)&size);
      break;
    }
    *(_QWORD *)&size = 0xFFFFFFFFFFFFLL;
    v9 = (HIWORD(p_pool->pool_._M_i.ptr) << 48) | v7 & 0xFFFFFFFFFFFFLL;
    v10 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFLL);
    if ( *(_BYTE *)(((v8 & 0xFFFFFFFFFFFFuLL) >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    *v10 = (HIWORD(*v10) << 48) | p_pool->pool_._M_i.ptr & 0xFFFFFFFFFFFFLL;
    p_pool->pool_._M_i.ptr = v9;
  }
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v5, *(_QWORD *)&size);
LABEL_15:
    v12 = (struct _Unwind_Exception *)__asan_report_store8(this, *(_QWORD *)&size);
    operator delete(v5, 0x48uLL);
    __asan_handle_no_return(v5, 72LL);
    _Unwind_Resume(v12);
  }
  v5->queue_.tos._M_i.ptr = 0LL;
  _mm_mfence();
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  this->impl_ptr_._M_t._M_t._M_head_impl = v5;
};

// Line 103: range 000000000C9F5D98-000000000C9F6004
void __fastcall common::tools::LockFreeStackBase::~LockFreeStackBase(common::tools::LockFreeStackBase *const this)
{
  char *v1; // rsi
  common::tools::LockFreeStackBase *v2; // r12
  common::tools::LockFreeStackBase::Impl *M_head_impl; // r13
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  common::tools::LockFreeStackBase::Impl *v9; // rcx
  char v10; // al
  unsigned __int64 p_pool; // rdi
  boost::lockfree::detail::tagged_ptr<boost::lockfree::detail::freelist_stack<boost::lockfree::stack<long unsigned int>::node,std::allocator<boost::lockfree::stack<long unsigned int>::node> >::freelist_node>::compressed_ptr_t ptr; // rbx
  common::tools::LockFreeStackBase *v13; // [rsp+8h] [rbp-90h]
  char v14[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)this;
  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 5 dummy";
  *(_QWORD *)(v5 + 16) = common::tools::LockFreeStackBase::~LockFreeStackBase;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(this);
    goto LABEL_8;
  }
  M_head_impl = this->impl_ptr_._M_t._M_t._M_head_impl;
  if ( !this->impl_ptr_._M_t._M_t._M_head_impl )
    goto LABEL_30;
  v2 = (common::tools::LockFreeStackBase *)this->impl_ptr_._M_t._M_t._M_head_impl;
  while ( 1 )
  {
    this = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
LABEL_8:
      __asan_report_load8(this);
    }
    else
    {
      v4 = (unsigned __int64)v2->impl_ptr_._M_t._M_t._M_head_impl;
      v13 = v2 + 8;
      this = (common::tools::LockFreeStackBase *const)((__int64)v2->impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL);
      if ( !this )
      {
        v10 = 0;
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      break;
    v2->impl_ptr_._M_t._M_t._M_head_impl = (common::tools::LockFreeStackBase::Impl *)((__int64)this->impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL | ((unsigned __int64)((unsigned int)HIWORD(v4) + 1) << 48));
    v1 = (char *)(v5 + 32);
    boost::lockfree::detail::copy_payload<unsigned long const,unsigned long>(
      (const unsigned __int64 *)&this[1],
      (unsigned __int64 *)(v5 + 32));
    v8 = v4 & 0xFFFFFFFFFFFFLL;
    this = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      goto LABEL_18;
    v9 = (common::tools::LockFreeStackBase::Impl *)(((unsigned __int64)v2[8].impl_ptr_._M_t._M_t._M_head_impl >> 48 << 48) | v8);
    v4 = v8 & 0xFFFFFFFFFFFFLL;
    this = (common::tools::LockFreeStackBase *const)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    *(_QWORD *)v4 = (HIWORD(*(_QWORD *)v4) << 48) | (__int64)v2[8].impl_ptr_._M_t._M_t._M_head_impl & 0xFFFFFFFFFFFFLL;
    v2[8].impl_ptr_._M_t._M_t._M_head_impl = v9;
    v10 = 1;
LABEL_13:
    if ( !v10 )
      goto LABEL_20;
  }
  __asan_report_load8(this);
LABEL_18:
  __asan_report_load8(this);
LABEL_19:
  __asan_report_load8(this);
  __asan_report_store8(this, v1);
LABEL_20:
  p_pool = (unsigned __int64)&M_head_impl->queue_.pool;
  if ( *(_BYTE *)(((unsigned __int64)&M_head_impl->queue_.pool >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_pool);
    goto LABEL_23;
  }
  ptr = M_head_impl->queue_.pool.pool_._M_i.ptr;
  while ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
  {
    p_pool = ptr & 0xFFFFFFFFFFFFLL;
    if ( (ptr & 0xFFFFFFFFFFFFLL) != 0 )
    {
      if ( *(_BYTE *)((p_pool >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_pool);
        break;
      }
LABEL_23:
      ptr = *(_QWORD *)p_pool;
    }
    operator delete((void *)p_pool);
  }
  operator delete(M_head_impl, 0x48uLL);
LABEL_30:
  if ( v14 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 108: range 000000000C9F56AE-000000000C9F56B3
bool __fastcall common::tools::LockFreeStackBase::isLockFree(const common::tools::LockFreeStackBase *const this)
{
  return 1;
};

// Line 113: range 000000000C9F56B4-000000000C9F56B9
bool __fastcall common::tools::LockFreeStackBase::push(
        common::tools::LockFreeStackBase *const this,
        common::tools::LockFreeStackBase::ElemType *p)
{
  return 0;
};

// Line 118: range 000000000C9F56BA-000000000C9F56BF
bool __fastcall common::tools::LockFreeStackBase::pop(
        common::tools::LockFreeStackBase *const this,
        common::tools::LockFreeStackBase::ElemType *p)
{
  return 0;
};
