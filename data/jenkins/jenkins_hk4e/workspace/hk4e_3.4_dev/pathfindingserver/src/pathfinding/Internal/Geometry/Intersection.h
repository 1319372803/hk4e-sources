// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Intersection.h

// Line 116: range 000000000CE5612B-000000000CE5639C
Vector2f __cdecl ProjectPointLine<Vector2f>(const Vector2f *point, const Vector2f *lineStart, const Vector2f *lineEnd)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  const float *v8; // rax
  _DWORD *v9; // rdx
  Vector2f v10; // xmm0_8
  float __lo; // [rsp+24h] [rbp-CCh] BYREF
  Vector2f rhs; // [rsp+28h] [rbp-C8h] BYREF
  char v14[192]; // [rsp+30h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 10 length:120 48 4 7 dot:125 64 8 17 relativePoint:118 96 8 17 lineDirection:119 128 8 27"
                        " normalizedLineDirection:121";
  *(_QWORD *)(v4 + 16) = ProjectPointLine<Vector2f>;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(Vector2f *)(v4 + 64) = operator-(point, lineStart);
  *(Vector2f *)v3.m128i_i8 = operator-(lineEnd, lineStart);
  *(_QWORD *)(v4 + 96) = v3.m128i_i64[0];
  *(float *)v3.m128i_i32 = Magnitude((const Vector2f *)(v4 + 96));
  *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v3);
  *(_QWORD *)(v4 + 128) = *(_QWORD *)(v4 + 96);
  v7 = (__m128i)*(unsigned int *)(v4 + 32);
  if ( *(float *)v7.m128i_i32 > 0.0000099999997 )
  {
    v7 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 32));
    Vector2f::operator/=((Vector2f *const)(v4 + 128), *(const float *)v7.m128i_i32);
  }
  *(float *)v7.m128i_i32 = Dot((const Vector2f *)(v4 + 128), (const Vector2f *)(v4 + 64));
  *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v7);
  __lo = 0.0;
  v8 = std::clamp<float>((const float *)(v4 + 48), &__lo, (const float *)(v4 + 32));
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  *(_DWORD *)(v4 + 48) = *v9;
  rhs = operator*((const Vector2f *)(v4 + 128), *(float *)(v4 + 48));
  v10 = operator+(lineStart, &rhs);
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v10;
};

// Line 133: range 000000000CDC5103-000000000CDC5160
float __cdecl DistancePointLine<Vector2f>(const Vector2f *point, const Vector2f *lineStart, const Vector2f *lineEnd)
{
  Vector2f lhs; // [rsp+20h] [rbp-10h] BYREF
  Vector2f inV; // [rsp+28h] [rbp-8h] BYREF

  lhs = ProjectPointLine<Vector2f>(point, lineStart, lineEnd);
  inV = operator-(&lhs, point);
  return Magnitude(&inV);
};

// Line 139: range 000000000CB59C32-000000000CB59CED
bool __cdecl IsSkewedBasis(const Vector3f *basisVectors, float epsilon)
{
  __m128i v2; // xmm0
  __int64 v3; // rdx
  float maxDot; // [rsp+14h] [rbp-Ch]
  int axis; // [rsp+18h] [rbp-8h]

  v2 = 0LL;
  maxDot = 0.0;
  for ( axis = 0; axis <= 2; ++axis )
  {
    if ( axis > 1 )
      v3 = 0LL;
    else
      v3 = axis + 1;
    *(float *)v2.m128i_i32 = Dot(&basisVectors[axis], &basisVectors[v3]);
    v2 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v2));
    *(float *)v2.m128i_i32 = Abs(*(float *)v2.m128i_i32);
    *(float *)v2.m128i_i32 = FloatMax(*(float *)v2.m128i_i32, maxDot);
    maxDot = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  }
  return maxDot > epsilon;
};
