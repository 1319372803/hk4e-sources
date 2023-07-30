// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Capsule.cpp

// Line 7: range 000000000CBE7B46-000000000CBE7D88
// local variable allocation has failed, the output may be wrong!
bool __cdecl Capsule::IsInside(const Capsule *const this, const Vector3f *inPoint)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // xmm0_8
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0
  float v11; // xmm1_4
  double v12; // xmm0_8
  bool result; // al
  float v14; // [rsp+1Ch] [rbp-84h] BYREF
  float t; // [rsp+20h] [rbp-80h]
  float magSq; // [rsp+24h] [rbp-7Ch]
  Vector3f v17; // [rsp+28h] [rbp-78h] BYREF
  Vector3f rhs; // [rsp+34h] [rbp-6Ch] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 4 D:10";
  *(_QWORD *)(v3 + 16) = Capsule::IsInside;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(Vector3f *)((char *)&v2 - 8) = operator-(&this->m_End, &this->m_Start);
  *(_QWORD *)(v3 + 32) = v6;
  *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v3 + 32));
  magSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  t = 0.0;
  v7 = 0x3727C5ACu;
  if ( magSq >= 0.0000099999997 )
  {
    *(Vector3f *)((char *)&v7 - 8) = operator-(&this->m_Start, inPoint);
    v9 = v8;
    v10 = (__m128i)v7;
    *(_QWORD *)&rhs.x = v9;
    LODWORD(rhs.z) = v7;
    v14 = Dot((const Vector3f *)(v3 + 32), &rhs) / magSq;
    *(float *)v10.m128i_i32 = clamp01<float>(&v14);
    LODWORD(t) = _mm_cvtsi128_si32(v10);
  }
  v17 = Lerp(&this->m_Start, &this->m_End, t);
  *(Vector3f *)&v12 = operator-(inPoint, &v17);
  *(double *)&rhs.x = v12;
  rhs.z = v11;
  *(float *)&v12 = SqrMagnitude(&rhs);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(&this->m_Radius);
  }
  result = (float)(this->m_Radius * this->m_Radius) > *(float *)&v12;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
