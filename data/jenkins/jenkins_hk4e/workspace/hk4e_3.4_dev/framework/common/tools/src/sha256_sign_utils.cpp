// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/sha256_sign_utils.cpp

// Line 22: range 000000000CB8A102-000000000CB8A3C1
uint32_t __fastcall common::tools::Sha256SignUtils::genSha256Sign(
        const std::string *key,
        const std::string *content,
        std::string *result)
{
  const std::string *v3; // r14
  unsigned __int64 v4; // r12
  char *v5; // rbx
  _DWORD *v6; // rbp
  void *p_M_string_length; // rdi
  std::string::size_type v8; // r15
  std::string::pointer v9; // r14
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r8d
  char v13; // al
  __int64 v14; // r8
  uint32_t v15; // eax
  std::string::size_type M_string_length; // [rsp+8h] [rbp-150h]
  std::string::pointer M_p; // [rsp+10h] [rbp-148h]
  char v19[312]; // [rsp+20h] [rbp-138h] BYREF

  v3 = key;
  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(256LL);
    if ( v11 )
      v4 = v11;
  }
  v5 = (char *)(v4 + 256);
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 6 len:25 64 40 9 digest:23 144 80 12 hexdigest:24";
  *(_QWORD *)(v4 + 16) = common::tools::Sha256SignUtils::genSha256Sign;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -218959360;
  v6[536862724] = 62194;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&content->_M_string_length);
    goto LABEL_12;
  }
  M_string_length = content->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    p_M_string_length = (void *)content;
    __asan_report_load8(content);
    goto LABEL_13;
  }
  M_p = content->_M_dataplus._M_p;
  p_M_string_length = &key->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v3->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    __asan_report_load8(p_M_string_length);
    goto LABEL_14;
  }
  v8 = v3->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v3);
    goto LABEL_15;
  }
  v9 = v3->_M_dataplus._M_p;
  v10 = EVP_sha256();
  if ( !HMAC(v10, (_DWORD)v9, v8, (_DWORD)M_p, M_string_length, (int)v4 + 64, v4 + 48) )
  {
LABEL_25:
    v15 = -1;
    goto LABEL_22;
  }
  if ( (unsigned int)(*(_DWORD *)(v4 + 48) + 1) <= 0x27 )
  {
    for ( LODWORD(v3) = 0; ; LODWORD(v3) = (_DWORD)v3 + 1 )
    {
      v12 = *(_DWORD *)(v4 + 48);
      if ( v12 <= (unsigned int)v3 )
        break;
      v13 = *(_BYTE *)(((unsigned __int64)&v5[(unsigned int)v3 - 192] >> 3) + 0x7FFF8000);
      if ( v13 <= (char)((v4 + (_BYTE)v3 + 64) & 7) && v13 )
      {
        __asan_report_load1(&v5[(unsigned int)v3 - 192]);
        break;
      }
LABEL_15:
      snprintf(
        &v5[2 * (_DWORD)v3 - 112],
        80LL - (unsigned int)(2 * (_DWORD)v3),
        "%.02x",
        (unsigned __int8)v5[(unsigned int)v3 - 192]);
    }
    v14 = 2 * v12;
    if ( !*(_BYTE *)(((unsigned __int64)&result->_M_string_length >> 3) + 0x7FFF8000) )
    {
      std::string::_M_replace(result, 0LL, result->_M_string_length, (const char *)(v4 + 144), v14);
      v15 = 0;
      goto LABEL_22;
    }
    __asan_report_load8(&result->_M_string_length);
    goto LABEL_25;
  }
  v15 = -2;
LABEL_22:
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v15;
};
