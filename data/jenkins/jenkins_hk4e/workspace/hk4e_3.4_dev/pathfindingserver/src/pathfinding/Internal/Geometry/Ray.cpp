// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Ray.cpp

// Line 5: range 000000000CBF2C08-000000000CBF2E6D
// local variable allocation has failed, the output may be wrong!
float __cdecl Ray::SqrDistToPoint(const Ray *const this, const Vector3f *P)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // xmm0_8
  __int64 v7; // rax
  __m128i v8; // xmm0 OVERLAPPED
  int v9; // xmm1_4
  float v10; // xmm1_4
  float result; // xmm0_4
  Vector3f inV; // [rsp+24h] [rbp-ACh] BYREF
  char v13[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 3 v:6 64 12 3 w:7 96 12 5 Pb:13";
  *(_QWORD *)(v3 + 16) = Ray::SqrDistToPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -202177536;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Direction >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Direction >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Direction.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Direction.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Direction, 12LL);
  }
  *(Vector3f *)(v3 + 32) = this->m_Direction;
  *(Vector3f *)((char *)&v2 - 8) = operator-(P, &this->m_Origin);
  v7 = v6;
  v8 = v2;
  *(_QWORD *)(v3 + 64) = v7;
  *(_DWORD *)(v3 + 72) = v2.m128i_i32[0];
  Dot((const Vector3f *)(v3 + 64), (const Vector3f *)(v3 + 32));
  *(float *)v8.m128i_i32 = Dot((const Vector3f *)(v3 + 32), (const Vector3f *)(v3 + 32));
  *(Vector3f *)v8.m128i_i8 = Ray::GetPoint(
                               this,
                               COERCE_FLOAT(_mm_cvtsi128_si32(v2)) / COERCE_FLOAT(_mm_cvtsi128_si32(v8)));
  *(_QWORD *)(v3 + 96) = v8.m128i_i64[0];
  *(_DWORD *)(v3 + 104) = v9;
  *(Vector3f *)v8.m128i_i8 = operator-(P, (const Vector3f *)(v3 + 96));
  *(_QWORD *)&inV.x = v8.m128i_i64[0];
  inV.z = v10;
  result = SqrMagnitude(&inV);
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
