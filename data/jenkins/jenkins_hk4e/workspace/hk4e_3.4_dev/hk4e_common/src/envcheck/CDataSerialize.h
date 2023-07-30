// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/CDataSerialize.h

// Line 53: range 000000000CF4AD48-000000000CF4AF34
__int64 __fastcall TransEnding<int>(int c2, int nEndingType)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  int *p; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 2 4 t:79 48 4 5 c2:53 64 8 6 w16:77";
  *(_QWORD *)(v2 + 16) = TransEnding<int>;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556926;
  v5[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = c2;
  if ( nEndingType == 1 )
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 48);
    v6 = ((unsigned int)*(_QWORD *)(v2 + 48) << 24) | ((unsigned int)*(_QWORD *)(v2 + 48) << 8) & 0xFF0000 | BYTE3(*(_QWORD *)(v2 + 48)) | (*(_QWORD *)(v2 + 48) >> 8) & 0xFF00LL;
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) )
    {
      v6 = (__int64)(v4 - 32);
      v5 = (_DWORD *)__asan_report_store8();
    }
    *((_QWORD *)v4 - 4) = v6;
    p = (int *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 - 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4 - 32);
    }
    *((_DWORD *)v4 - 12) = *p;
  }
  v7 = *((_DWORD *)v4 - 12);
  if ( v10 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
  return v7;
};

// Line 53: range 000000000CF4556E-000000000CF45775
__int64 __fastcall TransEnding<unsigned short>(unsigned __int16 c2, int nEndingType)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  unsigned __int64 v6; // rsi
  __int16 v7; // r8
  __int64 result; // rax
  unsigned __int16 *p; // [rsp+18h] [rbp-78h]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 96;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 2 4 t:79 48 2 5 c2:53 64 8 6 w16:77";
  *(_QWORD *)(v2 + 16) = TransEnding<unsigned short>;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234687998;
  v5[536862722] = -202116352;
  *(_WORD *)(v2 + 48) = c2;
  if ( nEndingType == 1 )
  {
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v4 - 32) = v4 - 32;
    v6 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 1) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load2(*(_QWORD *)(v4 - 32));
    v7 = HIBYTE(*(_WORD *)v6) | (*(_WORD *)v6 << 8);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) <= 1 )
    {
      v4 = __asan_report_store2(v4 - 64);
    }
    *(_WORD *)(v4 - 64) = v7;
    p = (unsigned __int16 *)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) != 0
      && (char)(((v4 - 64) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load2(v4 - 64);
    }
    *(_WORD *)(v4 - 48) = *p;
  }
  result = *(unsigned __int16 *)(v4 - 48);
  if ( v10 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
  return result;
};

// Line 53: range 000000000CF4AF35-000000000CF4B121
__int64 __fastcall TransEnding<unsigned int>(unsigned int c2, int nEndingType)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  unsigned int *p; // [rsp+28h] [rbp-78h]
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 96);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 2 4 t:79 48 4 5 c2:53 64 8 6 w16:77";
  *(_QWORD *)(v2 + 16) = TransEnding<unsigned int>;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556926;
  v5[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = c2;
  if ( nEndingType == 1 )
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 48);
    v6 = ((unsigned int)*(_QWORD *)(v2 + 48) << 24) | ((unsigned int)*(_QWORD *)(v2 + 48) << 8) & 0xFF0000 | BYTE3(*(_QWORD *)(v2 + 48)) | (*(_QWORD *)(v2 + 48) >> 8) & 0xFF00LL;
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) )
    {
      v6 = (__int64)(v4 - 32);
      v5 = (_DWORD *)__asan_report_store8();
    }
    *((_QWORD *)v4 - 4) = v6;
    p = (unsigned int *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 - 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v4 - 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4 - 32);
    }
    *((_DWORD *)v4 - 12) = *p;
  }
  v7 = *((_DWORD *)v4 - 12);
  if ( v10 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    v5[536862722] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862722] = -168430091;
  }
  return v7;
};

// Line 93: range 000000000CF4B122-000000000CF4B390
__int64 __fastcall TransEnding<long>(__int64 c2, int nEndingType)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rdi
  __int64 result; // rax
  UINT64 c; // [rsp+20h] [rbp-A0h]
  __int64 *p; // [rsp+28h] [rbp-98h]
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 128;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 2 4 t:79 64 8 4 t:63 96 8 5 c2:53";
  *(_QWORD *)(v2 + 16) = TransEnding<long>;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_QWORD *)(v2 + 96) = c2;
  if ( nEndingType == 1 )
  {
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 96);
    c = *(_QWORD *)(v2 + 96);
    v6 = (c << 56) | (c << 40) & 0xFF000000000000LL | (c << 24) & 0xFF0000000000LL | (c << 8) & 0xFF00000000LL | (c >> 8) & 0xFF000000 | (c >> 24) & 0xFF0000 | (c >> 40) & 0xFF00 | HIBYTE(c);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) )
    {
      v6 = v4 - 64;
      v4 = __asan_report_store8();
    }
    *(_QWORD *)(v4 - 64) = v6;
    p = (__int64 *)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)(v4 - 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v4 - 64);
    *(_QWORD *)(v4 - 32) = *p;
  }
  result = *(_QWORD *)(v4 - 32);
  if ( v10 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    *((_QWORD *)v5 + 268431361) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v5 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 000000000CF4A597-000000000CF4A710
CDataSerialize *__cdecl operator<<<unsigned int>(CDataSerialize *out, unsigned int *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int m_EndingType; // edi
  int v6; // edx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 c2:102";
  *(_QWORD *)(v2 + 16) = operator<<<unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    m_EndingType = (int)c;
    __asan_report_load4(c);
  }
  v6 = TransEnding<unsigned int>(*c, m_EndingType);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32);
  *(_DWORD *)(v2 + 32) = v6;
  CDataSerialize::PushData(out, (void *)(v2 + 32), 4uLL);
  result = out;
  if ( v9 == (char *)v2 )
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

// Line 110: range 000000000CF4A41D-000000000CF4A596
CDataSerialize *__cdecl operator<<<int>(CDataSerialize *out, int *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int m_EndingType; // edi
  int v6; // edx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 c2:102";
  *(_QWORD *)(v2 + 16) = operator<<<int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    m_EndingType = (int)c;
    __asan_report_load4(c);
  }
  v6 = TransEnding<int>(*c, m_EndingType);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32);
  *(_DWORD *)(v2 + 32) = v6;
  CDataSerialize::PushData(out, (void *)(v2 + 32), 4uLL);
  result = out;
  if ( v9 == (char *)v2 )
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

// Line 110: range 000000000CF4A711-000000000CF4A865
CDataSerialize *__cdecl operator<<<long>(CDataSerialize *out, __int64 *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int m_EndingType; // ecx
  __int64 v6; // rax
  CDataSerialize *result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 c2:102";
  *(_QWORD *)(v2 + 16) = operator<<<long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_load8(c);
  v6 = TransEnding<long>(*c, m_EndingType);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8();
  *(_QWORD *)(v2 + 32) = v6;
  CDataSerialize::PushData(out, (void *)(v2 + 32), 8uLL);
  result = out;
  if ( v8 == (char *)v2 )
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

// Line 113: range 000000000CF4A866-000000000CF4A9E7
CDataSerialize *__cdecl operator>><long>(CDataSerialize *out, __int64 *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int m_EndingType; // ecx
  __int64 v6; // rdx
  CDataSerialize *result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 c2:123";
  *(_QWORD *)(v2 + 16) = operator>><long>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v2 + 32) = 0LL;
  CDataSerialize::PopData(out, (void *)(v2 + 32), 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  v6 = TransEnding<long>(*(_QWORD *)(v2 + 32), m_EndingType);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *c = v6;
  result = out;
  if ( v8 == (char *)v2 )
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

// Line 113: range 000000000CF4A9E8-000000000CF4AB97
CDataSerialize *__cdecl operator>><unsigned int>(CDataSerialize *out, unsigned int *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int m_EndingType; // esi
  unsigned int v6; // ecx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 c2:123";
  *(_QWORD *)(v2 + 16) = operator>><unsigned int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32);
  *(_DWORD *)(v2 + 32) = 0;
  CDataSerialize::PopData(out, (void *)(v2 + 32), 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  v6 = TransEnding<unsigned int>(*(_DWORD *)(v2 + 32), m_EndingType);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(c);
  }
  *c = v6;
  result = out;
  if ( v9 == (char *)v2 )
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

// Line 113: range 000000000CF44CD5-000000000CF44E88
CDataSerialize *__cdecl operator>><unsigned short>(CDataSerialize *out, unsigned __int16 *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int m_EndingType; // esi
  unsigned __int16 v6; // cx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 2 6 c2:123";
  *(_QWORD *)(v2 + 16) = operator>><unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116350;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 32);
  *(_WORD *)(v2 + 32) = 0;
  CDataSerialize::PopData(out, (void *)(v2 + 32), 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_load2(v2 + 32);
  v6 = TransEnding<unsigned short>(*(_WORD *)(v2 + 32), m_EndingType);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 1) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(c);
  }
  *c = v6;
  result = out;
  if ( v9 == (char *)v2 )
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

// Line 128: range 000000000CF4AB98-000000000CF4AD47
CDataSerialize *__cdecl operator>><int>(CDataSerialize *out, int *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int m_EndingType; // esi
  int v6; // ecx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 c2:123";
  *(_QWORD *)(v2 + 16) = operator>><int>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32);
  *(_DWORD *)(v2 + 32) = 0;
  CDataSerialize::PopData(out, (void *)(v2 + 32), 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  v6 = TransEnding<int>(*(_DWORD *)(v2 + 32), m_EndingType);
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 3) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(c);
  }
  *c = v6;
  result = out;
  if ( v9 == (char *)v2 )
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

// Line 520: range 000000000CF4A29E-000000000CF4A41C
CDataSerialize *__cdecl operator<<<unsigned short>(CDataSerialize *out, unsigned __int16 *c)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int m_EndingType; // edi
  __int16 v6; // dx
  CDataSerialize *result; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 2 6 c2:102";
  *(_QWORD *)(v2 + 16) = operator<<<unsigned short>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116350;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    __asan_report_load8(out);
  m_EndingType = out->m_EndingType;
  if ( *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)c & 7) + 1) >= *(_BYTE *)(((unsigned __int64)c >> 3) + 0x7FFF8000) )
  {
    m_EndingType = (int)c;
    __asan_report_load2(c);
  }
  v6 = TransEnding<unsigned short>(*c, m_EndingType);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 1 )
    __asan_report_store2(v2 + 32);
  *(_WORD *)(v2 + 32) = v6;
  CDataSerialize::PushData(out, (void *)(v2 + 32), 2uLL);
  result = out;
  if ( v9 == (char *)v2 )
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
