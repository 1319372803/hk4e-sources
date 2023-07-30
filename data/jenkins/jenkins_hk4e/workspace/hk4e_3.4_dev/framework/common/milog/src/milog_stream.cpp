// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/src/milog_stream.cpp

// Line 23: range 000000000C9A1334-000000000C9A13E4
void __cdecl _tls_init()
{
  std::_Deque_base<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *v0; // rbx

  if ( !*(_BYTE *)(__readfsqword(0) - 5872) )
  {
    *(_BYTE *)(__readfsqword(0) - 5872) = 1;
    v0 = (std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *)((char *)&common::milog::MiLogStream::ostr_stack.c + __readfsqword(0));
    v0->_M_impl._M_map = 0LL;
    v0->_M_impl._M_map_size = 0LL;
    v0->_M_impl._M_start._M_cur = 0LL;
    v0->_M_impl._M_start._M_first = 0LL;
    v0->_M_impl._M_start._M_last = 0LL;
    v0->_M_impl._M_start._M_node = 0LL;
    v0->_M_impl._M_finish._M_cur = 0LL;
    v0->_M_impl._M_finish._M_first = 0LL;
    v0->_M_impl._M_finish._M_last = 0LL;
    v0->_M_impl._M_finish._M_node = 0LL;
    std::_Deque_base<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_initialize_map(
      v0,
      0LL);
    __cxa_thread_atexit(
      (void (__fastcall *)(void *))std::stack<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::~stack,
      v0,
      &_dso_handle);
  }
};

// Line 27: range 000000000C9A13EA-000000000C9A20CA
common::milog::MilogStringStreamPtr __cdecl common::milog::MiLogStream::createMilogStringStream()
{
  unsigned __int64 v0; // rdi
  char *v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  _DWORD *v5; // r13
  unsigned __int64 v6; // r14
  _Unwind_Exception_Class v7; // r15
  const __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  char v16; // dl
  __int64 v17; // rax
  char v18; // al
  std::forward_iterator_tag v19; // cl
  char v20; // al
  char v21; // dl
  char *v22; // rdi
  _Unwind_Exception_Class v23; // rdi
  __int64 v24; // rax
  std::forward_iterator_tag v25; // cl
  _Unwind_Exception_Class v26; // rdi
  common::milog::MilogStringStreamPtr result; // rax
  char v28; // al
  unsigned __int64 v29; // rdx
  std::forward_iterator_tag v30; // cl
  char *v31; // rdi
  char v32; // al
  volatile signed __int32 *v33; // rdi
  volatile signed __int32 *v34; // rdi
  char v35; // al
  char v36; // dl
  char *v37; // rdi
  __int64 v38; // rax
  char *v39; // rdi
  char *v40; // r14
  void *v41; // rdi
  struct _Unwind_Exception *v42; // rbp
  void *v43; // rdi
  __int64 v44; // rax
  char v45; // cl
  char *v46; // r15
  __int64 v47; // r14
  __int64 v48; // r15
  volatile signed __int32 *v49; // r14
  volatile signed __int32 *v50; // rdi
  char v51; // dl
  signed __int32 v52; // eax
  unsigned __int64 v53; // rdi
  void (*v54)(_Unwind_Reason_Code, struct _Unwind_Exception *); // rax
  char v55; // dl
  volatile signed __int32 *v56; // rdi
  char v57; // dl
  signed __int32 v58; // eax
  unsigned __int64 v59; // rdi
  char v60; // dl
  char v61; // dl
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  char v64; // dl
  struct _Unwind_Exception *v65; // rbp
  unsigned __int64 v66; // rbx
  char v67; // dl
  signed __int32 i; // eax
  char v69; // dl
  __int64 v70; // rax
  char v71; // dl
  signed __int32 j; // eax
  char v73; // dl
  __int64 v74; // rax
  std::string *type; // [rsp+8h] [rbp-E0h]
  char v76[216]; // [rsp+10h] [rbp-D8h] BYREF

  v2 = v0;
  v3 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(160LL);
    if ( v17 )
      v3 = v17;
  }
  v4 = v3 + 160;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 4 __a2 64 16 7 __guard 96 32 5 __tmp";
  *(_QWORD *)(v3 + 16) = common::milog::MiLogStream::createMilogStringStream;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  _tls_init();
  v6 = (unsigned __int64)&common::milog::MiLogStream::ostr_stack + __readfsqword(0);
  v7 = *(_QWORD *)(v6 + 48);
  if ( *(_QWORD *)(v6 + 16) != v7 )
  {
    _tls_init();
    v8 = (const __m128i *)((char *)&common::milog::MiLogStream::ostr_stack + __readfsqword(0));
    v9 = v8[3].m128i_i64[0];
    v10 = v8[3].m128i_i64[1];
    *(_QWORD *)(v3 + 96) = v9;
    *(_QWORD *)(v3 + 104) = v10;
    *(__m128i *)(v3 + 112) = _mm_loadu_si128(v8 + 4);
    if ( v10 == v9 )
    {
      v44 = *(_QWORD *)(v3 + 120);
      v12 = v44 - 8;
      if ( *(_BYTE *)(((unsigned __int64)(v44 - 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v12);
        goto LABEL_93;
      }
      *(_QWORD *)(v3 + 96) = *(_QWORD *)(v44 - 8) + 512LL;
    }
    v11 = *(_QWORD *)(v3 + 96);
    v12 = v11 - 16;
    if ( !*(_BYTE *)(((unsigned __int64)(v11 - 16) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v11 - 16);
      v13 = v12 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v12 + 8) >> 3) + 0x7FFF8000) )
      {
        v14 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v3 + 72) = v14;
        if ( !v14 )
          goto LABEL_11;
        v15 = v14 + 8;
        if ( !&_pthread_key_create )
        {
LABEL_96:
          v45 = *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000);
          if ( (char)(((v14 + 8) & 7) + 3) >= v45 && v45 )
          {
            __asan_report_load4(v14 + 8);
LABEL_100:
            v46 = (char *)&common::milog::MiLogStream::ostr_stack + __readfsqword(0);
            v47 = *((_QWORD *)v46 + 6);
            if ( v47 == *((_QWORD *)v46 + 7) )
            {
LABEL_144:
              std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384>>>>::_M_pop_back_aux((std::deque<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >> *const)((char *)&common::milog::MiLogStream::ostr_stack.c + __readfsqword(0)));
LABEL_108:
              result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v2 >> 3);
              if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
              {
                v53 = v2;
                __asan_report_store8(v2, v10);
              }
              else
              {
                *(_QWORD *)v2 = *(_QWORD *)(v3 + 64);
                v53 = v2 + 8;
                if ( !*(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v2 + 8) = 0LL;
                  v54 = *(void (**)(_Unwind_Reason_Code, struct _Unwind_Exception *))(v3 + 72);
                  *(_QWORD *)(v3 + 72) = 0LL;
                  *(_QWORD *)(v2 + 8) = v54;
                  v4 = *(_QWORD *)(v3 + 72);
                  if ( !v4 )
                    goto LABEL_116;
                  v53 = v4 + 8;
                  if ( !&_pthread_key_create )
                    goto LABEL_148;
                  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v53 >> 3) + 0x7FFF8000);
                  if ( (char)((v53 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi) || !LOBYTE(result._M_refcount._M_pi) )
                  {
                    LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF);
                    goto LABEL_115;
                  }
LABEL_147:
                  __asan_report_store4(v53, v10);
LABEL_148:
                  v61 = *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000);
                  if ( (char)(((v4 + 8) & 7) + 3) >= v61 && v61 )
                  {
                    __asan_report_load4(v4 + 8);
                    goto LABEL_152;
                  }
                  LODWORD(result._M_ptr) = *(_DWORD *)(v4 + 8);
                  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr) - 1);
                  *(_DWORD *)(v4 + 8) = result._M_refcount._M_pi;
LABEL_115:
                  if ( LODWORD(result._M_ptr) != 1 )
                    goto LABEL_116;
LABEL_152:
                  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                  {
                    v62 = v4;
                    __asan_report_load8(v4);
                  }
                  else
                  {
                    v62 = *(_QWORD *)v4 + 16LL;
                    if ( !*(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
                    {
                      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
                      v62 = v4 + 12;
                      if ( !&_pthread_key_create )
                        goto LABEL_165;
                      result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)*(unsigned __int8 *)((v62 >> 3) + 0x7FFF8000);
                      if ( (char)((v62 & 7) + 3) < SLOBYTE(result._M_refcount._M_pi)
                        || !LOBYTE(result._M_refcount._M_pi) )
                      {
                        LODWORD(result._M_ptr) = _InterlockedExchangeAdd((volatile signed __int32 *)v62, 0xFFFFFFFF);
                        goto LABEL_158;
                      }
LABEL_164:
                      __asan_report_store4(v62, v10);
LABEL_165:
                      v64 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
                      if ( (char)(((v4 + 12) & 7) + 3) >= v64 && v64 )
                      {
                        __asan_report_load4(v4 + 12);
                        goto LABEL_169;
                      }
                      LODWORD(result._M_ptr) = *(_DWORD *)(v4 + 12);
                      result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)(LODWORD(result._M_ptr) - 1);
                      *(_DWORD *)(v4 + 12) = result._M_refcount._M_pi;
LABEL_158:
                      if ( LODWORD(result._M_ptr) != 1 )
                        goto LABEL_116;
                      if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                      {
                        v63 = *(_QWORD *)v4 + 24LL;
                        if ( !*(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                        {
                          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 24LL))(v4);
                          goto LABEL_116;
                        }
LABEL_170:
                        v65 = (struct _Unwind_Exception *)__asan_report_load8(v63);
                        v66 = *(_QWORD *)(v4 - 88);
                        if ( v66 )
                        {
                          v63 = v66 + 8;
                          if ( !&_pthread_key_create )
                            goto LABEL_179;
                          v67 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
                          if ( (char)((v63 & 7) + 3) >= v67 && v67 )
                            __asan_report_store4(v63, v10);
                          for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)v63, 0xFFFFFFFF);
                                ;
                                *(_DWORD *)(v66 + 8) = i - 1 )
                          {
                            if ( i != 1 )
                              goto LABEL_200;
                            if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                              break;
                            __asan_report_load8(v66);
LABEL_179:
                            v63 = v66 + 8;
                            v69 = *(_BYTE *)(((v66 + 8) >> 3) + 0x7FFF8000);
                            if ( (char)(((v66 + 8) & 7) + 3) >= v69 && v69 )
                              __asan_report_load4(v63);
                            i = *(_DWORD *)(v66 + 8);
                          }
                          v70 = *(_QWORD *)v66;
                          if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v66 + 16LL) >> 3) + 0x7FFF8000) )
                            v70 = __asan_report_load8(*(_QWORD *)v66 + 16LL);
                          (*(void (__fastcall **)(unsigned __int64))(v70 + 16))(v66);
                          v63 = v66 + 12;
                          if ( !&_pthread_key_create )
                            goto LABEL_193;
                          v71 = *(_BYTE *)((v63 >> 3) + 0x7FFF8000);
                          if ( (char)((v63 & 7) + 3) >= v71 && v71 )
                            __asan_report_store4(v63, v10);
                          for ( j = _InterlockedExchangeAdd((volatile signed __int32 *)v63, 0xFFFFFFFF);
                                ;
                                *(_DWORD *)(v66 + 12) = j - 1 )
                          {
                            if ( j != 1 )
                              goto LABEL_200;
                            if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                              break;
                            __asan_report_load8(v66);
LABEL_193:
                            v63 = v66 + 12;
                            v73 = *(_BYTE *)(((v66 + 12) >> 3) + 0x7FFF8000);
                            if ( (char)(((v66 + 12) & 7) + 3) >= v73 && v73 )
                              __asan_report_load4(v63);
                            j = *(_DWORD *)(v66 + 12);
                          }
                          v74 = *(_QWORD *)v66;
                          if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)v66 + 24LL) >> 3) + 0x7FFF8000) )
                            v74 = __asan_report_load8(*(_QWORD *)v66 + 24LL);
                          v63 = v66;
                          (*(void (__fastcall **)(unsigned __int64))(v74 + 24))(v66);
                        }
LABEL_200:
                        __asan_handle_no_return(v63);
                        _Unwind_Resume(v65);
                      }
LABEL_169:
                      v63 = v4;
                      __asan_report_load8(v4);
                      goto LABEL_170;
                    }
                  }
                  __asan_report_load8(v62);
                  goto LABEL_164;
                }
              }
              __asan_report_store8(v53, v10);
              goto LABEL_147;
            }
            v48 = v47 - 16;
            *(std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer *)((char *)&common::milog::MiLogStream::ostr_stack.c._M_impl._M_finish._M_cur + __readfsqword(0)) = (std::_Deque_iterator<std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >&,std::shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> > >*>::_Elt_pointer)(v47 - 16);
            v49 = (volatile signed __int32 *)(v47 - 8);
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            {
              v50 = v49;
              __asan_report_load8(v49);
            }
            else
            {
              v49 = *(volatile signed __int32 **)(v48 + 8);
              if ( !v49 )
                goto LABEL_108;
              v50 = v49 + 2;
              if ( !&_pthread_key_create )
                goto LABEL_121;
              v51 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
              if ( (char)(((unsigned __int8)v50 & 7) + 3) < v51 || !v51 )
              {
                v52 = _InterlockedExchangeAdd(v50, 0xFFFFFFFF);
                goto LABEL_107;
              }
            }
            __asan_report_store4(v50, v10);
LABEL_121:
            v55 = *(_BYTE *)(((unsigned __int64)(v49 + 2) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v49 + 8) & 7) + 3) >= v55 && v55 )
            {
              __asan_report_load4(v49 + 2);
              goto LABEL_125;
            }
            v52 = *((_DWORD *)v49 + 2);
            *((_DWORD *)v49 + 2) = v52 - 1;
LABEL_107:
            if ( v52 != 1 )
              goto LABEL_108;
LABEL_125:
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            {
              v56 = v49;
              __asan_report_load8(v49);
            }
            else
            {
              v56 = (volatile signed __int32 *)(*(_QWORD *)v49 + 16LL);
              if ( !*(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
                v56 = v49 + 3;
                if ( !&_pthread_key_create )
                  goto LABEL_138;
                v57 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v56 & 7) + 3) < v57 || !v57 )
                {
                  v58 = _InterlockedExchangeAdd(v56, 0xFFFFFFFF);
                  goto LABEL_131;
                }
LABEL_137:
                __asan_report_store4(v56, v10);
LABEL_138:
                v60 = *(_BYTE *)(((unsigned __int64)(v49 + 3) >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)v49 + 12) & 7) + 3) >= v60 && v60 )
                {
                  __asan_report_load4(v49 + 3);
                  goto LABEL_142;
                }
                v58 = *((_DWORD *)v49 + 3);
                *((_DWORD *)v49 + 3) = v58 - 1;
LABEL_131:
                if ( v58 != 1 )
                  goto LABEL_108;
                if ( !*(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
                {
                  v59 = *(_QWORD *)v49 + 24LL;
                  if ( !*(_BYTE *)((v59 >> 3) + 0x7FFF8000) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 24LL))(v49);
                    goto LABEL_108;
                  }
                  goto LABEL_143;
                }
LABEL_142:
                v59 = (unsigned __int64)v49;
                __asan_report_load8(v49);
LABEL_143:
                __asan_report_load8(v59);
                goto LABEL_144;
              }
            }
            __asan_report_load8(v56);
            goto LABEL_137;
          }
          ++*(_DWORD *)(v14 + 8);
LABEL_11:
          _tls_init();
          goto LABEL_100;
        }
        v16 = *(_BYTE *)((v15 >> 3) + 0x7FFF8000);
        if ( (char)((v15 & 7) + 3) < v16 || !v16 )
        {
          _InterlockedAdd((volatile signed __int32 *)v15, 1u);
          goto LABEL_11;
        }
LABEL_95:
        v14 = __asan_report_store4(v15, v10);
        goto LABEL_96;
      }
LABEL_94:
      v15 = v13;
      __asan_report_load8(v13);
      goto LABEL_95;
    }
LABEL_93:
    v13 = __asan_report_load8(v12);
    goto LABEL_94;
  }
  v18 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v18 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v18 )
  {
    __asan_report_load1(
      &common::tools::perf::MemoryPerf::is_record,
      v1,
      (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
    goto LABEL_26;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    if ( !*(_BYTE *)((v0 >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)v0 = 0LL;
      type = (std::string *)(v0 + 8);
      v1 = (char *)(v3 + 48);
      std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::perf::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::StringStream<common::tools::FixedBuffer<16384>>>,(__gnu_cxx::_Lock_policy)2>,common::tools::StringStream<common::tools::FixedBuffer<16384>>>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384> >,common::tools::perf::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384> >,common::tools::StringStream<common::tools::FixedBuffer<16384> > >,(__gnu_cxx::_Lock_policy)2>,common::tools::StringStream<common::tools::FixedBuffer<16384> > > *)(v3 + 48));
      v6 = *(_QWORD *)(v3 + 72);
      v0 = v6 + 8;
      v20 = *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000);
      if ( !v20 || v20 > 3 )
      {
        *(_DWORD *)(v6 + 8) = 1;
        v0 = v6 + 12;
        v21 = *(_BYTE *)(((v6 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v6 + 12) & 7) + 3) < v21 || !v21 )
        {
          *(_DWORD *)(v6 + 12) = 1;
          if ( !*(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v6 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::perf::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384>>,common::tools::StringStream<common::tools::FixedBuffer<16384>>>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
            v7 = v6 + 16;
            if ( !common::tools::perf::MemoryPerf::is_record )
              goto LABEL_32;
            *(_QWORD *)(v3 + 96) = v3 + 112;
            std::string::_M_construct<char const*>(
              (std::string *const)(v3 + 96),
              "N6common5tools12StringStreamINS0_11FixedBufferILi16384EEEEE",
              "",
              v19);
LABEL_30:
            v1 = (char *)(v3 + 96);
            common::tools::perf::MemoryPerfRecorder::construct(
              &common::tools::perf::MemoryPerf::recorder,
              (const std::string *)(v3 + 96),
              0x10uLL);
            v22 = *(char **)(v3 + 96);
            if ( v22 != (char *)(v3 + 112) )
              operator delete(v22);
LABEL_32:
            if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            {
              v23 = v7;
              __asan_report_store8(v7, v1);
            }
            else
            {
              *(_QWORD *)(v6 + 16) = 0LL;
              v23 = v7 + 8;
              if ( !*(_BYTE *)(((v7 + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v7 + 8) = 0LL;
                v24 = operator new[](0x4000uLL);
                goto LABEL_37;
              }
            }
            v24 = __asan_report_store8(v23, v1);
LABEL_37:
            if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            {
              v26 = v7;
              __asan_report_store8(v7, v1);
            }
            else
            {
              *(_QWORD *)(v6 + 16) = v24;
              v26 = v7 + 8;
              result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((v7 + 8) >> 3);
              if ( !LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
              {
                *(_QWORD *)(v7 + 8) = v24;
                *(_QWORD *)(v3 + 72) = 0LL;
                if ( !*(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v2 + 8) = v6;
                  if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
                  {
                    *(_QWORD *)v2 = v7;
                    v6 = *(_QWORD *)(v3 + 72);
                    if ( !v6 )
                      goto LABEL_116;
                    v28 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
                    v29 = (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7;
                    if ( v28 > (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) || !v28 )
                    {
                      if ( !common::tools::perf::MemoryPerf::is_record )
                      {
LABEL_45:
                        free((void *)v6);
                        goto LABEL_116;
                      }
LABEL_56:
                      *(_QWORD *)(v4 - 64) = v4 - 48;
                      std::string::_M_construct<char const*>(
                        (std::string *const)(v4 - 64),
                        "N6common5tools12StringStreamINS0_11FixedBufferILi16384EEEEE",
                        "",
                        v25);
                      common::tools::perf::MemoryPerfRecorder::deallocate(
                        &common::tools::perf::MemoryPerf::recorder,
                        (const std::string *)(v4 - 64));
                      v33 = *(volatile signed __int32 **)(v4 - 64);
                      if ( v33 != (volatile signed __int32 *)(v4 - 48) )
                        operator delete((void *)v33);
                      goto LABEL_45;
                    }
LABEL_55:
                    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record, v1, v29);
                    goto LABEL_56;
                  }
LABEL_49:
                  v2 = __asan_report_store8(v2, v1);
                  v31 = *(char **)(v3 + 96);
                  if ( v31 != (char *)(v3 + 112) )
                    operator delete(v31);
                  v3 = *(_QWORD *)(v3 + 72);
                  if ( v3 )
                  {
                    v32 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
                    if ( v32 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v32 )
                    {
                      __asan_report_load1(
                        &common::tools::perf::MemoryPerf::is_record,
                        v1,
                        (unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7);
                      goto LABEL_55;
                    }
                    if ( common::tools::perf::MemoryPerf::is_record )
                    {
                      *(_QWORD *)(v4 - 64) = v4 - 48;
                      std::string::_M_construct<char const*>(
                        (std::string *const)(v4 - 64),
                        "N6common5tools12StringStreamINS0_11FixedBufferILi16384EEEEE",
                        "",
                        v30);
                      common::tools::perf::MemoryPerfRecorder::deallocate(
                        &common::tools::perf::MemoryPerf::recorder,
                        (const std::string *)(v4 - 64));
                      v34 = *(volatile signed __int32 **)(v4 - 64);
                      if ( v34 != (volatile signed __int32 *)(v4 - 48) )
                        operator delete((void *)v34);
                    }
                    v31 = (char *)v3;
                    free((void *)v3);
                  }
                  __asan_handle_no_return(v31);
                  _Unwind_Resume((struct _Unwind_Exception *)v2);
                }
LABEL_48:
                __asan_report_store8(type, v1);
                goto LABEL_49;
              }
            }
            __asan_report_store8(v26, v1);
            goto LABEL_48;
          }
LABEL_29:
          __asan_report_store8(v6, v1);
          goto LABEL_30;
        }
LABEL_28:
        __asan_report_store4(v0, v1);
        goto LABEL_29;
      }
LABEL_27:
      __asan_report_store4(v0, v1);
      goto LABEL_28;
    }
LABEL_26:
    __asan_report_store8(v0, v1);
    goto LABEL_27;
  }
  if ( *(_BYTE *)((v0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v0, v1);
LABEL_73:
    __asan_report_store4(v0, v1);
LABEL_74:
    __asan_report_store4(v0, v1);
    goto LABEL_75;
  }
  *(_QWORD *)v0 = 0LL;
  v7 = v0 + 8;
  v1 = (char *)(v3 + 48);
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384>>,std::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384>>>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384> >,std::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384> > >,(__gnu_cxx::_Lock_policy)2> > *)(v3 + 48));
  v6 = *(_QWORD *)(v3 + 72);
  v0 = v6 + 8;
  v35 = *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000);
  if ( v35 && v35 <= 3 )
    goto LABEL_73;
  *(_DWORD *)(v6 + 8) = 1;
  v0 = v6 + 12;
  v36 = *(_BYTE *)(((v6 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v6 + 12) & 7) + 3) >= v36 && v36 )
    goto LABEL_74;
  *(_DWORD *)(v6 + 12) = 1;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    v37 = (char *)v6;
    __asan_report_store8(v6, v1);
    goto LABEL_76;
  }
  *(_QWORD *)v6 = &`vtable for'std::_Sp_counted_ptr_inplace<common::tools::StringStream<common::tools::FixedBuffer<16384>>,std::allocator<common::tools::StringStream<common::tools::FixedBuffer<16384>>>,(__gnu_cxx::_Lock_policy)2>
                + 2;
  v37 = (char *)(v6 + 16);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_store8(v37, v1);
    goto LABEL_77;
  }
  *(_QWORD *)(v6 + 16) = 0LL;
  v37 = (char *)(v6 + 24);
  if ( !*(_BYTE *)(((v6 + 24) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v6 + 24) = 0LL;
    v38 = operator new[](0x4000uLL);
    goto LABEL_78;
  }
LABEL_77:
  v38 = __asan_report_store8(v37, v1);
LABEL_78:
  v39 = (char *)(v6 + 16);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v39, v1);
    goto LABEL_85;
  }
  *(_QWORD *)(v6 + 16) = v38;
  v39 = (char *)(v6 + 24);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((v6 + 24) >> 3);
  if ( LOBYTE(result._M_refcount._M_pi[134215680]._vptr__Sp_counted_base) )
  {
LABEL_85:
    __asan_report_store8(v39, v1);
    goto LABEL_86;
  }
  *(_QWORD *)(v6 + 24) = v38;
  *(_QWORD *)(v3 + 72) = 0LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    __asan_report_store8(v7, v1);
LABEL_87:
    v42 = (struct _Unwind_Exception *)__asan_report_store8(v2, v1);
    v43 = *(void **)(v3 + 72);
    if ( v43 )
      operator delete(v43);
    __asan_handle_no_return(v43);
    _Unwind_Resume(v42);
  }
  *(_QWORD *)(v2 + 8) = v6;
  v40 = (char *)(v6 + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    goto LABEL_87;
  *(_QWORD *)v2 = v40;
  v41 = *(void **)(v3 + 72);
  if ( v41 )
    operator delete(v41);
LABEL_116:
  if ( v76 == (char *)v3 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
    v5[536862724] = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v5 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862724] = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)v2;
  return result;
};

// Line 43: range 000000000C9A20D0-000000000C9A2591
// local variable allocation has failed, the output may be wrong!
void __fastcall common::milog::MiLogStream::MiLogStream(
        common::milog::MiLogStream *const this,
        common::milog::MiLog *log_,
        uint32_t level,
        const char *file,
        const char *func,
        int line)
{
  common::milog::MilogStringStreamPtr *p_ostr_ptr; // r15
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLog *v12; // rsi
  unsigned __int64 M_ptr; // rdi
  __int64 p_ostr; // rax
  char *v15; // rbx
  common::milog::MiLogStream *v16; // rdx
  char *v17; // rdx
  unsigned __int64 v18; // rax
  signed __int8 v19; // dl
  bool v20; // si
  char v21; // al
  signed __int8 v22; // dl
  __int64 v23; // rsi
  char v24; // dl
  char v25; // al
  char v26; // dl
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rsi

  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v28);
    goto LABEL_26;
  }
  this->log_ = v12;
  if ( *(_WORD *)(((unsigned __int64)&this->ostr_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store16();
    goto LABEL_27;
  }
  p_ostr_ptr = &this->ostr_ptr_;
  common::milog::MiLogStream::createMilogStringStream();
  if ( *(_BYTE *)(((unsigned __int64)&this->ostr_ptr_ >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    p_ostr = __asan_report_load8(p_ostr_ptr);
    goto LABEL_28;
  }
  M_ptr = (unsigned __int64)this->ostr_ptr_._M_ptr;
  p_ostr = (__int64)&v7->ostr_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->ostr_ >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    M_ptr = p_ostr;
    __asan_report_store8(p_ostr, v29);
    goto LABEL_29;
  }
  v7->ostr_ = (common::milog::MilogStringStream *)M_ptr;
  if ( *(_BYTE *)((M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_29:
    __asan_report_load8(M_ptr);
    goto LABEL_30;
  }
  v15 = *(char **)M_ptr;
  v16 = (common::milog::MiLogStream *)(M_ptr + 8);
  if ( *(_BYTE *)(((M_ptr + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    this = v16;
    __asan_report_load8(v16);
LABEL_31:
    v30 = 64LL;
    __asan_report_store_n(this, 64LL);
LABEL_32:
    __asan_report_store4(this, v31);
LABEL_33:
    v32 = 32LL;
    __asan_report_store_n(this, 32LL);
LABEL_34:
    __asan_report_store4(this, v33);
LABEL_35:
    __asan_report_store4(this, v34);
LABEL_36:
    __asan_report_store4(this, v35);
LABEL_37:
    __asan_report_store4(this, v36);
    goto LABEL_38;
  }
  v17 = *(char **)(M_ptr + 8);
  v18 = *(_DWORD *)M_ptr + 0x4000 - (int)v17;
  if ( v18 > 0x8F )
    v18 = 144LL;
  *(_QWORD *)(M_ptr + 8) = &v17[v18];
  this = (common::milog::MiLogStream *const)(v15 + 16);
  v19 = *(_BYTE *)(((unsigned __int64)(v15 + 79) >> 3) + 0x7FFF8000);
  v20 = v19 <= (((unsigned __int8)v15 + 79) & 7);
  if ( v19 != 0 && v20 || *(char *)(((unsigned __int64)(v15 + 16) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_31;
  *((_QWORD *)v15 + 2) = 0LL;
  *((_QWORD *)v15 + 3) = 0LL;
  *((_QWORD *)v15 + 4) = 0LL;
  *((_QWORD *)v15 + 5) = 0LL;
  *((_QWORD *)v15 + 6) = 0LL;
  *((_QWORD *)v15 + 7) = 0LL;
  *((_QWORD *)v15 + 8) = 0LL;
  *((_QWORD *)v15 + 9) = 0LL;
  this = (common::milog::MiLogStream *const)(v15 + 80);
  v21 = *(_BYTE *)(((unsigned __int64)(v15 + 80) >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_32;
  *((_DWORD *)v15 + 20) = 0;
  this = (common::milog::MiLogStream *const)(v15 + 84);
  v22 = *(_BYTE *)(((unsigned __int64)(v15 + 84) >> 3) + 0x7FFF8000);
  v23 = ((_BYTE)v15 + 84) & 7;
  LOBYTE(v23) = v22 <= (signed __int8)v23;
  if ( ((v22 != 0) & (unsigned __int8)v23) != 0
    || *(_BYTE *)(((unsigned __int64)(v15 + 115) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v15 + 115) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v15 + 115) & 7) )
  {
    goto LABEL_33;
  }
  *(_QWORD *)(v15 + 84) = 0LL;
  *(_QWORD *)(v15 + 92) = 0LL;
  *(_QWORD *)(v15 + 100) = 0LL;
  *(_QWORD *)(v15 + 108) = 0LL;
  this = (common::milog::MiLogStream *const)(v15 + 116);
  v24 = *(_BYTE *)(((unsigned __int64)(v15 + 116) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 116) & 7) + 3) >= v24 && v24 )
    goto LABEL_34;
  *((_DWORD *)v15 + 29) = 0;
  this = (common::milog::MiLogStream *const)(v15 + 120);
  v25 = *(_BYTE *)(((unsigned __int64)(v15 + 120) >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_35;
  *((_DWORD *)v15 + 30) = 0;
  this = (common::milog::MiLogStream *const)(v15 + 124);
  v26 = *(_BYTE *)(((unsigned __int64)(v15 + 124) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v15 + 124) & 7) + 3) >= v26 && v26 )
    goto LABEL_36;
  *((_DWORD *)v15 + 31) = 0;
  this = (common::milog::MiLogStream *const)(v15 + 128);
  v27 = *(_BYTE *)(((unsigned __int64)(v15 + 128) >> 3) + 0x7FFF8000);
  if ( v27 && v27 <= 3 )
    goto LABEL_37;
  *((_DWORD *)v15 + 32) = 0;
  this = (common::milog::MiLogStream *const)(v15 + 136);
  if ( !*(_BYTE *)(((unsigned __int64)(v15 + 136) >> 3) + 0x7FFF8000) )
  {
    *((_QWORD *)v15 + 17) = 0LL;
    strncpy(v15 + 16, file, 0x3FuLL);
    *((_DWORD *)v15 + 20) = line;
    strncpy(v15 + 84, func, 0x1FuLL);
    *((_DWORD *)v15 + 29) = level;
    return;
  }
LABEL_38:
  __asan_report_store8(this, v37);
  common::milog::MiLogStream::freeMilogStringStream(*(common::milog::MilogStringStreamPtr *)&this);
};

// Line 57: range 000000000C9A2594-000000000C9A2D2B
void __fastcall common::milog::MiLogStream::~MiLogStream(common::milog::MiLogStream *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  common::milog::MiLogHead *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  common::milog::MilogStringStreamPtr *p_ostr_ptr; // rdi
  unsigned __int64 v8; // rdi
  char v9; // dl
  unsigned int log_level; // eax
  char *v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 p_total_len; // rdi
  char v16; // dl
  __int64 v17; // rdx
  void *v18; // rax
  size_t M_pi; // rbp
  char v20; // al
  char v21; // cl
  common::milog::MilogStringStreamPtr v22; // rdi
  __int64 p_cur; // rax
  common::milog::MilogStringStreamPtr *v24; // rdi
  __int64 v25; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v26; // rax
  char v27; // dl
  char v28; // dl
  signed __int32 v29; // eax
  char v30; // dl
  signed __int32 v31; // eax
  __int64 v32; // rax
  int v33; // edi
  size_t v34; // rbp
  size_t v35; // rbp
  char v36; // dl
  char v37; // cl
  char v38; // dl
  char v39; // dl
  signed __int32 v40; // eax
  char v41; // dl
  char v42; // dl
  char v43; // dl
  signed __int32 v44; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  common::milog::MilogStringStreamPtr ostr_ptr; // [rsp+10h] [rbp-88h] BYREF
  char v48[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int64)this;
  v5 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v32 = __asan_stack_malloc_0(64LL);
    if ( v32 )
      v5 = v32;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 context_len:66";
  *(_QWORD *)(v5 + 16) = common::milog::MiLogStream::~MiLogStream;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  p_ostr_ptr = &this->ostr_ptr_;
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_ostr_ptr);
    goto LABEL_54;
  }
  v2 = *(_QWORD *)(v4 + 8);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    v8 = v2;
    __asan_report_load8(v2);
LABEL_55:
    __asan_report_load4(v8);
LABEL_56:
    __asan_report_load8(v8);
LABEL_57:
    v12 = v2;
    __asan_report_load8(v2);
    goto LABEL_58;
  }
  v3 = *(common::milog::MiLogHead **)v2;
  v8 = *(_QWORD *)v2 + 116LL;
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  if ( (char)(((*(_BYTE *)v2 + 116) & 7) + 3) >= v9 && v9 )
    goto LABEL_55;
  log_level = v3->log_level;
  if ( log_level != 17 && log_level > 5 && log_level != 18 && log_level != 19 )
    goto LABEL_16;
  *(_DWORD *)(v5 + 32) = 0;
  v1 = *(_QWORD *)v2 + 0x4000LL;
  v8 = v2 + 8;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  v11 = *(char **)(v2 + 8);
  v1 -= (__int64)v11;
  if ( common::milog::MilogContextBox::writeContextToBuf(v11, v1, (uint32_t *)(v5 + 32)) )
    goto LABEL_16;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  v12 = v2 + 8;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(v12);
    goto LABEL_59;
  }
  v13 = *(_QWORD *)(v2 + 8);
  v14 = *(_DWORD *)v2 + 0x4000 - (int)v13;
  if ( *(unsigned int *)(v5 + 32) <= v14 )
    v14 = *(unsigned int *)(v5 + 32);
  *(_QWORD *)(v2 + 8) = v13 + v14;
LABEL_16:
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    p_total_len = v4;
    __asan_report_load8(v4);
LABEL_60:
    __asan_report_load4(p_total_len);
    goto LABEL_61;
  }
  p_total_len = *(_QWORD *)v4;
  v16 = *(_BYTE *)((*(_QWORD *)v4 >> 3) + 0x7FFF8000LL);
  if ( (char)((*(_QWORD *)v4 & 7) + 3) >= v16 && v16 )
    goto LABEL_60;
  v17 = *(unsigned int *)p_total_len;
  p_total_len = v2 + 8;
  if ( *(_BYTE *)(((v2 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    __asan_report_load8(p_total_len);
    goto LABEL_62;
  }
  v18 = *(void **)(v2 + 8);
  p_total_len = *(_QWORD *)v2;
  if ( (int)v17 <= *(_DWORD *)(v2 + 8) - *(_DWORD *)v2 )
  {
    M_pi = (unsigned int)(v17 - 1);
    p_total_len += M_pi;
    v20 = *(_BYTE *)((p_total_len >> 3) + 0x7FFF8000);
    if ( v20 > (char)(p_total_len & 7) || !v20 )
    {
      *(_BYTE *)p_total_len = 10;
      p_total_len = (unsigned __int64)&v3->total_len;
      v21 = *(_BYTE *)(((unsigned __int64)&v3->total_len >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 124) & 7) + 3) < v21 || !v21 )
      {
        v3->total_len = v17;
        goto LABEL_26;
      }
      goto LABEL_63;
    }
LABEL_62:
    __asan_report_store1(p_total_len, v1, v17);
LABEL_63:
    v18 = (void *)__asan_report_store4(p_total_len, v1);
  }
  v33 = p_total_len + 0x4000 - (_DWORD)v18;
  v34 = v33;
  if ( v33 )
    v34 = 1LL;
  v22._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"\n";
  memcpy(v18, "\n", v34);
  v35 = *(_QWORD *)(v2 + 8) + v34;
  *(_QWORD *)(v2 + 8) = v35;
  M_pi = v35 - *(_QWORD *)v2;
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&v3->total_len;
  v36 = *(_BYTE *)(((unsigned __int64)&v3->total_len >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 124) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_store4(v22._M_ptr, "\n");
    goto LABEL_70;
  }
  v3->total_len = M_pi;
LABEL_26:
  v22._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v3;
  common::milog::MiLog::writeLog(*(common::milog::MiLog *const *)v4, v3);
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 24);
  if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_load8(v22._M_ptr);
    goto LABEL_71;
  }
  v22._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 24);
  if ( *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    p_cur = __asan_report_load8(v22._M_ptr);
    goto LABEL_72;
  }
  p_cur = (__int64)&v22._M_ptr->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v22._M_ptr->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)p_cur;
    __asan_report_store8(p_cur, v22._M_refcount._M_pi);
    goto LABEL_73;
  }
  v22._M_ptr->buffer_.cur_ = v22._M_ptr->buffer_.data_;
  v24 = (common::milog::MilogStringStreamPtr *)(v4 + 8);
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    v25 = __asan_report_load8(v24);
    goto LABEL_74;
  }
  ostr_ptr._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 8);
  v25 = v4 + 16;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)v25;
    __asan_report_load8(v25);
LABEL_75:
    v26 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v22._M_ptr, v22._M_refcount._M_pi);
    goto LABEL_76;
  }
  v26 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 16);
  ostr_ptr._M_refcount._M_pi = v26;
  if ( !v26 )
    goto LABEL_36;
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&v26->_M_use_count;
  if ( &_pthread_key_create )
  {
    v27 = *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000);
    if ( (char)(((__int64)v22._M_ptr & 7) + 3) < v27 || !v27 )
    {
      _InterlockedAdd((volatile signed __int32 *)v22._M_ptr, 1u);
      goto LABEL_36;
    }
    goto LABEL_75;
  }
LABEL_76:
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&v26->_M_use_count;
  v37 = *(_BYTE *)(((unsigned __int64)&v26->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v26 + 8) & 7) + 3) >= v37 && v37 )
  {
    __asan_report_load4(v22._M_ptr);
    goto LABEL_80;
  }
  ++v26->_M_use_count;
LABEL_36:
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&ostr_ptr;
  common::milog::MiLogStream::freeMilogStringStream(v22);
  M_pi = (size_t)ostr_ptr._M_refcount._M_pi;
  if ( !ostr_ptr._M_refcount._M_pi )
    goto LABEL_42;
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)&ostr_ptr._M_refcount._M_pi->_M_use_count;
  if ( !&_pthread_key_create )
    goto LABEL_81;
  v28 = *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v22._M_ptr & 7) + 3) < v28 || !v28 )
  {
    v29 = _InterlockedExchangeAdd((volatile signed __int32 *)v22._M_ptr, 0xFFFFFFFF);
    goto LABEL_41;
  }
LABEL_80:
  __asan_report_store4(v22._M_ptr, v22._M_refcount._M_pi);
LABEL_81:
  v38 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 8) & 7) + 3) >= v38 && v38 )
  {
    __asan_report_load4(M_pi + 8);
    goto LABEL_85;
  }
  v29 = *(_DWORD *)(M_pi + 8);
  *(_DWORD *)(M_pi + 8) = v29 - 1;
LABEL_41:
  if ( v29 != 1 )
    goto LABEL_42;
LABEL_85:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_96;
  }
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(*(_QWORD *)M_pi + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_96:
    __asan_report_load8(v22._M_ptr);
    goto LABEL_97;
  }
  (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 16LL))(M_pi);
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(M_pi + 12);
  if ( !&_pthread_key_create )
    goto LABEL_98;
  v39 = *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v22._M_ptr & 7) + 3) < v39 || !v39 )
  {
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v22._M_ptr, 0xFFFFFFFF);
    goto LABEL_91;
  }
LABEL_97:
  __asan_report_store4(v22._M_ptr, v22._M_refcount._M_pi);
LABEL_98:
  v41 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v41 && v41 )
  {
    __asan_report_load4(M_pi + 12);
LABEL_102:
    v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_103;
  }
  v40 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v40 - 1;
LABEL_91:
  if ( v40 != 1 )
    goto LABEL_42;
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_102;
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(*(_QWORD *)M_pi + 24LL);
  if ( *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8(v22._M_ptr);
    goto LABEL_104;
  }
  (*(void (__fastcall **)(size_t))(*(_QWORD *)M_pi + 24LL))(M_pi);
LABEL_42:
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 16);
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_load8(v22._M_ptr);
    goto LABEL_105;
  }
  v4 = *(_QWORD *)(v4 + 16);
  if ( !v4 )
    goto LABEL_49;
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_106;
  v30 = *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v22._M_ptr & 7) + 3) < v30 || !v30 )
  {
    v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v22._M_ptr, 0xFFFFFFFF);
    goto LABEL_48;
  }
LABEL_105:
  __asan_report_store4(v22._M_ptr, v22._M_refcount._M_pi);
LABEL_106:
  v42 = *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v4 + 8) & 7) + 3) >= v42 && v42 )
  {
    __asan_report_load4(v4 + 8);
    goto LABEL_110;
  }
  v31 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v31 - 1;
LABEL_48:
  if ( v31 != 1 )
    goto LABEL_49;
LABEL_110:
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)v4;
    __asan_report_load8(v4);
    goto LABEL_121;
  }
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(*(_QWORD *)v4 + 16LL);
  if ( *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_121:
    __asan_report_load8(v22._M_ptr);
    goto LABEL_122;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  v22._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)(v4 + 12);
  if ( !&_pthread_key_create )
    goto LABEL_123;
  v43 = *(_BYTE *)(((unsigned __int64)v22._M_ptr >> 3) + 0x7FFF8000);
  if ( (char)(((__int64)v22._M_ptr & 7) + 3) < v43 || !v43 )
  {
    v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v22._M_ptr, 0xFFFFFFFF);
    goto LABEL_116;
  }
LABEL_122:
  __asan_report_store4(v22._M_ptr, v22._M_refcount._M_pi);
LABEL_123:
  v46 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v4 + 12) & 7) + 3) >= v46 && v46 )
  {
    __asan_report_load4(v4 + 12);
LABEL_127:
    v45 = v4;
    __asan_report_load8(v4);
    goto LABEL_128;
  }
  v44 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v44 - 1;
LABEL_116:
  if ( v44 != 1 )
    goto LABEL_49;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_127;
  v45 = *(_QWORD *)v4 + 24LL;
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    __asan_report_load8(v45);
    goto LABEL_129;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 24LL))(v4);
LABEL_49:
  if ( v48 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    return;
  }
LABEL_129:
  *(_QWORD *)v5 = 1172321806LL;
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 100: range 000000000C9A2D30-000000000C9A2D47
void __cdecl GLOBAL__sub_I_milog_stream_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 100: range 000000000C9A0F88-000000000C9A132F
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/milog_stream.cpp");
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
          JUMPOUT(0xC9A101BLL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
