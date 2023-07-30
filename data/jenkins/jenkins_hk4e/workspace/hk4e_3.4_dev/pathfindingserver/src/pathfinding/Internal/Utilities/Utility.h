// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/Utility.h

// Line 112: range 000000000CCB7F0F-000000000CCB8002
float __cdecl clamp01<float>(const float *t)
{
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(t);
  }
  if ( *t < 0.0 )
    return 0.0;
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(t);
  }
  if ( *t > 1.0 )
    return 1.0;
  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(t);
  }
  return *t;
};

// Line 167: range 000000000CDB9310-000000000CDB9328
Vector3f *__cdecl Stride<Vector3f>(Vector3f *p, size_t offset)
{
  return (Vector3f *)((char *)p + offset);
};

// Line 167: range 000000000CDB92F7-000000000CDB930F
const Vector3f *__cdecl Stride<Vector3f const>(const Vector3f *p, size_t offset)
{
  return (const Vector3f *)((char *)p + offset);
};

// Line 185: range 000000000CDBD380-000000000CDBD553
void __cdecl Swap<Vector3f>(Vector3f *a, Vector3f *b)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 8 temp:187";
  *(_QWORD *)(v2 + 16) = Swap<Vector3f>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  if ( ((unsigned __int8)a & 7) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&a->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(a, 12LL);
  }
  *(Vector3f *)(v2 + 32) = *a;
  *a = *b;
  if ( ((unsigned __int8)b & 7) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&b->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)b + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&b->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(b, 12LL);
  }
  *b = *(Vector3f *)(v2 + 32);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
