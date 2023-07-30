// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/base/src/file_utils.cpp

// Line 23: range 000000000C9F700E-000000000C9F768D
int32_t __fastcall common::tools::FileUtils::getCurDirectory(std::string *cur_dir)
{
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v1; // rbp
  unsigned __int64 v2; // r13
  char *v3; // rbx
  _DWORD *v4; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rsi
  signed int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v9; // rax
  std::forward_iterator_tag v10; // cl
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  char v20; // al
  size_t v21; // rdx
  std::string::size_type v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  char v25; // al
  unsigned __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // al
  unsigned __int64 M_allocated_capacity; // rdi
  __int64 v32; // rax
  __int64 p_M_allocated_capacity; // rax
  char v34; // al
  __int64 v35; // rdx
  char *v36; // rdi
  int32_t result; // eax
  std::string::size_type M_string_length; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  char v41; // al
  unsigned __int64 v42; // rdx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rdx
  char v46; // al
  std::string::size_type v47; // [rsp+10h] [rbp-228h]
  std::string::size_type v48; // [rsp+18h] [rbp-220h]
  std::string v49; // [rsp+20h] [rbp-218h] BYREF
  char v50[504]; // [rsp+40h] [rbp-1F8h] BYREF

  v1 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)cur_dir;
  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_3(448LL);
    if ( v16 )
      v2 = v16;
  }
  v3 = (char *)(v2 + 448);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 6 dir:34 112 260 6 buf:24";
  *(_QWORD *)(v2 + 16) = common::tools::FileUtils::getCurDirectory;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862731] = -217841664;
  v4[536862732] = -202116109;
  v4[536862733] = -202116109;
  M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(v2 + 112);
  v6 = readlink("/proc/self/exe", (char *)(v2 + 112), 0x103uLL);
  if ( (unsigned int)v6 > 0x103 )
    goto LABEL_88;
  v7 = *(unsigned __int8 *)(((unsigned __int64)&v3[v6 - 336] >> 3) + 0x7FFF8000);
  v8 = ((_BYTE)v2 - 64 + (_BYTE)v6 - 80) & 7;
  if ( (char)v7 <= (char)v8 && (_BYTE)v7 )
  {
    __asan_report_store1(&v3[v6 - 336], M_p, v7, v8);
  }
  else
  {
    v3[v6 - 336] = 0;
    *(_QWORD *)(v2 + 48) = v2 + 64;
    v9 = strlen((const char *)(v2 + 112));
    std::string::_M_construct<char const*>(
      (std::string *const)(v2 + 48),
      (const char *)(v2 + 112),
      (const char *)(v2 + 112 + v9),
      v10);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)47;
    v11 = std::string::rfind(v2 + 48, 47LL, -1LL);
    if ( v11 != -1 )
    {
      v13 = v11 + 1;
      v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
      M_p = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(v2 + 48);
      v14 = *(_QWORD *)(v2 + 56);
      if ( v13 < v14 )
        v14 = v13;
      std::string::_M_construct<char const*>(
        &v49,
        M_p->_M_local_buf,
        &M_p->_M_local_buf[v14],
        (std::forward_iterator_tag)v12);
LABEL_47:
      if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
      {
        M_allocated_capacity = (unsigned __int64)v1;
        __asan_report_load8(v1);
      }
      else
      {
        M_allocated_capacity = v1->_M_allocated_capacity;
        M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
        {
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_allocated_capacity == &v1[1] )
          {
LABEL_83:
            M_allocated_capacity = 0LL;
LABEL_52:
            v1->_M_allocated_capacity = (std::string::size_type)M_p;
            if ( *(_BYTE *)(((unsigned __int64)(&v1->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
            {
              p_M_allocated_capacity = __asan_report_store8(&v1->_M_allocated_capacity + 1, M_p);
            }
            else
            {
              *(&v1->_M_allocated_capacity + 1) = v49._M_string_length;
              p_M_allocated_capacity = (__int64)&v1[1]._M_allocated_capacity;
              v15 = (unsigned __int64)&v1[1] >> 3;
              if ( !*(_BYTE *)(v15 + 0x7FFF8000) )
              {
                v1[1]._M_allocated_capacity = v49._anon_0._M_allocated_capacity;
                if ( M_allocated_capacity )
                {
                  v49._M_dataplus._M_p = (std::string::pointer)M_allocated_capacity;
                  v49._anon_0._M_allocated_capacity = v47;
                  goto LABEL_56;
                }
                goto LABEL_86;
              }
            }
            __asan_report_store8(p_M_allocated_capacity, M_p);
LABEL_86:
            v49._M_dataplus._M_p = v49._anon_0._M_local_buf;
LABEL_56:
            v49._M_string_length = 0LL;
            v34 = *(_BYTE *)(((unsigned __int64)v49._M_dataplus._M_p >> 3) + 0x7FFF8000);
            v35 = (__int64)v49._M_dataplus._M_p & 7;
            if ( v34 > (char)v35 || !v34 )
            {
              *v49._M_dataplus._M_p = 0;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v49._M_dataplus._M_p != &v49._anon_0 )
                operator delete(v49._M_dataplus._M_p);
              goto LABEL_60;
            }
            __asan_report_store1(v49._M_dataplus._M_p, M_p, v35, v15);
LABEL_88:
            result = -1;
            goto LABEL_63;
          }
          v32 = (__int64)&v1[1]._M_allocated_capacity;
          if ( !*(_BYTE *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) )
          {
            v47 = v1[1]._M_allocated_capacity;
            goto LABEL_52;
          }
LABEL_82:
          __asan_report_load8(v32);
          goto LABEL_83;
        }
      }
      if ( v49._M_string_length )
      {
        if ( v49._M_string_length != 1 )
        {
          memcpy((void *)M_allocated_capacity, M_p, v49._M_string_length);
          goto LABEL_69;
        }
        v43 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
        v44 = (unsigned __int8)M_p & 7;
        if ( v43 <= (char)v44 && v43 )
        {
          M_allocated_capacity = (unsigned __int64)M_p;
          __asan_report_load1(M_p, M_p, v44, v15);
        }
        else
        {
          v45 = (unsigned __int8)M_p->_M_local_buf[0];
          v46 = *(_BYTE *)((M_allocated_capacity >> 3) + 0x7FFF8000);
          v15 = M_allocated_capacity & 7;
          if ( v46 > (char)v15 || !v46 )
          {
            *(_BYTE *)M_allocated_capacity = v45;
            goto LABEL_69;
          }
        }
        v39 = __asan_report_store1(M_allocated_capacity, M_p, v45, v15);
        goto LABEL_80;
      }
LABEL_69:
      M_string_length = v49._M_string_length;
      v39 = (__int64)(&v1->_M_allocated_capacity + 1);
      if ( !*(_BYTE *)(((unsigned __int64)(&v1->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      {
        *(&v1->_M_allocated_capacity + 1) = v49._M_string_length;
        v40 = v1->_M_allocated_capacity + M_string_length;
        v41 = *(_BYTE *)((v40 >> 3) + 0x7FFF8000);
        v42 = v40 & 7;
        if ( v41 > (char)v42 || !v41 )
        {
          *(_BYTE *)v40 = 0;
          goto LABEL_56;
        }
        goto LABEL_81;
      }
LABEL_80:
      v40 = v39;
      __asan_report_store8(v39, M_p);
LABEL_81:
      v32 = __asan_report_store1(v40, M_p, v42, v15);
      goto LABEL_82;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)cur_dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(cur_dir);
LABEL_25:
    v21 = *(_QWORD *)(v2 + 56);
    if ( !v21 )
      goto LABEL_28;
    if ( v21 != 1 )
    {
      memcpy(cur_dir, M_p, v21);
      goto LABEL_28;
    }
    v27 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
    v28 = (unsigned __int8)M_p & 7;
    if ( v27 <= (char)v28 && v27 )
    {
      cur_dir = (std::string *)M_p;
      __asan_report_load1(M_p, M_p, v28, v12);
    }
    else
    {
      v29 = (unsigned __int8)M_p->_M_local_buf[0];
      v30 = *(_BYTE *)(((unsigned __int64)cur_dir >> 3) + 0x7FFF8000);
      v12 = (unsigned __int8)cur_dir & 7;
      if ( v30 > (char)v12 || !v30 )
      {
        LOBYTE(cur_dir->_M_dataplus._M_p) = v29;
LABEL_28:
        v22 = *(_QWORD *)(v2 + 56);
        v23 = (__int64)(&v1->_M_allocated_capacity + 1);
        if ( !*(_BYTE *)(((unsigned __int64)(&v1->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
        {
          *(&v1->_M_allocated_capacity + 1) = v22;
          v24 = v1->_M_allocated_capacity + v22;
          v25 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
          v26 = v24 & 7;
          if ( v25 > (char)v26 || !v25 )
          {
            *(_BYTE *)v24 = 0;
            goto LABEL_21;
          }
          goto LABEL_40;
        }
LABEL_39:
        v24 = v23;
        __asan_report_store8(v23, M_p);
LABEL_40:
        v17 = __asan_report_store1(v24, M_p, v26, v12);
LABEL_41:
        __asan_report_load8(v17);
        goto LABEL_42;
      }
    }
    v23 = __asan_report_store1(cur_dir, M_p, v29, v12);
    goto LABEL_39;
  }
  cur_dir = (std::string *)cur_dir->_M_dataplus._M_p;
  M_p = *(std::string::$CFBEC286C7F52157F7E59FC354047095 **)(v2 + 48);
  if ( M_p == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)(v2 + 64) )
    goto LABEL_25;
  if ( cur_dir != (std::string *)&v1[1] )
  {
    v17 = (__int64)&v1[1]._M_allocated_capacity;
    if ( !*(_BYTE *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) )
    {
      v48 = v1[1]._M_allocated_capacity;
      goto LABEL_17;
    }
    goto LABEL_41;
  }
LABEL_42:
  cur_dir = 0LL;
LABEL_17:
  v1->_M_allocated_capacity = (std::string::size_type)M_p;
  if ( *(_BYTE *)(((unsigned __int64)(&v1->_M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
  {
    v18 = __asan_report_store8(&v1->_M_allocated_capacity + 1, M_p);
    goto LABEL_44;
  }
  *(&v1->_M_allocated_capacity + 1) = *(_QWORD *)(v2 + 56);
  v18 = (__int64)&v1[1]._M_allocated_capacity;
  v12 = (unsigned __int64)&v1[1] >> 3;
  if ( *(_BYTE *)(v12 + 0x7FFF8000) )
  {
LABEL_44:
    __asan_report_store8(v18, M_p);
    goto LABEL_45;
  }
  v1[1]._M_allocated_capacity = *(_QWORD *)(v2 + 64);
  if ( !cur_dir )
  {
LABEL_45:
    *(_QWORD *)(v2 + 48) = v2 + 64;
    goto LABEL_21;
  }
  *(_QWORD *)(v2 + 48) = cur_dir;
  *(_QWORD *)(v2 + 64) = v48;
LABEL_21:
  *(_QWORD *)(v2 + 56) = 0LL;
  v19 = *(_QWORD *)(v2 + 48);
  v20 = *(_BYTE *)((v19 >> 3) + 0x7FFF8000);
  if ( v20 <= (char)(v19 & 7) && v20 )
  {
    __asan_report_store1(v19, M_p, v19 & 7, v12);
    goto LABEL_47;
  }
  *(_BYTE *)v19 = 0;
LABEL_60:
  v36 = *(char **)(v2 + 48);
  if ( v36 != (char *)(v2 + 64) )
    operator delete(v36);
  result = 0;
LABEL_63:
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 45: range 000000000C9F6D8E-000000000C9F7009
int32_t __fastcall common::tools::FileUtils::getParentDirectory(const std::string *path, std::string *dir)
{
  std::string::size_type M_allocated_capacity; // r12
  const std::string *v3; // rbp
  unsigned __int64 M_p; // rsi
  __int64 v6; // rax
  std::forward_iterator_tag v7; // cl
  unsigned __int64 v8; // rax
  std::string::size_type v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  __int64 p_M_allocated_capacity; // rax
  char v14; // al
  __int64 v15; // rdx
  std::string::size_type M_string_length; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v19; // rdi
  char v20; // al
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // al
  std::string v26; // [rsp+0h] [rbp-38h] BYREF

  v3 = path;
  M_p = 47LL;
  v6 = std::string::rfind(path, 47LL, -1LL);
  if ( v6 == -1 )
    return -1;
  v8 = v6 + 1;
  v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(path);
    goto LABEL_21;
  }
  M_p = (unsigned __int64)path->_M_dataplus._M_p;
  path = (const std::string *)((char *)path + 8);
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(path);
LABEL_22:
    v11 = (unsigned __int64)dir;
    __asan_report_load8(dir);
LABEL_23:
    if ( !v26._M_string_length )
      goto LABEL_26;
    if ( v26._M_string_length != 1 )
    {
      memcpy((void *)v11, (const void *)M_p, v26._M_string_length);
      goto LABEL_26;
    }
    v22 = *(_BYTE *)((M_p >> 3) + 0x7FFF8000);
    v23 = M_p & 7;
    if ( v22 <= (char)v23 && v22 )
    {
      v11 = M_p;
      __asan_report_load1(M_p, M_p, v23, v10);
    }
    else
    {
      v24 = *(unsigned __int8 *)M_p;
      v25 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
      v10 = v11 & 7;
      if ( v25 > (char)v10 || !v25 )
      {
        *(_BYTE *)v11 = v24;
LABEL_26:
        M_string_length = v26._M_string_length;
        p_M_string_length = &dir->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&dir->_M_string_length >> 3) + 0x7FFF8000) )
        {
          dir->_M_string_length = v26._M_string_length;
          v19 = (std::string::size_type *)&dir->_M_dataplus._M_p[M_string_length];
          v20 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
          v21 = (unsigned __int8)v19 & 7;
          if ( v20 > (char)v21 || !v20 )
          {
            *(_BYTE *)v19 = 0;
            goto LABEL_15;
          }
          goto LABEL_38;
        }
LABEL_37:
        v19 = p_M_string_length;
        __asan_report_store8(p_M_string_length, M_p);
LABEL_38:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v19, M_p, v21, v10);
LABEL_39:
        __asan_report_load8(p_anon_0);
        goto LABEL_40;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(v11, M_p, v24, v10);
    goto LABEL_37;
  }
  v9 = v3->_M_string_length;
  if ( v8 < v9 )
    v9 = v8;
  std::string::_M_construct<char const*>(&v26, (const char *)M_p, (const char *)(M_p + v9), v7);
  if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  v11 = (unsigned __int64)dir->_M_dataplus._M_p;
  M_p = (unsigned __int64)v26._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p == &v26._anon_0 )
    goto LABEL_23;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v11 != &dir->_anon_0 )
  {
    p_anon_0 = &dir->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&dir->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = dir->_anon_0._M_allocated_capacity;
      goto LABEL_11;
    }
    goto LABEL_39;
  }
LABEL_40:
  v11 = 0LL;
LABEL_11:
  dir->_M_dataplus._M_p = (std::string::pointer)M_p;
  if ( *(_BYTE *)(((unsigned __int64)&dir->_M_string_length >> 3) + 0x7FFF8000) )
  {
    p_M_allocated_capacity = __asan_report_store8(&dir->_M_string_length, M_p);
    goto LABEL_42;
  }
  dir->_M_string_length = v26._M_string_length;
  p_M_allocated_capacity = (__int64)&dir->_anon_0._M_allocated_capacity;
  v10 = (unsigned __int64)&dir->_anon_0 >> 3;
  if ( *(_BYTE *)(v10 + 0x7FFF8000) )
  {
LABEL_42:
    __asan_report_store8(p_M_allocated_capacity, M_p);
    goto LABEL_43;
  }
  dir->_anon_0._M_allocated_capacity = v26._anon_0._M_allocated_capacity;
  if ( !v11 )
  {
LABEL_43:
    v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
    goto LABEL_15;
  }
  v26._M_dataplus._M_p = (std::string::pointer)v11;
  v26._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_15:
  v26._M_string_length = 0LL;
  v14 = *(_BYTE *)(((unsigned __int64)v26._M_dataplus._M_p >> 3) + 0x7FFF8000);
  v15 = (__int64)v26._M_dataplus._M_p & 7;
  if ( v14 <= (char)v15 && v14 )
  {
    __asan_report_store1(v26._M_dataplus._M_p, M_p, v15, v10);
    return -1;
  }
  *v26._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
    operator delete(v26._M_dataplus._M_p);
  return 0;
};

// Line 55: range 000000000C9F6BA2-000000000C9F6D8B
int32_t __fastcall common::tools::FileUtils::createDirectory(const std::string *dir)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r15
  unsigned __int64 first_of; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  char *v7; // rdi
  std::forward_iterator_tag v8; // cl
  void *p_M_string_length; // rdi
  std::string::size_type M_string_length; // rdx
  char v11; // cl
  char *v12; // rdi
  int32_t result; // eax
  char *v14; // rdi
  char v15[152]; // [rsp+10h] [rbp-98h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 strPath:60";
  *(_QWORD *)(v2 + 16) = common::tools::FileUtils::createDirectory;
  v3 = v2 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  first_of = 2LL;
  while ( 1 )
  {
    first_of = std::string::find_first_of(dir, &unk_19ECB2C0, first_of + 1, 2LL);
    *(_QWORD *)(v2 + 32) = v2 + 48;
    p_M_string_length = (void *)dir;
    if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(dir);
LABEL_6:
      v6 = __asan_report_load8(p_M_string_length);
      goto LABEL_7;
    }
    p_M_string_length = &dir->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&dir->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    M_string_length = dir->_M_string_length;
    if ( first_of < M_string_length )
      M_string_length = first_of;
    std::string::_M_construct<char const*>(
      (std::string *const)(v2 + 32),
      dir->_M_dataplus._M_p,
      &dir->_M_dataplus._M_p[M_string_length],
      v8);
    if ( !mkdir(*(const char **)(v2 + 32), 0x1FFu) )
      goto LABEL_8;
    v6 = (unsigned __int64)__errno_location();
    v11 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    if ( (char)((v6 & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(v6);
LABEL_19:
      v12 = *(char **)(v2 + 32);
      if ( v12 != (char *)(v2 + 48) )
        operator delete(v12);
      result = -1;
      goto LABEL_25;
    }
LABEL_7:
    if ( *(_DWORD *)v6 != 17 )
      goto LABEL_19;
LABEL_8:
    if ( first_of == -1LL )
      break;
    v7 = *(char **)(v2 + 32);
    if ( v7 != (char *)(v2 + 48) )
      operator delete(v7);
  }
  v14 = *(char **)(v2 + 32);
  if ( v14 != (char *)(v2 + 48) )
    operator delete(v14);
  result = 0;
LABEL_25:
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 76: range 000000000C9F6A20-000000000C9F6B6A
int32_t __fastcall common::tools::FileUtils::getFileTime(const std::string *file, tm *time)
{
  unsigned __int64 v2; // rbx
  _DWORD *v3; // rbp
  int32_t result; // eax
  __int64 v5; // rax
  _BYTE v6[312]; // [rsp+0h] [rbp-138h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v2 = v5;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 144 5 st:77";
  *(_QWORD *)(v2 + 16) = common::tools::FileUtils::getFileTime;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862726] = -202116109;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)file >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(file);
  }
  else if ( __xstat(1, file->_M_dataplus._M_p, (struct stat *)(v2 + 48)) >= 0 )
  {
    if ( localtime_r((const time_t *)(v2 + 136), time) )
      result = 0;
    else
      result = -1;
    goto LABEL_6;
  }
  result = -1;
LABEL_6:
  if ( v6 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 87: range 000000000C9F6B6C-000000000C9F6BA0
int32_t __fastcall common::tools::FileUtils::fileExists(const std::string *file)
{
  int32_t result; // eax

  if ( *(_BYTE *)(((unsigned __int64)file >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(file);
    return -1;
  }
  result = access(file->_M_dataplus._M_p, 0);
  if ( result )
    return -1;
  return result;
};

// Line 95: range 000000000C9F7A22-000000000C9F8A2E
int32_t __fastcall common::tools::FileUtils::getAllFilesWithExtension(
        const std::string *dir,
        const std::string *extension,
        std::vector<std::string> *file_vec)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  _DWORD *v6; // rbp
  __int64 v7; // rax
  const std::filesystem::__cxx11::path *M_p; // rsi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v9; // r13
  unsigned __int64 v10; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r14
  volatile signed __int32 *p_M_use_count; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  char *v15; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rax
  volatile signed __int32 *v18; // rdi
  char v19; // dl
  __int64 v20; // rax
  volatile signed __int32 *v21; // rdi
  char v22; // dl
  volatile signed __int32 *v23; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  bool v26; // zf
  char v27; // al
  std::forward_iterator_tag v28; // cl
  char v29; // cl
  char v30; // cl
  char v31; // dl
  unsigned __int64 v32; // rdi
  char v33; // dl
  signed __int32 v34; // eax
  unsigned __int64 v35; // rdi
  char v36; // dl
  std::string::size_type *v37; // rdi
  std::string *v38; // rdx
  std::string::size_type *p_M_string_length; // rdi
  struct _Unwind_Exception *v40; // rbp
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  std::forward_iterator_tag v45; // cl
  std::string::size_type *v46; // rdi
  _Atomic_word *v47; // rdi
  char v48; // dl
  signed __int32 M_use_count; // eax
  char v50; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  char v52; // dl
  signed __int32 M_weak_count; // eax
  unsigned __int64 v54; // rdi
  char v55; // dl
  volatile signed __int32 *v56; // rdi
  char v57; // dl
  signed __int32 v58; // eax
  volatile signed __int32 *v59; // rdi
  char v60; // dl
  signed __int32 v61; // eax
  char v62; // dl
  char v63; // dl
  char v64; // dl
  volatile signed __int32 *v65; // rdi
  char v66; // dl
  signed __int32 v67; // eax
  unsigned __int64 v68; // rdi
  char v69; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v70; // rdi
  std::filesystem::__cxx11::path *v71; // [rsp+0h] [rbp-1C8h]
  char v73; // [rsp+10h] [rbp-1B8h]
  __int64 v74; // [rsp+10h] [rbp-1B8h]
  unsigned __int64 v75; // [rsp+18h] [rbp-1B0h]
  __int64 v76; // [rsp+28h] [rbp-1A0h]
  std::filesystem::__cxx11::directory_iterator __for_begin; // [rsp+30h] [rbp-198h] BYREF
  std::filesystem::__cxx11::directory_iterator __for_end; // [rsp+40h] [rbp-188h]
  std::string v79; // [rsp+50h] [rbp-178h] BYREF
  std::filesystem::__cxx11::path v80; // [rsp+70h] [rbp-158h] BYREF
  std::filesystem::__cxx11::path v81; // [rsp+A0h] [rbp-128h] BYREF
  char v82[248]; // [rsp+D0h] [rbp-F8h] BYREF

  v4 = (unsigned __int64)dir;
  v71 = (std::filesystem::__cxx11::path *)extension;
  v5 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 16 5 ec:99 80 16 12 dir_iter:100 112 40 11 dir_path:96";
  *(_QWORD *)(v5 + 16) = common::tools::FileUtils::getAllFilesWithExtension;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(dir);
  }
  else
  {
    extension = (const std::string *)dir->_M_dataplus._M_p;
    dir = (const std::string *)((char *)dir + 8);
    if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v5 + 112) = v5 + 128;
      std::string::_M_construct<char const*>(
        (std::string *const)(v5 + 112),
        (const char *)extension,
        (const char *)extension + *(_QWORD *)(v4 + 8),
        v3);
      std::filesystem::__cxx11::path::_List::_List((std::filesystem::__cxx11::path::_List *)(v5 + 144));
      goto LABEL_9;
    }
  }
  __asan_report_load8(dir);
LABEL_9:
  std::filesystem::__cxx11::path::_M_split_cmpts((std::filesystem::__cxx11::path *)(v5 + 112));
  if ( (unsigned __int8)std::filesystem::status(
                          (std::filesystem *)(v5 + 112),
                          (const std::filesystem::__cxx11::path *)extension) != 2 )
    goto LABEL_230;
  *(_DWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = std::_V2::system_category((std::_V2 *)(v5 + 112));
  M_p = (const std::filesystem::__cxx11::path *)(v5 + 112);
  std::filesystem::__cxx11::directory_iterator::directory_iterator(
    (std::filesystem::__cxx11::directory_iterator *)(v5 + 80),
    (const std::filesystem::__cxx11::path *)(v5 + 112),
    none_3,
    (std::error_code *)(v5 + 48));
  LODWORD(v9) = *(_DWORD *)(v5 + 48);
  if ( (_DWORD)v9 )
  {
    M_p = *(const std::filesystem::__cxx11::path **)(v5 + 56);
    if ( *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000) )
    {
      v10 = *(_QWORD *)(v5 + 56);
      __asan_report_load8(v10);
    }
    else
    {
      v10 = (unsigned __int64)(M_p->_M_pathname._M_dataplus._M_p + 32);
      if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        (*((void (__fastcall **)(std::string *, const std::filesystem::__cxx11::path *, _QWORD))M_p->_M_pathname._M_dataplus._M_p
         + 4))(
          &v79,
          M_p,
          (unsigned int)v9);
LABEL_16:
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v4);
        }
        else
        {
          M_p = *(const std::filesystem::__cxx11::path **)v4;
          printf(
            "getAllFilesWithExtension fail %s. directory_iterator error code: %d, %s\n",
            *(const char **)v4,
            *(unsigned int *)(v5 + 48),
            v79._M_dataplus._M_p);
        }
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p != &v79._anon_0 )
          operator delete(v79._M_dataplus._M_p);
        LODWORD(v9) = *(_DWORD *)(v5 + 48);
LABEL_22:
        M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 88);
        if ( M_pi )
        {
          p_M_use_count = &M_pi->_M_use_count;
          if ( !&_pthread_key_create )
            goto LABEL_207;
          v13 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) >= v13 && v13 )
            goto LABEL_206;
          v14 = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
LABEL_27:
          if ( v14 == 1 )
            goto LABEL_211;
        }
        goto LABEL_28;
      }
    }
    __asan_report_load8(v10);
    goto LABEL_16;
  }
  __for_end._M_dir._M_ptr = *(std::__shared_ptr<std::filesystem::__cxx11::_Dir,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 80);
  v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 88);
  __for_end._M_dir._M_refcount._M_pi = v17;
  if ( v17 )
  {
    v18 = &v17->_M_use_count;
    if ( &_pthread_key_create )
    {
      v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
      {
        _InterlockedAdd(v18, 1u);
        goto LABEL_40;
      }
      v17 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v18, M_p);
    }
    v21 = &v17->_M_use_count;
    v29 = *(_BYTE *)(((unsigned __int64)&v17->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v17 + 8) & 7) + 3) >= v29 && v29 )
    {
      __asan_report_load4(v21);
LABEL_58:
      v20 = __asan_report_store4(v21, M_p);
      goto LABEL_59;
    }
    ++v17->_M_use_count;
  }
LABEL_40:
  __for_begin = __for_end;
  v20 = *(_QWORD *)(v5 + 88);
  v76 = v20;
  if ( !v20 )
    goto LABEL_45;
  v21 = (volatile signed __int32 *)(v20 + 8);
  if ( &_pthread_key_create )
  {
    v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v21 & 7) + 3) < v22 || !v22 )
    {
      _InterlockedAdd(v21, 1u);
      goto LABEL_45;
    }
    goto LABEL_58;
  }
LABEL_59:
  v23 = (volatile signed __int32 *)(v20 + 8);
  v30 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v20 + 8) & 7) + 3) >= v30 && v30 )
  {
    __asan_report_load4(v23);
    goto LABEL_63;
  }
  ++*(_DWORD *)(v20 + 8);
LABEL_45:
  __for_end._M_dir._M_refcount._M_pi = 0LL;
  v4 = v76;
  if ( !v76 )
    goto LABEL_51;
  v23 = (volatile signed __int32 *)(v76 + 8);
  if ( !&_pthread_key_create )
    goto LABEL_64;
  v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v23 & 7) + 3) < v24 || !v24 )
  {
    v25 = _InterlockedExchangeAdd(v23, 0xFFFFFFFF);
    goto LABEL_50;
  }
LABEL_63:
  __asan_report_store4(v23, M_p);
LABEL_64:
  v31 = *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v4 + 8) & 7) + 3) >= v31 && v31 )
  {
    __asan_report_load4(v4 + 8);
    goto LABEL_68;
  }
  v25 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v25 - 1;
LABEL_50:
  if ( v25 != 1 )
    goto LABEL_51;
LABEL_68:
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    v32 = v4;
    __asan_report_load8(v4);
    goto LABEL_79;
  }
  v32 = *(_QWORD *)v4 + 16LL;
  if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_load8(v32);
    goto LABEL_80;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  v32 = v4 + 12;
  if ( !&_pthread_key_create )
    goto LABEL_81;
  v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
  if ( (char)((v32 & 7) + 3) < v33 || !v33 )
  {
    v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF);
    goto LABEL_74;
  }
LABEL_80:
  __asan_report_store4(v32, M_p);
LABEL_81:
  v36 = *(_BYTE *)(((v4 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v4 + 12) & 7) + 3) >= v36 && v36 )
  {
    __asan_report_load4(v4 + 12);
LABEL_85:
    v35 = v4;
    __asan_report_load8(v4);
    goto LABEL_86;
  }
  v34 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v34 - 1;
LABEL_74:
  if ( v34 != 1 )
    goto LABEL_51;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    goto LABEL_85;
  v35 = *(_QWORD *)v4 + 24LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_86:
    v27 = __asan_report_load8(v35);
    goto LABEL_87;
  }
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 24LL))(v4);
  while ( 1 )
  {
LABEL_51:
    M_pi = __for_begin._M_dir._M_refcount._M_pi;
    v26 = __for_begin._M_dir._M_refcount._M_pi == 0LL;
    if ( !__for_begin._M_dir._M_refcount._M_pi )
      goto LABEL_176;
    v4 = std::filesystem::__cxx11::directory_iterator::operator*(&__for_begin);
    v27 = std::filesystem::status((std::filesystem *)v4, M_p);
LABEL_87:
    if ( v27 == 1 )
    {
      p_M_string_length = (std::string::size_type *)v71;
      if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v71);
LABEL_103:
        v40 = (struct _Unwind_Exception *)__asan_report_load8(p_M_string_length);
        if ( __for_end._M_dir._M_refcount._M_pi )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__for_end._M_dir._M_refcount._M_pi);
        if ( __for_begin._M_dir._M_refcount._M_pi )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(__for_begin._M_dir._M_refcount._M_pi);
        v70 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 88);
        if ( v70 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v70);
        std::filesystem::__cxx11::path::~path((std::filesystem::__cxx11::path *const)(v5 + 112));
        __asan_handle_no_return(v5 + 112, M_p);
        _Unwind_Resume(v40);
      }
      M_p = (const std::filesystem::__cxx11::path *)v71->_M_pathname._M_dataplus._M_p;
      p_M_string_length = &v71->_M_pathname._M_string_length;
      if ( *(_BYTE *)(((unsigned __int64)&v71->_M_pathname._M_string_length >> 3) + 0x7FFF8000) )
        goto LABEL_103;
      v81._M_pathname._M_dataplus._M_p = v81._M_pathname._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &v81._M_pathname,
        (const char *)M_p,
        (const char *)M_p + v71->_M_pathname._M_string_length,
        v28);
      std::filesystem::__cxx11::path::_List::_List(&v81._M_cmpts);
      std::filesystem::__cxx11::path::_M_split_cmpts(&v81);
      v41 = std::filesystem::__cxx11::path::_M_find_extension((std::filesystem::__cxx11::path *)v4);
      if ( v41 && (v74 = v42, v42 != -1LL) )
      {
        v43 = v41 + 8;
        if ( *(_BYTE *)(((v41 + 8) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v43);
LABEL_114:
          __asan_handle_no_return(v43, M_p);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::substr",
            v74,
            v75);
        }
        v75 = *(_QWORD *)(v41 + 8);
        if ( v42 > v75 )
          goto LABEL_114;
        v79._M_dataplus._M_p = v79._anon_0._M_local_buf;
        v44 = v41;
        if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v41);
LABEL_116:
          __asan_handle_no_return(v44, M_p);
          std::__throw_out_of_range_fmt(
            "%s: __pos (which is %zu) > this->size() (which is %zu)",
            "basic_string::basic_string",
            v74,
            v75);
        }
        M_p = *(const std::filesystem::__cxx11::path **)v41;
        v75 = *(_QWORD *)(v41 + 8);
        if ( v42 > v75 )
          goto LABEL_116;
        std::string::_M_construct<char const*>(
          &v79,
          (const char *)M_p + v42,
          (const char *)M_p + v75,
          (std::forward_iterator_tag)(v41 >> 3));
        v80._M_pathname._M_dataplus._M_p = v80._M_pathname._anon_0._M_local_buf;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p == &v79._anon_0 )
        {
          v80._M_pathname._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_load_si128((const __m128i *)&v79._anon_0);
        }
        else
        {
          v80._M_pathname._M_dataplus._M_p = v79._M_dataplus._M_p;
          v80._M_pathname._anon_0._M_allocated_capacity = v79._anon_0._M_allocated_capacity;
        }
        v80._M_pathname._M_string_length = v79._M_string_length;
        v79._M_dataplus._M_p = v79._anon_0._M_local_buf;
        v79._M_string_length = 0LL;
        v79._anon_0._M_local_buf[0] = 0;
        std::filesystem::__cxx11::path::_List::_List(&v80._M_cmpts);
        std::filesystem::__cxx11::path::_M_split_cmpts(&v80);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p != &v79._anon_0 )
          operator delete(v79._M_dataplus._M_p);
      }
      else
      {
        v80._M_pathname._M_dataplus._M_p = v80._M_pathname._anon_0._M_local_buf;
        v80._M_pathname._M_string_length = 0LL;
        v80._M_pathname._anon_0._M_local_buf[0] = 0;
        std::filesystem::__cxx11::path::_List::_List(&v80._M_cmpts);
      }
      M_p = &v81;
      v73 = 1;
      LOBYTE(v75) = (unsigned int)std::filesystem::__cxx11::path::compare(&v80, &v81) == 0;
    }
    else
    {
      v73 = 0;
      LOBYTE(v75) = 0;
    }
    if ( v73 )
    {
      M_p = (const std::filesystem::__cxx11::path *)v80._M_cmpts._M_impl._M_t._M_t._M_head_impl;
      if ( v80._M_cmpts._M_impl._M_t._M_t._M_head_impl )
        std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v80._M_cmpts);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v80._M_pathname._M_dataplus._M_p != &v80._M_pathname._anon_0 )
        operator delete(v80._M_pathname._M_dataplus._M_p);
    }
    if ( v73 )
    {
      M_p = (const std::filesystem::__cxx11::path *)v81._M_cmpts._M_impl._M_t._M_t._M_head_impl;
      if ( v81._M_cmpts._M_impl._M_t._M_t._M_head_impl )
        std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v81._M_cmpts);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v81._M_pathname._M_dataplus._M_p != &v81._M_pathname._anon_0 )
        operator delete(v81._M_pathname._M_dataplus._M_p);
    }
    if ( (_BYTE)v75 )
    {
      v79._M_dataplus._M_p = v79._anon_0._M_local_buf;
      v37 = (std::string::size_type *)v4;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v4);
      }
      else
      {
        v37 = (std::string::size_type *)(v4 + 8);
        if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
        {
          std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
            &v79,
            *(__gnu_cxx::__normal_iterator<char const*,std::string > *)v4,
            (__gnu_cxx::__normal_iterator<char const*,std::string >)(*(_QWORD *)(v4 + 8) + *(_QWORD *)v4),
            (std::forward_iterator_tag)v71);
          goto LABEL_133;
        }
      }
      __asan_report_load8(v37);
LABEL_133:
      M_p = (const std::filesystem::__cxx11::path *)&v79;
      std::vector<std::string>::emplace_back<std::string>(file_vec, &v79, v38);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p != &v79._anon_0 )
        operator delete(v79._M_dataplus._M_p);
      goto LABEL_136;
    }
    if ( (unsigned __int8)std::filesystem::status((std::filesystem *)v4, M_p) != 2 )
      goto LABEL_136;
    v79._M_dataplus._M_p = v79._anon_0._M_local_buf;
    v46 = (std::string::size_type *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v4);
    }
    else
    {
      v46 = (std::string::size_type *)(v4 + 8);
      if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
      {
        std::string::_M_construct<char *>(&v79, *(char **)v4, (char *)(*(_QWORD *)(v4 + 8) + *(_QWORD *)v4), v45);
        goto LABEL_142;
      }
    }
    __asan_report_load8(v46);
LABEL_142:
    M_p = v71;
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(unsigned int)common::tools::FileUtils::getAllFilesWithExtension(
                                                                                &v79,
                                                                                &v71->_M_pathname,
                                                                                file_vec);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v79._M_dataplus._M_p != &v79._anon_0 )
      operator delete(v79._M_dataplus._M_p);
    if ( (_DWORD)M_pi )
      break;
LABEL_136:
    std::filesystem::__cxx11::directory_iterator::operator++(&__for_begin);
  }
  v9 = __for_begin._M_dir._M_refcount._M_pi;
  if ( !__for_begin._M_dir._M_refcount._M_pi )
    goto LABEL_151;
  v47 = &__for_begin._M_dir._M_refcount._M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v48 = *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v47 & 7) + 3) < v48 || !v48 )
    {
      M_use_count = _InterlockedExchangeAdd(v47, 0xFFFFFFFF);
      goto LABEL_150;
    }
    __asan_report_store4(v47, v71);
  }
  v50 = *(_BYTE *)(((unsigned __int64)&v9->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v9 + 8) & 7) + 3) >= v50 && v50 )
  {
    __asan_report_load4(&v9->_M_use_count);
  }
  else
  {
    M_use_count = v9->_M_use_count;
    v9->_M_use_count = M_use_count - 1;
LABEL_150:
    if ( M_use_count != 1 )
    {
LABEL_151:
      LODWORD(v9) = (_DWORD)M_pi;
      goto LABEL_22;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    p_M_weak_count = (volatile signed __int32 *)v9;
    __asan_report_load8(v9);
    goto LABEL_168;
  }
  p_M_weak_count = (volatile signed __int32 *)(v9->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000) )
  {
LABEL_168:
    __asan_report_load8(p_M_weak_count);
    goto LABEL_169;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 2))(v9);
  p_M_weak_count = &v9->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v52 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v52 || !v52 )
    {
      M_weak_count = _InterlockedExchangeAdd(p_M_weak_count, 0xFFFFFFFF);
      goto LABEL_163;
    }
LABEL_169:
    __asan_report_store4(p_M_weak_count, v71);
  }
  v55 = *(_BYTE *)(((unsigned __int64)&v9->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v9 + 12) & 7) + 3) >= v55 && v55 )
  {
    __asan_report_load4(&v9->_M_weak_count);
LABEL_174:
    v54 = (unsigned __int64)v9;
    __asan_report_load8(v9);
    goto LABEL_175;
  }
  M_weak_count = v9->_M_weak_count;
  v9->_M_weak_count = M_weak_count - 1;
LABEL_163:
  if ( M_weak_count != 1 )
    goto LABEL_151;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    goto LABEL_174;
  v54 = (unsigned __int64)(v9->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))v9->_vptr__Sp_counted_base + 3))(v9);
    goto LABEL_151;
  }
LABEL_175:
  __asan_report_load8(v54);
LABEL_176:
  if ( v26 )
    goto LABEL_22;
  v56 = &M_pi->_M_use_count;
  if ( &_pthread_key_create )
  {
    v57 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v56 & 7) + 3) < v57 || !v57 )
    {
      v58 = _InterlockedExchangeAdd(v56, 0xFFFFFFFF);
      goto LABEL_181;
    }
    __asan_report_store4(v56, M_p);
  }
  v62 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v62 && v62 )
  {
    __asan_report_load4(&M_pi->_M_use_count);
LABEL_197:
    v59 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_198;
  }
  v58 = M_pi->_M_use_count;
  M_pi->_M_use_count = v58 - 1;
LABEL_181:
  if ( v58 != 1 )
    goto LABEL_22;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
    goto LABEL_197;
  v59 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
  {
LABEL_198:
    __asan_report_load8(v59);
    goto LABEL_199;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v59 = &M_pi->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v60 = *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v59 & 7) + 3) < v60 || !v60 )
    {
      v61 = _InterlockedExchangeAdd(v59, 0xFFFFFFFF);
      goto LABEL_188;
    }
LABEL_199:
    __asan_report_store4(v59, M_p);
  }
  v63 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v63 && v63 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
    goto LABEL_204;
  }
  v61 = M_pi->_M_weak_count;
  M_pi->_M_weak_count = v61 - 1;
LABEL_188:
  if ( v61 != 1 )
    goto LABEL_22;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_204:
    p_M_use_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_205;
  }
  p_M_use_count = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
    goto LABEL_22;
  }
LABEL_205:
  __asan_report_load8(p_M_use_count);
LABEL_206:
  __asan_report_store4(p_M_use_count, M_p);
LABEL_207:
  v64 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v64 || !v64 )
  {
    v14 = M_pi->_M_use_count;
    M_pi->_M_use_count = v14 - 1;
    goto LABEL_27;
  }
  __asan_report_load4(&M_pi->_M_use_count);
LABEL_211:
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
    v65 = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_222;
  }
  v65 = (volatile signed __int32 *)(M_pi->_vptr__Sp_counted_base + 2);
  if ( *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
  {
LABEL_222:
    __asan_report_load8(v65);
    goto LABEL_223;
  }
  (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 2))(M_pi);
  v65 = &M_pi->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v66 = *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v65 & 7) + 3) < v66 || !v66 )
    {
      v67 = _InterlockedExchangeAdd(v65, 0xFFFFFFFF);
      goto LABEL_217;
    }
LABEL_223:
    __asan_report_store4(v65, M_p);
  }
  v69 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) >= v69 && v69 )
  {
    __asan_report_load4(&M_pi->_M_weak_count);
    goto LABEL_228;
  }
  v67 = M_pi->_M_weak_count;
  M_pi->_M_weak_count = v67 - 1;
LABEL_217:
  if ( v67 != 1 )
    goto LABEL_28;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_228:
    v68 = (unsigned __int64)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_229;
  }
  v68 = (unsigned __int64)(M_pi->_vptr__Sp_counted_base + 3);
  if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
  {
    (*((void (__fastcall **)(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *))M_pi->_vptr__Sp_counted_base + 3))(M_pi);
    goto LABEL_28;
  }
LABEL_229:
  __asan_report_load8(v68);
LABEL_230:
  LODWORD(v9) = -1;
LABEL_28:
  if ( *(_QWORD *)(v5 + 144) )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(v5 + 144);
  v15 = *(char **)(v5 + 112);
  if ( v15 != (char *)(v5 + 128) )
    operator delete(v15);
  if ( v82 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return (int)v9;
};

// Line 137: range 000000000C9F8A34-000000000C9F94C3
int32_t __fastcall common::tools::FileUtils::getAllFilesInDirectory(
        const std::string *dir,
        std::vector<std::string> *dir_vec,
        std::vector<std::string> *file_vec)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 M_pi; // r12
  unsigned __int64 v5; // r13
  _DWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r12
  volatile signed __int32 *v12; // rdi
  char v13; // dl
  signed __int32 v14; // eax
  char *v15; // rdi
  __int64 v17; // rax
  volatile signed __int32 *v18; // rdi
  char v19; // dl
  __int64 v20; // rax
  volatile signed __int32 *v21; // rdi
  char v22; // dl
  volatile signed __int32 *p_M_use_count; // rdi
  char v24; // dl
  signed __int32 v25; // eax
  char v26; // al
  char v27; // cl
  char v28; // cl
  char v29; // dl
  unsigned __int64 v30; // rdi
  char v31; // dl
  signed __int32 v32; // eax
  unsigned __int64 v33; // rdi
  char v34; // dl
  char v35; // al
  std::string::size_type *v36; // rdi
  std::string *v37; // rdx
  std::string::pointer M_p; // rdi
  std::string::size_type *v39; // rdi
  std::string *v40; // rdx
  char v41; // dl
  unsigned __int64 v42; // rdi
  char v43; // dl
  signed __int32 v44; // eax
  unsigned __int64 v45; // rdi
  char v46; // dl
  std::vector<std::string> *v47; // [rsp+0h] [rbp-148h]
  std::vector<std::string> *dir_veca; // [rsp+8h] [rbp-140h]
  std::filesystem::__cxx11::directory_iterator v49; // [rsp+10h] [rbp-138h]
  std::filesystem::__cxx11::directory_iterator __for_begin; // [rsp+20h] [rbp-128h] BYREF
  std::string v51; // [rsp+30h] [rbp-118h] BYREF
  char v52[248]; // [rsp+50h] [rbp-F8h] BYREF

  M_pi = (unsigned __int64)dir;
  dir_veca = dir_vec;
  v47 = file_vec;
  v5 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 16 6 ec:142 80 16 12 dir_iter:143 112 40 12 dir_path:138";
  *(_QWORD *)(v5 + 16) = common::tools::FileUtils::getAllFilesInDirectory;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(dir);
  }
  else
  {
    dir_vec = (std::vector<std::string> *)dir->_M_dataplus._M_p;
    dir = (const std::string *)((char *)dir + 8);
    if ( !*(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)(v5 + 112) = v5 + 128;
      std::string::_M_construct<char const*>(
        (std::string *const)(v5 + 112),
        (const char *)dir_vec,
        (const char *)dir_vec + *(_QWORD *)(M_pi + 8),
        v3);
      std::filesystem::__cxx11::path::_List::_List((std::filesystem::__cxx11::path::_List *)(v5 + 144));
      goto LABEL_9;
    }
  }
  __asan_report_load8(dir);
LABEL_9:
  std::filesystem::__cxx11::path::_M_split_cmpts((std::filesystem::__cxx11::path *)(v5 + 112));
  if ( (unsigned __int8)std::filesystem::status(
                          (std::filesystem *)(v5 + 112),
                          (const std::filesystem::__cxx11::path *)dir_vec) != 2 )
  {
LABEL_130:
    v9 = -1;
    goto LABEL_28;
  }
  *(_DWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = std::_V2::system_category((std::_V2 *)(v5 + 112));
  v8 = v5 + 112;
  std::filesystem::__cxx11::directory_iterator::directory_iterator(
    (std::filesystem::__cxx11::directory_iterator *)(v5 + 80),
    (const std::filesystem::__cxx11::path *)(v5 + 112),
    none_3,
    (std::error_code *)(v5 + 48));
  v9 = *(_DWORD *)(v5 + 48);
  if ( !v9 )
  {
    v49._M_dir._M_ptr = *(std::__shared_ptr<std::filesystem::__cxx11::_Dir,(__gnu_cxx::_Lock_policy)2>::element_type **)(v5 + 80);
    v17 = *(_QWORD *)(v5 + 88);
    v49._M_dir._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v17;
    if ( v17 )
    {
      v18 = (volatile signed __int32 *)(v17 + 8);
      if ( &_pthread_key_create )
      {
        v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v18 & 7) + 3) < v19 || !v19 )
        {
          _InterlockedAdd(v18, 1u);
          goto LABEL_40;
        }
        v17 = __asan_report_store4(v18, v8);
      }
      v21 = (volatile signed __int32 *)(v17 + 8);
      v27 = *(_BYTE *)(((unsigned __int64)(v17 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v17 + 8) & 7) + 3) >= v27 && v27 )
      {
        __asan_report_load4(v21);
        goto LABEL_58;
      }
      ++*(_DWORD *)(v17 + 8);
    }
LABEL_40:
    __for_begin = v49;
    v20 = *(_QWORD *)(v5 + 88);
    v49._M_dir._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v20;
    if ( !v20 )
      goto LABEL_45;
    v21 = (volatile signed __int32 *)(v20 + 8);
    if ( !&_pthread_key_create )
    {
LABEL_59:
      p_M_use_count = (volatile signed __int32 *)(v20 + 8);
      v28 = *(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v20 + 8) & 7) + 3) >= v28 && v28 )
      {
        __asan_report_load4(p_M_use_count);
        goto LABEL_63;
      }
      ++*(_DWORD *)(v20 + 8);
LABEL_45:
      M_pi = (unsigned __int64)v49._M_dir._M_refcount._M_pi;
      if ( !v49._M_dir._M_refcount._M_pi )
        goto LABEL_51;
      p_M_use_count = &v49._M_dir._M_refcount._M_pi->_M_use_count;
      if ( !&_pthread_key_create )
        goto LABEL_64;
      v24 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v24 || !v24 )
      {
        v25 = _InterlockedExchangeAdd(p_M_use_count, 0xFFFFFFFF);
        goto LABEL_50;
      }
LABEL_63:
      __asan_report_store4(p_M_use_count, v8);
LABEL_64:
      v29 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((M_pi + 8) & 7) + 3) >= v29 && v29 )
      {
        __asan_report_load4(M_pi + 8);
        goto LABEL_68;
      }
      v25 = *(_DWORD *)(M_pi + 8);
      *(_DWORD *)(M_pi + 8) = v25 - 1;
LABEL_50:
      if ( v25 != 1 )
        goto LABEL_51;
LABEL_68:
      if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
      {
        v30 = M_pi;
        __asan_report_load8(M_pi);
      }
      else
      {
        v30 = *(_QWORD *)M_pi + 16LL;
        if ( !*(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        {
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
          v30 = M_pi + 12;
          if ( !&_pthread_key_create )
            goto LABEL_81;
          v31 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
          if ( (char)((v30 & 7) + 3) < v31 || !v31 )
          {
            v32 = _InterlockedExchangeAdd((volatile signed __int32 *)v30, 0xFFFFFFFF);
            goto LABEL_74;
          }
LABEL_80:
          __asan_report_store4(v30, v8);
LABEL_81:
          v34 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
          if ( (char)(((M_pi + 12) & 7) + 3) >= v34 && v34 )
          {
            __asan_report_load4(M_pi + 12);
            goto LABEL_85;
          }
          v32 = *(_DWORD *)(M_pi + 12);
          *(_DWORD *)(M_pi + 12) = v32 - 1;
LABEL_74:
          if ( v32 != 1 )
            goto LABEL_51;
          if ( !*(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
          {
            v33 = *(_QWORD *)M_pi + 24LL;
            if ( !*(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
              while ( 1 )
              {
LABEL_51:
                if ( !__for_begin._M_dir._M_refcount._M_pi )
                  goto LABEL_22;
                M_pi = std::filesystem::__cxx11::directory_iterator::operator*(&__for_begin);
                v26 = std::filesystem::status((std::filesystem *)M_pi, (const std::filesystem::__cxx11::path *)v8);
LABEL_87:
                if ( v26 == 1 )
                {
                  v51._M_dataplus._M_p = v51._anon_0._M_local_buf;
                  v36 = (std::string::size_type *)M_pi;
                  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load8(M_pi);
                  }
                  else
                  {
                    v36 = (std::string::size_type *)(M_pi + 8);
                    if ( !*(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
                    {
                      std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                        &v51,
                        *(__gnu_cxx::__normal_iterator<char const*,std::string > *)M_pi,
                        (__gnu_cxx::__normal_iterator<char const*,std::string >)(*(_QWORD *)(M_pi + 8) + *(_QWORD *)M_pi),
                        (std::forward_iterator_tag)v47);
                      goto LABEL_94;
                    }
                  }
                  __asan_report_load8(v36);
LABEL_94:
                  v8 = (unsigned __int64)&v51;
                  std::vector<std::string>::emplace_back<std::string>(v47, &v51, v37);
                  M_p = v51._M_dataplus._M_p;
                  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v51._M_dataplus._M_p == &v51._anon_0 )
                    goto LABEL_97;
LABEL_95:
                  operator delete(M_p);
                  goto LABEL_97;
                }
                v35 = std::filesystem::status((std::filesystem *)M_pi, (const std::filesystem::__cxx11::path *)v8);
                if ( v35 == 2 )
                  break;
LABEL_97:
                std::filesystem::__cxx11::directory_iterator::operator++(&__for_begin);
              }
              v51._M_dataplus._M_p = v51._anon_0._M_local_buf;
              v39 = (std::string::size_type *)M_pi;
              if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(M_pi);
              }
              else
              {
                v39 = (std::string::size_type *)(M_pi + 8);
                if ( !*(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000) )
                {
                  std::string::_M_construct<__gnu_cxx::__normal_iterator<char const*,std::string>>(
                    &v51,
                    *(__gnu_cxx::__normal_iterator<char const*,std::string > *)M_pi,
                    (__gnu_cxx::__normal_iterator<char const*,std::string >)(*(_QWORD *)(M_pi + 8) + *(_QWORD *)M_pi),
                    (std::forward_iterator_tag)v47);
                  goto LABEL_103;
                }
              }
              __asan_report_load8(v39);
LABEL_103:
              v8 = (unsigned __int64)&v51;
              std::vector<std::string>::emplace_back<std::string>(dir_veca, &v51, v40);
              M_p = v51._M_dataplus._M_p;
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v51._M_dataplus._M_p != &v51._anon_0 )
                goto LABEL_95;
              goto LABEL_97;
            }
LABEL_86:
            v26 = __asan_report_load8(v33);
            goto LABEL_87;
          }
LABEL_85:
          v33 = M_pi;
          __asan_report_load8(M_pi);
          goto LABEL_86;
        }
      }
      __asan_report_load8(v30);
      goto LABEL_80;
    }
    v22 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v21 & 7) + 3) < v22 || !v22 )
    {
      _InterlockedAdd(v21, 1u);
      goto LABEL_45;
    }
LABEL_58:
    v20 = __asan_report_store4(v21, v8);
    goto LABEL_59;
  }
  v8 = *(_QWORD *)(v5 + 56);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
    v10 = *(_QWORD *)(v5 + 56);
    __asan_report_load8(v10);
    goto LABEL_15;
  }
  v10 = *(_QWORD *)v8 + 32LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8(v10);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(std::string *, unsigned __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(&v51, v8, v9);
LABEL_16:
  if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(M_pi);
  }
  else
  {
    v8 = *(_QWORD *)M_pi;
    printf(
      "getAllFilesInDirectory fail %s. directory_iterator error code: %d, %s\n",
      *(const char **)M_pi,
      *(unsigned int *)(v5 + 48),
      v51._M_dataplus._M_p);
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v51._M_dataplus._M_p != &v51._anon_0 )
    operator delete(v51._M_dataplus._M_p);
  v9 = *(_DWORD *)(v5 + 48);
LABEL_22:
  v11 = *(_QWORD *)(v5 + 88);
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)(v11 + 8);
    if ( &_pthread_key_create )
    {
      v13 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v12 & 7) + 3) < v13 || !v13 )
      {
        v14 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
        goto LABEL_27;
      }
      __asan_report_store4(v12, v8);
    }
    v41 = *(_BYTE *)(((v11 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v11 + 8) & 7) + 3) >= v41 && v41 )
    {
      __asan_report_load4(v11 + 8);
      goto LABEL_111;
    }
    v14 = *(_DWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 8) = v14 - 1;
LABEL_27:
    if ( v14 != 1 )
      goto LABEL_28;
LABEL_111:
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    {
      v42 = v11;
      __asan_report_load8(v11);
    }
    else
    {
      v42 = *(_QWORD *)v11 + 16LL;
      if ( !*(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        v42 = v11 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_124;
        v43 = *(_BYTE *)((v42 >> 3) + 0x7FFF8000);
        if ( (char)((v42 & 7) + 3) < v43 || !v43 )
        {
          v44 = _InterlockedExchangeAdd((volatile signed __int32 *)v42, 0xFFFFFFFF);
          goto LABEL_117;
        }
LABEL_123:
        __asan_report_store4(v42, v8);
LABEL_124:
        v46 = *(_BYTE *)(((v11 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v11 + 12) & 7) + 3) >= v46 && v46 )
        {
          __asan_report_load4(v11 + 12);
          goto LABEL_128;
        }
        v44 = *(_DWORD *)(v11 + 12);
        *(_DWORD *)(v11 + 12) = v44 - 1;
LABEL_117:
        if ( v44 != 1 )
          goto LABEL_28;
        if ( !*(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        {
          v45 = *(_QWORD *)v11 + 24LL;
          if ( !*(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 24LL))(v11);
            goto LABEL_28;
          }
          goto LABEL_129;
        }
LABEL_128:
        v45 = v11;
        __asan_report_load8(v11);
LABEL_129:
        __asan_report_load8(v45);
        goto LABEL_130;
      }
    }
    __asan_report_load8(v42);
    goto LABEL_123;
  }
LABEL_28:
  if ( *(_QWORD *)(v5 + 144) )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(v5 + 144);
  v15 = *(char **)(v5 + 112);
  if ( v15 != (char *)(v5 + 128) )
    operator delete(v15);
  if ( v52 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v9;
};

// Line 165: range 000000000C9F7692-000000000C9F7A1D
std::string *__fastcall common::tools::FileUtils::getFileNameByPath(std::string *retstr, const std::string *path)
{
  std::forward_iterator_tag v2; // cl
  std::string *v3; // rbx
  const std::string *M_p; // rax
  void *p_M_string_length; // rdi
  const char *v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  char v9; // al
  __int64 v10; // rdx
  const std::string *v11; // rax
  std::forward_iterator_tag v12; // cl
  std::forward_iterator_tag v13; // cl
  std::filesystem::__cxx11::path *v14; // rbp
  std::string::size_type *v15; // rdi
  const std::string *v17; // [rsp+8h] [rbp-90h]
  std::filesystem::__cxx11::path v18; // [rsp+20h] [rbp-78h] BYREF
  std::string v19; // [rsp+50h] [rbp-48h] BYREF
  std::filesystem::__cxx11::path::_List v20; // [rsp+70h] [rbp-28h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)path >> 3) + 0x7FFF8000) )
  {
    p_M_string_length = (void *)path;
    __asan_report_load8(path);
    goto LABEL_5;
  }
  v3 = retstr;
  M_p = (const std::string *)path->_M_dataplus._M_p;
  p_M_string_length = &path->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&path->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_5:
    __asan_report_load8(p_M_string_length);
    goto LABEL_6;
  }
  v18._M_pathname._M_dataplus._M_p = v18._M_pathname._anon_0._M_local_buf;
  v6 = (char *)M_p + path->_M_string_length;
  path = M_p;
  std::string::_M_construct<char const*>(&v18._M_pathname, (const char *)M_p, v6, v2);
  std::filesystem::__cxx11::path::_List::_List(&v18._M_cmpts);
LABEL_6:
  std::filesystem::__cxx11::path::_M_split_cmpts(&v18);
  if ( !v18._M_pathname._M_string_length )
    goto LABEL_23;
  if ( ((__int64)v18._M_cmpts._M_impl._M_t._M_t._M_head_impl & 3) == 3 )
  {
    v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v19,
      v18._M_pathname._M_dataplus._M_p,
      &v18._M_pathname._M_dataplus._M_p[v18._M_pathname._M_string_length],
      (std::forward_iterator_tag)v7);
    path = (const std::string *)&v18._M_cmpts;
    std::filesystem::__cxx11::path::_List::_List(&v20, &v18._M_cmpts);
    goto LABEL_24;
  }
  if ( ((__int64)v18._M_cmpts._M_impl._M_t._M_t._M_head_impl & 3) != 0 )
    goto LABEL_23;
  v8 = (unsigned __int64)&v18._M_pathname._M_dataplus._M_p[v18._M_pathname._M_string_length - 1];
  v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
  v10 = (LOBYTE(v18._M_pathname._M_dataplus._M_p) + LOBYTE(v18._M_pathname._M_string_length) - 1) & 7;
  if ( v9 <= (char)v10 && v9 )
  {
    __asan_report_load1(v8, path, v10, v7);
    goto LABEL_23;
  }
  if ( *(_BYTE *)v8 == 47 )
  {
LABEL_23:
    v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
    v19._M_string_length = 0LL;
    v19._anon_0._M_local_buf[0] = 0;
    std::filesystem::__cxx11::path::_List::_List(&v20);
    goto LABEL_24;
  }
  v11 = (const std::string *)std::filesystem::__cxx11::path::_List::end(&v18._M_cmpts);
  v17 = v11;
  if ( ((__int64)v18._M_cmpts._M_impl._M_t._M_t._M_head_impl & 3) == 0 )
    v17 = (const std::string *)((char *)v11 - 48);
  v14 = &v18;
  if ( *(_BYTE *)(((unsigned __int64)&v18._M_cmpts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v18._M_cmpts);
  }
  else if ( ((__int64)v18._M_cmpts._M_impl._M_t._M_t._M_head_impl & 3) != 0 )
  {
    goto LABEL_21;
  }
  v14 = (std::filesystem::__cxx11::path *)v17;
LABEL_21:
  if ( *(_BYTE *)(((unsigned __int64)&v14->_M_cmpts >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v14->_M_cmpts);
  }
  else if ( ((__int64)v14->_M_cmpts._M_impl._M_t._M_t._M_head_impl & 3) != 3 )
  {
    goto LABEL_23;
  }
  v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    v15 = (std::string::size_type *)v14;
    __asan_report_load8(v14);
    goto LABEL_33;
  }
  v15 = &v14->_M_pathname._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v14->_M_pathname._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(v15);
    goto LABEL_34;
  }
  std::string::_M_construct<char *>(
    &v19,
    v14->_M_pathname._M_dataplus._M_p,
    &v14->_M_pathname._M_dataplus._M_p[v14->_M_pathname._M_string_length],
    v12);
LABEL_34:
  path = (const std::string *)&v14->_M_cmpts;
  std::filesystem::__cxx11::path::_List::_List(&v20, &v14->_M_cmpts);
LABEL_24:
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(v3, path);
  }
  else
  {
    v3->_M_dataplus._M_p = v3->_anon_0._M_local_buf;
    std::string::_M_construct<char *>(v3, v19._M_dataplus._M_p, &v19._M_dataplus._M_p[v19._M_string_length], v13);
  }
  if ( v20._M_impl._M_t._M_t._M_head_impl )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v20);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v19._M_dataplus._M_p != &v19._anon_0 )
    operator delete(v19._M_dataplus._M_p);
  if ( v18._M_cmpts._M_impl._M_t._M_t._M_head_impl )
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()(&v18._M_cmpts);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v18._M_pathname._M_dataplus._M_p != &v18._M_pathname._anon_0 )
    operator delete(v18._M_pathname._M_dataplus._M_p);
  return v3;
};
