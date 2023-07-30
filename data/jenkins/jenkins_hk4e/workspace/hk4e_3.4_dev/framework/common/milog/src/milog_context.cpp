// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/src/milog_context.cpp

// Line 27: range 000000000C9A8844-000000000C9A898A
int32_t __fastcall common::milog::MilogContext::push(common::milog::MilogContext *const this, const char *str)
{
  const char *const *v2; // rcx
  char *v4; // rdx
  unsigned __int64 v5; // r13
  std::_Vector_base<char const*>::pointer *p_M_finish; // rdi
  int32_t result; // eax
  __int64 vars0[8]; // [rsp+0h] [rbp+0h] BYREF
  char vars40; // [rsp+40h] [rbp+40h] BYREF

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_0(64LL);
  v4 = &vars40;
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 32 8 6 str:26";
  vars0[2] = (__int64)common::milog::MilogContext::push;
  v5 = (unsigned __int64)vars0 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  vars0[4] = (__int64)str;
  if ( !str )
  {
    result = -1;
    goto LABEL_10;
  }
  p_M_finish = &this->str_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_12;
  }
  str = (const char *)this->str_vec_._M_impl._M_finish;
  p_M_finish = &this->str_vec_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&this->str_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_M_finish);
    goto LABEL_13;
  }
  if ( str == (const char *)this->str_vec_._M_impl._M_end_of_storage )
  {
LABEL_14:
    std::vector<char const*>::_M_realloc_insert<char const* const&>(
      &this->str_vec_,
      (std::vector<char const*>::iterator)str,
      (const char *const *)v4 - 4,
      v2);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)str >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_store8(str, str);
    goto LABEL_14;
  }
  *(_QWORD *)str = vars0[4];
  ++this->str_vec_._M_impl._M_finish;
LABEL_9:
  result = 0;
LABEL_10:
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  return result;
};

// Line 50: range 000000000C9A86DC-000000000C9A8841
int32_t __fastcall common::milog::MilogContext::writeContextToBuf(
        common::milog::MilogContext *const this,
        char *buf,
        uint32_t buf_len,
        uint32_t *context_len)
{
  std::_Vector_base<char const*>::pointer M_start; // rbp
  std::_Vector_base<char const*>::pointer M_finish; // r14
  uint32_t v6; // r12d
  char *v7; // r13
  char v9; // dl
  std::_Vector_base<char const*>::pointer *p_M_finish; // rax
  uint32_t *v11; // rdi
  const char *v12; // rcx
  unsigned int v13; // eax
  char v14; // dl
  char v15; // cl

  v6 = buf_len;
  if ( buf_len != 0 && buf != 0LL )
  {
    v7 = buf;
    v9 = *(_BYTE *)(((unsigned __int64)context_len >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)context_len & 7) + 3) >= v9 && v9 )
    {
      this = (common::milog::MilogContext *const)context_len;
      __asan_report_store4(context_len, buf);
    }
    else
    {
      *context_len = 0;
      if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      {
        M_start = this->str_vec_._M_impl._M_start;
        p_M_finish = &this->str_vec_._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&this->str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          M_finish = this->str_vec_._M_impl._M_finish;
          while ( 1 )
          {
            if ( M_start == M_finish )
              return 0;
            v11 = (uint32_t *)M_start;
            if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
              break;
            v12 = *M_start;
            v11 = context_len;
            v14 = *(_BYTE *)(((unsigned __int64)context_len >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)context_len & 7) + 3) >= v14 && v14 )
              goto LABEL_11;
            if ( *context_len )
              goto LABEL_12;
            v13 = snprintf(v7, v6, " [%s]", v12);
LABEL_20:
            if ( v6 < v13 )
              v13 = v6;
            v7 += v13;
            v6 -= v13;
            v15 = *(_BYTE *)(((unsigned __int64)context_len >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)context_len & 7) + 3) >= v15 && v15 )
            {
              __asan_report_load4(context_len);
              return 0;
            }
            *context_len += v13;
            ++M_start;
          }
LABEL_10:
          __asan_report_load8(v11);
LABEL_11:
          __asan_report_load4(v11);
LABEL_12:
          v13 = snprintf(v7, v6, "[%s]", v12);
          goto LABEL_20;
        }
LABEL_9:
        v11 = (uint32_t *)p_M_finish;
        __asan_report_load8(p_M_finish);
        goto LABEL_10;
      }
    }
    p_M_finish = (std::_Vector_base<char const*>::pointer *)__asan_report_load8(this);
    goto LABEL_9;
  }
  return -1;
};

// Line 87: range 000000000C9A898C-000000000C9A8E98
void __cdecl _tls_init_0()
{
  std::string *v0; // rsi
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rbx
  char *v4; // r13
  _DWORD *v5; // rbp
  __int64 v6; // rax
  bool *v7; // rdi
  char v8; // al
  std::forward_iterator_tag v9; // cl
  char v10; // al
  char v11; // dl
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // r13
  std::forward_iterator_tag v14; // cl
  struct _Unwind_Exception *v15; // rbx
  std::string::pointer M_p; // rdi
  char *v17; // rbp
  char v18; // al
  char *v19; // rsi
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // dl
  unsigned __int64 v24; // rdi
  _QWORD *v25; // r13
  std::string v26; // [rsp+0h] [rbp-B8h] BYREF
  char v27[152]; // [rsp+20h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v3 = v6;
  }
  v4 = (char *)(v3 + 96);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v3 + 16) = _tls_init_0;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( !*(_BYTE *)(__readfsqword(0) - 5784) )
  {
    *(_BYTE *)(__readfsqword(0) - 5784) = 1;
    v7 = &common::tools::perf::MemoryPerf::is_record;
    v8 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
    if ( v8 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v8 )
    {
      __asan_report_load1(
        &common::tools::perf::MemoryPerf::is_record,
        v0,
        (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
      goto LABEL_22;
    }
    if ( common::tools::perf::MemoryPerf::is_record )
    {
      *(std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::milog::MilogContextBox::context_ptr_._M_ptr
                                                                                                  + __readfsqword(0)) = 0LL;
      v0 = (std::string *)(v3 + 48);
      std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MilogContext,common::tools::perf::allocator<common::milog::MilogContext,common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2>,common::milog::MilogContext>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::milog::MilogContext,common::tools::perf::allocator<common::milog::MilogContext,common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2>,common::milog::MilogContext> *)(v3 + 48));
      v1 = *(_QWORD *)(v3 + 72);
      v7 = (bool *)(v1 + 8);
      v10 = *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000);
      if ( !v10 || v10 > 3 )
      {
        *(_DWORD *)(v1 + 8) = 1;
        v7 = (bool *)(v1 + 12);
        v11 = *(_BYTE *)(((v1 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v1 + 12) & 7) + 3) < v11 || !v11 )
        {
          *(_DWORD *)(v1 + 12) = 1;
          if ( !*(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v1 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MilogContext,common::tools::perf::allocator<common::milog::MilogContext,common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
            v2 = v1 + 16;
            if ( !common::tools::perf::MemoryPerf::is_record )
              goto LABEL_16;
            goto LABEL_25;
          }
LABEL_24:
          __asan_report_store8(v1, v0);
LABEL_25:
          v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(&v26, "N6common5milog12MilogContextE", "", v9);
          v0 = &v26;
          common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &v26, 0x18uLL);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
            operator delete(v26._M_dataplus._M_p);
LABEL_16:
          if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
          {
            v12 = v2;
            __asan_report_store8(v2, v0);
          }
          else
          {
            *(_QWORD *)(v1 + 16) = 0LL;
            v12 = v2 + 8;
            if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v2 + 8) = 0LL;
              v12 = v2 + 16;
              if ( !*(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v2 + 16) = 0LL;
                *(_QWORD *)(v3 + 72) = 0LL;
                v13 = (unsigned __int64 *)((char *)&common::milog::MilogContextBox::context_ptr_ + __readfsqword(0));
                v13[1] = v1;
                *v13 = v2;
LABEL_20:
                __cxa_thread_atexit(
                  (void (__fastcall *)(void *))std::shared_ptr<common::milog::MilogContext>::~shared_ptr,
                  (char *)&common::milog::MilogContextBox::context_ptr_ + __readfsqword(0),
                  &_dso_handle);
                goto LABEL_3;
              }
LABEL_29:
              v15 = (struct _Unwind_Exception *)__asan_report_store8(v12, v0);
              M_p = v26._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
                operator delete(v26._M_dataplus._M_p);
              while ( 1 )
              {
                v17 = (char *)*((_QWORD *)v4 - 3);
                if ( !v17 )
                  goto LABEL_39;
                M_p = (std::string::pointer)&common::tools::perf::MemoryPerf::is_record;
                v18 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
                if ( v18 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v18 )
                  break;
                v15 = (struct _Unwind_Exception *)__asan_report_load1(
                                                    &common::tools::perf::MemoryPerf::is_record,
                                                    v0,
                                                    (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
              }
              if ( common::tools::perf::MemoryPerf::is_record )
              {
                v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
                std::string::_M_construct<char const*>(&v26, "N6common5milog12MilogContextE", "", v14);
                common::tools::perf::MemoryPerfRecorder::deallocate(&common::tools::perf::MemoryPerf::recorder, &v26);
                if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
                  operator delete(v26._M_dataplus._M_p);
              }
              M_p = v17;
              free(v17);
LABEL_39:
              __asan_handle_no_return(M_p);
              _Unwind_Resume(v15);
            }
          }
          __asan_report_store8(v12, v0);
          goto LABEL_29;
        }
LABEL_23:
        __asan_report_store4(v7, v0);
        goto LABEL_24;
      }
LABEL_22:
      __asan_report_store4(v7, v0);
      goto LABEL_23;
    }
    *(std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::milog::MilogContextBox::context_ptr_._M_ptr
                                                                                                + __readfsqword(0)) = 0LL;
    v19 = (char *)(v3 + 48);
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MilogContext,std::allocator<common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::milog::MilogContext,std::allocator<common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2> > *)(v3 + 48));
    v20 = *(_QWORD *)(v3 + 72);
    v21 = v20 + 8;
    v22 = *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000);
    if ( v22 && v22 <= 3 )
    {
      __asan_report_store4(v21, v19);
    }
    else
    {
      *(_DWORD *)(v20 + 8) = 1;
      v21 = v20 + 12;
      v23 = *(_BYTE *)(((v20 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v20 + 12) & 7) + 3) < v23 || !v23 )
      {
        *(_DWORD *)(v20 + 12) = 1;
        if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v20 = &`vtable for'std::_Sp_counted_ptr_inplace<common::milog::MilogContext,std::allocator<common::milog::MilogContext>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          v24 = v20 + 16;
          if ( !*(_BYTE *)(((v20 + 16) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v20 + 16) = 0LL;
            v24 = v20 + 24;
            if ( !*(_BYTE *)(((v20 + 24) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v20 + 24) = 0LL;
              v24 = v20 + 32;
              if ( !*(_BYTE *)(((v20 + 32) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v20 + 32) = 0LL;
                *(_QWORD *)(v3 + 72) = 0LL;
                v25 = (std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::milog::MilogContextBox::context_ptr_._M_ptr + __readfsqword(0));
                v25[1] = v20;
                *v25 = v20 + 16;
                goto LABEL_20;
              }
LABEL_54:
              __asan_report_store8(v24, v19);
              goto LABEL_55;
            }
LABEL_53:
            __asan_report_store8(v24, v19);
            goto LABEL_54;
          }
LABEL_52:
          __asan_report_store8(v24, v19);
          goto LABEL_53;
        }
LABEL_51:
        v24 = v20;
        __asan_report_store8(v20, v19);
        goto LABEL_52;
      }
    }
    __asan_report_store4(v21, v19);
    goto LABEL_51;
  }
LABEL_3:
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_55:
  *(_QWORD *)v3 = 1172321806LL;
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 91: range 000000000C9A8E9E-000000000C9A9222
common::milog::MilogContextBox::ContextPtr __cdecl common::milog::MilogContextBox::getContext()
{
  std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type *p_M_finish; // rdi
  std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type *v1; // rbp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  common::minet::CoroutineContext *v5; // rsi
  common::milog::MilogContextBox::ContextPtr result; // rax
  __int64 v7; // rax
  const char **v8; // rax
  std::_Vector_base<char const*>::pointer *v9; // rdi
  char v10; // cl
  char v11; // dl
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  char v14; // dl
  struct _Unwind_Exception *v15; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rdi
  _BYTE v17[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = p_M_finish;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v2 = v7;
  }
  v3 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 coro_ptr:92";
  *(_QWORD *)(v2 + 16) = common::milog::MilogContextBox::getContext;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::minet::Coroutine::thisCoro();
  v5 = *(common::minet::CoroutineContext **)(v2 + 32);
  if ( v5 )
  {
    v5 = (common::minet::CoroutineContext *)((char *)v5 + 120);
    if ( !*(_WORD *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
    {
      result = common::minet::CoroutineContext::get<std::shared_ptr<common::milog::MilogContext>>(v5);
      goto LABEL_15;
    }
    __asan_report_store16();
  }
  _tls_init_0();
  v8 = *(const char ***)((char *)&common::milog::MilogContextBox::context_ptr_._M_ptr + __readfsqword(0));
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_M_finish, v5);
    goto LABEL_25;
  }
  p_M_finish->str_vec_._M_impl._M_start = v8;
  result._M_ptr = *(std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&common::milog::MilogContextBox::context_ptr_._M_refcount._M_pi + __readfsqword(0));
  p_M_finish = (std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)p_M_finish + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((unsigned __int64)&v1->str_vec_._M_impl._M_finish >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
LABEL_25:
    __asan_report_store8(p_M_finish, v5);
    goto LABEL_26;
  }
  v1->str_vec_._M_impl._M_finish = (std::_Vector_base<char const*>::pointer)result._M_ptr;
  if ( !result._M_ptr )
    goto LABEL_15;
  p_M_finish = (std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type *)&result._M_ptr->str_vec_._M_impl._M_finish;
  if ( !&_pthread_key_create )
    goto LABEL_27;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_finish & 7) + 3) < SLOBYTE(result._M_refcount._M_pi)
    || !LOBYTE(result._M_refcount._M_pi) )
  {
    _InterlockedAdd((volatile signed __int32 *)p_M_finish, 1u);
    goto LABEL_15;
  }
LABEL_26:
  result._M_ptr = (std::__shared_ptr<common::milog::MilogContext,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(p_M_finish, v5);
LABEL_27:
  v9 = &result._M_ptr->str_vec_._M_impl._M_finish;
  v10 = *(_BYTE *)(((unsigned __int64)&result._M_ptr->str_vec_._M_impl._M_finish >> 3) + 0x7FFF8000);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(((LOBYTE(result._M_ptr) + 8) & 7u) + 3);
  if ( (char)(((LOBYTE(result._M_ptr) + 8) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(v9);
    goto LABEL_31;
  }
  ++LODWORD(result._M_ptr->str_vec_._M_impl._M_finish);
LABEL_15:
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
    goto LABEL_21;
  v9 = (std::_Vector_base<char const*>::pointer *)(v3 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_32;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v9 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF);
    goto LABEL_20;
  }
LABEL_31:
  __asan_report_store4(v9, v5);
LABEL_32:
  v11 = *(_BYTE *)(((v3 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 8) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(v3 + 8);
    goto LABEL_36;
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 8);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 8) = result._M_refcount._M_pi;
LABEL_20:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
LABEL_36:
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    v12 = v3;
    __asan_report_load8(v3);
    goto LABEL_47;
  }
  v12 = *(_QWORD *)v3 + 16LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
LABEL_47:
    __asan_report_load8(v12);
    goto LABEL_48;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  v12 = v3 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_49;
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v12 >> 3) + 0x7FFF8000);
  if ( (char)((v12 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
  {
    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF);
    goto LABEL_42;
  }
LABEL_48:
  __asan_report_store4(v12, v5);
LABEL_49:
  v14 = *(_BYTE *)(((v3 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 12) & 7) + 3) >= v14 && v14 )
  {
    __asan_report_load4(v3 + 12);
LABEL_53:
    v13 = v3;
    __asan_report_load8(v3);
LABEL_54:
    v15 = (struct _Unwind_Exception *)__asan_report_load8(v13);
    v16 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 - 24);
    if ( v16 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v16);
    __asan_handle_no_return(v16);
    _Unwind_Resume(v15);
  }
  LODWORD(result._M_ptr) = *(_DWORD *)(v3 + 12);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr)
                                                                                               - 1);
  *(_DWORD *)(v3 + 12) = result._M_refcount._M_pi;
LABEL_42:
  if ( LODWORD(result._M_ptr) != 1 )
    goto LABEL_21;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    goto LABEL_53;
  v13 = *(_QWORD *)v3 + 24LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 24LL))(v3);
LABEL_21:
  if ( v17 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = v1;
  return result;
};

// Line 102: range 000000000C9A9228-000000000C9A949E
int32_t __fastcall common::milog::MilogContextBox::push(const char *str)
{
  const char *v1; // rsi
  unsigned __int64 v3; // rbx
  _BYTE *v4; // r15
  unsigned __int64 v5; // r12
  common::milog::MilogContext *v6; // rdi
  __int64 v7; // rax
  int32_t v8; // r13d
  unsigned __int64 v9; // rbp
  volatile signed __int32 *v10; // rdi
  char v11; // dl
  signed __int32 v12; // eax
  char v14; // dl
  unsigned __int64 v15; // rdi
  char v16; // dl
  signed __int32 v17; // eax
  unsigned __int64 v18; // rdi
  char v19; // dl
  struct _Unwind_Exception *v20; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v21; // rdi
  _BYTE v22[120]; // [rsp+0h] [rbp-78h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v3 = v7;
  }
  v4 = (_BYTE *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 context_ptr:103";
  *(_QWORD *)(v3 + 16) = common::milog::MilogContextBox::push;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::milog::MilogContextBox::getContext();
  v6 = *(common::milog::MilogContext **)(v3 + 32);
  if ( v6 )
  {
    v1 = str;
    v8 = common::milog::MilogContext::push(v6, str);
  }
  else
  {
    v8 = -1;
  }
  v9 = *(_QWORD *)(v3 + 40);
  if ( v9 )
  {
    v10 = (volatile signed __int32 *)(v9 + 8);
    if ( &_pthread_key_create )
    {
      v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v10 & 7) + 3) < v11 || !v11 )
      {
        v12 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
        goto LABEL_11;
      }
      __asan_report_store4(v10, v1);
    }
    v14 = *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v9 + 8) & 7) + 3) >= v14 && v14 )
    {
      __asan_report_load4(v9 + 8);
      goto LABEL_21;
    }
    v12 = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v9 + 8) = v12 - 1;
LABEL_11:
    if ( v12 != 1 )
      goto LABEL_12;
LABEL_21:
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v15 = v9;
      __asan_report_load8(v9);
    }
    else
    {
      v15 = *(_QWORD *)v9 + 16LL;
      if ( !*(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
        v15 = v9 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_34;
        v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
        if ( (char)((v15 & 7) + 3) < v16 || !v16 )
        {
          v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF);
          goto LABEL_27;
        }
LABEL_33:
        __asan_report_store4(v15, v1);
LABEL_34:
        v19 = *(_BYTE *)(((v9 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v9 + 12) & 7) + 3) >= v19 && v19 )
        {
          __asan_report_load4(v9 + 12);
          goto LABEL_38;
        }
        v17 = *(_DWORD *)(v9 + 12);
        *(_DWORD *)(v9 + 12) = v17 - 1;
LABEL_27:
        if ( v17 != 1 )
          goto LABEL_12;
        if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          v18 = *(_QWORD *)v9 + 24LL;
          if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 24LL))(v9);
            goto LABEL_12;
          }
LABEL_39:
          v20 = (struct _Unwind_Exception *)__asan_report_load8(v18);
          v21 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v4 - 3);
          if ( v21 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v21);
          __asan_handle_no_return(v21);
          _Unwind_Resume(v20);
        }
LABEL_38:
        v18 = v9;
        __asan_report_load8(v9);
        goto LABEL_39;
      }
    }
    __asan_report_load8(v15);
    goto LABEL_33;
  }
LABEL_12:
  if ( v22 == (_BYTE *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v8;
};

// Line 124: range 000000000C9A9A2E-000000000C9A9CBF
// local variable allocation has failed, the output may be wrong!
int32_t __fastcall common::milog::MilogContextBox::writeContextToBuf(
        char *buf,
        uint32_t buf_len,
        uint32_t *context_len)
{
  unsigned __int64 v4; // rbx
  char *v5; // r14
  unsigned __int64 v6; // rbp
  common::milog::MilogContext *v7; // rdi
  uint32_t v8; // edx
  __int64 v9; // rax
  int32_t v10; // r13d
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
  char v25[120]; // [rsp+10h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v4 = v9;
  }
  v5 = (char *)(v4 + 64);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 context_ptr:125";
  *(_QWORD *)(v4 + 16) = common::milog::MilogContextBox::writeContextToBuf;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::milog::MilogContextBox::getContext();
  v7 = *(common::milog::MilogContext **)(v4 + 32);
  if ( v7 )
  {
    v8 = buf_len;
    *(_QWORD *)&buf_len = buf;
    v10 = common::milog::MilogContext::writeContextToBuf(v7, buf, v8, context_len);
  }
  else
  {
    v10 = -1;
  }
  v11 = *(_QWORD *)(v4 + 40);
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)(v11 + 8);
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
      {
        v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
        goto LABEL_11;
      }
      __asan_report_store4(v12, *(_QWORD *)&buf_len);
    }
    v16 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v11 + 8) & 7) + 3) >= v16 && v16 )
    {
      __asan_report_load4(v11 + 8);
      goto LABEL_21;
    }
    v14 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v14 - 1;
LABEL_11:
    if ( v14 != 1 )
      goto LABEL_12;
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
        __asan_report_store4(v17, *(_QWORD *)&buf_len);
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
          goto LABEL_12;
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          v20 = *(_QWORD *)v11 + 24LL;
          if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 24LL))(v11);
            goto LABEL_12;
          }
LABEL_39:
          v22 = (struct _Unwind_Exception *)__asan_report_load8(v20);
          v23 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)v5 - 3);
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
LABEL_12:
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v10;
};

// Line 136: range 000000000C9A94A4-000000000C9A96EB
void common::milog::MilogContextHolder::MilogContextHolder(
        common::milog::MilogContextHolder *const this,
        const char *format,
        ...)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  unsigned __int64 v14; // rbp
  _DWORD *v15; // r12
  char v16; // al
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  const char *v20; // rdx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rdx
  _BYTE v26[96]; // [rsp+0h] [rbp-138h] BYREF
  char v27; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-C8h]
  __int64 v29; // [rsp+78h] [rbp-C0h]
  __int64 v30; // [rsp+80h] [rbp-B8h]
  __int64 v31; // [rsp+88h] [rbp-B0h]
  __int128 v32; // [rsp+90h] [rbp-A8h]
  __int128 v33; // [rsp+A0h] [rbp-98h]
  __int128 v34; // [rsp+B0h] [rbp-88h]
  __int128 v35; // [rsp+C0h] [rbp-78h]
  __int128 v36; // [rsp+D0h] [rbp-68h]
  __int128 v37; // [rsp+E0h] [rbp-58h]
  __int128 v38; // [rsp+F0h] [rbp-48h]
  __int128 v39; // [rsp+100h] [rbp-38h]
  char v40; // [rsp+140h] [rbp+8h] BYREF

  v28 = v2;
  v29 = v3;
  v30 = v4;
  v31 = v5;
  v32 = v6;
  v33 = v7;
  v34 = v8;
  v35 = v9;
  v36 = v10;
  v37 = v11;
  v38 = v12;
  v39 = v13;
  v14 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v23 = __asan_stack_malloc_1(96LL);
    if ( v23 )
      v14 = v23;
  }
  *(_QWORD *)v14 = 1102416563LL;
  *(_QWORD *)(v14 + 8) = "1 32 24 8 args:141";
  *(_QWORD *)(v14 + 16) = common::milog::MilogContextHolder::MilogContextHolder;
  v15 = (_DWORD *)(v14 >> 3);
  v15[536862720] = -235802127;
  v15[536862721] = -218103808;
  v15[536862722] = -202116109;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_need_pop >> 3) + 0x7FFF8000);
  v17 = (unsigned __int8)this & 7;
  if ( v16 <= (char)v17 && v16 )
  {
    __asan_report_store1(&this->is_need_pop, format, v17);
LABEL_15:
    __asan_report_store1(this, format, v19);
    goto LABEL_16;
  }
  this->is_need_pop = 0;
  v18 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v19 = (unsigned __int8)this & 7;
  if ( v18 <= (char)v19 && v18 )
    goto LABEL_15;
  this->buf_[0] = 0;
  if ( !format )
    goto LABEL_10;
  *(_DWORD *)(v14 + 32) = 16;
  *(_DWORD *)(v14 + 36) = 48;
  *(_QWORD *)(v14 + 40) = &v40;
  *(_QWORD *)(v14 + 48) = &v27;
  v20 = format;
  format = (const char *)256;
  vsnprintf(this->buf_, 0x100uLL, v20, (___va_list_tag *)(v14 + 32));
  v21 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  v22 = (unsigned __int8)this & 7;
  if ( v21 > (char)v22 || !v21 )
  {
    if ( !this->buf_[0] )
      goto LABEL_10;
    goto LABEL_17;
  }
LABEL_16:
  __asan_report_load1(this, format, v22);
LABEL_17:
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_need_pop >> 3) + 0x7FFF8000);
  v25 = (unsigned __int8)this & 7;
  if ( v24 <= (char)v25 && v24 )
  {
    __asan_report_store1(&this->is_need_pop, format, v25);
    goto LABEL_21;
  }
  this->is_need_pop = 1;
  common::milog::MilogContextBox::push(this->buf_);
LABEL_10:
  if ( v26 == (_BYTE *)v14 )
  {
    *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v14 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_21:
  *(_QWORD *)v14 = 1172321806LL;
  *(_QWORD *)((v14 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v14 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 152: range 000000000C9A96F0-000000000C9A99E4
void __fastcall common::milog::MilogContextHolder::MilogContextHolder(
        common::milog::MilogContextHolder *const this,
        const std::string *data)
{
  __int64 v2; // rdx
  common::milog::MilogContextHolder *p_M_string_length; // rax

  v2 = *(unsigned __int8 *)(((unsigned __int64)&this->is_need_pop >> 3) + 0x7FFF8000);
  if ( (char)v2 <= ((unsigned __int8)this & 7) && (_BYTE)v2 )
  {
    p_M_string_length = (common::milog::MilogContextHolder *)__asan_report_store1(&this->is_need_pop, data, v2);
  }
  else
  {
    this->is_need_pop = 0;
    p_M_string_length = (common::milog::MilogContextHolder *)&data->_M_string_length;
    if ( !*(_BYTE *)(((unsigned __int64)&data->_M_string_length >> 3) + 0x7FFF8000) )
    {
      if ( !data->_M_string_length )
        return;
      goto LABEL_8;
    }
  }
  this = p_M_string_length;
  __asan_report_load8(p_M_string_length);
LABEL_8:
  this->is_need_pop = 1;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(data);
    JUMPOUT(0xC9A9777LL);
  }
  common::milog::MilogContextBox::push(data->_M_dataplus._M_p);
};

// Line 160: range 000000000C9A99EA-000000000C9A9A2C
void __fastcall common::milog::MilogContextHolder::~MilogContextHolder(common::milog::MilogContextHolder *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v2 = *(unsigned __int8 *)(((unsigned __int64)&this->is_need_pop >> 3) + 0x7FFF8000);
  if ( (char)v2 <= ((unsigned __int8)this & 7) && (_BYTE)v2 )
  {
    __asan_report_load1(&this->is_need_pop, v1, v2);
    goto LABEL_6;
  }
  if ( this->is_need_pop )
LABEL_6:
    common::milog::MilogContextBox::pop();
};

// Line 167: range 000000000C9A9CC4-000000000C9A9CDB
void __cdecl GLOBAL__sub_I_milog_context_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 167: range 000000000C9A85F0-000000000C9A86D9
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/milog_context.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, &std::__ioinit);
          JUMPOUT(0xC9A8683LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
