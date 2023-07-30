// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/service_base.cpp

// Line 25: range 0000000014E5B3A2-0000000014E5B445
void __cdecl _tls_init_2()
{
  if ( !*(_BYTE *)(__readfsqword(0) - 632) )
  {
    *(_BYTE *)(__readfsqword(0) - 632) = 1;
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::shared_ptr<common::tools::TimerMgr>::~shared_ptr,
      (char *)&ThreadLocal::timer_mgr_ptr + __readfsqword(0),
      &_dso_handle);
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::shared_ptr<ConfigBase>::~shared_ptr,
      (char *)&ThreadLocal::config_base_ptr + __readfsqword(0),
      &_dso_handle);
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::shared_ptr<common::minet::Packet>::~shared_ptr,
      (char *)&ThreadLocal::cur_packet_ptr + __readfsqword(0),
      &_dso_handle);
  }
};

// Line 44: range 0000000014E5B44A-0000000014E5BCF2
int32_t __cdecl ThreadLocal::init()
{
  unsigned __int64 v0; // r13
  unsigned __int64 v1; // r14
  common::tools::TimerMgr *v2; // r15
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rbp
  bool *v5; // rdi
  char v6; // al
  std::forward_iterator_tag v7; // cl
  char v8; // al
  char v9; // dl
  void **v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rdi
  char v16; // al
  char v17; // dl
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r13
  volatile signed __int32 *v20; // rdi
  char v21; // dl
  signed __int32 v22; // eax
  int32_t result; // eax
  char v24; // dl
  unsigned __int64 v25; // rdi
  char v26; // dl
  signed __int32 v27; // eax
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // dl
  int v31; // eax
  unsigned __int64 v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  unsigned __int64 v35; // rdi
  char v36; // dl
  common::tools::TimerMgr *v37; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+18h] [rbp-C0h]
  std::string type; // [rsp+20h] [rbp-B8h] BYREF
  char v40[152]; // [rsp+40h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_1(96LL);
    if ( v13 )
      v3 = v13;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v3 + 16) = ThreadLocal::init;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  v5 = &common::tools::perf::MemoryPerf::is_record;
  v6 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v6 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v6 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
LABEL_21:
    __asan_report_store4(v5);
LABEL_22:
    __asan_report_store4(v5);
    goto LABEL_23;
  }
  if ( !common::tools::perf::MemoryPerf::is_record )
  {
    std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,std::allocator<common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,std::allocator<common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2> > *)(v3 + 48));
    v14 = *(_QWORD *)(v3 + 72);
    v15 = v14 + 8;
    v16 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
    if ( v16 && v16 <= 3 )
    {
      __asan_report_store4(v15);
    }
    else
    {
      *(_DWORD *)(v14 + 8) = 1;
      v15 = v14 + 12;
      v17 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v14 + 12) & 7) + 3) < v17 || !v17 )
      {
        *(_DWORD *)(v14 + 12) = 1;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v14 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,std::allocator<common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          v1 = v14 + 16;
          common::tools::TimerMgr::TimerMgr((common::tools::TimerMgr *const)(v14 + 16));
LABEL_41:
          *(_QWORD *)(v3 + 72) = 0LL;
          v38 = v14;
          v37 = (common::tools::TimerMgr *)v1;
          goto LABEL_31;
        }
LABEL_40:
        __asan_report_store8(v14);
        goto LABEL_41;
      }
    }
    __asan_report_store4(v15);
    goto LABEL_40;
  }
  std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,common::tools::perf::allocator<common::tools::TimerMgr,common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2>,common::tools::TimerMgr>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,common::tools::perf::allocator<common::tools::TimerMgr,common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2>,common::tools::TimerMgr> *)(v3 + 48));
  v0 = *(_QWORD *)(v3 + 72);
  v5 = (bool *)(v0 + 8);
  v8 = *(_BYTE *)(((v0 + 8) >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_21;
  *(_DWORD *)(v0 + 8) = 1;
  v5 = (bool *)(v0 + 12);
  v9 = *(_BYTE *)(((v0 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v0 + 12) & 7) + 3) >= v9 && v9 )
    goto LABEL_22;
  *(_DWORD *)(v0 + 12) = 1;
  if ( *(_BYTE *)((v0 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v10 = (void **)v0;
    __asan_report_store8(v0);
    goto LABEL_24;
  }
  *(_QWORD *)v0 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::TimerMgr,common::tools::perf::allocator<common::tools::TimerMgr,common::tools::TimerMgr>,(__gnu_cxx::_Lock_policy)2>
                + 2;
  v2 = (common::tools::TimerMgr *)(v0 + 16);
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    v10 = &`typeinfo for'common::tools::TimerMgr + 1;
    if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::tools::TimerMgr + 1) >> 3) + 0x7FFF8000) )
    {
      v1 = (unsigned __int64)*(&`typeinfo for'common::tools::TimerMgr + 1);
      v10 = (void **)v1;
      v11 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
      if ( v11 > (*(_BYTE *)(&`typeinfo for'common::tools::TimerMgr + 1) & 7) || !v11 )
      {
        if ( *(_BYTE *)v1 != 42 )
          goto LABEL_15;
        goto LABEL_26;
      }
LABEL_25:
      __asan_report_load1(v10);
LABEL_26:
      ++v1;
LABEL_15:
      type._M_dataplus._M_p = type._anon_0._M_local_buf;
      if ( v1 )
        v12 = v1 + strlen((const char *)v1);
      else
        v12 = -1LL;
      std::string::_M_construct<char const*>(&type, (const char *)v1, (const char *)v12, v7);
      common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &type, 0xA0uLL);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
        operator delete(type._M_dataplus._M_p);
      goto LABEL_30;
    }
LABEL_24:
    __asan_report_load8(v10);
    goto LABEL_25;
  }
LABEL_30:
  common::tools::TimerMgr::TimerMgr(v2);
  *(_QWORD *)(v3 + 72) = 0LL;
  v38 = v0;
  v37 = v2;
LABEL_31:
  _tls_init_2();
  v18 = (unsigned __int64)&ThreadLocal::timer_mgr_ptr + __readfsqword(0);
  *(_QWORD *)v18 = v37;
  v19 = *(_QWORD *)(v18 + 8);
  *(_QWORD *)(v18 + 8) = v38;
  if ( v19 )
  {
    v20 = (volatile signed __int32 *)(v19 + 8);
    if ( &_pthread_key_create )
    {
      v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v20 & 7) + 3) < v21 || !v21 )
      {
        v22 = _InterlockedExchangeAdd(v20, 0xFFFFFFFF);
        goto LABEL_47;
      }
      __asan_report_store4(v20);
    }
    v24 = *(_BYTE *)(((v19 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v19 + 8) & 7) + 3) >= v24 && v24 )
    {
      __asan_report_load4(v19 + 8);
      goto LABEL_59;
    }
    v22 = *(_DWORD *)(v19 + 8);
    *(_DWORD *)(v19 + 8) = v22 - 1;
LABEL_47:
    if ( v22 != 1 )
      goto LABEL_50;
LABEL_59:
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
    {
      v25 = v19;
      __asan_report_load8(v19);
    }
    else
    {
      v25 = *(_QWORD *)v19 + 16LL;
      if ( !*(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 16LL))(v19);
        v25 = v19 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_72;
        v26 = *(_BYTE *)((v25 >> 3) + 0x7FFF8000);
        if ( (char)((v25 & 7) + 3) < v26 || !v26 )
        {
          v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v25, 0xFFFFFFFF);
          goto LABEL_65;
        }
LABEL_71:
        __asan_report_store4(v25);
LABEL_72:
        v29 = *(_BYTE *)(((v19 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v19 + 12) & 7) + 3) >= v29 && v29 )
        {
          __asan_report_load4(v19 + 12);
          goto LABEL_76;
        }
        v27 = *(_DWORD *)(v19 + 12);
        *(_DWORD *)(v19 + 12) = v27 - 1;
LABEL_65:
        if ( v27 != 1 )
          goto LABEL_50;
        if ( !*(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        {
          v28 = *(_QWORD *)v19 + 24LL;
          if ( !*(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v19 + 24LL))(v19);
            goto LABEL_50;
          }
LABEL_77:
          __asan_report_load8(v28);
          __asan_report_store4(v28);
          v30 = *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000);
          if ( (char)(((v18 + 8) & 7) + 3) >= v30 && v30 )
          {
            __asan_report_load4(v18 + 8);
          }
          else
          {
            v31 = *(_DWORD *)(v18 + 8);
            *(_DWORD *)(v18 + 8) = v31 - 1;
            if ( v31 != 1 )
              goto LABEL_50;
          }
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          {
            v32 = v18;
            __asan_report_load8(v18);
          }
          else
          {
            v32 = *(_QWORD *)v18 + 16LL;
            if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
              v32 = v18 + 12;
              if ( !&_pthread_key_create )
                goto LABEL_94;
              v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
              if ( (char)((v32 & 7) + 3) < v33 || !v33 )
              {
                v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF);
                goto LABEL_87;
              }
LABEL_93:
              __asan_report_store4(v32);
LABEL_94:
              v36 = *(_BYTE *)(((v18 + 12) >> 3) + 0x7FFF8000);
              if ( (char)(((v18 + 12) & 7) + 3) >= v36 && v36 )
              {
                __asan_report_load4(v18 + 12);
                goto LABEL_98;
              }
              v34 = *(_DWORD *)(v18 + 12);
              *(_DWORD *)(v18 + 12) = v34 - 1;
LABEL_87:
              if ( v34 != 1 )
                goto LABEL_50;
              if ( !*(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              {
                v35 = *(_QWORD *)v18 + 24LL;
                if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
                {
                  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 24LL))(v18);
                  goto LABEL_50;
                }
LABEL_99:
                __asan_report_load8(v35);
                goto LABEL_100;
              }
LABEL_98:
              v35 = v18;
              __asan_report_load8(v18);
              goto LABEL_99;
            }
          }
          __asan_report_load8(v32);
          goto LABEL_93;
        }
LABEL_76:
        v28 = v19;
        __asan_report_load8(v19);
        goto LABEL_77;
      }
    }
    __asan_report_load8(v25);
    goto LABEL_71;
  }
LABEL_50:
  _tls_init_2();
  if ( *(std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&ThreadLocal::timer_mgr_ptr._M_ptr
                                                                                               + __readfsqword(0)) )
  {
    result = 0;
    goto LABEL_52;
  }
LABEL_100:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)&type,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/service_base.cpp",
    "init",
    48);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&type, "timer_mgr_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&type);
  result = -1;
LABEL_52:
  if ( v40 == (char *)v3 )
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

// Line 55: range 0000000014E5BCF8-0000000014E61193
void __cdecl ThreadLocal::fini()
{
  _QWORD *v0; // rbx
  volatile signed __int32 *v1; // rbp
  volatile signed __int32 *v2; // rdi
  char v3; // dl
  signed __int32 v4; // eax
  _QWORD *v5; // rbx
  volatile signed __int32 *v6; // rdi
  char v7; // dl
  signed __int32 v8; // eax
  _QWORD *v9; // rbx
  volatile signed __int32 *v10; // rdi
  char v11; // dl
  signed __int32 v12; // eax
  char v13; // dl
  volatile signed __int32 *v14; // rdi
  char v15; // dl
  signed __int32 v16; // eax
  char v17; // dl
  char v18; // dl
  volatile signed __int32 *v19; // rdi
  char v20; // dl
  signed __int32 v21; // eax
  char v22; // dl
  char v23; // dl
  volatile signed __int32 *v24; // rdi
  char v25; // dl
  signed __int32 v26; // eax
  unsigned __int64 v27; // rdi
  char v28; // dl

  _tls_init_2();
  v0 = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&ThreadLocal::timer_mgr_ptr._M_ptr
                                                                                              + __readfsqword(0));
  *v0 = 0LL;
  v1 = (volatile signed __int32 *)v0[1];
  v0[1] = 0LL;
  if ( v1 )
  {
    v2 = v1 + 2;
    if ( &_pthread_key_create )
    {
      v3 = *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v2 & 7) + 3) < v3 || !v3 )
      {
        v4 = _InterlockedExchangeAdd(v2, 0xFFFFFFFF);
        goto LABEL_6;
      }
      __asan_report_store4(v2);
    }
    v13 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v13 && v13 )
    {
      __asan_report_load4(v1 + 2);
      goto LABEL_25;
    }
    v4 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v4 - 1;
LABEL_6:
    if ( v4 != 1 )
      goto LABEL_7;
LABEL_25:
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      v14 = v1;
      __asan_report_load8(v1);
    }
    else
    {
      v14 = (volatile signed __int32 *)(*(_QWORD *)v1 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
        v14 = v1 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_38;
        v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v14 & 7) + 3) < v15 || !v15 )
        {
          v16 = _InterlockedExchangeAdd(v14, 0xFFFFFFFF);
          goto LABEL_31;
        }
LABEL_37:
        __asan_report_store4(v14);
LABEL_38:
        v17 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v17 && v17 )
        {
          __asan_report_load4(v1 + 3);
          goto LABEL_42;
        }
        v16 = *((_DWORD *)v1 + 3);
        *((_DWORD *)v1 + 3) = v16 - 1;
LABEL_31:
        if ( v16 != 1 )
          goto LABEL_7;
        if ( !*(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        {
          v6 = (volatile signed __int32 *)(*(_QWORD *)v1 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
            goto LABEL_7;
          }
LABEL_43:
          __asan_report_load8(v6);
          goto LABEL_44;
        }
LABEL_42:
        v6 = v1;
        __asan_report_load8(v1);
        goto LABEL_43;
      }
    }
    __asan_report_load8(v14);
    goto LABEL_37;
  }
LABEL_7:
  _tls_init_2();
  v5 = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&ThreadLocal::config_base_ptr._M_ptr
                                                                                 + __readfsqword(0));
  *v5 = 0LL;
  v1 = (volatile signed __int32 *)v5[1];
  v5[1] = 0LL;
  if ( v1 )
  {
    v6 = v1 + 2;
    if ( !&_pthread_key_create )
      goto LABEL_45;
    v7 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v6 & 7) + 3) < v7 || !v7 )
    {
      v8 = _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
      goto LABEL_12;
    }
LABEL_44:
    __asan_report_store4(v6);
LABEL_45:
    v18 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v18 && v18 )
    {
      __asan_report_load4(v1 + 2);
      goto LABEL_49;
    }
    v8 = *((_DWORD *)v1 + 2);
    *((_DWORD *)v1 + 2) = v8 - 1;
LABEL_12:
    if ( v8 != 1 )
      goto LABEL_13;
LABEL_49:
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      v19 = v1;
      __asan_report_load8(v1);
    }
    else
    {
      v19 = (volatile signed __int32 *)(*(_QWORD *)v1 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
        v19 = v1 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_62;
        v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v19 & 7) + 3) < v20 || !v20 )
        {
          v21 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
          goto LABEL_55;
        }
LABEL_61:
        __asan_report_store4(v19);
LABEL_62:
        v22 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v22 && v22 )
        {
          __asan_report_load4(v1 + 3);
          goto LABEL_66;
        }
        v21 = *((_DWORD *)v1 + 3);
        *((_DWORD *)v1 + 3) = v21 - 1;
LABEL_55:
        if ( v21 != 1 )
          goto LABEL_13;
        if ( !*(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
        {
          v10 = (volatile signed __int32 *)(*(_QWORD *)v1 + 24LL);
          if ( !*(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
            goto LABEL_13;
          }
LABEL_67:
          __asan_report_load8(v10);
          goto LABEL_68;
        }
LABEL_66:
        v10 = v1;
        __asan_report_load8(v1);
        goto LABEL_67;
      }
    }
    __asan_report_load8(v19);
    goto LABEL_61;
  }
LABEL_13:
  _tls_init_2();
  v9 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)((char *)&ThreadLocal::cur_packet_ptr._M_ptr
                                                                                            + __readfsqword(0));
  *v9 = 0LL;
  v1 = (volatile signed __int32 *)v9[1];
  v9[1] = 0LL;
  if ( !v1 )
    return;
  v10 = v1 + 2;
  if ( !&_pthread_key_create )
    goto LABEL_69;
  v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v10 & 7) + 3) < v11 || !v11 )
  {
    v12 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
    goto LABEL_18;
  }
LABEL_68:
  __asan_report_store4(v10);
LABEL_69:
  v23 = *(_BYTE *)(((unsigned __int64)(v1 + 2) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v1 + 8) & 7) + 3) >= v23 && v23 )
  {
    __asan_report_load4(v1 + 2);
    goto LABEL_73;
  }
  v12 = *((_DWORD *)v1 + 2);
  *((_DWORD *)v1 + 2) = v12 - 1;
LABEL_18:
  if ( v12 != 1 )
    return;
LABEL_73:
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    v24 = v1;
    __asan_report_load8(v1);
    goto LABEL_84;
  }
  v24 = (volatile signed __int32 *)(*(_QWORD *)v1 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
LABEL_84:
    __asan_report_load8(v24);
    goto LABEL_85;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
  v24 = v1 + 3;
  if ( !&_pthread_key_create )
    goto LABEL_86;
  v25 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v24 & 7) + 3) < v25 || !v25 )
  {
    v26 = _InterlockedExchangeAdd(v24, 0xFFFFFFFF);
    goto LABEL_79;
  }
LABEL_85:
  __asan_report_store4(v24);
LABEL_86:
  v28 = *(_BYTE *)(((unsigned __int64)(v1 + 3) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v1 + 12) & 7) + 3) >= v28 && v28 )
  {
    __asan_report_load4(v1 + 3);
    goto LABEL_90;
  }
  v26 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = v26 - 1;
LABEL_79:
  if ( v26 == 1 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      v27 = *(_QWORD *)v1 + 24LL;
      if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
        return;
      }
LABEL_91:
      __asan_report_load8(v27);
      JUMPOUT(0x14E5C209LL);
    }
LABEL_90:
    v27 = (unsigned __int64)v1;
    __asan_report_load8(v1);
    goto LABEL_91;
  }
};

// Line 67: range 0000000014E59D2E-0000000014E5B39D
int32_t __fastcall ServiceBase::init(ServiceBase *const this, common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  std::string::size_type M_allocated_capacity; // rbp
  std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >> *i; // r13
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_finish; // r14
  __m128i v6; // xmm0
  size_t v8; // rbx
  char v9; // dl
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  std::atomic<ServiceBase::Status> *v12; // rdi
  void *v13; // rdi
  char v14; // dl
  int32_t v15; // ebx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_name; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v18; // rax
  uint32_t *p_thread_num; // rdi
  char v20; // al
  char *v21; // rdi
  char *v22; // rdi
  unsigned int v23; // eax
  std::forward_iterator_tag v24; // cl
  char v25; // dl
  char *v26; // rdi
  unsigned __int64 M_head_impl; // rbp
  unsigned int v28; // eax
  char v29; // cl
  char *v30; // rdi
  char v31; // al
  uint32_t thread_num; // esi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_start; // rdx
  unsigned __int64 v34; // rax
  size_t v35; // rdx
  std::string::size_type v36; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v38; // rdi
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  __m128i *p_M_finish; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // rax
  unsigned int *v49; // rdi
  unsigned int *v50; // rdi
  char v51; // al
  char v52; // dl
  const unsigned int *v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int128 v62; // rax
  char v63; // dl
  struct _Unwind_Exception *v64; // rbx
  unsigned int v66; // ebp
  char *v67; // rdi
  char v68; // al
  std::list<std::pair<std::string,common::tools::PTree>> *j; // rbp
  void *v70; // rdi
  uint32_t LogLevelByName; // eax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::iterator v72; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::iterator v73; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,StatLogMgr> >::_Base_ptr M_node; // rdi
  std::_Rb_tree_iterator<std::pair<unsigned int const,StatLogMgr> >::_Base_ptr v75; // rcx
  char v76; // r8
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::iterator v77; // rax
  char *v78; // rdi
  void *v79; // rdi
  std::list<std::pair<std::string,common::tools::PTree>> **v80; // r13
  std::size_t *p_M_size; // rdi
  const common::tools::PTree *v82; // rbp
  std::forward_iterator_tag v83; // cl
  char v84; // dl
  void *p_packet_queue_max_size; // rdi
  char v86; // dl
  char v87; // al
  std::deque<std::shared_ptr<common::minet::Packet>>::iterator v88; // [rsp-20h] [rbp-288h]
  std::deque<std::shared_ptr<common::minet::Packet>>::iterator v89; // [rsp-20h] [rbp-288h]
  std::deque<std::shared_ptr<common::minet::Packet>>::iterator v90; // [rsp-20h] [rbp-288h]
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *__y; // [rsp+0h] [rbp-268h]
  std::_Rb_tree_header *__ya; // [rsp+0h] [rbp-268h]
  std::string *dest; // [rsp+8h] [rbp-260h]
  common::tools::PTree *pta; // [rsp+10h] [rbp-258h]
  unsigned __int64 v95; // [rsp+18h] [rbp-250h]
  _DWORD *v96; // [rsp+20h] [rbp-248h]
  std::atomic<ServiceBase::Status> *p_status; // [rsp+30h] [rbp-238h]
  std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >> *v98; // [rsp+38h] [rbp-230h]
  std::tuple<> v99; // [rsp+47h] [rbp-221h] BYREF
  std::tuple<unsigned int const&> v100; // [rsp+48h] [rbp-220h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> v101; // [rsp+50h] [rbp-218h] BYREF
  __int64 v102; // [rsp+70h] [rbp-1F8h]
  __int64 v103; // [rsp+78h] [rbp-1F0h]
  __int64 v104; // [rsp+80h] [rbp-1E8h]
  __int64 v105; // [rsp+88h] [rbp-1E0h]
  __m128i v106; // [rsp+90h] [rbp-1D8h] BYREF
  __m128i v107; // [rsp+A0h] [rbp-1C8h]
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *v108; // [rsp+B0h] [rbp-1B8h]
  __int64 v109; // [rsp+B8h] [rbp-1B0h]
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *v110; // [rsp+C0h] [rbp-1A8h]
  __int64 v111; // [rsp+C8h] [rbp-1A0h]
  __m128i v112; // [rsp+D0h] [rbp-198h] BYREF
  __m128i v113; // [rsp+E0h] [rbp-188h]
  char v114[376]; // [rsp+F0h] [rbp-178h] BYREF

  pta = pt;
  v95 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_3(320LL);
    if ( v11 )
      v95 = v11;
  }
  v8 = v95 + 320;
  *(_QWORD *)v95 = 1102416563LL;
  *(_QWORD *)(v95 + 8) = "5 48 4 13 log_level:117 64 32 6 __last 128 32 7 __first 192 32 6 __last 256 32 7 __first";
  *(_QWORD *)(v95 + 16) = ServiceBase::init;
  v96 = (_DWORD *)(v95 >> 3);
  v96[536862720] = -235802127;
  v96[536862721] = -234556943;
  v96[536862723] = -218959118;
  v96[536862725] = -218959118;
  v96[536862727] = -218959118;
  v96[536862729] = -202116109;
  p_status = &this->status_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(&this->status_);
  }
  else if ( this->status_._M_i == STATUS_NONE )
  {
    i = (std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >> *)(v95 + 192);
    *(_QWORD *)(v95 + 192) = v95 + 208;
    std::string::_M_construct<char const*>((std::string *const)(v95 + 192), &byte_1AE3F22E[-14], byte_1AE3F22E, v2);
    common::tools::PTree::get<std::string>((std::string *)(v95 + 256), pt, (const std::string *)(v95 + 192));
    goto LABEL_19;
  }
  pt = (common::tools::PTree *)&common::milog::MiLogDefault::default_log_obj_;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v95 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/service_base.cpp",
    "init",
    71);
  M_allocated_capacity = *(_QWORD *)(v95 + 280);
  if ( *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    v12 = *(std::atomic<ServiceBase::Status> **)(v95 + 280);
    __asan_report_load8(v12);
  }
  else
  {
    v12 = (std::atomic<ServiceBase::Status> *)(M_allocated_capacity + 8);
    if ( !*(_BYTE *)(((M_allocated_capacity + 8) >> 3) + 0x7FFF8000) )
    {
      v13 = *(void **)(M_allocated_capacity + 8);
      v8 = *(_DWORD *)M_allocated_capacity + 0x4000 - (int)v13;
      if ( v8 > 0x1A )
        v8 = 27LL;
      pt = (common::tools::PTree *)"can not do it while status=";
      memcpy(v13, "can not do it while status=", v8);
      *(_QWORD *)(M_allocated_capacity + 8) += v8;
      v12 = &this->status_;
      v14 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this + 52) & 7) + 3) < v14 || !v14 )
      {
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
          *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v95 + 280),
          this->status_._M_i);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 256));
        v15 = -1;
        goto LABEL_159;
      }
      goto LABEL_18;
    }
  }
  __asan_report_load8(v12);
LABEL_18:
  *(double *)v6.m128i_i64 = __asan_report_load4(v12);
LABEL_19:
  dest = &this->name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
  {
    p_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->name_;
    __asan_report_load8(dest);
LABEL_52:
    v35 = *(_QWORD *)(v95 + 264);
    if ( !v35 )
      goto LABEL_55;
    if ( v35 != 1 )
    {
      memcpy(p_name, pt, v35);
      goto LABEL_55;
    }
    v40 = *(_BYTE *)(((unsigned __int64)pt >> 3) + 0x7FFF8000);
    if ( v40 <= ((unsigned __int8)pt & 7) && v40 )
    {
      p_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)pt;
      __asan_report_load1(pt);
    }
    else
    {
      v41 = *(_BYTE *)(((unsigned __int64)p_name >> 3) + 0x7FFF8000);
      LOBYTE(v10) = (unsigned __int8)p_name & 7;
      if ( v41 > ((unsigned __int8)p_name & 7) || !v41 )
      {
        p_name->_M_local_buf[0] = (char)pt->impl_ptr_._M_t._M_t._M_head_impl;
LABEL_55:
        v36 = *(_QWORD *)(v95 + 264);
        p_M_string_length = &this->name_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->name_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->name_._M_string_length = v36;
          v38 = (std::string::size_type *)&this->name_._M_dataplus._M_p[v36];
          v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
          if ( v39 > ((unsigned __int8)v38 & 7) || !v39 )
          {
            *(_BYTE *)v38 = 0;
            goto LABEL_28;
          }
          goto LABEL_67;
        }
LABEL_66:
        v38 = p_M_string_length;
        *(double *)v6.m128i_i64 = __asan_report_store8(p_M_string_length);
LABEL_67:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v38);
LABEL_68:
        __asan_report_load8(p_anon_0);
        goto LABEL_69;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(p_name);
    goto LABEL_66;
  }
  p_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->name_._M_dataplus._M_p;
  pt = *(common::tools::PTree **)(v95 + 256);
  if ( pt == (common::tools::PTree *)(v95 + 272) )
    goto LABEL_52;
  if ( p_name != &this->name_._anon_0 )
  {
    p_anon_0 = &this->name_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->name_._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = this->name_._anon_0._M_allocated_capacity;
      goto LABEL_24;
    }
    goto LABEL_68;
  }
LABEL_69:
  p_name = 0LL;
LABEL_24:
  this->name_._M_dataplus._M_p = (std::string::pointer)pt;
  if ( *(_BYTE *)(((unsigned __int64)&this->name_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->name_._M_string_length);
    goto LABEL_71;
  }
  this->name_._M_string_length = *(_QWORD *)(v95 + 264);
  v18 = &this->name_._anon_0;
  v10 = (unsigned __int64)&this->name_._anon_0 >> 3;
  if ( *(_BYTE *)(v10 + 0x7FFF8000) )
  {
LABEL_71:
    *(double *)v6.m128i_i64 = __asan_report_store8(v18);
    goto LABEL_72;
  }
  this->name_._anon_0._M_allocated_capacity = *(_QWORD *)(v95 + 272);
  if ( !p_name )
  {
LABEL_72:
    *(_QWORD *)(v95 + 256) = v95 + 272;
    goto LABEL_28;
  }
  *(_QWORD *)(v95 + 256) = p_name;
  *(_QWORD *)(v95 + 272) = M_allocated_capacity;
LABEL_28:
  *(_QWORD *)(v95 + 264) = 0LL;
  p_thread_num = *(uint32_t **)(v95 + 256);
  v20 = *(_BYTE *)(((unsigned __int64)p_thread_num >> 3) + 0x7FFF8000);
  if ( v20 <= (*(_BYTE *)(v95 + 256) & 7) && v20 )
  {
    __asan_report_store1(p_thread_num);
LABEL_74:
    __asan_report_store4(p_thread_num);
LABEL_75:
    __asan_report_store4(p_thread_num);
LABEL_76:
    __asan_report_load4(p_thread_num);
LABEL_77:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v95 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "init",
      81);
    v42 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
    if ( v42 && v42 <= 3 )
      __asan_report_load4(&this->thread_num_);
    else
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)(v95 + 256),
        "invalid thread_num=%u",
        this->thread_num_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 256));
    v15 = -1;
    goto LABEL_159;
  }
  *(_BYTE *)p_thread_num = 0;
  v21 = *(char **)(v95 + 256);
  if ( v21 != (char *)(v95 + 272) )
    operator delete(v21);
  v22 = *(char **)(v95 + 192);
  if ( v22 != (char *)(v95 + 208) )
    operator delete(v22);
  *(_QWORD *)(v95 + 256) = v95 + 272;
  std::string::_M_construct<char const*>(
    (std::string *const)(v95 + 256),
    &byte_1AE3F274[-20],
    byte_1AE3F274,
    (std::forward_iterator_tag)v10);
  v23 = common::tools::PTree::get<unsigned int>(pta, (const std::string *)(v95 + 256), 1u);
  p_thread_num = &this->thread_num_;
  v25 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_74;
  this->thread_num_ = v23;
  v26 = *(char **)(v95 + 256);
  if ( v26 != (char *)(v95 + 272) )
    operator delete(v26);
  M_head_impl = v95 + 256;
  *(_QWORD *)(v95 + 256) = v95 + 272;
  std::string::_M_construct<char const*>((std::string *const)(v95 + 256), &byte_1AE3F2BF[-31], byte_1AE3F2BF, v24);
  v28 = common::tools::PTree::get<unsigned int>(pta, (const std::string *)(v95 + 256), 0);
  p_thread_num = &this->packet_queue_max_size_;
  v29 = *(_BYTE *)(((unsigned __int64)&this->packet_queue_max_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 44) & 7) + 3) >= v29 && v29 )
    goto LABEL_75;
  this->packet_queue_max_size_ = v28;
  v30 = *(char **)(v95 + 256);
  if ( v30 != (char *)(v95 + 272) )
    operator delete(v30);
  p_thread_num = &this->thread_num_;
  v31 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_76;
  thread_num = this->thread_num_;
  if ( thread_num - 1 > 0x7F )
    goto LABEL_77;
  __y = &this->packet_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->packet_queue_vec_._M_impl._M_finish);
    goto LABEL_83;
  }
  M_finish = this->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)__y >> 3) + 0x7FFF8000) )
  {
LABEL_83:
    v34 = __asan_report_load8(__y);
    goto LABEL_84;
  }
  M_start = this->packet_queue_vec_._M_impl._M_start;
  v34 = M_finish - M_start;
  if ( thread_num > v34 )
  {
LABEL_84:
    std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>>>::_M_default_append(
      __y,
      thread_num - v34);
    goto LABEL_85;
  }
  if ( thread_num < v34 )
  {
    v98 = &M_start[thread_num];
    if ( M_finish != v98 )
    {
      for ( i = &M_start[thread_num]; ; ++i )
      {
        if ( M_finish == i )
        {
LABEL_100:
          p_M_finish = (__m128i *)&this->packet_queue_vec_._M_impl._M_finish;
          if ( !*(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
          {
            this->packet_queue_vec_._M_impl._M_finish = v98;
            goto LABEL_85;
          }
          __asan_report_store8(p_M_finish);
LABEL_103:
          __asan_report_load8(p_M_finish);
          goto LABEL_104;
        }
        v49 = (unsigned int *)i;
        if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
          break;
        M_head_impl = (unsigned __int64)i->_M_t._M_t._M_head_impl;
        if ( i->_M_t._M_t._M_head_impl )
        {
          v49 = (unsigned int *)(M_head_impl + 48);
          if ( (*(_BYTE *)(((M_head_impl + 79) >> 3) + 0x7FFF8000) == 0
             || *(_BYTE *)(((M_head_impl + 79) >> 3) + 0x7FFF8000) > (unsigned __int8)((M_head_impl + 79) & 7))
            && *(char *)(((M_head_impl + 48) >> 3) + 0x7FFF8000) >= 0 )
          {
            v106 = _mm_loadu_si128((const __m128i *)(M_head_impl + 48));
            v107 = _mm_loadu_si128((const __m128i *)(M_head_impl + 64));
            if ( *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_head_impl + 47) & 7)
              || *(char *)(((M_head_impl + 16) >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_load_n(M_head_impl + 16, 32LL);
              goto LABEL_100;
            }
            goto LABEL_90;
          }
LABEL_89:
          __asan_report_load_n(v49, 32LL);
LABEL_90:
          v45 = *(_QWORD *)(M_head_impl + 24);
          v102 = *(_QWORD *)(M_head_impl + 16);
          v103 = v45;
          v47 = *(_QWORD *)(M_head_impl + 40);
          v104 = *(_QWORD *)(M_head_impl + 32);
          v46 = v104;
          v105 = v47;
          *(_QWORD *)(v8 - 64) = v102;
          *(_QWORD *)(v8 - 56) = v45;
          *(_QWORD *)(v8 - 48) = v46;
          *(_QWORD *)(v8 - 40) = v47;
          *(__m128i *)(v8 - 128) = _mm_load_si128(&v106);
          v48 = v107;
          *(__m128i *)(v8 - 112) = v107;
          *(__m128i *)&v88._M_last = v48;
          *(_OWORD *)&v88._M_cur = *(_OWORD *)(v8 - 128);
          std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux(
            (std::deque<std::shared_ptr<common::minet::Packet>> *const)M_head_impl,
            *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v8 - 64),
            v88);
          std::_Deque_base<std::shared_ptr<common::minet::Packet>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::Packet>> *const)M_head_impl);
          operator delete((void *)M_head_impl, 0x80uLL);
          continue;
        }
      }
      __asan_report_load8(i);
      goto LABEL_89;
    }
  }
LABEL_85:
  p_M_finish = (__m128i *)&this->packet_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
    goto LABEL_103;
  v44 = this->packet_queue_vec_._M_impl._M_start;
  p_M_finish = (__m128i *)&this->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(p_M_finish);
    goto LABEL_105;
  }
  __y = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)this->packet_queue_vec_._M_impl._M_finish;
  while ( 1 )
  {
    i = v44;
    if ( v44 == (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer)__y )
      break;
    p_M_finish = (__m128i *)&this->packet_queue_max_size_;
    v63 = *(_BYTE *)(((unsigned __int64)&this->packet_queue_max_size_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 44) & 7) + 3) >= v63 && v63 )
    {
LABEL_105:
      __asan_report_load4(p_M_finish);
LABEL_106:
      __asan_report_store8(p_M_finish);
LABEL_107:
      __asan_report_store8(p_M_finish);
LABEL_108:
      __asan_report_store8(p_M_finish);
LABEL_109:
      __asan_report_store8(p_M_finish);
LABEL_110:
      __asan_report_store8(p_M_finish);
LABEL_111:
      __asan_report_store8(p_M_finish);
LABEL_112:
      __asan_report_store8(p_M_finish);
LABEL_113:
      __asan_report_store8(p_M_finish);
LABEL_114:
      __asan_report_store8(p_M_finish);
      goto LABEL_115;
    }
    LODWORD(M_finish) = this->packet_queue_max_size_;
    M_head_impl = operator new(0x80uLL);
    p_M_finish = (__m128i *)M_head_impl;
    if ( *(_BYTE *)((M_head_impl >> 3) + 0x7FFF8000) )
      goto LABEL_106;
    *(_QWORD *)M_head_impl = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 8);
    if ( *(_BYTE *)(((M_head_impl + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_107;
    *(_QWORD *)(M_head_impl + 8) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 16);
    if ( *(_BYTE *)(((M_head_impl + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_108;
    *(_QWORD *)(M_head_impl + 16) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 24);
    if ( *(_BYTE *)(((M_head_impl + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_109;
    *(_QWORD *)(M_head_impl + 24) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 32);
    if ( *(_BYTE *)(((M_head_impl + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_110;
    *(_QWORD *)(M_head_impl + 32) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 40);
    if ( *(_BYTE *)(((M_head_impl + 40) >> 3) + 0x7FFF8000) )
      goto LABEL_111;
    *(_QWORD *)(M_head_impl + 40) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 48);
    if ( *(_BYTE *)(((M_head_impl + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_112;
    *(_QWORD *)(M_head_impl + 48) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 56);
    if ( *(_BYTE *)(((M_head_impl + 56) >> 3) + 0x7FFF8000) )
      goto LABEL_113;
    *(_QWORD *)(M_head_impl + 56) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 64);
    if ( *(_BYTE *)(((M_head_impl + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_114;
    *(_QWORD *)(M_head_impl + 64) = 0LL;
    p_M_finish = (__m128i *)(M_head_impl + 72);
    if ( !*(_BYTE *)(((M_head_impl + 72) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(M_head_impl + 72) = 0LL;
      std::_Deque_base<std::shared_ptr<common::minet::Packet>>::_M_initialize_map(
        (std::_Deque_base<std::shared_ptr<common::minet::Packet>> *const)M_head_impl,
        0LL);
      goto LABEL_116;
    }
LABEL_115:
    *(double *)v6.m128i_i64 = __asan_report_store8(p_M_finish);
LABEL_116:
    v50 = (unsigned int *)(M_head_impl + 80);
    v51 = *(_BYTE *)(((M_head_impl + 80) >> 3) + 0x7FFF8000);
    if ( v51 && v51 <= 3 )
    {
      __asan_report_store4(v50);
LABEL_151:
      __asan_report_store_n(v50, 40LL);
LABEL_152:
      v64 = (struct _Unwind_Exception *)__asan_report_load8(v50);
      operator delete((void *)M_head_impl, 0x80uLL);
      __asan_handle_no_return(M_head_impl);
      _Unwind_Resume(v64);
    }
    *(_DWORD *)(M_head_impl + 80) = (_DWORD)M_finish;
    v50 = (unsigned int *)(M_head_impl + 88);
    v52 = *(_BYTE *)(((M_head_impl + 88) >> 3) + 0x7FFF8000);
    if ( *(_BYTE *)(((M_head_impl + 127) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((M_head_impl + 127) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_head_impl + 127) & 7) )
    {
      goto LABEL_151;
    }
    v29 = v52 != 0;
    if ( v52 < 0 )
      goto LABEL_151;
    *(_QWORD *)(M_head_impl + 88) = 0LL;
    *(_QWORD *)(M_head_impl + 96) = 0LL;
    *(_QWORD *)(M_head_impl + 104) = 0LL;
    *(_QWORD *)(M_head_impl + 112) = 0LL;
    *(_QWORD *)(M_head_impl + 120) = 0LL;
    v100._M_head_impl = 0LL;
    v50 = (unsigned int *)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
      goto LABEL_152;
    M_finish = (std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer)i->_M_t._M_t._M_head_impl;
    i->_M_t._M_t._M_head_impl = (common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *)M_head_impl;
    if ( M_finish )
    {
      v53 = (const unsigned int *)&M_finish[6];
      if ( *(_BYTE *)((((unsigned __int64)&M_finish[9]._M_t._M_t._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&M_finish[9]._M_t._M_t._M_head_impl + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)M_finish + 79) & 7)
        || *(char *)(((unsigned __int64)&M_finish[6] >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load_n(v53, 32LL);
LABEL_154:
        __asan_report_load_n(v53, 32LL);
LABEL_155:
        __asan_report_load_n(v53, 32LL);
LABEL_156:
        __asan_report_load_n(v53, 32LL);
LABEL_157:
        __asan_report_load8(v53);
LABEL_158:
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v95 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/service_base.cpp",
          "init",
          92);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v95 + 128),
          "make_unique<SafeQueue<PacketPtr>> failed",
          *(double *)v6.m128i_i64);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
        v15 = -1;
        goto LABEL_159;
      }
      v6 = _mm_loadu_si128((const __m128i *)&M_finish[6]);
      v112 = v6;
      v113 = _mm_loadu_si128((const __m128i *)&M_finish[8]);
      v53 = (const unsigned int *)&M_finish[2];
      if ( *(_BYTE *)((((unsigned __int64)&M_finish[5]._M_t._M_t._M_head_impl + 7) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)&M_finish[5]._M_t._M_t._M_head_impl + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)M_finish + 47) & 7)
        || *(char *)(((unsigned __int64)&M_finish[2] >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_154;
      }
      v54 = (__int64)M_finish[3]._M_t._M_t._M_head_impl;
      v108 = M_finish[2]._M_t._M_t._M_head_impl;
      v109 = v54;
      v56 = (__int64)M_finish[5]._M_t._M_t._M_head_impl;
      v110 = M_finish[4]._M_t._M_t._M_head_impl;
      v55 = (__int64)v110;
      v111 = v56;
      *(_QWORD *)(v8 - 192) = v108;
      *(_QWORD *)(v8 - 184) = v54;
      *(_QWORD *)(v8 - 176) = v55;
      *(_QWORD *)(v8 - 168) = v56;
      *(__m128i *)(v8 - 256) = _mm_load_si128(&v112);
      v57 = v113;
      *(__m128i *)(v8 - 240) = v113;
      *(__m128i *)&v89._M_last = v57;
      *(_OWORD *)&v89._M_cur = *(_OWORD *)(v8 - 256);
      std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<common::minet::Packet>> *const)M_finish,
        *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v8 - 192),
        v89);
      std::_Deque_base<std::shared_ptr<common::minet::Packet>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::Packet>> *const)M_finish);
      operator delete(M_finish, 0x80uLL);
    }
    M_head_impl = (unsigned __int64)v100._M_head_impl;
    if ( v100._M_head_impl )
    {
      v53 = v100._M_head_impl + 12;
      if ( *(_BYTE *)((((unsigned __int64)v100._M_head_impl + 79) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)((((unsigned __int64)v100._M_head_impl + 79) >> 3) + 0x7FFF8000) <= ((LOBYTE(v100._M_head_impl) + 79) & 7)
        || *(char *)(((unsigned __int64)(v100._M_head_impl + 12) >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_155;
      }
      *(__m128i *)(v8 - 64) = _mm_loadu_si128((const __m128i *)v100._M_head_impl + 3);
      *(__m128i *)(v8 - 48) = _mm_loadu_si128((const __m128i *)(M_head_impl + 64));
      v53 = (const unsigned int *)(M_head_impl + 16);
      if ( *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((M_head_impl + 47) >> 3) + 0x7FFF8000) <= (unsigned __int8)((M_head_impl + 47) & 7)
        || *(char *)(((M_head_impl + 16) >> 3) + 0x7FFF8000) < 0 )
      {
        goto LABEL_156;
      }
      v58 = *(_QWORD *)(M_head_impl + 16);
      v59 = *(_QWORD *)(M_head_impl + 24);
      *(_QWORD *)(v8 - 128) = v58;
      *(_QWORD *)(v8 - 120) = v59;
      v60 = *(_QWORD *)(M_head_impl + 32);
      v61 = *(_QWORD *)(M_head_impl + 40);
      *(_QWORD *)(v8 - 112) = v60;
      *(_QWORD *)(v8 - 104) = v61;
      *(_QWORD *)(v8 - 192) = v58;
      *(_QWORD *)(v8 - 184) = v59;
      *(_QWORD *)(v8 - 176) = v60;
      *(_QWORD *)(v8 - 168) = v61;
      *(__m128i *)(v8 - 256) = _mm_load_si128((const __m128i *)(v8 - 64));
      v62 = *(_OWORD *)(v8 - 48);
      *(_OWORD *)(v8 - 240) = v62;
      *(_OWORD *)&v90._M_last = v62;
      *(_OWORD *)&v90._M_cur = *(_OWORD *)(v8 - 256);
      std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<common::minet::Packet>> *const)M_head_impl,
        *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v8 - 192),
        v90);
      std::_Deque_base<std::shared_ptr<common::minet::Packet>>::~_Deque_base((std::_Deque_base<std::shared_ptr<common::minet::Packet>> *const)M_head_impl);
      operator delete((void *)M_head_impl, 0x80uLL);
    }
    v53 = (const unsigned int *)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
      goto LABEL_157;
    if ( !i->_M_t._M_t._M_head_impl )
      goto LABEL_158;
    v44 = i + 1;
  }
  *(_QWORD *)(v95 + 128) = v95 + 144;
  std::string::_M_construct<char const*>(
    (std::string *const)(v95 + 128),
    &byte_1AE3F39A[-26],
    byte_1AE3F39A,
    (std::forward_iterator_tag)v29);
  v66 = common::tools::PTree::get<unsigned int>(pta, (const std::string *)(v95 + 128), 1u);
  v67 = *(char **)(v95 + 128);
  if ( v67 != (char *)(v95 + 144) )
    operator delete(v67);
  if ( v66 > 0x100 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v95 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "init",
      100);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v95 + 128),
      "invalid async_thread_num=%u",
      v66);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
    v15 = -1;
    goto LABEL_159;
  }
  v68 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v68 && v68 <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
    goto LABEL_171;
  }
  if ( AsyncTaskMgr::init(&this->async_task_mgr_, v66, this->thread_num_, dest) )
  {
LABEL_171:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v95 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "init",
      107);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v95 + 128), "async_task_mgr init failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
    v15 = -1;
    goto LABEL_159;
  }
  common::tools::PTree::getAllChild[abi:cxx11](&v101, pta);
  for ( j = (std::list<std::pair<std::string,common::tools::PTree>> *)v101._M_impl._M_node._M_next; ; j = *v80 )
  {
    v80 = (std::list<std::pair<std::string,common::tools::PTree>> **)j;
    if ( j == &v101 )
      goto LABEL_200;
    p_M_size = &j->_M_impl._M_node._M_size;
    v82 = (const common::tools::PTree *)&j[2];
    if ( !(unsigned int)std::string::compare(p_M_size, "StatLog") )
      break;
LABEL_193:
    if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v80);
LABEL_200:
      std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v101);
      v15 = PacketLogMgr::init(&this->packet_log_mgr_, pta);
      if ( v15 )
      {
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v95 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/service_base.cpp",
          "init",
          139);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v95 + 128),
          "packet_log_mgr init failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
        v15 = -1;
        goto LABEL_159;
      }
      v84 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_status & 7) + 3) >= v84 && v84 )
      {
        p_packet_queue_max_size = &this->status_;
        __asan_report_store4(p_status);
      }
      else
      {
        this->status_._M_i = STATUS_INIT_2;
        _mm_mfence();
        common::milog::MiLogStream::MiLogStream(
          (common::milog::MiLogStream *const)(v95 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/core_class/service_base.cpp",
          "init",
          145);
        p_packet_queue_max_size = &this->packet_queue_max_size_;
        v86 = *(_BYTE *)(((unsigned __int64)&this->packet_queue_max_size_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 44) & 7) + 3) < v86 || !v86 )
        {
          p_packet_queue_max_size = &this->thread_num_;
          v87 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
          if ( !v87 || v87 > 3 )
          {
            p_packet_queue_max_size = &this->name_;
            if ( !*(_BYTE *)(((unsigned __int64)&this->name_ >> 3) + 0x7FFF8000) )
            {
              common::milog::MiLogStream::operator()(
                (common::milog::MiLogStream *const)(v95 + 128),
                "init succ with name=%s, thread_num=%u, packet_queue_max_size_=%u",
                this->name_._M_dataplus._M_p,
                this->thread_num_,
                this->packet_queue_max_size_);
LABEL_214:
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
              goto LABEL_159;
            }
LABEL_213:
            __asan_report_load8(p_packet_queue_max_size);
            goto LABEL_214;
          }
LABEL_212:
          __asan_report_load4(p_packet_queue_max_size);
          goto LABEL_213;
        }
      }
      __asan_report_load4(p_packet_queue_max_size);
      goto LABEL_212;
    }
  }
  *(_QWORD *)(v8 - 192) = v8 - 176;
  std::string::_M_construct<char const*>((std::string *const)(v8 - 192), &byte_1AE3F498[-24], byte_1AE3F498, v83);
  common::tools::PTree::get<std::string>((std::string *)(v8 - 256), v82, (const std::string *)(v8 - 192));
  v70 = *(void **)(v8 - 192);
  if ( v70 != (void *)(v8 - 176) )
    operator delete(v70);
  LogLevelByName = common::milog::MiLog::getLogLevelByName(
                     &common::milog::MiLogDefault::default_log_obj_,
                     (const std::string *)(v8 - 256));
  *(_DWORD *)(v8 - 272) = LogLevelByName;
  if ( !LogLevelByName )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v95 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "init",
      120);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v95 + 128),
      "invalid log_level_name:%s",
      *(const char **)(v95 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
    goto LABEL_183;
  }
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,StatLogMgr>,unsigned int>(
         &this->stat_log_mgr_map_,
         (const unsigned int *)(v8 - 272)) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v95 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "init",
      125);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v95 + 128),
      "duplicate log_level:%u log_level_name:%s",
      *(unsigned int *)(v95 + 48),
      *(const char **)(v95 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
    goto LABEL_183;
  }
  __ya = &this->stat_log_mgr_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_mgr_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->stat_log_mgr_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_188;
  }
  v72._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr>>>::_M_lower_bound(
                  &this->stat_log_mgr_map_._M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::_Link_type)this->stat_log_mgr_map_._M_t._M_impl._M_header._M_parent,
                  &__ya->_M_header,
                  (const unsigned int *)(v8 - 272))._M_node;
  M_node = v72._M_node;
  if ( __ya != (std::_Rb_tree_header *)v72._M_node )
  {
    v73._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,StatLogMgr> >::_Base_ptr)*(unsigned int *)(v8 - 272);
    v75 = v72._M_node + 1;
    v76 = *(_BYTE *)(((unsigned __int64)&v72._M_node[1] >> 3) + 0x7FFF8000);
    if ( (char)(((LOBYTE(v72._M_node) + 32) & 7) + 3) < v76 || !v76 )
    {
      if ( LODWORD(v73._M_node) >= v72._M_node[1]._M_color )
        goto LABEL_190;
      goto LABEL_181;
    }
LABEL_188:
    __asan_report_load4(v75);
    goto LABEL_189;
  }
LABEL_181:
  v100._M_head_impl = (const unsigned int *)(v8 - 272);
  v77._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int const&>,std::tuple<>>(
                  &this->stat_log_mgr_map_._M_t,
                  (std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::const_iterator)v72._M_node,
                  &std::piecewise_construct,
                  &v100,
                  &v99,
                  (const std::piecewise_construct_t *)v73._M_node,
                  (std::tuple<unsigned int const&> *)__ya,
                  (std::tuple<> *)dest)._M_node;
LABEL_189:
  M_node = v77._M_node;
LABEL_190:
  if ( !StatLogMgr::init((StatLogMgr *const)&M_node[1]._M_parent, v82) )
  {
    v79 = *(void **)(v8 - 256);
    if ( v79 != (void *)(v8 - 240) )
      operator delete(v79);
    goto LABEL_193;
  }
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v95 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/service_base.cpp",
    "init",
    130);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)(v95 + 128),
    "stat_log_mgr init fail, log_level:%u",
    *(unsigned int *)(v95 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v95 + 128));
LABEL_183:
  v78 = *(char **)(v95 + 64);
  if ( v78 != (char *)(v95 + 80) )
    operator delete(v78);
  std::_List_base<std::pair<std::string,common::tools::PTree>>::_M_clear(&v101);
  v15 = -1;
LABEL_159:
  if ( v114 == (char *)v95 )
  {
    *(_QWORD *)((v95 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v95 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v95 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v95 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v95 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v95 = 1172321806LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v95 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};

// Line 151: range 0000000014E5703A-0000000014E57448
int32_t __fastcall ServiceBase::start(ServiceBase *const this)
{
  std::forward_iterator_tag v1; // cl
  char v3; // dl
  void *p_status; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  std::_Rb_tree_header *v6; // r12
  std::_Rb_tree_node_base *v7; // rbp
  __int64 v8; // r12
  void *v9; // rdi
  size_t v10; // rbp
  char v11; // dl
  int32_t v12; // r14d
  std::_Bind<void (ServiceBase::*(ServiceBase*,unsigned int))(unsigned int)> *v14; // rdx
  uint32_t i; // ebp
  std::mutex *p_thread_num; // rdi
  char v17; // al
  std::string vars0[2]; // [rsp+0h] [rbp+0h] BYREF

  vars0[0]._M_dataplus._M_p = vars0[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(vars0, &byte_1AE3EB8E[-14], byte_1AE3EB8E, v1);
  common::tools::perf::MemoryPerf::output(vars0);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)vars0[0]._M_dataplus._M_p != &vars0[0]._anon_0 )
    operator delete(vars0[0]._M_dataplus._M_p);
  v3 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v3 && v3 )
  {
    __asan_report_load4(&this->status_);
LABEL_12:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)vars0,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "start",
      156);
    v8 = *(&vars0[0]._anon_0._M_allocated_capacity + 1);
    if ( *(_BYTE *)((*(&vars0[0]._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
    {
      p_status = (void *)*(&vars0[0]._anon_0._M_allocated_capacity + 1);
      __asan_report_load8(*(&vars0[0]._anon_0._M_allocated_capacity + 1));
    }
    else
    {
      p_status = (void *)(*(&vars0[0]._anon_0._M_allocated_capacity + 1) + 8);
      if ( !*(_BYTE *)(((*(&vars0[0]._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
      {
        v9 = *(void **)(*(&vars0[0]._anon_0._M_allocated_capacity + 1) + 8);
        v10 = **((_DWORD **)&vars0[0]._anon_0._M_allocated_capacity + 1) + 0x4000 - (int)v9;
        if ( v10 > 0x1A )
          v10 = 27LL;
        memcpy(v9, "can not do it while status=", v10);
        *(_QWORD *)(v8 + 8) += v10;
        p_status = &this->status_;
        v11 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 52) & 7) + 3) < v11 || !v11 )
        {
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
            *((common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)&vars0[0]._anon_0._M_allocated_capacity
            + 1),
            this->status_._M_i);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)vars0);
          return -1;
        }
        goto LABEL_21;
      }
    }
    __asan_report_load8(p_status);
LABEL_21:
    __asan_report_load4(p_status);
    goto LABEL_22;
  }
  if ( this->status_._M_i != STATUS_INIT_2 )
    goto LABEL_12;
  this->status_._M_i = STATUS_RUN;
  _mm_mfence();
  p_status = &this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
  if ( !*(_BYTE *)(((unsigned __int64)&this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    M_left = this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
    v6 = &this->stat_log_mgr_map_._M_t._M_impl.std::_Rb_tree_header;
    while ( 1 )
    {
      v7 = M_left;
      if ( v6 == (std::_Rb_tree_header *)M_left )
        break;
      if ( StatLogMgr::start((StatLogMgr *const)&M_left[1]._M_parent) )
        goto LABEL_23;
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v7);
    }
    if ( PacketLogMgr::start(&this->packet_log_mgr_) )
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)vars0,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/service_base.cpp",
        "start",
        176);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)vars0, "packet_log_mgr start fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)vars0);
      return -1;
    }
    else
    {
      v12 = AsyncTaskMgr::start(&this->async_task_mgr_);
      if ( !v12 )
      {
        for ( i = 0; ; ++i )
        {
          p_thread_num = (std::mutex *)&this->thread_num_;
          v17 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
          if ( v17 )
          {
            if ( v17 <= 3 )
              break;
          }
          if ( this->thread_num_ <= i )
            return v12;
          vars0[0]._M_dataplus._M_p = (std::string::pointer)ServiceBase::workThread;
          vars0[0]._M_string_length = 0LL;
          *(_DWORD *)vars0[0]._anon_0._M_local_buf = i;
          *(&vars0[0]._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
          if ( &_pthread_key_create )
          {
            p_thread_num = &this->thread_group_.thread_mu_;
            LODWORD(v6) = pthread_mutex_lock(&this->thread_group_.thread_mu_._M_mutex);
            if ( (_DWORD)v6 )
              goto LABEL_31;
          }
          std::vector<std::thread>::emplace_back<std::_Bind<void (ServiceBase::*)(unsigned int) ()(ServiceBase*,unsigned int)> &>(
            &this->thread_group_.thread_vec_,
            (std::_Bind<void (ServiceBase::*(ServiceBase*,unsigned int))(unsigned int)> *)vars0,
            v14);
          if ( &_pthread_key_create )
            pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
        }
        __asan_report_load4(p_thread_num);
LABEL_31:
        __asan_handle_no_return(p_thread_num);
        std::__throw_system_error((int)v6);
      }
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)vars0,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "src/core_class/service_base.cpp",
        "start",
        183);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)vars0, "async_task_mgr start failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)vars0);
      return -1;
    }
  }
LABEL_22:
  __asan_report_load8(p_status);
LABEL_23:
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)vars0,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/service_base.cpp",
    "start",
    168);
  common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)vars0, "stat_log_mgr start fail");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)vars0);
  return -1;
};

// Line 200: range 0000000014E54CAE-0000000014E54CB3
int32_t __fastcall ServiceBase::loopFunc(ServiceBase *const this, uint32_t a2)
{
  return 0;
};

// Line 204: range 0000000014E56DBC-0000000014E57035
int32_t __fastcall ServiceBase::stop(ServiceBase *const this)
{
  std::_Vector_base<std::thread>::pointer M_finish; // r12
  std::atomic<ServiceBase::Status> *p_status; // r13
  char v4; // dl
  common::tools::ThreadGroup *p_thread_group; // rbx
  unsigned int v7; // eax
  common::tools::ThreadGroup *M_start; // rax
  common::tools::ThreadGroup *p_M_finish; // rdi
  char v10; // dl
  void *p_thread_mu; // rdi
  std::_Rb_tree_node_base::_Base_ptr i; // rbx
  struct _Unwind_Exception *v13; // rbx
  std::forward_iterator_tag v14; // cl
  std::string v15[2]; // [rsp+0h] [rbp-48h] BYREF

  p_status = &this->status_;
  v4 = *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 52) & 7) + 3) >= v4 && v4 )
  {
    __asan_report_load4(&this->status_);
    goto LABEL_6;
  }
  if ( this->status_._M_i != STATUS_RUN )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "stop",
      207);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)v15,
      "service is not run, do not need stop");
LABEL_6:
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)v15);
    return 0;
  }
  this->status_._M_i = STATUS_STOP_0;
  _mm_mfence();
  p_thread_group = &this->thread_group_;
  if ( &_pthread_key_create )
  {
    v7 = pthread_mutex_lock(&this->thread_group_.thread_mu_._M_mutex);
    M_finish = (std::_Vector_base<std::thread>::pointer)v7;
    if ( v7 )
    {
      __asan_handle_no_return(&this->thread_group_.thread_mu_);
      std::__throw_system_error((int)M_finish);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)p_thread_group >> 3) + 0x7FFF8000) )
  {
    p_M_finish = &this->thread_group_;
    __asan_report_load8(&this->thread_group_);
    goto LABEL_15;
  }
  M_start = (common::tools::ThreadGroup *)this->thread_group_.thread_vec_._M_impl._M_start;
  p_M_finish = (common::tools::ThreadGroup *)&this->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(p_M_finish);
    goto LABEL_16;
  }
  M_finish = this->thread_group_.thread_vec_._M_impl._M_finish;
  while ( 1 )
  {
    p_thread_group = M_start;
    if ( M_finish == (std::_Vector_base<std::thread>::pointer)M_start )
      break;
    p_M_finish = M_start;
    if ( *(_BYTE *)(((unsigned __int64)M_start >> 3) + 0x7FFF8000) )
    {
LABEL_16:
      __asan_report_load8(p_M_finish);
    }
    else if ( M_start->thread_vec_._M_impl._M_start )
    {
      std::thread::join((std::thread *)M_start);
    }
    M_start = (common::tools::ThreadGroup *)&p_thread_group->thread_vec_._M_impl._M_finish;
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
  v10 = *(_BYTE *)(((unsigned __int64)p_status >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_status & 7) + 3) >= v10 && v10 )
  {
    p_thread_mu = p_status;
    __asan_report_store4(p_status);
LABEL_31:
    v13 = (struct _Unwind_Exception *)__asan_report_load8(p_thread_mu);
    if ( &_pthread_key_create )
    {
      p_thread_mu = &this->thread_group_.thread_mu_;
      pthread_mutex_unlock(&this->thread_group_.thread_mu_._M_mutex);
    }
    __asan_handle_no_return(p_thread_mu);
    _Unwind_Resume(v13);
  }
  this->status_._M_i = STATUS_INIT_2;
  _mm_mfence();
  AsyncTaskMgr::stop(&this->async_task_mgr_);
  p_thread_mu = &this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    goto LABEL_31;
  for ( i = this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->stat_log_mgr_map_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    StatLogMgr::stop((StatLogMgr *const)&i[1]._M_parent);
  }
  PacketLogMgr::stop(&this->packet_log_mgr_);
  v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(v15, &byte_1AE3E24D[-13], byte_1AE3E24D, v14);
  common::tools::perf::MemoryPerf::output(v15);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15[0]._M_dataplus._M_p != &v15[0]._anon_0 )
    operator delete(v15[0]._M_dataplus._M_p);
  return 0;
};

// Line 229: range 0000000014E5697A-0000000014E56CD9
int32_t __fastcall ServiceBase::fini(ServiceBase *const this)
{
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *M_head_impl; // rbx
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer i; // rbp
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_finish; // r14
  unsigned __int64 v5; // r15
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_packet_queue_vec; // rdi
  __int64 v7; // rax
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Elt_pointer M_last; // rax
  __m128i v9; // rax
  void *p_M_finish; // rdi
  std::_Rb_tree_node_base::_Base_ptr j; // rbx
  std::deque<std::shared_ptr<common::minet::Packet>>::iterator v13; // [rsp-20h] [rbp-158h]
  std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >> *M_start; // [rsp+8h] [rbp-130h]
  _DWORD *v15; // [rsp+18h] [rbp-120h]
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Elt_pointer M_first; // [rsp+28h] [rbp-110h]
  std::_Deque_iterator<std::shared_ptr<common::minet::Packet>,std::shared_ptr<common::minet::Packet>&,std::shared_ptr<common::minet::Packet>*>::_Map_pointer M_node; // [rsp+38h] [rbp-100h]
  __m128i v18; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v19; // [rsp+50h] [rbp-E8h]
  char v20[216]; // [rsp+60h] [rbp-D8h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 32 6 __last 96 32 7 __first";
  *(_QWORD *)(v5 + 16) = ServiceBase::fini;
  v15 = (_DWORD *)(v5 >> 3);
  v15[536862720] = -235802127;
  v15[536862722] = -218959118;
  v15[536862724] = -202116109;
  p_packet_queue_vec = &this->packet_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_packet_queue_vec);
    goto LABEL_9;
  }
  M_start = this->packet_queue_vec_._M_impl._M_start;
  p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_load8(p_packet_queue_vec);
    goto LABEL_10;
  }
  M_finish = this->packet_queue_vec_._M_impl._M_finish;
  if ( M_finish == M_start )
    goto LABEL_24;
  for ( i = this->packet_queue_vec_._M_impl._M_start; M_finish != i; ++i )
  {
    p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_10:
      __asan_report_load8(p_packet_queue_vec);
      goto LABEL_11;
    }
    M_head_impl = i->_M_t._M_t._M_head_impl;
    if ( i->_M_t._M_t._M_head_impl )
    {
      p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&M_head_impl->queue_.c._M_impl._M_finish;
      if ( (*(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) == 0
         || *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) > (((unsigned __int8)M_head_impl + 79) & 7))
        && *(char *)(((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) >= 0 )
      {
        v18 = _mm_loadu_si128((const __m128i *)&M_head_impl->queue_.c._M_impl._M_finish);
        v19 = _mm_loadu_si128((const __m128i *)&M_head_impl->queue_.c._M_impl._M_finish._M_last);
        if ( *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)M_head_impl + 47) & 7)
          || *(char *)(((unsigned __int64)&M_head_impl->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_load_n(&M_head_impl->queue_.c._M_impl._M_start, 32LL);
          break;
        }
        goto LABEL_12;
      }
LABEL_11:
      __asan_report_load_n(p_packet_queue_vec, 32LL);
LABEL_12:
      M_first = M_head_impl->queue_.c._M_impl._M_start._M_first;
      M_last = M_head_impl->queue_.c._M_impl._M_start._M_last;
      M_node = M_head_impl->queue_.c._M_impl._M_start._M_node;
      *(_QWORD *)(v5 + 96) = M_head_impl->queue_.c._M_impl._M_start._M_cur;
      *(_QWORD *)(v5 + 104) = M_first;
      *(_QWORD *)(v5 + 112) = M_last;
      *(_QWORD *)(v5 + 120) = M_node;
      *(__m128i *)(v5 + 32) = _mm_load_si128(&v18);
      v9 = v19;
      *(__m128i *)(v5 + 48) = v19;
      *(__m128i *)&v13._M_last = v9;
      *(_OWORD *)&v13._M_cur = *(_OWORD *)(v5 + 32);
      std::deque<std::shared_ptr<common::minet::Packet>>::_M_destroy_data_aux(
        &M_head_impl->queue_.c,
        *(std::deque<std::shared_ptr<common::minet::Packet>>::iterator *)(v5 + 96),
        v13);
      std::_Deque_base<std::shared_ptr<common::minet::Packet>>::~_Deque_base(&M_head_impl->queue_.c);
      operator delete(M_head_impl, 0x80uLL);
      continue;
    }
  }
  p_M_finish = &this->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_M_finish);
  }
  else
  {
    this->packet_queue_vec_._M_impl._M_finish = M_start;
LABEL_24:
    AsyncTaskMgr::fini(&this->async_task_mgr_);
    p_M_finish = &this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
    if ( !*(_BYTE *)(((unsigned __int64)&this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      for ( j = this->stat_log_mgr_map_._M_t._M_impl._M_header._M_left;
            &this->stat_log_mgr_map_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)j;
            j = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(j) )
      {
        StatLogMgr::fini((StatLogMgr *const)&j[1]._M_parent);
      }
      goto LABEL_30;
    }
  }
  __asan_report_load8(p_M_finish);
LABEL_30:
  PacketLogMgr::fini(&this->packet_log_mgr_);
  if ( v20 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return 0;
};

// Line 267: range 0000000014E55C52-0000000014E5668F
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ServiceBase::sendRspPacket(
        ServiceBase *const this,
        common::minet::PacketPtr rsp_packet_ptr,
        common::minet::PacketPtr req_packet_ptr)
{
  unsigned __int64 M_pi; // rbp
  volatile signed __int32 *M_ptr; // rbx
  common::minet::Packet *vptr__Sp_counted_base; // rdi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rsi
  char v9; // cl
  unsigned __int64 v10; // rsi
  common::minet::Packet *const *v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rsi
  volatile signed __int32 *p_M_use_count; // rdi
  __int64 v16; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  int32_t v18; // eax
  unsigned int v19; // ebp
  __int64 v20; // rsi
  common::milog::MiLog *v21; // rsi
  uint32_t SourceAppId; // eax
  __int64 v23; // r9
  common::minet::Packet *v24; // rdx
  unsigned __int64 p_cmd_id; // rdi
  __int64 v26; // rcx
  __int64 source_service; // r8
  char v28; // al
  char v29; // cl
  __int64 v30; // rsi
  __int64 v31; // rsi
  volatile signed __int32 *v32; // rsi
  char v33; // cl
  int32_t v34; // r13d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v35; // r12
  _Atomic_word *v36; // rdi
  char v37; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v39; // rsi
  common::minet::Packet **v40; // rsi
  common::minet::Packet *v41; // r12
  uint32_t v42; // edx
  unsigned __int64 v43; // rdi
  char v44; // si
  std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *v45; // rdx
  std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *v46; // rdi
  __int64 (__fastcall *v47)(std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64 *); // rcx
  volatile signed __int32 *v48; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v49; // rax
  char v50; // si
  unsigned int v51; // eax
  char v52; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v54; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v56; // rdi
  char v57; // dl
  __int64 v58; // rsi
  char v59; // r8
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rbx
  _Atomic_word *v61; // rdi
  char v62; // dl
  signed __int32 v63; // eax
  char v65; // dl
  volatile signed __int32 *v66; // rdi
  char v67; // dl
  signed __int32 v68; // eax
  unsigned __int64 v69; // rdi
  char v70; // dl
  struct _Unwind_Exception *v71; // rbx
  __int64 v72; // [rsp+0h] [rbp-58h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v73; // [rsp+8h] [rbp-50h]
  common::milog::MiLogStream v74; // [rsp+10h] [rbp-48h] BYREF

  M_pi = (unsigned __int64)rsp_packet_ptr._M_refcount._M_pi;
  if ( *(_BYTE *)(((unsigned __int64)rsp_packet_ptr._M_refcount._M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(rsp_packet_ptr._M_refcount._M_pi);
    goto LABEL_21;
  }
  M_ptr = (volatile signed __int32 *)rsp_packet_ptr._M_ptr;
  vptr__Sp_counted_base = (common::minet::Packet *)rsp_packet_ptr._M_refcount._M_pi->_vptr__Sp_counted_base;
  if ( !rsp_packet_ptr._M_refcount._M_pi->_vptr__Sp_counted_base )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "sendRspPacket",
      271);
    common::milog::MiLogStream::operator()(&v74, "req packet is null");
    common::milog::MiLogStream::~MiLogStream(&v74);
    return (unsigned int)-1;
  }
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v20);
    goto LABEL_23;
  }
  if ( !*v8 )
  {
LABEL_23:
    common::milog::MiLogStream::MiLogStream(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "sendRspPacket",
      278);
    common::milog::MiLogStream::operator()(&v74, "rsp packet is null");
    common::milog::MiLogStream::~MiLogStream(&v74);
    return (unsigned int)-1;
  }
  v9 = *(_BYTE *)(((unsigned __int64)&vptr__Sp_counted_base->head_.source_service_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)vptr__Sp_counted_base - 4) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(&vptr__Sp_counted_base->head_.source_service_);
LABEL_25:
    v21 = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "sendRspPacket",
      285);
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
      SourceAppId = __asan_report_load8(M_pi);
    else
      SourceAppId = common::minet::Packet::getSourceAppId(*(common::minet::Packet *const *)M_pi);
    v23 = SourceAppId;
    if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      v24 = *(common::minet::Packet **)M_pi;
      p_cmd_id = *(_QWORD *)M_pi + 252LL;
      v26 = *(unsigned __int8 *)((p_cmd_id >> 3) + 0x7FFF8000);
      if ( (char)(((*(_BYTE *)M_pi - 4) & 7) + 3) < (char)v26 || !(_BYTE)v26 )
      {
        source_service = v24->head_.source_service_;
        p_cmd_id = (unsigned __int64)&v24->cmd_id_;
        v28 = *(_BYTE *)(((unsigned __int64)&v24->cmd_id_ >> 3) + 0x7FFF8000);
        if ( !v28 || v28 > 1 )
        {
          p_cmd_id = (unsigned __int64)&v24->head_.user_id_;
          v29 = *(_BYTE *)(((unsigned __int64)&v24->head_.user_id_ >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v24 - 44) & 7) + 3) < v29 || !v29 )
          {
            common::milog::MiLogStream::operator()(
              &v74,
              "source info is not complete for packet uid=%u, cmd_id=%u, source_service=%u, source_id=%u",
              v24->head_.user_id_,
              v24->cmd_id_,
              source_service,
              v23);
LABEL_42:
            common::milog::MiLogStream::~MiLogStream(&v74);
            return (unsigned int)-1;
          }
LABEL_41:
          __asan_report_load4(p_cmd_id);
          goto LABEL_42;
        }
LABEL_40:
        __asan_report_load2(p_cmd_id, v31, v24, v26, source_service, v23);
        goto LABEL_41;
      }
LABEL_39:
      __asan_report_load4(p_cmd_id);
      goto LABEL_40;
    }
LABEL_38:
    p_cmd_id = M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_39;
  }
  if ( !vptr__Sp_counted_base->head_.source_service_ || !common::minet::Packet::getSourceAppId(vptr__Sp_counted_base) )
    goto LABEL_25;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v30);
    goto LABEL_37;
  }
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(M_pi);
    goto LABEL_38;
  }
  if ( common::minet::Packet::copyHead(*v11, *(const common::minet::Packet **)M_pi) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "sendRspPacket",
      292);
    common::milog::MiLogStream::operator()(&v74, "copyHead fails");
    common::milog::MiLogStream::~MiLogStream(&v74);
    return (unsigned int)-1;
  }
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
    p_M_use_count = v32;
    __asan_report_load8(v32);
    goto LABEL_45;
  }
  v72 = *v14;
  p_M_use_count = (volatile signed __int32 *)(v14 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v14 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_45:
    __asan_report_load8(p_M_use_count);
LABEL_46:
    v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_47;
  }
  v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v16 + 8);
  v73 = v17;
  if ( !v17 )
  {
LABEL_19:
    v18 = ServiceBase::setPacketSource(this, (common::minet::PacketPtr)__PAIR128__(v12, &v72));
    goto LABEL_51;
  }
  p_M_use_count = &v17->_M_use_count;
  if ( &_pthread_key_create )
  {
    v12 = *(unsigned __int8 *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < (char)v12 || !(_BYTE)v12 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_19;
    }
    goto LABEL_46;
  }
LABEL_47:
  v33 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  v12 = (((_BYTE)v17 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) < v33 || !v33 )
  {
    ++v17->_M_use_count;
    goto LABEL_19;
  }
  __asan_report_load4(&v17->_M_use_count);
LABEL_51:
  v34 = v18;
  v35 = v73;
  if ( !v73 )
    goto LABEL_57;
  v36 = &v73->_M_use_count;
  if ( &_pthread_key_create )
  {
    v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
    {
      M_use_count = _InterlockedExchangeAdd(v36, 0xFFFFFFFF);
      goto LABEL_56;
    }
    __asan_report_store4(v36);
  }
  v52 = *(_BYTE *)(((unsigned __int64)&v35->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v35 + 8) & 7) + 3) >= v52 && v52 )
  {
    __asan_report_load4(&v35->_M_use_count);
    goto LABEL_80;
  }
  M_use_count = v35->_M_use_count;
  v35->_M_use_count = M_use_count - 1;
LABEL_56:
  if ( M_use_count != 1 )
    goto LABEL_57;
LABEL_80:
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v35;
    __asan_report_load8(v35);
    goto LABEL_91;
  }
  p_M_weak_count = (volatile signed __int32 *)(v35->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_91:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_92;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v35->_vptr__Sp_counted_base + 2))(v35);
  p_M_weak_count = &v35->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_93;
  v54 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v54 || !v54 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_86;
  }
LABEL_92:
  __asan_report_store4(p_M_weak_count);
LABEL_93:
  v57 = *(_BYTE *)(((unsigned __int64)&v35->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v35 + 12) & 7) + 3) >= v57 && v57 )
  {
    __asan_report_load4(&v35->_M_weak_count);
LABEL_97:
    v56 = (unsigned __int64)v35;
    __asan_report_load8(v35);
    goto LABEL_98;
  }
  M_weak_count = v35->_M_weak_count;
  v35->_M_weak_count = M_weak_count - 1;
LABEL_86:
  if ( M_weak_count != 1 )
    goto LABEL_57;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  v56 = (unsigned __int64)(v35->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(v56);
    goto LABEL_99;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v35->_vptr__Sp_counted_base + 3))(v35);
LABEL_57:
  if ( v34 )
  {
LABEL_99:
    common::milog::MiLogStream::MiLogStream(
      &v74,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "sendRspPacket",
      299);
    common::milog::MiLogStream::operator()(&v74, "set packet source failed");
    common::milog::MiLogStream::~MiLogStream(&v74);
    return (unsigned int)-1;
  }
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v58);
    goto LABEL_101;
  }
  v41 = *v40;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(M_pi);
    goto LABEL_102;
  }
  v42 = common::minet::Packet::getSourceAppId(*(common::minet::Packet *const *)M_pi);
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    v43 = M_pi;
    __asan_report_load8(M_pi);
LABEL_103:
    __asan_report_load4(v43);
LABEL_104:
    __asan_report_load_n(v43, 8LL);
    goto LABEL_105;
  }
  v43 = *(_QWORD *)M_pi + 252LL;
  v44 = *(_BYTE *)((v43 >> 3) + 0x7FFF8000);
  if ( (char)(((*(_BYTE *)M_pi - 4) & 7) + 3) >= v44 && v44 )
    goto LABEL_103;
  common::minet::Packet::setTarget(v41, *(_DWORD *)(*(_QWORD *)M_pi + 252LL), v42);
  v43 = (unsigned __int64)&ResourceBox::network_mgr_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&ResourceBox::network_mgr_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&ResourceBox::network_mgr_ptr >> 3) + 0x7FFF8000) <= (unsigned __int8)((unsigned __int64)&ResourceBox::network_mgr_ptr & 7)
    || *(_BYTE *)((((unsigned __int64)&ResourceBox::network_mgr_ptr._M_ptr + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&ResourceBox::network_mgr_ptr._M_ptr + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)&ResourceBox::network_mgr_ptr._M_ptr + 7) & 7) )
  {
    goto LABEL_104;
  }
  v45 = ResourceBox::network_mgr_ptr._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)ResourceBox::network_mgr_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    v46 = v45;
    __asan_report_load8(v45);
    goto LABEL_106;
  }
  v46 = (std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase
                                                                                     + 8);
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(v46);
    goto LABEL_107;
  }
  v47 = (__int64 (__fastcall *)(std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *, __int64 *))*((_QWORD *)ResourceBox::network_mgr_ptr._M_ptr->_vptr_NetworkMgrBase + 8);
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    v48 = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_108;
  }
  v72 = *(_QWORD *)M_ptr;
  v48 = M_ptr + 2;
  if ( *(_BYTE *)(((unsigned __int64)(M_ptr + 2) >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(v48);
LABEL_109:
    v49 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v48);
    goto LABEL_110;
  }
  v49 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*((_QWORD *)M_ptr + 1);
  v73 = v49;
  if ( !v49 )
  {
LABEL_74:
    v51 = v47(v45, &v72);
    goto LABEL_114;
  }
  v48 = &v49->_M_use_count;
  if ( &_pthread_key_create )
  {
    v50 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v48 & 7) + 3) < v50 || !v50 )
    {
      _InterlockedAdd(v48, 1u);
      goto LABEL_74;
    }
    goto LABEL_109;
  }
LABEL_110:
  v59 = *(_BYTE *)(((unsigned __int64)&v49->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v49 + 8) & 7) + 3) < v59 || !v59 )
  {
    ++v49->_M_use_count;
    goto LABEL_74;
  }
  __asan_report_load4(&v49->_M_use_count);
LABEL_114:
  v19 = v51;
  v60 = v73;
  if ( v73 )
  {
    v61 = &v73->_M_use_count;
    if ( &_pthread_key_create )
    {
      v62 = *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v61 & 7) + 3) < v62 || !v62 )
      {
        v63 = _InterlockedExchangeAdd(v61, 0xFFFFFFFF);
        goto LABEL_119;
      }
      __asan_report_store4(v61);
    }
    v65 = *(_BYTE *)(((unsigned __int64)&v60->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v60 + 8) & 7) + 3) >= v65 && v65 )
    {
      __asan_report_load4(&v60->_M_use_count);
      goto LABEL_126;
    }
    v63 = v60->_M_use_count;
    v60->_M_use_count = v63 - 1;
LABEL_119:
    if ( v63 != 1 )
      return v19;
LABEL_126:
    if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
    {
      v66 = (volatile signed __int32 *)v60;
      __asan_report_load8(v60);
    }
    else
    {
      v66 = (volatile signed __int32 *)(v60->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v60->_vptr__Sp_counted_base + 2))(v60);
        v66 = &v60->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_139;
        v67 = *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v66 & 7) + 3) < v67 || !v67 )
        {
          v68 = _InterlockedExchangeAdd(v66, 0xFFFFFFFF);
          goto LABEL_132;
        }
LABEL_138:
        __asan_report_store4(v66);
LABEL_139:
        v70 = *(_BYTE *)(((unsigned __int64)&v60->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v60 + 12) & 7) + 3) >= v70 && v70 )
        {
          __asan_report_load4(&v60->_M_weak_count);
          goto LABEL_143;
        }
        v68 = v60->_M_weak_count;
        v60->_M_weak_count = v68 - 1;
LABEL_132:
        if ( v68 != 1 )
          return v19;
        if ( !*(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
        {
          v69 = (unsigned __int64)(v60->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v60->_vptr__Sp_counted_base + 3))(v60);
            return v19;
          }
LABEL_144:
          v71 = (struct _Unwind_Exception *)__asan_report_load8(v69);
          common::milog::MiLogStream::~MiLogStream(&v74);
          __asan_handle_no_return(&v74);
          _Unwind_Resume(v71);
        }
LABEL_143:
        v69 = (unsigned __int64)v60;
        __asan_report_load8(v60);
        goto LABEL_144;
      }
    }
    __asan_report_load8(v66);
    goto LABEL_138;
  }
  return v19;
};

// Line 311: range 0000000014E5744E-0000000014E58F9B
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ServiceBase::pushPacket(
        ServiceBase *const this,
        common::minet::PacketPtr packet_ptr,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  const std::string *v5; // r14
  unsigned __int64 M_ptr; // rbp
  ServiceBase *v7; // rbx
  int (**vptr_Packet)(...); // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v14; // rdi
  __int64 v15; // rdx
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> >,std::_Select1st<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > > >::iterator v16; // rax
  const std::function<int(std::shared_ptr<common::minet::Packet>)> *p_M_parent; // rdi
  uint16_t *p_cmd_id; // rax
  unsigned __int64 p_M_use_count; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rax
  char v21; // cl
  int v22; // eax
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v24; // rdi
  char v25; // cl
  char v26; // si
  int v27; // r13d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  _Atomic_word *v29; // rdi
  char v30; // dl
  signed __int32 M_use_count; // eax
  common::minet::Packet *v32; // r12
  uint32_t *v33; // rdi
  char v34; // dl
  uint32_t v35; // r13d
  unsigned __int64 v36; // rdi
  uint32_t v37; // eax
  unsigned __int64 v38; // rdi
  __int64 (__fastcall *v39)(ServiceBase *, std::shared_ptr<common::minet::Packet> *); // rdx
  unsigned __int64 v40; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v41; // rax
  char v42; // cl
  int v43; // eax
  char v44; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v46; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v48; // rdi
  char v49; // dl
  char v50; // si
  int v51; // r13d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v52; // r12
  _Atomic_word *v53; // rdi
  char v54; // dl
  signed __int32 v55; // eax
  unsigned __int64 p_M_finish; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_start; // rdx
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_packet_queue_vec; // rdi
  __int64 v59; // r9
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v60; // rdx
  unsigned __int64 v61; // rdi
  char v62; // cl
  char v63; // dl
  volatile signed __int32 *v64; // rdi
  char v65; // dl
  signed __int32 v66; // eax
  char v67; // dl
  unsigned __int64 v68; // r15
  __int64 v69; // r12
  __int64 v70; // rdi
  char v71; // al
  unsigned int v72; // eax
  unsigned __int64 v73; // rdi
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v76; // rax
  __int64 v77; // rax
  volatile signed __int32 *v78; // rdx
  volatile signed __int32 *v79; // rdi
  char v80; // dl
  bool v81; // r12
  common::milog::MiLog *M_p; // rsi
  __int64 v83; // r12
  unsigned __int64 v84; // rdi
  char v85; // al
  unsigned int v86; // r15d
  pthread_mutex_t *v87; // r13
  __int64 v88; // rdi
  __int64 v89; // r12
  unsigned __int64 v90; // rdi
  char v91; // cl
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *v92; // rdi
  char v93; // cl
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *v94; // rdi
  char v95; // cl
  char v96; // cl
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  unsigned __int64 v100; // rdi
  __int64 v101; // rdx
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> >,std::_Select1st<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<int(std::shared_ptr<common::minet::Packet>)> > > >::iterator v102; // rax
  const std::function<int(std::shared_ptr<common::minet::Packet>)> *v103; // rdi
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v106; // rax
  char v107; // cl
  int v108; // eax
  char v109; // si
  int v110; // r12d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v111; // rbx
  _Atomic_word *v112; // rdi
  char v113; // dl
  signed __int32 v114; // eax
  char v115; // dl
  volatile signed __int32 *v116; // rdi
  char v117; // dl
  signed __int32 v118; // eax
  unsigned __int64 v119; // rdi
  char v120; // dl
  unsigned __int64 v121; // rdi
  void (__fastcall *v122)(ServiceBase *, std::shared_ptr<common::minet::Packet> *, _QWORD); // rcx
  unsigned __int64 v123; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v124; // rax
  char v125; // dl
  char v126; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v127; // rbx
  _Atomic_word *v128; // rdi
  char v129; // dl
  signed __int32 v130; // eax
  char v131; // dl
  volatile signed __int32 *v132; // rdi
  char v133; // dl
  signed __int32 v134; // eax
  unsigned __int64 v135; // rdi
  char v136; // dl
  struct _Unwind_Exception *v137; // rbx
  unsigned __int64 v138; // [rsp+0h] [rbp-88h]
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-80h]
  unsigned int __k; // [rsp+1Ch] [rbp-6Ch] BYREF
  std::shared_ptr<common::minet::Packet> __args_0; // [rsp+20h] [rbp-68h] BYREF
  common::milog::MiLogStream v142; // [rsp+30h] [rbp-58h] BYREF

  M_ptr = (unsigned __int64)packet_ptr._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_21;
  }
  v7 = this;
  vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      314);
    common::milog::MiLogStream::operator()(&v142, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v142);
    return 0xFFFFFFFFLL;
  }
  v9 = *(unsigned __int8 *)(((unsigned __int64)(vptr_Packet + 1) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 && (char)v9 <= 1 )
  {
    __asan_report_load2(vptr_Packet + 1, packet_ptr._M_ptr, packet_ptr._M_refcount._M_pi, a3, a4, a5);
    goto LABEL_23;
  }
  v10 = *((_WORD *)vptr_Packet + 4);
  v5 = ProtoUtils::getCmdName[abi:cxx11](v10);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(this);
    goto LABEL_24;
  }
  this = (ServiceBase *const)(this->_vptr_ServiceBase + 11);
  if ( *(_BYTE *)(((unsigned __int64)(v7->_vptr_ServiceBase + 11) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(this);
LABEL_25:
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      323);
    if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      v24 = packet_ptr._M_ptr;
      __asan_report_load8(packet_ptr._M_ptr);
    }
    else
    {
      v24 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)((char *)packet_ptr._M_ptr->_vptr_Packet
                                                                                                + 212);
      v25 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
      if ( (char)((((__int64)packet_ptr._M_ptr->_vptr_Packet - 44) & 7) + 3) < v25 || !v25 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          common::milog::MiLogStream::operator()(
            &v142,
            "msg is not running, can not push packet %s with uid=%u",
            v5->_M_dataplus._M_p,
            *((unsigned int *)packet_ptr._M_ptr->_vptr_Packet + 53));
LABEL_33:
          common::milog::MiLogStream::~MiLogStream(&v142);
          return 0xFFFFFFFFLL;
        }
LABEL_32:
        __asan_report_load8(v5);
        goto LABEL_33;
      }
    }
    __asan_report_load4(v24);
    goto LABEL_32;
  }
  if ( !(*((unsigned __int8 (__fastcall **)(ServiceBase *, _QWORD))v7->_vptr_ServiceBase + 11))(v7, v10) )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    v14 = packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
LABEL_35:
    __asan_report_load2(v14, v10, v15, v11, v12, v13);
LABEL_36:
    p_cmd_id = (uint16_t *)__asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_37;
  }
  v14 = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)(packet_ptr._M_ptr->_vptr_Packet
                                                                                            + 1);
  v15 = *(unsigned __int8 *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v15 && (char)v15 <= 1 )
    goto LABEL_35;
  __k = *((unsigned __int16 *)packet_ptr._M_ptr->_vptr_Packet + 4);
  v16._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>,std::_Select1st<std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>>>::find(
                  &v7->push_packet_func_map_._M_t,
                  &__k)._M_node;
  if ( &v7->push_packet_func_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v16._M_node )
    goto LABEL_50;
  p_M_parent = (const std::function<int(std::shared_ptr<common::minet::Packet>)> *)&v16._M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_36;
  __args_0._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)packet_ptr._M_ptr->_vptr_Packet;
  p_cmd_id = &packet_ptr._M_ptr->cmd_id_;
  p_M_use_count = (unsigned __int64)&packet_ptr._M_ptr->cmd_id_ >> 3;
  if ( *(_BYTE *)(p_M_use_count + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_cmd_id);
LABEL_38:
    p_M_parent = (const std::function<int(std::shared_ptr<common::minet::Packet>)> *)p_M_use_count;
    v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_39;
  }
  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&packet_ptr._M_ptr->cmd_id_;
  __args_0._M_refcount._M_pi = v20;
  if ( !v20 )
  {
LABEL_19:
    v22 = std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator()(
            p_M_parent,
            (std::shared_ptr<common::minet::Packet>)__PAIR128__(p_M_use_count, &__args_0));
    goto LABEL_43;
  }
  p_M_use_count = (unsigned __int64)&v20->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)((p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd((volatile signed __int32 *)p_M_use_count, 1u);
      goto LABEL_19;
    }
    goto LABEL_38;
  }
LABEL_39:
  v26 = *(_BYTE *)(((unsigned __int64)&v20->_M_use_count >> 3) + 0x7FFF8000);
  p_M_use_count = (((_BYTE)v20 + 8) & 7u) + 3;
  if ( (char)((((_BYTE)v20 + 8) & 7) + 3) < v26 || !v26 )
  {
    ++v20->_M_use_count;
    goto LABEL_19;
  }
  __asan_report_load4(&v20->_M_use_count);
LABEL_43:
  v27 = v22;
  M_pi = __args_0._M_refcount._M_pi;
  if ( !__args_0._M_refcount._M_pi )
    goto LABEL_49;
  v29 = &__args_0._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v30 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v29 & 7) + 3) < v30 || !v30 )
    {
      M_use_count = _InterlockedExchangeAdd(v29, 0xFFFFFFFF);
      goto LABEL_48;
    }
    __asan_report_store4(v29);
  }
  v44 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v44 && v44 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
    goto LABEL_70;
  }
  M_use_count = M_pi->_M_use_count;
  M_pi->_M_use_count = M_use_count - 1;
LABEL_48:
  if ( M_use_count != 1 )
    goto LABEL_49;
LABEL_70:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_81;
  }
  p_M_weak_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_82;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_83;
  v46 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v46 || !v46 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_76;
  }
LABEL_82:
  __asan_report_store4(p_M_weak_count);
LABEL_83:
  v49 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v49 && v49 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
LABEL_87:
    v48 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_88;
  }
  M_weak_count = M_pi->_M_weak_count;
  M_pi->_M_weak_count = M_weak_count - 1;
LABEL_76:
  if ( M_weak_count != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_87;
  v48 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    __asan_report_load8(v48);
LABEL_89:
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      335);
    if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
LABEL_315:
      common::milog::MiLogStream::operator()(&v142, "exec push_packet_func for %s failed", v5->_M_dataplus._M_p);
      goto LABEL_215;
    }
LABEL_316:
    __asan_report_load8(v5);
    goto LABEL_215;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
LABEL_49:
  if ( v27 )
    goto LABEL_89;
LABEL_50:
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
    v33 = (uint32_t *)M_ptr;
    __asan_report_load8(M_ptr);
LABEL_92:
    __asan_report_load4(v33);
    goto LABEL_93;
  }
  v32 = *(common::minet::Packet **)M_ptr;
  v33 = &ResourceBox::cur_app_id;
  v34 = *(_BYTE *)(((unsigned __int64)&ResourceBox::cur_app_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)&ResourceBox::cur_app_id & 7) + 3) >= v34 && v34 )
    goto LABEL_92;
  v35 = ResourceBox::cur_app_id;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    v36 = (unsigned __int64)v7;
    __asan_report_load8(v7);
    goto LABEL_94;
  }
  v36 = (unsigned __int64)(v7->_vptr_ServiceBase + 13);
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8(v36);
    goto LABEL_95;
  }
  v37 = (*((__int64 (__fastcall **)(ServiceBase *))v7->_vptr_ServiceBase + 13))(v7);
  common::minet::Packet::setServiceAppId(v32, v37, v35);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_95:
    v38 = (unsigned __int64)v7;
    __asan_report_load8(v7);
    goto LABEL_96;
  }
  v38 = (unsigned __int64)(v7->_vptr_ServiceBase + 10);
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(v38);
    goto LABEL_97;
  }
  v39 = (__int64 (__fastcall *)(ServiceBase *, std::shared_ptr<common::minet::Packet> *))*((_QWORD *)v7->_vptr_ServiceBase
                                                                                         + 10);
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v40 = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_98;
  }
  __args_0._M_ptr = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
  v40 = M_ptr + 8;
  if ( *(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(v40);
LABEL_99:
    v41 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v40);
    goto LABEL_100;
  }
  v41 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
  __args_0._M_refcount._M_pi = v41;
  if ( !v41 )
  {
LABEL_64:
    v43 = v39(v7, &__args_0);
    goto LABEL_104;
  }
  v40 = (unsigned __int64)&v41->_M_use_count;
  if ( &_pthread_key_create )
  {
    v42 = *(_BYTE *)((v40 >> 3) + 0x7FFF8000);
    if ( (char)((v40 & 7) + 3) < v42 || !v42 )
    {
      _InterlockedAdd((volatile signed __int32 *)v40, 1u);
      goto LABEL_64;
    }
    goto LABEL_99;
  }
LABEL_100:
  v50 = *(_BYTE *)(((unsigned __int64)&v41->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v41 + 8) & 7) + 3) < v50 || !v50 )
  {
    ++v41->_M_use_count;
    goto LABEL_64;
  }
  __asan_report_load4(&v41->_M_use_count);
LABEL_104:
  v51 = v43;
  v52 = __args_0._M_refcount._M_pi;
  if ( !__args_0._M_refcount._M_pi )
    goto LABEL_110;
  v53 = &__args_0._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v54 = *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v53 & 7) + 3) < v54 || !v54 )
    {
      v55 = _InterlockedExchangeAdd(v53, 0xFFFFFFFF);
      goto LABEL_109;
    }
    __asan_report_store4(v53);
  }
  v63 = *(_BYTE *)(((unsigned __int64)&v52->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v52 + 8) & 7) + 3) >= v63 && v63 )
  {
    __asan_report_load4(&v52->_M_use_count);
    goto LABEL_127;
  }
  v55 = v52->_M_use_count;
  v52->_M_use_count = v55 - 1;
LABEL_109:
  if ( v55 != 1 )
    goto LABEL_110;
LABEL_127:
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
  {
    v64 = (volatile signed __int32 *)v52;
    __asan_report_load8(v52);
    goto LABEL_138;
  }
  v64 = (volatile signed __int32 *)(v52->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(v64);
    goto LABEL_139;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v52->_vptr__Sp_counted_base + 2))(v52);
  v64 = &v52->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_140;
  v65 = *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v64 & 7) + 3) < v65 || !v65 )
  {
    v66 = _InterlockedExchangeAdd(v64, 0xFFFFFFFF);
    goto LABEL_133;
  }
LABEL_139:
  __asan_report_store4(v64);
LABEL_140:
  v67 = *(_BYTE *)(((unsigned __int64)&v52->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v52 + 12) & 7) + 3) >= v67 && v67 )
  {
    __asan_report_load4(&v52->_M_weak_count);
LABEL_144:
    p_M_finish = (unsigned __int64)v52;
    __asan_report_load8(v52);
    goto LABEL_145;
  }
  v66 = v52->_M_weak_count;
  v52->_M_weak_count = v66 - 1;
LABEL_133:
  if ( v66 != 1 )
    goto LABEL_110;
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
    goto LABEL_144;
  p_M_finish = (unsigned __int64)(v52->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_145:
    __asan_report_load8(p_M_finish);
LABEL_146:
    __asan_report_load8(p_M_finish);
    goto LABEL_147;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v52->_vptr__Sp_counted_base + 3))(v52);
LABEL_110:
  if ( v51 < 0 )
    goto LABEL_114;
  p_M_finish = (unsigned __int64)&v7->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    goto LABEL_146;
  p_M_finish = (unsigned __int64)&v7->packet_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_load8(p_M_finish);
    goto LABEL_148;
  }
  M_start = v7->packet_queue_vec_._M_impl._M_start;
  if ( (int)(v7->packet_queue_vec_._M_impl._M_finish - M_start) <= v51 )
  {
LABEL_114:
    if ( v51 >= 0 )
    {
      common::milog::MiLogStream::MiLogStream(
        &v142,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "src/core_class/service_base.cpp",
        "pushPacket",
        360);
      p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&v7->packet_queue_vec_._M_impl._M_finish;
      if ( *(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_packet_queue_vec);
      }
      else
      {
        p_packet_queue_vec = &v7->packet_queue_vec_;
        if ( !*(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_ >> 3) + 0x7FFF8000) )
        {
          v59 = v7->packet_queue_vec_._M_impl._M_finish - v7->packet_queue_vec_._M_impl._M_start;
          if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
            {
              v60 = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
              v61 = *(_QWORD *)M_ptr + 212LL;
              v62 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
              if ( (char)(((*(_BYTE *)M_ptr - 44) & 7) + 3) < v62 || !v62 )
              {
LABEL_121:
                common::milog::MiLogStream::operator()(
                  &v142,
                  "uid=%u, cmd=%s, packet_queue_index=%d exceed packet_queue_vec size=%lu",
                  v60->head_.user_id_,
                  v5->_M_dataplus._M_p,
                  (unsigned int)v51,
                  v59);
LABEL_215:
                common::milog::MiLogStream::~MiLogStream(&v142);
                return 0xFFFFFFFFLL;
              }
LABEL_214:
              __asan_report_load4(v61);
              goto LABEL_215;
            }
LABEL_213:
            v61 = M_ptr;
            __asan_report_load8(M_ptr);
            goto LABEL_214;
          }
LABEL_212:
          __asan_report_load8(v5);
          goto LABEL_213;
        }
      }
      __asan_report_load8(p_packet_queue_vec);
      goto LABEL_212;
    }
LABEL_198:
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      355);
    v92 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&v7->packet_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v92);
    }
    else
    {
      v92 = &v7->packet_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        v59 = v7->packet_queue_vec_._M_impl._M_finish - v7->packet_queue_vec_._M_impl._M_start;
        if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
          {
            v60 = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
            v61 = *(_QWORD *)M_ptr + 212LL;
            v93 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
            if ( (char)(((*(_BYTE *)M_ptr - 44) & 7) + 3) < v93 || !v93 )
              goto LABEL_121;
            goto LABEL_214;
          }
LABEL_208:
          v61 = M_ptr;
          __asan_report_load8(M_ptr);
          goto LABEL_214;
        }
LABEL_207:
        __asan_report_load8(v5);
        goto LABEL_208;
      }
    }
    __asan_report_load8(v92);
    goto LABEL_207;
  }
LABEL_148:
  v68 = (unsigned __int64)&M_start[v51];
  if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&M_start[v51]);
    goto LABEL_198;
  }
  v69 = *(_QWORD *)v68;
  if ( !*(_QWORD *)v68 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      369);
    v94 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&v7->packet_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v94);
    }
    else
    {
      v94 = &v7->packet_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&v7->packet_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
          {
            v61 = *(_QWORD *)M_ptr + 212LL;
            v95 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
            if ( (char)(((*(_BYTE *)M_ptr - 44) & 7) + 3) < v95 || !v95 )
            {
              common::milog::MiLogStream::operator()(
                &v142,
                "uid=%u, cmd=%s, packet_queue_index=%d packet_queue_vec size=%lu packet_queue_ptr is nullptr",
                *(unsigned int *)(*(_QWORD *)M_ptr + 212LL),
                v5->_M_dataplus._M_p,
                (unsigned int)v51,
                v7->packet_queue_vec_._M_impl._M_finish - v7->packet_queue_vec_._M_impl._M_start);
              goto LABEL_215;
            }
            goto LABEL_214;
          }
          goto LABEL_226;
        }
LABEL_225:
        __asan_report_load8(v5);
LABEL_226:
        v61 = M_ptr;
        __asan_report_load8(M_ptr);
        goto LABEL_214;
      }
    }
    __asan_report_load8(v94);
    goto LABEL_225;
  }
  mutex = (pthread_mutex_t *)(v69 + 88);
  if ( &_pthread_key_create )
  {
    LODWORD(v138) = pthread_mutex_lock((pthread_mutex_t *)(v69 + 88));
    if ( (_DWORD)v138 )
    {
      __asan_handle_no_return(v69 + 88);
      std::__throw_system_error(v138);
    }
  }
  v70 = v69 + 72;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v70);
    goto LABEL_230;
  }
  v70 = v69 + 40;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_230:
    __asan_report_load8(v70);
    goto LABEL_231;
  }
  v70 = v69 + 48;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_231:
    __asan_report_load8(v70);
    goto LABEL_232;
  }
  v70 = v69 + 56;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_232:
    __asan_report_load8(v70);
    goto LABEL_233;
  }
  v70 = v69 + 32;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_233:
    __asan_report_load8(v70);
    goto LABEL_234;
  }
  v70 = v69 + 16;
  if ( *(_BYTE *)(((unsigned __int64)(v69 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_234:
    __asan_report_load8(v70);
LABEL_235:
    __asan_report_load4(v70);
    goto LABEL_236;
  }
  v138 = ((__int64)(*(_QWORD *)(v69 + 32) - *(_QWORD *)(v69 + 16)) >> 4)
       + 32 * (((__int64)(*(_QWORD *)(v69 + 72) - *(_QWORD *)(v69 + 40)) >> 3) - 1)
       + ((__int64)(*(_QWORD *)(v69 + 48) - *(_QWORD *)(v69 + 56)) >> 4);
  v70 = v69 + 80;
  v71 = *(_BYTE *)(((unsigned __int64)(v69 + 80) >> 3) + 0x7FFF8000);
  if ( v71 && v71 <= 3 )
    goto LABEL_235;
  v72 = *(_DWORD *)(v69 + 80);
  if ( !v72 || v138 < v72 )
  {
    v70 = v69 + 48;
    if ( !*(_BYTE *)(((unsigned __int64)(v69 + 48) >> 3) + 0x7FFF8000) )
    {
      v73 = *(_QWORD *)(v69 + 48);
      v74 = v69 + 64;
      v75 = (unsigned __int64)(v69 + 64) >> 3;
      if ( !*(_BYTE *)(v75 + 0x7FFF8000) )
      {
        if ( v73 == *(_QWORD *)(v69 + 64) - 16LL )
          goto LABEL_247;
        if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
        {
          if ( !*(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v73 = *(_QWORD *)M_ptr;
            v76 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_ptr + 8);
            if ( !*(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
            {
              v77 = *(_QWORD *)(M_ptr + 8);
              v78 = (volatile signed __int32 *)(v73 + 8);
              if ( !*(_BYTE *)(((v73 + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v73 + 8) = v77;
                if ( !v77 )
                {
LABEL_174:
                  *(_QWORD *)(v69 + 48) += 16LL;
LABEL_175:
                  v81 = v138 + 1 == 32 * (((__int64)(*(_QWORD *)(v69 + 72) - *(_QWORD *)(v69 + 40)) >> 3) - 1)
                                  + ((__int64)(*(_QWORD *)(v69 + 48) - *(_QWORD *)(v69 + 56)) >> 4)
                                  + ((__int64)(*(_QWORD *)(v69 + 32) - *(_QWORD *)(v69 + 16)) >> 4);
                  goto LABEL_176;
                }
                v79 = (volatile signed __int32 *)(v77 + 8);
                if ( !&_pthread_key_create )
                  goto LABEL_243;
                v80 = *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v79 & 7) + 3) < v80 || !v80 )
                {
                  _InterlockedAdd(v79, 1u);
                  goto LABEL_174;
                }
LABEL_242:
                v77 = __asan_report_store4(v79);
LABEL_243:
                v96 = *(_BYTE *)(((unsigned __int64)(v77 + 8) >> 3) + 0x7FFF8000);
                if ( (char)(((v77 + 8) & 7) + 3) < v96 || !v96 )
                {
                  ++*(_DWORD *)(v77 + 8);
                  goto LABEL_174;
                }
                __asan_report_load4(v77 + 8);
LABEL_247:
                std::deque<std::shared_ptr<common::minet::Packet>>::_M_push_back_aux<std::shared_ptr<common::minet::Packet> const&>(
                  (std::deque<std::shared_ptr<common::minet::Packet>> *const)v69,
                  (const std::shared_ptr<common::minet::Packet> *)M_ptr,
                  (const std::shared_ptr<common::minet::Packet> *)v75);
                goto LABEL_175;
              }
LABEL_241:
              v79 = v78;
              __asan_report_store8(v78);
              goto LABEL_242;
            }
LABEL_240:
            __asan_report_load8(v76);
            goto LABEL_241;
          }
LABEL_239:
          __asan_report_store8(v73);
          goto LABEL_240;
        }
LABEL_238:
        v73 = M_ptr;
        __asan_report_load8(M_ptr);
        goto LABEL_239;
      }
LABEL_237:
      __asan_report_load8(v74);
      goto LABEL_238;
    }
LABEL_236:
    v74 = __asan_report_load8(v70);
    goto LABEL_237;
  }
  v81 = 0;
LABEL_176:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  if ( !v81 )
  {
    M_p = &common::milog::MiLogDefault::default_log_obj_;
    common::milog::MiLogStream::MiLogStream(
      &v142,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "pushPacket",
      376);
    if ( *(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
    {
      v84 = v68;
      __asan_report_load8(v68);
    }
    else
    {
      v83 = *(_QWORD *)v68;
      v84 = *(_QWORD *)v68 + 80LL;
      v85 = *(_BYTE *)((v84 >> 3) + 0x7FFF8000);
      if ( !v85 || v85 > 3 )
      {
        v86 = *(_DWORD *)(v83 + 80);
        v87 = (pthread_mutex_t *)(v83 + 88);
        if ( !&_pthread_key_create
          || (v84 = v83 + 88, LODWORD(v138) = pthread_mutex_lock((pthread_mutex_t *)(v83 + 88)), !(_DWORD)v138) )
        {
          v88 = v83 + 72;
          if ( *(_BYTE *)(((unsigned __int64)(v83 + 72) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v88);
          }
          else
          {
            v88 = v83 + 40;
            if ( !*(_BYTE *)(((unsigned __int64)(v83 + 40) >> 3) + 0x7FFF8000) )
            {
              v88 = v83 + 48;
              if ( !*(_BYTE *)(((unsigned __int64)(v83 + 48) >> 3) + 0x7FFF8000) )
              {
                v88 = v83 + 56;
                if ( !*(_BYTE *)(((unsigned __int64)(v83 + 56) >> 3) + 0x7FFF8000) )
                {
                  v88 = v83 + 32;
                  if ( !*(_BYTE *)(((unsigned __int64)(v83 + 32) >> 3) + 0x7FFF8000) )
                  {
                    v88 = v83 + 16;
                    if ( !*(_BYTE *)(((unsigned __int64)(v83 + 16) >> 3) + 0x7FFF8000) )
                    {
                      v89 = 32 * (((__int64)(*(_QWORD *)(v83 + 72) - *(_QWORD *)(v83 + 40)) >> 3) - 1)
                          + ((__int64)(*(_QWORD *)(v83 + 48) - *(_QWORD *)(v83 + 56)) >> 4)
                          + ((__int64)(*(_QWORD *)(v83 + 32) - *(_QWORD *)(v83 + 16)) >> 4);
                      if ( &_pthread_key_create )
                        pthread_mutex_unlock(v87);
                      if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
                      {
                        M_p = (common::milog::MiLog *)v5->_M_dataplus._M_p;
                        if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
                        {
                          v90 = *(_QWORD *)M_ptr + 212LL;
                          v91 = *(_BYTE *)((v90 >> 3) + 0x7FFF8000);
                          if ( (char)(((*(_BYTE *)M_ptr - 44) & 7) + 3) < v91 || !v91 )
                          {
                            M_p = (common::milog::MiLog *)"push packet uid=%u, cmd=%s failed, packet_queue_size=%u, max_queue_size=%u";
                            common::milog::MiLogStream::operator()(
                              &v142,
                              "push packet uid=%u, cmd=%s failed, packet_queue_size=%u, max_queue_size=%u",
                              *(unsigned int *)(*(_QWORD *)M_ptr + 212LL),
                              v5->_M_dataplus._M_p,
                              (unsigned int)v89,
                              v86);
                            goto LABEL_261;
                          }
LABEL_260:
                          __asan_report_load4(v90);
LABEL_261:
                          common::milog::MiLogStream::~MiLogStream(&v142);
                          if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
                          {
                            v100 = M_ptr;
                            __asan_report_load8(M_ptr);
                          }
                          else
                          {
                            v100 = *(_QWORD *)M_ptr + 8LL;
                            v101 = *(unsigned __int8 *)((v100 >> 3) + 0x7FFF8000);
                            if ( !(_BYTE)v101 || (char)v101 > 1 )
                            {
                              __k = *(unsigned __int16 *)(*(_QWORD *)M_ptr + 8LL);
                              v102._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>,std::_Select1st<std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<int ()(std::shared_ptr<common::minet::Packet>)>>>>::find(
                                               &v7->push_fail_packet_func_map_._M_t,
                                               &__k)._M_node;
                              if ( (std::_Rb_tree_header *)v102._M_node == &v7->push_fail_packet_func_map_._M_t._M_impl.std::_Rb_tree_header )
                                return 0xFFFFFFFFLL;
                              v103 = (const std::function<int(std::shared_ptr<common::minet::Packet>)> *)&v102._M_node[1]._M_parent;
                              if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
                              {
                                __args_0._M_ptr = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
                                v104 = M_ptr + 8;
                                v105 = (M_ptr + 8) >> 3;
                                if ( !*(_BYTE *)(v105 + 0x7FFF8000) )
                                {
                                  v106 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
                                  __args_0._M_refcount._M_pi = v106;
                                  if ( !v106 )
                                    goto LABEL_272;
                                  v105 = (unsigned __int64)&v106->_M_use_count;
                                  if ( !&_pthread_key_create )
                                  {
LABEL_278:
                                    v109 = *(_BYTE *)(((unsigned __int64)&v106->_M_use_count >> 3) + 0x7FFF8000);
                                    v105 = (((_BYTE)v106 + 8) & 7u) + 3;
                                    if ( (char)((((_BYTE)v106 + 8) & 7) + 3) >= v109 && v109 )
                                    {
                                      __asan_report_load4(&v106->_M_use_count);
LABEL_282:
                                      v110 = v108;
                                      v111 = __args_0._M_refcount._M_pi;
                                      if ( !__args_0._M_refcount._M_pi )
                                        goto LABEL_288;
                                      v112 = &__args_0._M_refcount._M_pi->_M_use_count;
                                      if ( &_pthread_key_create )
                                      {
                                        v113 = *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000);
                                        if ( (char)(((unsigned __int8)v112 & 7) + 3) < v113 || !v113 )
                                        {
                                          v114 = _InterlockedExchangeAdd(v112, 0xFFFFFFFF);
                                          goto LABEL_287;
                                        }
                                        __asan_report_store4(v112);
                                      }
                                      v115 = *(_BYTE *)(((unsigned __int64)&v111->_M_use_count >> 3) + 0x7FFF8000);
                                      if ( (char)((((_BYTE)v111 + 8) & 7) + 3) >= v115 && v115 )
                                      {
                                        __asan_report_load4(&v111->_M_use_count);
                                        goto LABEL_295;
                                      }
                                      v114 = v111->_M_use_count;
                                      v111->_M_use_count = v114 - 1;
LABEL_287:
                                      if ( v114 != 1 )
                                        goto LABEL_288;
LABEL_295:
                                      if ( *(_BYTE *)(((unsigned __int64)v111 >> 3) + 0x7FFF8000) )
                                      {
                                        v116 = (volatile signed __int32 *)v111;
                                        __asan_report_load8(v111);
                                      }
                                      else
                                      {
                                        v116 = (volatile signed __int32 *)(v111->_vptr__Sp_counted_base + 2);
                                        if ( !*(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000) )
                                        {
                                          (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v111->_vptr__Sp_counted_base
                                           + 2))(v111);
                                          v116 = &v111->_M_weak_count;
                                          if ( !&_pthread_key_create )
                                            goto LABEL_308;
                                          v117 = *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000);
                                          if ( (char)(((unsigned __int8)v116 & 7) + 3) < v117 || !v117 )
                                          {
                                            v118 = _InterlockedExchangeAdd(v116, 0xFFFFFFFF);
                                            goto LABEL_301;
                                          }
LABEL_307:
                                          __asan_report_store4(v116);
LABEL_308:
                                          v120 = *(_BYTE *)(((unsigned __int64)&v111->_M_weak_count >> 3) + 0x7FFF8000);
                                          if ( (char)((((_BYTE)v111 + 12) & 7) + 3) >= v120 && v120 )
                                          {
                                            __asan_report_load4(&v111->_M_weak_count);
                                            goto LABEL_312;
                                          }
                                          v118 = v111->_M_weak_count;
                                          v111->_M_weak_count = v118 - 1;
LABEL_301:
                                          if ( v118 != 1 )
                                            goto LABEL_288;
                                          if ( !*(_BYTE *)(((unsigned __int64)v111 >> 3) + 0x7FFF8000) )
                                          {
                                            v119 = (unsigned __int64)(v111->_vptr__Sp_counted_base + 3);
                                            if ( !*(_BYTE *)((v119 >> 3) + 0x7FFF8000) )
                                            {
                                              (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v111->_vptr__Sp_counted_base
                                               + 3))(v111);
LABEL_288:
                                              if ( !v110 )
                                                return 0xFFFFFFFFLL;
LABEL_314:
                                              common::milog::MiLogStream::MiLogStream(
                                                &v142,
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "src/core_class/service_base.cpp",
                                                "pushPacket",
                                                385);
                                              if ( !*(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
                                                goto LABEL_315;
                                              goto LABEL_316;
                                            }
LABEL_313:
                                            __asan_report_load8(v119);
                                            goto LABEL_314;
                                          }
LABEL_312:
                                          v119 = (unsigned __int64)v111;
                                          __asan_report_load8(v111);
                                          goto LABEL_313;
                                        }
                                      }
                                      __asan_report_load8(v116);
                                      goto LABEL_307;
                                    }
                                    ++v106->_M_use_count;
LABEL_272:
                                    v108 = std::function<int ()(std::shared_ptr<common::minet::Packet>)>::operator()(
                                             v103,
                                             (std::shared_ptr<common::minet::Packet>)__PAIR128__(v105, &__args_0));
                                    goto LABEL_282;
                                  }
                                  v107 = *(_BYTE *)((v105 >> 3) + 0x7FFF8000);
                                  if ( (char)((v105 & 7) + 3) < v107 || !v107 )
                                  {
                                    _InterlockedAdd((volatile signed __int32 *)v105, 1u);
                                    goto LABEL_272;
                                  }
LABEL_277:
                                  v103 = (const std::function<int(std::shared_ptr<common::minet::Packet>)> *)v105;
                                  v106 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v105);
                                  goto LABEL_278;
                                }
LABEL_276:
                                __asan_report_load8(v104);
                                goto LABEL_277;
                              }
LABEL_275:
                              v104 = __asan_report_load8(M_ptr);
                              goto LABEL_276;
                            }
                          }
                          __asan_report_load2(v100, M_p, v101, v97, v98, v99);
                          goto LABEL_275;
                        }
LABEL_259:
                        v90 = M_ptr;
                        __asan_report_load8(M_ptr);
                        goto LABEL_260;
                      }
LABEL_258:
                      __asan_report_load8(v5);
                      goto LABEL_259;
                    }
LABEL_257:
                    __asan_report_load8(v88);
                    goto LABEL_258;
                  }
LABEL_256:
                  __asan_report_load8(v88);
                  goto LABEL_257;
                }
LABEL_255:
                __asan_report_load8(v88);
                goto LABEL_256;
              }
LABEL_254:
              __asan_report_load8(v88);
              goto LABEL_255;
            }
          }
          __asan_report_load8(v88);
          goto LABEL_254;
        }
LABEL_251:
        __asan_handle_no_return(v84);
        std::__throw_system_error(v138);
      }
    }
    __asan_report_load4(v84);
    goto LABEL_251;
  }
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    v121 = (unsigned __int64)v7;
    __asan_report_load8(v7);
    goto LABEL_328;
  }
  v121 = (unsigned __int64)(v7->_vptr_ServiceBase + 12);
  if ( *(_BYTE *)((v121 >> 3) + 0x7FFF8000) )
  {
LABEL_328:
    __asan_report_load8(v121);
    goto LABEL_329;
  }
  v122 = (void (__fastcall *)(ServiceBase *, std::shared_ptr<common::minet::Packet> *, _QWORD))*((_QWORD *)v7->_vptr_ServiceBase
                                                                                               + 12);
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_329:
    v123 = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_330;
  }
  __args_0._M_ptr = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
  v123 = M_ptr + 8;
  if ( *(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_330:
    __asan_report_load8(v123);
LABEL_331:
    v124 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v123);
    goto LABEL_332;
  }
  v124 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
  __args_0._M_refcount._M_pi = v124;
  if ( !v124 )
  {
LABEL_326:
    v122(v7, &__args_0, (unsigned int)v51);
    goto LABEL_336;
  }
  v123 = (unsigned __int64)&v124->_M_use_count;
  if ( &_pthread_key_create )
  {
    v125 = *(_BYTE *)((v123 >> 3) + 0x7FFF8000);
    if ( (char)((v123 & 7) + 3) < v125 || !v125 )
    {
      _InterlockedAdd((volatile signed __int32 *)v123, 1u);
      goto LABEL_326;
    }
    goto LABEL_331;
  }
LABEL_332:
  v126 = *(_BYTE *)(((unsigned __int64)&v124->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v124 + 8) & 7) + 3) < v126 || !v126 )
  {
    ++v124->_M_use_count;
    goto LABEL_326;
  }
  __asan_report_load4(&v124->_M_use_count);
LABEL_336:
  v127 = __args_0._M_refcount._M_pi;
  if ( __args_0._M_refcount._M_pi )
  {
    v128 = &__args_0._M_refcount._M_pi->_M_use_count;
    if ( &_pthread_key_create )
    {
      v129 = *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v128 & 7) + 3) < v129 || !v129 )
      {
        v130 = _InterlockedExchangeAdd(v128, 0xFFFFFFFF);
        goto LABEL_341;
      }
      __asan_report_store4(v128);
    }
    v131 = *(_BYTE *)(((unsigned __int64)&v127->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v127 + 8) & 7) + 3) >= v131 && v131 )
    {
      __asan_report_load4(&v127->_M_use_count);
      goto LABEL_348;
    }
    v130 = v127->_M_use_count;
    v127->_M_use_count = v130 - 1;
LABEL_341:
    if ( v130 != 1 )
      return 0LL;
LABEL_348:
    if ( *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
    {
      v132 = (volatile signed __int32 *)v127;
      __asan_report_load8(v127);
    }
    else
    {
      v132 = (volatile signed __int32 *)(v127->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v132 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v127->_vptr__Sp_counted_base + 2))(v127);
        v132 = &v127->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_361;
        v133 = *(_BYTE *)(((unsigned __int64)v132 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v132 & 7) + 3) < v133 || !v133 )
        {
          v134 = _InterlockedExchangeAdd(v132, 0xFFFFFFFF);
          goto LABEL_354;
        }
LABEL_360:
        __asan_report_store4(v132);
LABEL_361:
        v136 = *(_BYTE *)(((unsigned __int64)&v127->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v127 + 12) & 7) + 3) >= v136 && v136 )
        {
          __asan_report_load4(&v127->_M_weak_count);
          goto LABEL_365;
        }
        v134 = v127->_M_weak_count;
        v127->_M_weak_count = v134 - 1;
LABEL_354:
        if ( v134 != 1 )
          return 0LL;
        if ( !*(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
        {
          v135 = (unsigned __int64)(v127->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v135 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v127->_vptr__Sp_counted_base
             + 3))(v127);
            return 0LL;
          }
LABEL_366:
          v137 = (struct _Unwind_Exception *)__asan_report_load8(v135);
          common::milog::MiLogStream::~MiLogStream(&v142);
          __asan_handle_no_return(&v142);
          _Unwind_Resume(v137);
        }
LABEL_365:
        v135 = (unsigned __int64)v127;
        __asan_report_load8(v127);
        goto LABEL_366;
      }
    }
    __asan_report_load8(v132);
    goto LABEL_360;
  }
  return 0LL;
};

// Line 403: range 0000000014E54DD2-0000000014E54F48
// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall ServiceBase::getPacketQueueIndex(
        ServiceBase *const this,
        common::minet::PacketPtr packet_ptr)
{
  common::minet::Packet *vptr_Packet; // rdi
  char v4; // al
  google::protobuf::uint32 *p_user_id; // rdx
  char v6; // cl
  uint32_t ThreadOffset; // eax
  volatile signed __int64 *p_next_packet_queue_index; // rdi
  char v9; // dl
  __int64 v10; // rdx
  common::milog::MiLogStream v12; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_14;
  }
  vptr_Packet = (common::minet::Packet *)packet_ptr._M_ptr->_vptr_Packet;
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_14:
    common::milog::MiLogStream::MiLogStream(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "getPacketQueueIndex",
      406);
    common::milog::MiLogStream::operator()(&v12, "packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  v4 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
LABEL_16:
    __asan_report_load4(p_user_id);
    goto LABEL_17;
  }
  if ( this->thread_num_ == 1 )
  {
LABEL_21:
    LODWORD(v10) = 0;
    return (unsigned int)v10;
  }
  p_user_id = &vptr_Packet->head_.user_id_;
  v6 = *(_BYTE *)(((unsigned __int64)&vptr_Packet->head_.user_id_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)vptr_Packet - 44) & 7) + 3) >= v6 && v6 )
    goto LABEL_16;
  if ( !vptr_Packet->head_.user_id_ )
  {
LABEL_17:
    p_next_packet_queue_index = (volatile signed __int64 *)&this->next_packet_queue_index;
    if ( !*(_BYTE *)(((unsigned __int64)&this->next_packet_queue_index >> 3) + 0x7FFF8000) )
      return _InterlockedExchangeAdd64(p_next_packet_queue_index, 1uLL) % (unsigned __int64)this->thread_num_;
    __asan_report_store8(p_next_packet_queue_index);
    goto LABEL_20;
  }
  ThreadOffset = common::minet::Packet::getThreadOffset(vptr_Packet);
  p_next_packet_queue_index = (volatile signed __int64 *)&this->thread_num_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
LABEL_20:
    __asan_report_load4(p_next_packet_queue_index);
    goto LABEL_21;
  }
  LODWORD(v10) = ThreadOffset % this->thread_num_;
  return (unsigned int)v10;
};

// Line 420: range 0000000014E58FA0-0000000014E59D29
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ServiceBase::forcePushPacket(ServiceBase *const this, common::minet::PacketPtr packet_ptr)
{
  unsigned __int64 v2; // r12
  unsigned __int64 M_ptr; // r13
  unsigned __int64 v4; // rbp
  int (**vptr_Packet)(...); // rbx
  char v6; // dl
  uint32_t v7; // eax
  unsigned __int64 v8; // rdi
  __int64 (__fastcall *v9)(unsigned __int64, int (***)(...)); // rdx
  volatile signed __int32 *p_cmd_id; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v11; // rax
  char v12; // cl
  int v13; // eax
  char v15; // si
  int v16; // r14d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rbx
  _Atomic_word *p_M_use_count; // rdi
  char v19; // dl
  signed __int32 M_use_count; // eax
  unsigned __int64 v21; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer v22; // rdx
  unsigned __int64 p_user_id; // rdi
  __int64 v24; // rbx
  pthread_mutex_t *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  char v29; // al
  unsigned int v30; // eax
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v34; // rax
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdx
  volatile signed __int32 *v37; // rdi
  char v38; // dl
  bool v39; // bl
  unsigned __int64 v40; // rdi
  void (__fastcall *v41)(unsigned __int64, int (***)(...), _QWORD); // rcx
  unsigned __int64 v42; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v43; // rax
  char v44; // dl
  char v45; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v47; // dl
  signed __int32 M_weak_count; // eax
  char v49; // dl
  __int64 v50; // rcx
  __int64 v51; // r8
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *v52; // rdi
  __int64 v53; // r9
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v54; // rax
  __int64 v55; // rdx
  char v56; // cl
  __int64 v57; // rcx
  __int64 v58; // r8
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *v59; // rdi
  __int64 v60; // r9
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v61; // rax
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  char v64; // cl
  char v65; // cl
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *v69; // rax
  __int64 v70; // rdx
  char v71; // cl
  char v72; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v73; // rbx
  _Atomic_word *v74; // rdi
  char v75; // dl
  signed __int32 v76; // eax
  char v77; // dl
  volatile signed __int32 *v78; // rdi
  char v79; // dl
  signed __int32 v80; // eax
  unsigned __int64 v81; // rdi
  char v82; // dl
  struct _Unwind_Exception *v83; // rbx
  int (**v84)(...); // [rsp+0h] [rbp-68h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v85; // [rsp+8h] [rbp-60h]
  common::milog::MiLogStream v86; // [rsp+10h] [rbp-58h] BYREF

  M_ptr = (unsigned __int64)packet_ptr._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_18;
  }
  v4 = (unsigned __int64)this;
  vptr_Packet = packet_ptr._M_ptr->_vptr_Packet;
  if ( !packet_ptr._M_ptr->_vptr_Packet )
  {
LABEL_18:
    common::milog::MiLogStream::MiLogStream(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "forcePushPacket",
      423);
    common::milog::MiLogStream::operator()(&v86, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v86);
    return 0xFFFFFFFFLL;
  }
  v6 = *(_BYTE *)(((unsigned __int64)&ResourceBox::cur_app_id >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)&ResourceBox::cur_app_id & 7) + 3) >= v6 && v6 )
  {
    __asan_report_load4(&ResourceBox::cur_app_id);
    goto LABEL_20;
  }
  v2 = ResourceBox::cur_app_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(this);
    goto LABEL_21;
  }
  this = (ServiceBase *const)(this->_vptr_ServiceBase + 13);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v4 + 104LL) >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(this);
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 104LL))(v4);
  common::minet::Packet::setServiceAppId((common::minet::Packet *const)vptr_Packet, v7, v2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v8 = v4;
    __asan_report_load8(v4);
    goto LABEL_23;
  }
  v8 = *(_QWORD *)v4 + 80LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v8);
    goto LABEL_24;
  }
  packet_ptr._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(*(_QWORD *)v4 + 80LL);
  if ( *(_BYTE *)(((unsigned __int64)packet_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    p_cmd_id = (volatile signed __int32 *)packet_ptr._M_ptr;
    __asan_report_load8(packet_ptr._M_ptr);
    goto LABEL_25;
  }
  v84 = packet_ptr._M_ptr->_vptr_Packet;
  p_cmd_id = (volatile signed __int32 *)&packet_ptr._M_ptr->cmd_id_;
  if ( *(_BYTE *)(((unsigned __int64)&packet_ptr._M_ptr->cmd_id_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_cmd_id);
LABEL_26:
    v11 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_cmd_id);
    goto LABEL_27;
  }
  v11 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&packet_ptr._M_ptr->cmd_id_;
  v85 = v11;
  if ( !v11 )
  {
LABEL_16:
    v13 = v9(v4, &v84);
    goto LABEL_31;
  }
  p_cmd_id = &v11->_M_use_count;
  if ( &_pthread_key_create )
  {
    v12 = *(_BYTE *)(((unsigned __int64)p_cmd_id >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_cmd_id & 7) + 3) < v12 || !v12 )
    {
      _InterlockedAdd(p_cmd_id, 1u);
      goto LABEL_16;
    }
    goto LABEL_26;
  }
LABEL_27:
  v15 = *(_BYTE *)(((unsigned __int64)&v11->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v11 + 8) & 7) + 3) < v15 || !v15 )
  {
    ++v11->_M_use_count;
    goto LABEL_16;
  }
  __asan_report_load4(&v11->_M_use_count);
LABEL_31:
  v16 = v13;
  v17 = v85;
  if ( !v85 )
    goto LABEL_37;
  p_M_use_count = &v85->_M_use_count;
  if ( &_pthread_key_create )
  {
    v19 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v19 || !v19 )
    {
      M_use_count = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
      goto LABEL_36;
    }
    __asan_report_store4(p_M_use_count);
  }
  v45 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v45 && v45 )
  {
    __asan_report_load4(&v17->_M_use_count);
    goto LABEL_87;
  }
  M_use_count = v17->_M_use_count;
  v17->_M_use_count = M_use_count - 1;
LABEL_36:
  if ( M_use_count != 1 )
    goto LABEL_37;
LABEL_87:
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v17;
    __asan_report_load8(v17);
    goto LABEL_98;
  }
  p_M_weak_count = (volatile signed __int32 *)(v17->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_99;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 2))(v17);
  p_M_weak_count = &v17->_M_weak_count;
  if ( !&_pthread_key_create )
    goto LABEL_100;
  v47 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v47 || !v47 )
  {
    M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
    goto LABEL_93;
  }
LABEL_99:
  __asan_report_store4(p_M_weak_count);
LABEL_100:
  v49 = *(_BYTE *)(((unsigned __int64)&v17->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 12) & 7) + 3) >= v49 && v49 )
  {
    __asan_report_load4(&v17->_M_weak_count);
LABEL_104:
    v21 = (unsigned __int64)v17;
    __asan_report_load8(v17);
    goto LABEL_105;
  }
  M_weak_count = v17->_M_weak_count;
  v17->_M_weak_count = M_weak_count - 1;
LABEL_93:
  if ( M_weak_count != 1 )
    goto LABEL_37;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    goto LABEL_104;
  v21 = (unsigned __int64)(v17->_vptr__Sp_counted_base + 3);
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_load8(v21);
LABEL_106:
    __asan_report_load8(v21);
    goto LABEL_107;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v17->_vptr__Sp_counted_base + 3))(v17);
LABEL_37:
  if ( v16 < 0 )
    goto LABEL_108;
  v21 = v4 + 64;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    goto LABEL_106;
  v21 = v4 + 56;
  if ( *(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    __asan_report_load8(v21);
LABEL_108:
    common::milog::MiLogStream::MiLogStream(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "forcePushPacket",
      434);
    v52 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)(v4 + 64);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v52);
    }
    else
    {
      v52 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)(v4 + 56);
      if ( !*(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
      {
        v53 = (__int64)(*(_QWORD *)(v4 + 64) - *(_QWORD *)(v4 + 56)) >> 3;
        if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
        {
          v54 = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
          p_user_id = *(_QWORD *)M_ptr + 8LL;
          v55 = *(unsigned __int8 *)((p_user_id >> 3) + 0x7FFF8000);
          if ( !(_BYTE)v55 || (char)v55 > 1 )
          {
            p_user_id = (unsigned __int64)&v54->head_.user_id_;
            v56 = *(_BYTE *)(((unsigned __int64)&v54->head_.user_id_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v54 - 44) & 7) + 3) < v56 || !v56 )
            {
              common::milog::MiLogStream::operator()(
                &v86,
                "uid=%u, cmd=%u, packet_queue_index=%d exceed packet_queue_vec size=%lu",
                v54->head_.user_id_,
                v54->cmd_id_,
                (unsigned int)v16,
                v53);
              goto LABEL_165;
            }
            goto LABEL_120;
          }
LABEL_119:
          __asan_report_load2(p_user_id, &common::milog::MiLogDefault::default_log_obj_, v55, v50, v51, v53);
LABEL_120:
          __asan_report_load4(p_user_id);
          goto LABEL_121;
        }
LABEL_118:
        p_user_id = M_ptr;
        __asan_report_load8(M_ptr);
        goto LABEL_119;
      }
    }
    __asan_report_load8(v52);
    goto LABEL_118;
  }
  v22 = *(std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer *)(v4 + 56);
  if ( (int)((__int64)(*(_QWORD *)(v4 + 64) - (_QWORD)v22) >> 3) <= v16 )
    goto LABEL_108;
  p_user_id = (unsigned __int64)&v22[v16];
  if ( *(_BYTE *)((p_user_id >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_load8(p_user_id);
    goto LABEL_165;
  }
  v24 = *(_QWORD *)p_user_id;
  if ( !*(_QWORD *)p_user_id )
  {
    common::milog::MiLogStream::MiLogStream(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "forcePushPacket",
      442);
    v59 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)(v4 + 64);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v59);
    }
    else
    {
      v59 = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)(v4 + 56);
      if ( !*(_BYTE *)(((v4 + 56) >> 3) + 0x7FFF8000) )
      {
        v60 = (__int64)(*(_QWORD *)(v4 + 64) - *(_QWORD *)(v4 + 56)) >> 3;
        if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
        {
          v61 = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
          v62 = *(_QWORD *)M_ptr + 8LL;
          v63 = *(unsigned __int8 *)((v62 >> 3) + 0x7FFF8000);
          if ( !(_BYTE)v63 || (char)v63 > 1 )
          {
            v62 = (unsigned __int64)&v61->head_.user_id_;
            v64 = *(_BYTE *)(((unsigned __int64)&v61->head_.user_id_ >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v61 - 44) & 7) + 3) >= v64 && v64 )
              goto LABEL_164;
            common::milog::MiLogStream::operator()(
              &v86,
              "uid=%u, cmd=%u, packet_queue_index=%d packet_queue_vec size=%lu packet_queue_ptr is nullptr",
              v61->head_.user_id_,
              v61->cmd_id_,
              (unsigned int)v16,
              v60);
LABEL_165:
            common::milog::MiLogStream::~MiLogStream(&v86);
            return 0xFFFFFFFFLL;
          }
LABEL_133:
          __asan_report_load2(v62, &common::milog::MiLogDefault::default_log_obj_, v63, v57, v58, v60);
          goto LABEL_164;
        }
LABEL_132:
        v62 = M_ptr;
        __asan_report_load8(M_ptr);
        goto LABEL_133;
      }
    }
    __asan_report_load8(v59);
    goto LABEL_132;
  }
  v25 = (pthread_mutex_t *)(v24 + 88);
  if ( &_pthread_key_create )
  {
    v26 = pthread_mutex_lock((pthread_mutex_t *)(v24 + 88));
    v2 = v26;
    if ( v26 )
    {
      __asan_handle_no_return(v24 + 88);
      std::__throw_system_error(v2);
    }
  }
  v27 = v24 + 72;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 72) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v27);
    goto LABEL_137;
  }
  v27 = v24 + 40;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_137:
    __asan_report_load8(v27);
    goto LABEL_138;
  }
  v27 = v24 + 48;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    __asan_report_load8(v27);
    goto LABEL_139;
  }
  v2 = *(_QWORD *)(v24 + 48);
  v27 = v24 + 56;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_139:
    __asan_report_load8(v27);
    goto LABEL_140;
  }
  v2 = (__int64)(v2 - *(_QWORD *)(v24 + 56)) >> 4;
  v28 = 32 * (((__int64)(*(_QWORD *)(v24 + 72) - *(_QWORD *)(v24 + 40)) >> 3) - 1) + v2;
  v27 = v24 + 32;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_140:
    __asan_report_load8(v27);
    goto LABEL_141;
  }
  v2 = *(_QWORD *)(v24 + 32);
  v27 = v24 + 16;
  if ( *(_BYTE *)(((unsigned __int64)(v24 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_141:
    __asan_report_load8(v27);
LABEL_142:
    __asan_report_load4(v27);
    goto LABEL_143;
  }
  v2 = v28 + ((__int64)(v2 - *(_QWORD *)(v24 + 16)) >> 4);
  v27 = v24 + 80;
  v29 = *(_BYTE *)(((unsigned __int64)(v24 + 80) >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
    goto LABEL_142;
  v30 = *(_DWORD *)(v24 + 80);
  if ( !v30 || v2 < v30 )
  {
    v27 = v24 + 48;
    if ( !*(_BYTE *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000) )
    {
      v31 = *(_QWORD *)(v24 + 48);
      v32 = v24 + 64;
      v33 = (unsigned __int64)(v24 + 64) >> 3;
      if ( !*(_BYTE *)(v33 + 0x7FFF8000) )
      {
        if ( v31 == *(_QWORD *)(v24 + 64) - 16LL )
          goto LABEL_154;
        if ( !*(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
        {
          if ( !*(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v31 = *(_QWORD *)M_ptr;
            v34 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)(M_ptr + 8);
            if ( !*(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
            {
              v35 = *(_QWORD *)(M_ptr + 8);
              v36 = (volatile signed __int32 *)(v31 + 8);
              if ( !*(_BYTE *)(((v31 + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v31 + 8) = v35;
                if ( !v35 )
                {
LABEL_67:
                  *(_QWORD *)(v24 + 48) += 16LL;
LABEL_68:
                  v39 = v2 + 1 == 32 * (((__int64)(*(_QWORD *)(v24 + 72) - *(_QWORD *)(v24 + 40)) >> 3) - 1)
                                + ((__int64)(*(_QWORD *)(v24 + 48) - *(_QWORD *)(v24 + 56)) >> 4)
                                + ((__int64)(*(_QWORD *)(v24 + 32) - *(_QWORD *)(v24 + 16)) >> 4);
                  goto LABEL_69;
                }
                v37 = (volatile signed __int32 *)(v35 + 8);
                if ( !&_pthread_key_create )
                  goto LABEL_150;
                v38 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v37 & 7) + 3) < v38 || !v38 )
                {
                  _InterlockedAdd(v37, 1u);
                  goto LABEL_67;
                }
LABEL_149:
                v35 = __asan_report_store4(v37);
LABEL_150:
                v65 = *(_BYTE *)(((unsigned __int64)(v35 + 8) >> 3) + 0x7FFF8000);
                if ( (char)(((v35 + 8) & 7) + 3) < v65 || !v65 )
                {
                  ++*(_DWORD *)(v35 + 8);
                  goto LABEL_67;
                }
                __asan_report_load4(v35 + 8);
LABEL_154:
                std::deque<std::shared_ptr<common::minet::Packet>>::_M_push_back_aux<std::shared_ptr<common::minet::Packet> const&>(
                  (std::deque<std::shared_ptr<common::minet::Packet>> *const)v24,
                  (const std::shared_ptr<common::minet::Packet> *)M_ptr,
                  (const std::shared_ptr<common::minet::Packet> *)v33);
                goto LABEL_68;
              }
LABEL_148:
              v37 = v36;
              __asan_report_store8(v36);
              goto LABEL_149;
            }
LABEL_147:
            __asan_report_load8(v34);
            goto LABEL_148;
          }
LABEL_146:
          __asan_report_store8(v31);
          goto LABEL_147;
        }
LABEL_145:
        v31 = M_ptr;
        __asan_report_load8(M_ptr);
        goto LABEL_146;
      }
LABEL_144:
      __asan_report_load8(v32);
      goto LABEL_145;
    }
LABEL_143:
    v32 = __asan_report_load8(v27);
    goto LABEL_144;
  }
  v39 = 0;
LABEL_69:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v25);
  if ( !v39 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v86,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "forcePushPacket",
      449);
    if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
    {
      v62 = M_ptr;
      __asan_report_load8(M_ptr);
    }
    else
    {
      v69 = *(std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type **)M_ptr;
      v62 = *(_QWORD *)M_ptr + 8LL;
      v70 = *(unsigned __int8 *)((v62 >> 3) + 0x7FFF8000);
      if ( !(_BYTE)v70 || (char)v70 > 1 )
      {
        v62 = (unsigned __int64)&v69->head_.user_id_;
        v71 = *(_BYTE *)(((unsigned __int64)&v69->head_.user_id_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v69 - 44) & 7) + 3) < v71 || !v71 )
        {
          common::milog::MiLogStream::operator()(
            &v86,
            "push packet uid=%u, cmd=%u failed",
            v69->head_.user_id_,
            v69->cmd_id_);
          goto LABEL_165;
        }
LABEL_164:
        __asan_report_load4(v62);
        goto LABEL_165;
      }
    }
    __asan_report_load2(v62, &common::milog::MiLogDefault::default_log_obj_, v70, v66, v67, v68);
    goto LABEL_164;
  }
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    v40 = v4;
    __asan_report_load8(v4);
    goto LABEL_167;
  }
  v40 = *(_QWORD *)v4 + 96LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_167:
    __asan_report_load8(v40);
    goto LABEL_168;
  }
  v41 = *(void (__fastcall **)(unsigned __int64, int (***)(...), _QWORD))(*(_QWORD *)v4 + 96LL);
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_168:
    v42 = M_ptr;
    __asan_report_load8(M_ptr);
    goto LABEL_169;
  }
  v84 = *(int (***)(...))M_ptr;
  v42 = M_ptr + 8;
  if ( *(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_169:
    __asan_report_load8(v42);
LABEL_170:
    v43 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v42);
    goto LABEL_171;
  }
  v43 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(M_ptr + 8);
  v85 = v43;
  if ( !v43 )
  {
LABEL_81:
    v41(v4, &v84, (unsigned int)v16);
    goto LABEL_175;
  }
  v42 = (unsigned __int64)&v43->_M_use_count;
  if ( &_pthread_key_create )
  {
    v44 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
    if ( (char)((v42 & 7) + 3) < v44 || !v44 )
    {
      _InterlockedAdd((volatile signed __int32 *)v42, 1u);
      goto LABEL_81;
    }
    goto LABEL_170;
  }
LABEL_171:
  v72 = *(_BYTE *)(((unsigned __int64)&v43->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v43 + 8) & 7) + 3) < v72 || !v72 )
  {
    ++v43->_M_use_count;
    goto LABEL_81;
  }
  __asan_report_load4(&v43->_M_use_count);
LABEL_175:
  v73 = v85;
  if ( v85 )
  {
    v74 = &v85->_M_use_count;
    if ( &_pthread_key_create )
    {
      v75 = *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v74 & 7) + 3) < v75 || !v75 )
      {
        v76 = _InterlockedExchangeAdd(v74, 0xFFFFFFFF);
        goto LABEL_180;
      }
      __asan_report_store4(v74);
    }
    v77 = *(_BYTE *)(((unsigned __int64)&v73->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v73 + 8) & 7) + 3) >= v77 && v77 )
    {
      __asan_report_load4(&v73->_M_use_count);
      goto LABEL_187;
    }
    v76 = v73->_M_use_count;
    v73->_M_use_count = v76 - 1;
LABEL_180:
    if ( v76 != 1 )
      return 0LL;
LABEL_187:
    if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
    {
      v78 = (volatile signed __int32 *)v73;
      __asan_report_load8(v73);
    }
    else
    {
      v78 = (volatile signed __int32 *)(v73->_vptr__Sp_counted_base + 2);
      if ( !*(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v73->_vptr__Sp_counted_base + 2))(v73);
        v78 = &v73->_M_weak_count;
        if ( !&_pthread_key_create )
          goto LABEL_200;
        v79 = *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v78 & 7) + 3) < v79 || !v79 )
        {
          v80 = _InterlockedExchangeAdd(v78, 0xFFFFFFFF);
          goto LABEL_193;
        }
LABEL_199:
        __asan_report_store4(v78);
LABEL_200:
        v82 = *(_BYTE *)(((unsigned __int64)&v73->_M_weak_count >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v73 + 12) & 7) + 3) >= v82 && v82 )
        {
          __asan_report_load4(&v73->_M_weak_count);
          goto LABEL_204;
        }
        v80 = v73->_M_weak_count;
        v73->_M_weak_count = v80 - 1;
LABEL_193:
        if ( v80 != 1 )
          return 0LL;
        if ( !*(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
        {
          v81 = (unsigned __int64)(v73->_vptr__Sp_counted_base + 3);
          if ( !*(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
          {
            (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v73->_vptr__Sp_counted_base + 3))(v73);
            return 0LL;
          }
LABEL_205:
          v83 = (struct _Unwind_Exception *)__asan_report_load8(v81);
          common::milog::MiLogStream::~MiLogStream(&v86);
          __asan_handle_no_return(&v86);
          _Unwind_Resume(v83);
        }
LABEL_204:
        v81 = (unsigned __int64)v73;
        __asan_report_load8(v73);
        goto LABEL_205;
      }
    }
    __asan_report_load8(v78);
    goto LABEL_199;
  }
  return 0LL;
};

// Line 458: range 0000000014E551A2-0000000014E554B2
uint32_t __fastcall ServiceBase::getWorkThreadQueueSize(ServiceBase *const this, uint32_t thread_index)
{
  uint32_t v2; // ebp
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_M_finish; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_start; // rdx
  unsigned __int64 v6; // rdi
  common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > *v7; // r12
  int v8; // ebx
  void *p_M_node; // rdi
  __int64 v10; // rbx
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_packet_queue_vec; // rdi
  struct _Unwind_Exception *v13; // rbx
  common::milog::MiLogStream v14; // [rsp+0h] [rbp-38h] BYREF

  p_M_finish = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_finish);
    goto LABEL_18;
  }
  v2 = thread_index;
  p_M_finish = &this->packet_queue_vec_;
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(p_M_finish);
LABEL_19:
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "getWorkThreadQueueSize",
      462);
    p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_packet_queue_vec);
    }
    else
    {
      p_packet_queue_vec = &this->packet_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          &v14,
          "thread_index=%u exceed packet_queue_vec_.size=%lu",
          v2,
          this->packet_queue_vec_._M_impl._M_finish - this->packet_queue_vec_._M_impl._M_start);
LABEL_24:
        common::milog::MiLogStream::~MiLogStream(&v14);
        return 0;
      }
    }
LABEL_23:
    __asan_report_load8(p_packet_queue_vec);
    goto LABEL_24;
  }
  M_start = this->packet_queue_vec_._M_impl._M_start;
  if ( thread_index >= (unsigned __int64)(this->packet_queue_vec_._M_impl._M_finish - M_start) )
    goto LABEL_19;
  v6 = (unsigned __int64)&M_start[thread_index];
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v6);
LABEL_26:
    common::milog::MiLogStream::MiLogStream(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/core_class/service_base.cpp",
      "getWorkThreadQueueSize",
      468);
    p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_packet_queue_vec);
    }
    else
    {
      p_packet_queue_vec = &this->packet_queue_vec_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
      {
        common::milog::MiLogStream::operator()(
          &v14,
          "thread_index=%u packet_queue_vec_.size=%lu packet_queue_ptr is nullptr",
          thread_index,
          this->packet_queue_vec_._M_impl._M_finish - this->packet_queue_vec_._M_impl._M_start);
        goto LABEL_24;
      }
    }
    goto LABEL_23;
  }
  v7 = *(common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> > **)v6;
  if ( !*(_QWORD *)v6 )
    goto LABEL_26;
  if ( &_pthread_key_create )
  {
    v8 = pthread_mutex_lock(&v7->queue_mu_._M_mutex);
    if ( v8 )
    {
      __asan_handle_no_return(&v7->queue_mu_);
      std::__throw_system_error(v8);
    }
  }
  p_M_node = &v7->queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = &v7->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = &v7->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = &v7->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
    goto LABEL_36;
  }
  p_M_node = &v7->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_node);
LABEL_37:
    v13 = (struct _Unwind_Exception *)__asan_report_load8(p_M_node);
    common::milog::MiLogStream::~MiLogStream(&v14);
    __asan_handle_no_return(&v14);
    _Unwind_Resume(v13);
  }
  p_M_node = &v7->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&v7->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  v10 = 32 * (v7->queue_.c._M_impl._M_finish._M_node - v7->queue_.c._M_impl._M_start._M_node - 1)
      + v7->queue_.c._M_impl._M_finish._M_cur
      - v7->queue_.c._M_impl._M_finish._M_first
      + v7->queue_.c._M_impl._M_start._M_last
      - v7->queue_.c._M_impl._M_start._M_cur;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&v7->queue_mu_._M_mutex);
  return v10;
};

// Line 717: range 0000000014E54CB4-0000000014E54CB9
int32_t __fastcall ServiceBase::onWorkThreadStart(ServiceBase *const this, uint32_t a2)
{
  return 0;
};

// Line 723: range 0000000014E54CBA-0000000014E54CBF
int32_t __fastcall ServiceBase::onWorkThreadStop(ServiceBase *const this, uint32_t a2)
{
  return 0;
};

// Line 726: range 0000000014E56694-0000000014E56975
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ServiceBase::addHandler(ServiceBase *const this, ServiceBase::HandlerPtr handler_ptr)
{
  std::__shared_ptr<HandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rbp
  int (**vptr_HandlerBase)(...); // rdi
  unsigned __int64 v5; // rdx
  std::vector<std::shared_ptr<HandlerBase>>::iterator v6; // rsi
  const std::shared_ptr<HandlerBase> *v7; // rcx
  unsigned int v8; // r12d
  ServiceBase::HandlerVec *p_handler_vec; // rdi
  std::_Vector_base<std::shared_ptr<HandlerBase>>::pointer *p_M_finish; // rbx
  __int64 p_M_end_of_storage; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *v12; // rax
  __int64 v13; // rax
  std::__shared_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdx
  volatile signed __int32 *v15; // rdx
  char v16; // cl
  common::milog::MiLogStream v18; // [rsp+0h] [rbp-38h] BYREF

  M_ptr = handler_ptr._M_ptr;
  if ( *(_BYTE *)(((unsigned __int64)handler_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(handler_ptr._M_ptr);
    goto LABEL_21;
  }
  vptr_HandlerBase = handler_ptr._M_ptr->_vptr_HandlerBase;
  if ( !handler_ptr._M_ptr->_vptr_HandlerBase )
  {
LABEL_21:
    common::milog::MiLogStream::MiLogStream(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "addHandler",
      729);
    common::milog::MiLogStream::operator()(&v18, "addHandler handler_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return (unsigned int)-1;
  }
  if ( *(_BYTE *)(((unsigned __int64)vptr_HandlerBase >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(vptr_HandlerBase);
    goto LABEL_23;
  }
  v5 = (unsigned __int64)*vptr_HandlerBase + 16;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v5);
    goto LABEL_24;
  }
  v6._M_current = (std::shared_ptr<HandlerBase> *)&this->push_packet_func_map_;
  v8 = (*((__int64 (__fastcall **)(int (**)(...), PacketFuncMap *, PacketFuncMap *, PacketFuncMap *))*vptr_HandlerBase
        + 2))(
         vptr_HandlerBase,
         &this->push_packet_func_map_,
         &this->push_fail_packet_func_map_,
         &this->process_packet_func_map_);
  if ( v8 )
  {
LABEL_24:
    common::milog::MiLogStream::MiLogStream(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/core_class/service_base.cpp",
      "addHandler",
      735);
    common::milog::MiLogStream::operator()(&v18, "addPacketFuncToMap failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    return (unsigned int)-1;
  }
  p_handler_vec = &this->handler_vec_;
  p_M_finish = &this->handler_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)p_M_finish >> 3) + 0x7FFF8000) )
  {
    p_M_end_of_storage = __asan_report_load8(p_M_finish);
    goto LABEL_26;
  }
  v6._M_current = p_handler_vec->_M_impl._M_finish;
  p_M_end_of_storage = (__int64)&p_handler_vec->_M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&p_handler_vec->_M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_end_of_storage);
LABEL_27:
    __asan_report_load8(M_ptr);
    goto LABEL_28;
  }
  if ( v6._M_current == p_handler_vec->_M_impl._M_end_of_storage )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_27;
  if ( *(_BYTE *)(((unsigned __int64)v6._M_current >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8(v6._M_current);
    goto LABEL_29;
  }
  v6._M_current->_M_ptr = (std::__shared_ptr<HandlerBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_ptr->_vptr_HandlerBase;
  v12 = (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)&M_ptr[1];
  if ( *(_BYTE *)(((unsigned __int64)&M_ptr[1] >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(v12);
    goto LABEL_30;
  }
  v13 = (__int64)M_ptr[1]._vptr_HandlerBase;
  p_M_refcount = &v6._M_current->_M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v6._M_current->_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8(p_M_refcount);
    goto LABEL_31;
  }
  v6._M_current->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v13;
  if ( v13 )
  {
    v15 = (volatile signed __int32 *)(v13 + 8);
    if ( !&_pthread_key_create )
      goto LABEL_32;
    v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
    {
      _InterlockedAdd(v15, 1u);
      goto LABEL_18;
    }
LABEL_31:
    p_handler_vec = (ServiceBase::HandlerVec *)v15;
    v13 = __asan_report_store4(v15);
LABEL_32:
    v6._M_current = (std::shared_ptr<HandlerBase> *)*(unsigned __int8 *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v13 + 8) & 7) + 3) < SLOBYTE(v6._M_current) || !LOBYTE(v6._M_current) )
    {
      ++*(_DWORD *)(v13 + 8);
      goto LABEL_18;
    }
    p_handler_vec = (ServiceBase::HandlerVec *)(v13 + 8);
    __asan_report_load4(v13 + 8);
LABEL_36:
    std::vector<std::shared_ptr<HandlerBase>>::_M_realloc_insert<std::shared_ptr<HandlerBase> const&>(
      p_handler_vec,
      v6,
      (const std::shared_ptr<HandlerBase> *)M_ptr,
      v7);
    return v8;
  }
LABEL_18:
  ++p_handler_vec->_M_impl._M_finish;
  return v8;
};

// Line 746: range 0000000014E557EE-0000000014E55C4D
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ServiceBase::pushAsyncTask(
        ServiceBase *const this,
        common::minet::PacketPtr packet_ptr,
        std::any context)
{
  void (*M_manager)(std::any::_Op, const std::any *, std::any::_Arg *); // rbp
  std::any::_Storage v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  AsyncTaskMgr *p_async_task_mgr; // r13
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // r12d
  unsigned __int64 v14; // rbp
  volatile signed __int32 *v15; // rdi
  char v16; // dl
  signed __int32 v17; // eax
  char v19; // dl
  unsigned __int64 v20; // rdi
  char v21; // dl
  signed __int32 v22; // eax
  unsigned __int64 v23; // rdi
  char v24; // dl
  struct _Unwind_Exception *v25; // rbx
  __int64 v26; // rdi
  _BYTE __x[64]; // [rsp+0h] [rbp-E8h] OVERLAPPED BYREF
  void (__fastcall *v28)(_BYTE *, _BYTE *, __int64); // [rsp+40h] [rbp-A8h]
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> packet_ptra; // [rsp+50h] [rbp-98h] BYREF
  char v30[120]; // [rsp+70h] [rbp-78h] BYREF

  *(_QWORD *)__x = packet_ptr._M_ptr;
  *(_QWORD *)&__x[8] = packet_ptr._M_refcount._M_pi;
  M_manager = context._M_manager;
  v4._M_ptr = (void *)context._M_storage;
  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v5 = v11;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 8 5 __arg";
  *(_QWORD *)(v5 + 16) = ServiceBase::pushAsyncTask;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  p_async_task_mgr = &this->async_task_mgr_;
  *(_QWORD *)&__x[40] = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v4._M_ptr >> 3) + 0x7FFF8000) )
  {
    ((void (__fastcall *)(_QWORD))__asan_report_load8)((std::any::_Storage)v4._M_ptr);
  }
  else if ( *(_QWORD *)v4._M_ptr )
  {
    *(_QWORD *)(v5 + 32) = &__x[32];
    (*(void (__fastcall **)(__int64, std::any::_Storage, unsigned __int64))v4._M_ptr)(2LL, v4, v5 + 32);
    goto LABEL_5;
  }
  *(_QWORD *)&__x[32] = 0LL;
LABEL_5:
  if ( *(_BYTE *)(((unsigned __int64)M_manager >> 3) + 0x7FFF8000) )
  {
    v8 = (volatile signed __int32 *)M_manager;
    __asan_report_load8(M_manager);
    goto LABEL_18;
  }
  *(_QWORD *)&__x[16] = *(_QWORD *)M_manager;
  v8 = (volatile signed __int32 *)((char *)M_manager + 8);
  if ( *(_BYTE *)((((unsigned __int64)M_manager + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8(v8);
LABEL_19:
    v9 = __asan_report_store4(v8);
    goto LABEL_20;
  }
  v9 = *((_QWORD *)M_manager + 1);
  *(_QWORD *)&__x[24] = v9;
  if ( !v9 )
  {
LABEL_12:
    std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function(
      &packet_ptra,
      *(const std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> **)&__x[8]);
    goto LABEL_24;
  }
  v8 = (volatile signed __int32 *)(v9 + 8);
  if ( &_pthread_key_create )
  {
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v8 & 7) + 3) < v10 || !v10 )
    {
      _InterlockedAdd(v8, 1u);
      goto LABEL_12;
    }
    goto LABEL_19;
  }
LABEL_20:
  v12 = *(_BYTE *)(((unsigned __int64)(v9 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v9 + 8) & 7) + 3) < v12 || !v12 )
  {
    ++*(_DWORD *)(v9 + 8);
    goto LABEL_12;
  }
  __asan_report_load4(v9 + 8);
LABEL_24:
  std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function(
    (std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> *const)&__x[48],
    *(const std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> **)__x);
  v13 = AsyncTaskMgr::pushAsyncTask(
          p_async_task_mgr,
          *(AsyncTaskFunc *)__x,
          *(AsyncTaskCallbackFunc *)&__x[32],
          (common::minet::PacketPtr)__PAIR128__(&packet_ptra, &__x[48]),
          (std::any)__PAIR128__(&__x[32], &__x[16]));
  if ( v28 )
    v28(&__x[48], &__x[48], 3LL);
  if ( packet_ptra._M_manager )
    packet_ptra._M_manager((std::_Any_data *)&packet_ptra, (const std::_Any_data *)&packet_ptra, __destroy_functor);
  v14 = *(_QWORD *)&__x[24];
  if ( *(_QWORD *)&__x[24] )
  {
    v15 = (volatile signed __int32 *)(*(_QWORD *)&__x[24] + 8LL);
    if ( &_pthread_key_create )
    {
      v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v15 & 7) + 3) < v16 || !v16 )
      {
        v17 = _InterlockedExchangeAdd(v15, 0xFFFFFFFF);
        goto LABEL_33;
      }
      __asan_report_store4(v15);
    }
    v19 = *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v14 + 8) & 7) + 3) >= v19 && v19 )
    {
      __asan_report_load4(v14 + 8);
      goto LABEL_44;
    }
    v17 = *(_DWORD *)(v14 + 8);
    *(_DWORD *)(v14 + 8) = v17 - 1;
LABEL_33:
    if ( v17 != 1 )
      goto LABEL_34;
LABEL_44:
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    {
      v20 = v14;
      __asan_report_load8(v14);
    }
    else
    {
      v20 = *(_QWORD *)v14 + 16LL;
      if ( !*(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
        v20 = v14 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_57;
        v21 = *(_BYTE *)((v20 >> 3) + 0x7FFF8000);
        if ( (char)((v20 & 7) + 3) < v21 || !v21 )
        {
          v22 = _InterlockedExchangeAdd((volatile signed __int32 *)v20, 0xFFFFFFFF);
          goto LABEL_50;
        }
LABEL_56:
        __asan_report_store4(v20);
LABEL_57:
        v24 = *(_BYTE *)(((v14 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v14 + 12) & 7) + 3) >= v24 && v24 )
        {
          __asan_report_load4(v14 + 12);
          goto LABEL_61;
        }
        v22 = *(_DWORD *)(v14 + 12);
        *(_DWORD *)(v14 + 12) = v22 - 1;
LABEL_50:
        if ( v22 != 1 )
          goto LABEL_34;
        if ( !*(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        {
          v23 = *(_QWORD *)v14 + 24LL;
          if ( !*(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 24LL))(v14);
            goto LABEL_34;
          }
LABEL_62:
          v25 = (struct _Unwind_Exception *)__asan_report_load8(v23);
          if ( v28 )
            v28(&__x[48], &__x[48], 3LL);
          if ( packet_ptra._M_manager )
            packet_ptra._M_manager(
              (std::_Any_data *)&packet_ptra,
              (const std::_Any_data *)&packet_ptra,
              __destroy_functor);
          v26 = *(_QWORD *)&__x[24];
          if ( *(_QWORD *)&__x[24] )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(*(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *const *)&__x[24]);
          if ( *(_QWORD *)&__x[32] )
          {
            v26 = 3LL;
            (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))&__x[32])(3LL, &__x[32], 0LL);
          }
          __asan_handle_no_return(v26);
          _Unwind_Resume(v25);
        }
LABEL_61:
        v23 = v14;
        __asan_report_load8(v14);
        goto LABEL_62;
      }
    }
    __asan_report_load8(v20);
    goto LABEL_56;
  }
LABEL_34:
  if ( *(_QWORD *)&__x[32] )
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))&__x[32])(3LL, &__x[32], 0LL);
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 752: range 0000000014E56CDC-0000000014E56DB9
StatLogMgr *__fastcall ServiceBase::findStatLogMgr(ServiceBase *const this, uint32_t log_level)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr> > >::iterator v4; // rax
  StatLogMgr *result; // rax
  __int64 v6; // rax
  _BYTE v7[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v2 = v6;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 log_level:751";
  *(_QWORD *)(v2 + 16) = ServiceBase::findStatLogMgr;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = log_level;
  v4._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,StatLogMgr>,std::_Select1st<std::pair<unsigned int const,StatLogMgr>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StatLogMgr>>>::find(
                 &this->stat_log_mgr_map_._M_t,
                 (const unsigned int *)(v2 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v4._M_node == &this->stat_log_mgr_map_._M_t._M_impl.std::_Rb_tree_header )
    result = 0LL;
  else
    result = (StatLogMgr *)&v4._M_node[1]._M_parent;
  if ( v7 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 763: range 0000000014E554B8-0000000014E554CC
void __fastcall ServiceBase::pushPacketLog(ServiceBase *const this, PacketLog *packet_log)
{
  PacketLogMgr::pushPacketLog(&this->packet_log_mgr_, packet_log);
};

// Line 778: range 0000000014E54CC0-0000000014E54CC2
void __fastcall ServiceBase::onServiceProcBegin(ServiceBase *const this)
{
  ;
};

// Line 793: range 0000000014E554CE-0000000014E557E8
uint32_t __fastcall ServiceBase::getPacketQueueSize(ServiceBase *const this)
{
  __int64 v2; // rbp
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_packet_queue_vec; // rdi
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer M_start; // r12
  int v5; // ebx
  std::_Vector_base<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>>::pointer v6; // rdi
  __int64 v7; // rbx
  std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *p_M_finish; // rdi
  common::milog::MilogStringStream *ostr; // rbp
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  size_t v13; // rbx
  struct _Unwind_Exception *v14; // rbx
  common::milog::MiLogStream v15; // [rsp+0h] [rbp-38h] BYREF

  if ( *(&ThreadLocal::is_in_work_thread + __readfsqword(0)) )
  {
    v2 = *(uint32_t *)((char *)&ThreadLocal::work_thread_index + __readfsqword(0));
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
    {
      p_packet_queue_vec = &this->packet_queue_vec_;
      __asan_report_load8(&this->packet_queue_vec_);
    }
    else
    {
      p_packet_queue_vec = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_start[v2];
      if ( !*(_BYTE *)(((unsigned __int64)p_packet_queue_vec >> 3) + 0x7FFF8000) )
      {
        M_start = p_packet_queue_vec->_M_impl._M_start;
        if ( p_packet_queue_vec->_M_impl._M_start )
        {
          if ( &_pthread_key_create )
          {
            v5 = pthread_mutex_lock((pthread_mutex_t *)&M_start[11]);
            if ( v5 )
            {
              __asan_handle_no_return(&M_start[11]);
              std::__throw_system_error(v5);
            }
          }
          v6 = M_start + 9;
          if ( *(_BYTE *)(((unsigned __int64)&M_start[9] >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v6);
          }
          else
          {
            v6 = M_start + 5;
            if ( !*(_BYTE *)(((unsigned __int64)&M_start[5] >> 3) + 0x7FFF8000) )
            {
              v6 = M_start + 6;
              if ( !*(_BYTE *)(((unsigned __int64)&M_start[6] >> 3) + 0x7FFF8000) )
              {
                v6 = M_start + 7;
                if ( !*(_BYTE *)(((unsigned __int64)&M_start[7] >> 3) + 0x7FFF8000) )
                {
                  v6 = M_start + 4;
                  if ( !*(_BYTE *)(((unsigned __int64)&M_start[4] >> 3) + 0x7FFF8000) )
                  {
                    v6 = M_start + 2;
                    if ( !*(_BYTE *)(((unsigned __int64)&M_start[2] >> 3) + 0x7FFF8000) )
                    {
                      v7 = 32
                         * ((((char *)M_start[9]._M_t._M_t._M_head_impl - (char *)M_start[5]._M_t._M_t._M_head_impl) >> 3)
                          - 1)
                         + (((char *)M_start[6]._M_t._M_t._M_head_impl - (char *)M_start[7]._M_t._M_t._M_head_impl) >> 4)
                         + (((char *)M_start[4]._M_t._M_t._M_head_impl - (char *)M_start[2]._M_t._M_t._M_head_impl) >> 4);
                      if ( &_pthread_key_create )
                        pthread_mutex_unlock((pthread_mutex_t *)&M_start[11]);
                      return *(uint32_t *)((char *)&ThreadLocal::cur_loop_packet_size + __readfsqword(0)) + v7;
                    }
                    goto LABEL_30;
                  }
LABEL_29:
                  __asan_report_load8(v6);
LABEL_30:
                  __asan_report_load8(v6);
                  goto LABEL_31;
                }
LABEL_28:
                __asan_report_load8(v6);
                goto LABEL_29;
              }
LABEL_27:
              __asan_report_load8(v6);
              goto LABEL_28;
            }
          }
          __asan_report_load8(v6);
          goto LABEL_27;
        }
LABEL_18:
        common::milog::MiLogStream::MiLogStream(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/core_class/service_base.cpp",
          "getPacketQueueSize",
          800);
        p_M_finish = (std::vector<std::unique_ptr<common::tools::SafeQueue<std::shared_ptr<common::minet::Packet> >>> *)&this->packet_queue_vec_._M_impl._M_finish;
        if ( *(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(p_M_finish);
        }
        else
        {
          p_M_finish = &this->packet_queue_vec_;
          if ( !*(_BYTE *)(((unsigned __int64)&this->packet_queue_vec_ >> 3) + 0x7FFF8000) )
          {
            common::milog::MiLogStream::operator()(
              &v15,
              "thread_index=%u packet_queue_vec_.size=%lu packet_queue_ptr is nullptr",
              (unsigned int)v2,
              this->packet_queue_vec_._M_impl._M_finish - this->packet_queue_vec_._M_impl._M_start);
LABEL_23:
            common::milog::MiLogStream::~MiLogStream(&v15);
            return 0;
          }
        }
        __asan_report_load8(p_M_finish);
        goto LABEL_23;
      }
    }
    __asan_report_load8(p_packet_queue_vec);
    goto LABEL_18;
  }
LABEL_31:
  common::milog::MiLogStream::MiLogStream(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/core_class/service_base.cpp",
    "getPacketQueueSize",
    807);
  ostr = v15.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v15.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v15.ostr_;
    __asan_report_load8(v15.ostr_);
LABEL_37:
    v14 = (struct _Unwind_Exception *)__asan_report_load8(p_cur);
    common::milog::MiLogStream::~MiLogStream(&v15);
    __asan_handle_no_return(&v15);
    _Unwind_Resume(v14);
  }
  p_cur = (common::milog::MilogStringStream *)&v15.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v15.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
    goto LABEL_37;
  cur = v15.ostr_->buffer_.cur_;
  v13 = (size_t)&v15.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v13 > 0x1F )
    v13 = 32LL;
  memcpy(cur, "cannot called in not work thread", v13);
  ostr->buffer_.cur_ += v13;
  common::milog::MiLogStream::~MiLogStream(&v15);
  return 0;
};

// Line 811: range 0000000014E54F4D-0000000014E5519D
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/core_class/service_base.cpp");
    if ( __priority != 0xFFFF )
      goto LABEL_3;
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
    if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      goto LABEL_3;
    `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                   + 0x7FFF8000) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
    ServiceBase::isRun((ServiceBase *const)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
  }
};
