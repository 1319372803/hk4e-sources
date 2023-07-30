// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Sphere.cpp

// Line 5: range 000000000CBF2E6E-000000000CBF312B
void __cdecl Sphere::Set(Sphere *const this, const Vector3f *inVertices, uint32_t inHowmany)
{
  __m128i v3; // xmm0
  const float *v4; // rax
  unsigned int *v5; // rdx
  __m128i v6; // xmm0
  float v7; // ecx
  float __b; // [rsp+28h] [rbp-8h] BYREF
  uint32_t i; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Radius);
  }
  v3 = 0LL;
  this->m_Radius = 0.0;
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( (char)((unsigned __int64)&Vector3f::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3f::zero >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&Vector3f::zero >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)&Vector3f::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3f::zero.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(&Vector3f::zero, 12LL);
  }
  this->m_Center = Vector3f::zero;
  for ( i = 0; i < inHowmany; ++i )
  {
    *(float *)v3.m128i_i32 = SqrMagnitude(&inVertices[i]);
    LODWORD(__b) = _mm_cvtsi128_si32(v3);
    v4 = std::max<float>(&this->m_Radius, &__b);
    v5 = (unsigned int *)v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v3 = (__m128i)*v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->m_Radius);
    }
    LODWORD(this->m_Radius) = v3.m128i_i32[0];
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Radius);
  }
  v6 = _mm_cvtsi32_si128(LODWORD(this->m_Radius));
  *(float *)v6.m128i_i32 = std::sqrt(*(float *)v6.m128i_i32);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Radius);
  }
  this->m_Radius = v7;
};
