// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/lexical_cast.hpp

// Line 37: range 000000000C2C6ACA-000000000C2C7900
int __fastcall boost::lexical_cast<int,boost::iterator_range<char const*>>(
        const boost::iterator_range<char const*> *arg)
{
  char v1; // r14
  unsigned __int64 v2; // rbx
  char *v3; // rbp
  _DWORD *v4; // r12
  const char *m_Begin; // rax
  const char *m_End; // rdx
  const char *v7; // rcx
  char v8; // di
  char *v9; // rdi
  char v10; // dl
  char v11; // al
  char v12; // al
  char v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // r9d
  int v18; // ecx
  unsigned __int64 v19; // rdi
  char v20; // cl
  char v21; // si
  int v22; // edx
  unsigned int v23; // eax
  char v24; // di
  unsigned int v25; // r8d
  int v26; // ecx
  __int64 v27; // rax
  char v28; // al
  char v29; // al
  char v30; // r9
  unsigned __int8 v31; // di
  char v32; // al
  __int64 v33; // r11
  int v34; // r9d
  int v35; // ecx
  unsigned __int64 v36; // rdi
  char v37; // cl
  char v38; // si
  int v39; // edx
  unsigned int v40; // eax
  char v41; // di
  unsigned int v42; // r8d
  int v43; // ecx
  char v44; // r8
  int v45; // ecx
  char v46; // dl
  unsigned int v47; // eax
  int v48; // ecx
  int v49; // r10d
  int v50; // r10d
  unsigned __int64 v51; // rax
  char v52; // r8
  char v53; // di
  int v54; // ecx
  int v55; // esi
  unsigned __int64 v56; // rdi
  char v57; // si
  unsigned int v58; // r9d
  char v59; // si
  char v60; // cl
  unsigned __int64 v61; // rax
  char v62; // dl
  int result; // eax
  unsigned __int64 exception; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  boost::exception_detail::error_info_container *px; // rdi
  int (**vptr_error_info_container)(...); // rax
  __int64 throw_function; // rax
  __int64 throw_file; // rax
  int throw_line; // edx
  char v72; // al
  unsigned __int64 v73; // [rsp+0h] [rbp-168h]
  unsigned int v74; // [rsp+0h] [rbp-168h]
  __int64 v75; // [rsp+8h] [rbp-160h]
  char v76; // [rsp+10h] [rbp-158h]
  unsigned int v77; // [rsp+14h] [rbp-154h]
  unsigned __int64 v78; // [rsp+18h] [rbp-150h]
  const char *v79; // [rsp+20h] [rbp-148h]
  char *v80; // [rsp+28h] [rbp-140h]
  unsigned __int64 v81; // [rsp+28h] [rbp-140h]
  void *v82; // [rsp+30h] [rbp-138h] BYREF
  __int64 v83; // [rsp+38h] [rbp-130h]
  char v84; // [rsp+40h] [rbp-128h] BYREF
  __int64 *v85; // [rsp+50h] [rbp-118h] BYREF
  __int64 v86; // [rsp+58h] [rbp-110h]
  __int64 v87; // [rsp+60h] [rbp-108h]
  boost::exception b; // [rsp+68h] [rbp-100h] BYREF
  char v89[216]; // [rsp+90h] [rbp-D8h] BYREF

  v2 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v14 = __asan_stack_malloc_2(160LL);
    if ( v14 )
      v2 = v14;
  }
  v3 = (char *)(v2 + 160);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 out_tmp 64 8 3 loc 96 24 13 i_interpreter";
  *(_QWORD *)(v2 + 16) = boost::lexical_cast<int,boost::iterator_range<char const*>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_QWORD *)(v2 + 104) = v2 + 98;
  *(_QWORD *)(v2 + 112) = v2 + 100;
  if ( *(_BYTE *)(((unsigned __int64)arg >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_21;
  }
  m_Begin = arg->m_Begin;
  *(_QWORD *)(v2 + 104) = arg->m_Begin;
  if ( *(_BYTE *)(((unsigned __int64)&arg->m_End >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8();
LABEL_22:
    v9 = (char *)v7;
    __asan_report_load1(v7);
LABEL_23:
    __asan_report_store4(v9);
    goto LABEL_24;
  }
  m_End = arg->m_End;
  *(_QWORD *)(v2 + 112) = m_End;
  v7 = m_Begin;
  if ( m_Begin == m_End )
  {
    result = 0;
    v13 = 0;
    goto LABEL_177;
  }
  *(_DWORD *)(v2 + 48) = 0;
  v8 = *(_BYTE *)(((unsigned __int64)m_Begin >> 3) + 0x7FFF8000);
  if ( v8 <= ((unsigned __int8)m_Begin & 7) && v8 )
    goto LABEL_22;
  v1 = *m_Begin;
  if ( *m_Begin == 45 || v1 == 43 )
    v7 = m_Begin + 1;
  v76 = 0;
  v77 = 1;
  v9 = (char *)(v2 + 48);
  v78 = v2 + 48;
  v79 = v7;
  v80 = (char *)(m_End - 1);
  v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  if ( (char)(((v2 + 48) & 7) + 3) >= v10 && v10 )
    goto LABEL_23;
  *(_DWORD *)(v2 + 48) = 0;
  v9 = v80;
  if ( v7 > v80 )
  {
    v13 = 0;
    goto LABEL_165;
  }
  v11 = *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000);
  if ( v11 <= ((unsigned __int8)v80 & 7) && v11 )
  {
LABEL_24:
    v12 = __asan_report_load1(v9);
    goto LABEL_25;
  }
  v12 = *v80;
  if ( *v80 > 47 )
  {
    if ( v12 > 57 )
    {
      v13 = 0;
      goto LABEL_165;
    }
LABEL_25:
    *(_DWORD *)v78 = v12 - 48;
    v81 = (unsigned __int64)(v80 - 1);
    std::locale::locale((std::locale *)(v2 + 64));
    v15 = std::locale::classic((std::locale *)(v2 + 64));
    v13 = std::locale::operator==(v2 + 64, v15);
    if ( !v13 )
    {
      v16 = std::use_facet<std::numpunct<char>>(v2 + 64);
      v73 = v16;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v27 = *(_QWORD *)v16;
        if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v73 + 32LL) >> 3) + 0x7FFF8000) )
        {
          LOBYTE(v15) = v73;
          (*(void (__fastcall **)(void **, unsigned __int64))(v27 + 32))(&v82, v73);
LABEL_57:
          v75 = v83;
          if ( !v83 )
            goto LABEL_76;
          v28 = *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000);
          if ( v28 <= ((unsigned __int8)v82 & 7) && v28 )
          {
            __asan_report_load1(v82);
            goto LABEL_64;
          }
          if ( *(char *)v82 > 0 )
          {
            if ( !*(_BYTE *)(((unsigned __int64)(*(_QWORD *)v73 + 24LL) >> 3) + 0x7FFF8000) )
            {
              v29 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v73 + 24LL))(v73);
              goto LABEL_65;
            }
LABEL_64:
            __asan_report_load8();
LABEL_65:
            v30 = v29;
            v31 = (unsigned __int8)v82;
            v32 = *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000);
            if ( v32 <= ((unsigned __int8)v82 & 7) && v32 )
            {
              __asan_report_load1(v82);
              goto LABEL_94;
            }
            LOBYTE(v15) = *(_BYTE *)v82 - 1;
            v31 = 0;
            v33 = v75;
            while ( 1 )
            {
              if ( v81 < (unsigned __int64)v79 )
              {
                v13 = 1;
                goto LABEL_155;
              }
              if ( (_BYTE)v15 )
                break;
              v60 = *(_BYTE *)((v81 >> 3) + 0x7FFF8000);
              if ( v60 <= (char)(v81 & 7) && v60 )
              {
                v53 = v81;
                __asan_report_load1(v81);
                goto LABEL_119;
              }
              if ( v30 != *(_BYTE *)v81 )
              {
                while ( 1 )
                {
                  if ( v81 < (unsigned __int64)v79 )
                  {
                    v13 = 1;
                    goto LABEL_155;
                  }
                  v53 = v76;
                  if ( !v76 && v77 > (unsigned int)&unk_19999999 )
                    v53 = 1;
                  v76 = v53;
                  v77 *= 10;
                  v58 = *(char *)v81 - 48;
                  v54 = v58 * v77;
                  if ( (unsigned __int8)(*(_BYTE *)v81 - 48) > 9u )
                    goto LABEL_139;
                  if ( *(_BYTE *)v81 == 48 )
                    goto LABEL_121;
                  if ( v53 )
                  {
                    v53 = v13;
                  }
                  else
                  {
                    v55 = 0;
                    if ( !is_mul_ok(v58, v77) )
LABEL_119:
                      v55 = 1;
                    if ( !v55 )
                    {
                      v59 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
                      if ( (char)((v78 & 7) + 3) >= v59 && v59 )
                      {
                        v56 = v78;
                        __asan_report_load4(v78);
                      }
                      else
                      {
                        if ( (unsigned int)~v54 < *(_DWORD *)v78 )
                          goto LABEL_124;
LABEL_121:
                        v56 = v78;
                        v57 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
                        if ( (char)((v78 & 7) + 3) < v57 || !v57 )
                        {
                          *(_DWORD *)v78 += v54;
                          v53 = 1;
                          goto LABEL_124;
                        }
                      }
                      __asan_report_load4(v56);
LABEL_139:
                      v53 = v13;
                    }
                  }
LABEL_124:
                  if ( !v53 )
                  {
                    v13 = 0;
                    goto LABEL_155;
                  }
                  --v81;
                }
              }
              if ( (const char *)v81 == v79 )
                goto LABEL_155;
              if ( v31 < (unsigned __int64)(v33 - 1) )
                ++v31;
              v61 = (unsigned __int64)v82 + v31;
              v62 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
              if ( v62 <= (((unsigned __int8)v82 + v31) & 7) && v62 )
              {
                __asan_report_load1(v61);
LABEL_154:
                v13 = 1;
LABEL_155:
                if ( v82 != &v84 )
                  operator delete(v82);
LABEL_163:
                std::locale::~locale((std::locale *)(v2 + 64));
                goto LABEL_165;
              }
              LOBYTE(v15) = *(_BYTE *)v61;
LABEL_142:
              --v81;
            }
LABEL_94:
            v44 = v76;
            if ( !v76 && v77 > (unsigned int)&unk_19999999 )
              v44 = 1;
            v76 = v44;
            v45 = 10 * v77;
            v74 = 10 * v77;
            v77 *= 10;
            v46 = *(_BYTE *)((v81 >> 3) + 0x7FFF8000);
            if ( v46 <= (char)(v81 & 7) && v46 )
            {
              v31 = v81;
              __asan_report_load1(v81);
            }
            else
            {
              v47 = *(char *)v81 - 48;
              v48 = v47 * v45;
              if ( (unsigned __int8)(*(_BYTE *)v81 - 48) > 9u )
              {
LABEL_116:
                v44 = v13;
                goto LABEL_110;
              }
              if ( *(_BYTE *)v81 == 48 )
                goto LABEL_107;
              if ( v44 )
              {
                v44 = v13;
                goto LABEL_110;
              }
              v49 = 0;
              if ( is_mul_ok(v47, v74) )
              {
LABEL_103:
                if ( v49 )
                  goto LABEL_110;
                v50 = *(unsigned __int8 *)((v78 >> 3) + 0x7FFF8000);
                if ( (char)((v78 & 7) + 3) >= (char)v50 && (_BYTE)v50 )
                {
                  __asan_report_load4(v78);
LABEL_115:
                  v31 = v51;
                  __asan_report_load4(v51);
                  goto LABEL_116;
                }
                if ( (unsigned int)~v48 < *(_DWORD *)v78 )
                {
LABEL_110:
                  if ( !v44 )
                  {
                    v13 = 0;
                    goto LABEL_155;
                  }
                  LOBYTE(v15) = v15 - 1;
                  goto LABEL_142;
                }
LABEL_107:
                v51 = v78;
                v52 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
                if ( (char)((v78 & 7) + 3) < v52 || !v52 )
                {
                  *(_DWORD *)v78 += v48;
                  v44 = 1;
                  goto LABEL_110;
                }
                goto LABEL_115;
              }
            }
            v49 = 1;
            goto LABEL_103;
          }
          while ( 1 )
          {
LABEL_76:
            if ( v81 < (unsigned __int64)v79 )
              goto LABEL_154;
            v38 = v76;
            if ( !v76 && v77 > (unsigned int)&unk_19999999 )
              v38 = 1;
            v76 = v38;
            v39 = 10 * v77;
            v40 = 10 * v77;
            v77 *= 10;
            v41 = *(_BYTE *)((v81 >> 3) + 0x7FFF8000);
            if ( v41 <= (char)(v81 & 7) )
            {
              if ( v41 )
                break;
            }
            v42 = *(char *)v81 - 48;
            v34 = v42 * v39;
            if ( (unsigned __int8)(*(_BYTE *)v81 - 48) > 9u )
              goto LABEL_91;
            if ( *(_BYTE *)v81 == 48 )
              goto LABEL_71;
            if ( !v38 )
            {
              v35 = 0;
              if ( is_mul_ok(v42, v40) )
              {
LABEL_86:
                if ( v35 )
                  goto LABEL_74;
                v43 = *(unsigned __int8 *)((v78 >> 3) + 0x7FFF8000);
                if ( (char)((v78 & 7) + 3) >= (char)v43 && (_BYTE)v43 )
                {
                  v36 = v78;
                  __asan_report_load4(v78);
                }
                else
                {
                  if ( (unsigned int)~v34 < *(_DWORD *)v78 )
                    goto LABEL_74;
LABEL_71:
                  v36 = v78;
                  v37 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
                  if ( (char)((v78 & 7) + 3) < v37 || !v37 )
                  {
                    *(_DWORD *)v78 += v34;
                    v38 = 1;
                    goto LABEL_74;
                  }
                }
                __asan_report_load4(v36);
LABEL_91:
                v38 = v13;
                goto LABEL_74;
              }
LABEL_69:
              v35 = 1;
              goto LABEL_86;
            }
            v38 = v13;
LABEL_74:
            if ( !v38 )
            {
              v13 = 0;
              goto LABEL_155;
            }
            --v81;
          }
          __asan_report_load1(v81);
          goto LABEL_69;
        }
      }
      __asan_report_load8();
      goto LABEL_57;
    }
    while ( 1 )
    {
      if ( v81 < (unsigned __int64)v79 )
        goto LABEL_163;
      v21 = v76;
      if ( !v76 && v77 > (unsigned int)&unk_19999999 )
        v21 = v13;
      v76 = v21;
      v22 = 10 * v77;
      v23 = 10 * v77;
      v77 *= 10;
      v24 = *(_BYTE *)((v81 >> 3) + 0x7FFF8000);
      if ( v24 <= (char)(v81 & 7) )
      {
        if ( v24 )
          break;
      }
      v25 = *(char *)v81 - 48;
      v17 = v25 * v22;
      if ( (unsigned __int8)(*(_BYTE *)v81 - 48) > 9u )
        goto LABEL_50;
      if ( *(_BYTE *)v81 == 48 )
        goto LABEL_30;
      if ( !v21 )
      {
        v18 = 0;
        if ( is_mul_ok(v25, v23) )
        {
LABEL_45:
          if ( v18 )
            goto LABEL_33;
          v26 = *(unsigned __int8 *)((v78 >> 3) + 0x7FFF8000);
          if ( (char)((v78 & 7) + 3) >= (char)v26 && (_BYTE)v26 )
          {
            v19 = v78;
            __asan_report_load4(v78);
          }
          else
          {
            if ( (unsigned int)~v17 < *(_DWORD *)v78 )
              goto LABEL_33;
LABEL_30:
            v19 = v78;
            v20 = *(_BYTE *)((v78 >> 3) + 0x7FFF8000);
            if ( (char)((v78 & 7) + 3) < v20 || !v20 )
            {
              *(_DWORD *)v78 += v17;
              v21 = v13;
              goto LABEL_33;
            }
          }
          __asan_report_load4(v19);
LABEL_50:
          v21 = 0;
          goto LABEL_33;
        }
LABEL_28:
        v18 = 1;
        goto LABEL_45;
      }
      v21 = 0;
LABEL_33:
      if ( !v21 )
      {
        v13 = 0;
        goto LABEL_163;
      }
      --v81;
    }
    __asan_report_load1(v81);
    goto LABEL_28;
  }
  v13 = 0;
LABEL_165:
  if ( v1 == 45 )
  {
    if ( v13 )
    {
      if ( *(_DWORD *)(v2 + 48) > 0x80000000 )
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    result = -*(_DWORD *)(v2 + 48);
  }
  else
  {
    if ( v13 )
    {
      if ( *(int *)(v2 + 48) < 0 )
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    result = *(_DWORD *)(v2 + 48);
  }
LABEL_177:
  if ( !v13 )
  {
    *(_QWORD *)(v2 + 96) = &`vtable for'boost::bad_lexical_cast + 2;
    *(_QWORD *)(v2 + 104) = &`typeinfo for'boost::iterator_range<char const*>;
    *(_QWORD *)(v2 + 112) = &`typeinfo for'int;
    exception = (unsigned __int64)__cxa_allocate_exception(0x48uLL);
    v86 = *((_QWORD *)v3 - 7);
    v87 = *((_QWORD *)v3 - 6);
    memset(&b.data_, 0, 24);
    b.throw_line_ = -1;
    v85 = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_lexical_cast> + 2;
    b._vptr_exception = (int (**)(...))(&`vtable for'boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
                                      + 7);
    if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 64) = &`vtable for'boost::exception_detail::clone_base + 2;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::bad_lexical_cast + 2;
    v65 = v86;
    if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
      v65 = __asan_report_store8();
    *(_QWORD *)(exception + 8) = v65;
    v66 = v87;
    if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
      v66 = __asan_report_store8();
    *(_QWORD *)(exception + 16) = v66;
    if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 24) = &`vtable for'boost::exception + 2;
    px = b.data_.px_;
    if ( *(_BYTE *)(((exception + 32) >> 3) + 0x7FFF8000) )
    {
      px = (boost::exception_detail::error_info_container *)(exception + 32);
      __asan_report_store8();
    }
    *(_QWORD *)(exception + 32) = px;
    if ( px )
    {
      if ( *(_BYTE *)(((unsigned __int64)px >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vptr_error_info_container = px->_vptr_error_info_container;
      if ( *(_BYTE *)(((unsigned __int64)(px->_vptr_error_info_container + 3) >> 3) + 0x7FFF8000) )
      {
        px = (boost::exception_detail::error_info_container *)(px->_vptr_error_info_container + 3);
        __asan_report_load8();
      }
      vptr_error_info_container[3](px);
    }
    throw_function = (__int64)b.throw_function_;
    if ( *(_BYTE *)(((exception + 40) >> 3) + 0x7FFF8000) )
      throw_function = __asan_report_store8();
    *(_QWORD *)(exception + 40) = throw_function;
    throw_file = (__int64)b.throw_file_;
    if ( *(_BYTE *)(((exception + 48) >> 3) + 0x7FFF8000) )
      throw_file = __asan_report_store8();
    *(_QWORD *)(exception + 48) = throw_file;
    throw_line = b.throw_line_;
    v72 = *(_BYTE *)(((exception + 56) >> 3) + 0x7FFF8000);
    if ( v72 && v72 <= 3 )
      __asan_report_store4(exception + 56);
    *(_DWORD *)(exception + 56) = throw_line;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_lexical_cast> + 2;
    if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 24) = &`vtable for'boost::exception_detail::error_info_injector<boost::bad_lexical_cast> + 7;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = &unk_1D4AE430;
    if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 24) = (char *)&`vtable for'boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>
                                + 80;
    if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 64) = &off_1D4AE480;
    boost::exception_detail::copy_boost_exception((boost::exception *)(exception + 24), &b);
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)exception = (char *)&`vtable for'boost::wrapexcept<boost::bad_lexical_cast> + 24;
    if ( *(_BYTE *)(((exception + 24) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 24) = (char *)&`vtable for'boost::wrapexcept<boost::bad_lexical_cast> + 80;
    if ( *(_BYTE *)(((exception + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(_QWORD *)(exception + 64) = (char *)&`vtable for'boost::wrapexcept<boost::bad_lexical_cast> + 136;
    boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector((std::bad_cast *)&v85);
    __asan_handle_no_return(&v85);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::bad_lexical_cast>,
      boost::wrapexcept<boost::bad_lexical_cast>::~wrapexcept);
  }
  if ( v89 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
