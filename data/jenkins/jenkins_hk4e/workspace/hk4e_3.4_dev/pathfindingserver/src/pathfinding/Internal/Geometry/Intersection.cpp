// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/Intersection.cpp

// Line 16: range 000000000CBE7D89-000000000CBE7E63
bool __cdecl IntersectRayTriangle(const Ray *ray, const Vector3f *a, const Vector3f *b, const Vector3f *c)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool result; // al
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 4 t:17";
  *(_QWORD *)(v4 + 16) = IntersectRayTriangle;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  result = IntersectRayTriangle(ray, a, b, c, (float *)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 22: range 000000000CBE7E64-000000000CBE8293
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectRayTriangle(const Ray *ray, const Vector3f *a, const Vector3f *b, const Vector3f *c, float *outT)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  const Vector3f *Direction; // rax
  __int64 v12; // xmm0_8
  bool result; // al
  const Vector3f *Origin; // rdx
  const Vector3f *v15; // rax
  float det; // [rsp+3Ch] [rbp-F4h]
  float inv_det; // [rsp+40h] [rbp-F0h]
  float u; // [rsp+44h] [rbp-ECh]
  float v; // [rsp+48h] [rbp-E8h]
  float t; // [rsp+4Ch] [rbp-E4h]
  char v24[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 12 8 edge1:26 64 12 8 edge2:26 96 12 7 tvec:26 128 12 7 pvec:26 160 12 7 qvec:26";
  *(_QWORD *)(v6 + 16) = IntersectRayTriangle;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -219020288;
  v8[536862725] = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v6 + 32));
  Vector3f::Vector3f((Vector3f *const)(v6 + 64));
  Vector3f::Vector3f((Vector3f *const)(v6 + 96));
  Vector3f::Vector3f((Vector3f *const)(v6 + 128));
  Vector3f::Vector3f((Vector3f *const)(v6 + 160));
  *(Vector3f *)((char *)&v5 - 8) = operator-(b, a);
  *(_QWORD *)(v6 + 32) = v9;
  *(_DWORD *)(v6 + 40) = v5.m128i_i32[0];
  *(Vector3f *)((char *)&v5 - 8) = operator-(c, a);
  *(_QWORD *)(v6 + 64) = v10;
  *(_DWORD *)(v6 + 72) = v5.m128i_i32[0];
  Direction = Ray::GetDirection(ray);
  *(Vector3f *)((char *)&v5 - 8) = Cross(Direction, (const Vector3f *)(v6 + 64));
  *(_QWORD *)(v6 + 128) = v12;
  *(_DWORD *)(v6 + 136) = v5.m128i_i32[0];
  Dot((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 128));
  det = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  if ( Abs(det) >= 0.000001 )
  {
    inv_det = 1.0 / det;
    Origin = Ray::GetOrigin(ray);
    *(Vector3f *)(v6 + 96) = operator-(Origin, a);
    u = Dot((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 128)) * (float)(1.0 / det);
    if ( u >= 0.0 && u <= 1.0 )
    {
      *(Vector3f *)(v6 + 160) = Cross((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 32));
      v15 = Ray::GetDirection(ray);
      v = Dot(v15, (const Vector3f *)(v6 + 160)) * inv_det;
      if ( v >= 0.0 && (float)(u + v) <= 1.0 )
      {
        t = Dot((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 160)) * inv_det;
        if ( t >= 0.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)outT >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)outT & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outT >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(outT);
          }
          *outT = t;
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v24 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 69: range 000000000CBE8294-000000000CBE836E
bool __cdecl IntersectRayTriangleCulling(const Ray *ray, const Vector3f *a, const Vector3f *b, const Vector3f *c)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  bool result; // al
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 4 t:70";
  *(_QWORD *)(v4 + 16) = IntersectRayTriangleCulling;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  result = IntersectRayTriangleCulling(ray, a, b, c, (float *)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 75: range 000000000CBE836F-000000000CBE878E
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectRayTriangleCulling(
        const Ray *ray,
        const Vector3f *a,
        const Vector3f *b,
        const Vector3f *c,
        float *outT)
{
  __m128i v5; // xmm1
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  const Vector3f *Direction; // rax
  __int64 v12; // xmm0_8
  bool result; // al
  const Vector3f *Origin; // rdx
  const Vector3f *v15; // rax
  float det; // [rsp+3Ch] [rbp-F4h]
  float inv_det; // [rsp+40h] [rbp-F0h]
  float u; // [rsp+44h] [rbp-ECh]
  float v; // [rsp+48h] [rbp-E8h]
  float t; // [rsp+4Ch] [rbp-E4h]
  char v24[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 12 8 edge1:79 64 12 8 edge2:79 96 12 7 tvec:79 128 12 7 pvec:79 160 12 7 qvec:79";
  *(_QWORD *)(v6 + 16) = IntersectRayTriangleCulling;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219020288;
  v8[536862723] = -219020288;
  v8[536862724] = -219020288;
  v8[536862725] = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v6 + 32));
  Vector3f::Vector3f((Vector3f *const)(v6 + 64));
  Vector3f::Vector3f((Vector3f *const)(v6 + 96));
  Vector3f::Vector3f((Vector3f *const)(v6 + 128));
  Vector3f::Vector3f((Vector3f *const)(v6 + 160));
  *(Vector3f *)((char *)&v5 - 8) = operator-(b, a);
  *(_QWORD *)(v6 + 32) = v9;
  *(_DWORD *)(v6 + 40) = v5.m128i_i32[0];
  *(Vector3f *)((char *)&v5 - 8) = operator-(c, a);
  *(_QWORD *)(v6 + 64) = v10;
  *(_DWORD *)(v6 + 72) = v5.m128i_i32[0];
  Direction = Ray::GetDirection(ray);
  *(Vector3f *)((char *)&v5 - 8) = Cross(Direction, (const Vector3f *)(v6 + 64));
  *(_QWORD *)(v6 + 128) = v12;
  *(_DWORD *)(v6 + 136) = v5.m128i_i32[0];
  Dot((const Vector3f *)(v6 + 32), (const Vector3f *)(v6 + 128));
  det = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  if ( det >= 0.000001 )
  {
    inv_det = 1.0 / det;
    Origin = Ray::GetOrigin(ray);
    *(Vector3f *)(v6 + 96) = operator-(Origin, a);
    u = Dot((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 128)) * (float)(1.0 / det);
    if ( u >= 0.0 && u <= 1.0 )
    {
      *(Vector3f *)(v6 + 160) = Cross((const Vector3f *)(v6 + 96), (const Vector3f *)(v6 + 32));
      v15 = Ray::GetDirection(ray);
      v = Dot(v15, (const Vector3f *)(v6 + 160)) * inv_det;
      if ( v >= 0.0 && (float)(u + v) <= 1.0 )
      {
        t = Dot((const Vector3f *)(v6 + 64), (const Vector3f *)(v6 + 160)) * inv_det;
        if ( t >= 0.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)outT >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)outT & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outT >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(outT);
          }
          *outT = t;
          result = 1;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v24 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 122: range 000000000CBE878F-000000000CBE8B9B
bool __cdecl IntersectPoly(const Ray *ray, const Plane *plane, const Vector3f *verts, unsigned int vertNum, float *t)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  float v9; // r14d
  const Vector3f *Direction; // rax
  const Vector3f *Origin; // rax
  int v12; // xmm0_4
  unsigned int i; // [rsp+34h] [rbp-ECh]
  Vector3f lhs; // [rsp+38h] [rbp-E8h] BYREF
  Vector3f rhs; // [rsp+44h] [rbp-DCh] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 6 _t:128 64 12 13 intersect:134 96 12 10 cross0:135 128 12 10 _cross:138";
  *(_QWORD *)(v5 + 16) = IntersectPoly;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219020288;
  v7[536862723] = -219020288;
  v7[536862724] = -202177536;
  if ( verts && vertNum > 2 )
  {
    *(_DWORD *)(v5 + 48) = 0;
    if ( !IntersectRayPlane(ray, plane, (float *)(v5 + 48)) )
    {
      result = 0;
    }
    else
    {
      v9 = *(float *)(v5 + 48);
      Direction = Ray::GetDirection(ray);
      rhs = operator*(Direction, v9);
      Origin = Ray::GetOrigin(ray);
      *(Vector3f *)(v5 + 64) = operator+(Origin, &rhs);
      rhs = operator-((const Vector3f *)(v5 + 64), verts);
      lhs = operator-(verts + 1, verts);
      *(Vector3f *)(v5 + 96) = Cross(&lhs, &rhs);
      for ( i = 1; i < vertNum; ++i )
      {
        rhs = operator-((const Vector3f *)(v5 + 64), &verts[i]);
        lhs = operator-(&verts[(i + 1) % vertNum], &verts[i]);
        *(Vector3f *)(v5 + 128) = Cross(&lhs, &rhs);
        if ( Dot((const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 128)) < 0.0 )
        {
          result = 0;
          goto LABEL_17;
        }
      }
      v12 = *(_DWORD *)(v5 + 48);
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)t & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(t);
      }
      *(_DWORD *)t = v12;
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
LABEL_17:
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 150: range 000000000CBE8B9C-000000000CBE8D97
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectRaySphere(const Ray *ray, const Sphere *inSphere)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const Vector3f *Origin; // r14
  const Vector3f *Center; // rax
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0
  const Vector3f *Direction; // rax
  const float *Radius; // rax
  bool result; // al
  float lSqr; // [rsp+14h] [rbp-9Ch]
  float rSqr; // [rsp+18h] [rbp-98h]
  char v16[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 5 d:152 64 12 7 dif:151";
  *(_QWORD *)(v3 + 16) = IntersectRaySphere;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  Origin = Ray::GetOrigin(ray);
  Center = Sphere::GetCenter(inSphere);
  *(Vector3f *)((char *)&v2 - 8) = operator-(Center, Origin);
  v9 = v8;
  v10 = v2;
  *(_QWORD *)(v3 + 64) = v9;
  *(_DWORD *)(v3 + 72) = v2.m128i_i32[0];
  Direction = Ray::GetDirection(ray);
  *(float *)v10.m128i_i32 = Dot((const Vector3f *)(v3 + 64), Direction);
  *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v10);
  *(float *)v10.m128i_i32 = Dot((const Vector3f *)(v3 + 64), (const Vector3f *)(v3 + 64));
  lSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  Radius = Sphere::GetRadius(inSphere);
  *(float *)v10.m128i_i32 = Sqr<float>(Radius);
  rSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  result = (*(float *)(v3 + 48) >= 0.0 || lSqr <= rSqr) && (float)(lSqr - Sqr<float>((const float *)(v3 + 48))) <= rSqr;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 168: range 000000000CBE8D98-000000000CBE90C0
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectRaySphere(const Ray *ray, const Sphere *inSphere, float *t0, float *t1)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  const Vector3f *Origin; // r14
  const Vector3f *Center; // rax
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __m128i v12; // xmm0
  const Vector3f *Direction; // rax
  const float *Radius; // rax
  bool result; // al
  __m128i v16; // xmm0
  float v17; // xmm0_4
  float v18; // xmm0_4
  const Ray *raya; // [rsp+18h] [rbp-A8h]
  float lSqr; // [rsp+20h] [rbp-A0h]
  float rSqr; // [rsp+24h] [rbp-9Ch]
  float mSqr; // [rsp+28h] [rbp-98h]
  float q; // [rsp+2Ch] [rbp-94h]
  char v26[144]; // [rsp+30h] [rbp-90h] BYREF

  raya = ray;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    ray = (const Ray *)96;
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 5 d:173 64 12 7 dif:172";
  *(_QWORD *)(v5 + 16) = IntersectRaySphere;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202177536;
  if ( !t0 )
  {
    __asan_handle_no_return(ray);
    __assert_fail(
      "t0 != __null",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0xA9u,
      "bool IntersectRaySphere(const Ray&, const Sphere&, float*, float*)");
  }
  if ( !t1 )
  {
    __asan_handle_no_return(ray);
    __assert_fail(
      "t1 != __null",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0xAAu,
      "bool IntersectRaySphere(const Ray&, const Sphere&, float*, float*)");
  }
  Origin = Ray::GetOrigin(raya);
  Center = Sphere::GetCenter(inSphere);
  *(Vector3f *)((char *)&v4 - 8) = operator-(Center, Origin);
  v11 = v10;
  v12 = v4;
  *(_QWORD *)(v5 + 64) = v11;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  Direction = Ray::GetDirection(raya);
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 64), Direction);
  *(_DWORD *)(v5 + 48) = _mm_cvtsi128_si32(v12);
  *(float *)v12.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 64));
  lSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  Radius = Sphere::GetRadius(inSphere);
  *(float *)v12.m128i_i32 = Sqr<float>(Radius);
  rSqr = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  if ( *(float *)(v5 + 48) >= 0.0 || lSqr <= rSqr )
  {
    mSqr = lSqr - Sqr<float>((const float *)(v5 + 48));
    if ( mSqr <= rSqr )
    {
      v16 = (__m128i)LODWORD(rSqr);
      *(float *)v16.m128i_i32 = std::sqrt(rSqr - mSqr);
      q = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
      v17 = *(float *)(v5 + 48) - q;
      if ( *(_BYTE *)(((unsigned __int64)t0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)t0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(t0);
      }
      *t0 = v17;
      v18 = *(float *)(v5 + 48) + q;
      if ( *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)t1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)t1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(t1);
      }
      *t1 = v18;
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 194: range 000000000CBE90C1-000000000CBE91BF
bool __cdecl IntersectRayAABB(const Ray *ray, const AABB *inAABB)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 t0:195 64 4 6 t1:195";
  *(_QWORD *)(v2 + 16) = IntersectRayAABB;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  result = IntersectRayAABB(ray, inAABB, (float *)(v2 + 48), (float *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 200: range 000000000CBE91C0-000000000CBE928F
bool __cdecl IntersectRayAABB(const Ray *ray, const AABB *inAABB, float *outT0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 t1:201";
  *(_QWORD *)(v3 + 16) = IntersectRayAABB;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  result = IntersectRayAABB(ray, inAABB, outT0, (float *)(v3 + 32));
  if ( v8 == (char *)v3 )
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

// Line 206: range 000000000CBE9290-000000000CBE9854
bool __cdecl IntersectRayAABB(const Ray *ray, const AABB *inAABB, float *outT0, float *outT1)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  const Vector3f *Origin; // r14
  const Vector3f *Center; // rax
  unsigned __int64 Extent; // rax
  const Vector3f *Direction; // rax
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  bool result; // al
  float v22; // [rsp+Ch] [rbp-D4h]
  float v23; // [rsp+Ch] [rbp-D4h]
  float tmin; // [rsp+34h] [rbp-ACh]
  float tmax; // [rsp+38h] [rbp-A8h]
  float f; // [rsp+3Ch] [rbp-A4h]
  float t0; // [rsp+40h] [rbp-A0h]
  float t1; // [rsp+44h] [rbp-9Ch]
  __int64 i; // [rsp+48h] [rbp-98h]
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 5 p:214 64 12 10 extent:215";
  *(_QWORD *)(v4 + 16) = IntersectRayAABB;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202177536;
  tmin = -INFINITY;
  tmax = INFINITY;
  Origin = Ray::GetOrigin(ray);
  Center = AABB::GetCenter(inAABB);
  *(Vector3f *)(v4 + 32) = operator-(Center, Origin);
  Extent = (unsigned __int64)AABB::GetExtent(inAABB);
  if ( (char)(Extent & 7) >= *(_BYTE *)((Extent >> 3) + 0x7FFF8000) && *(_BYTE *)((Extent >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Extent + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Extent + 11) & 7) >= *(_BYTE *)(((Extent + 11) >> 3) + 0x7FFF8000) )
  {
    Extent = __asan_report_load_n(Extent, 12LL);
  }
  *(_QWORD *)(v4 + 64) = *(_QWORD *)Extent;
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(Extent + 8);
  for ( i = 0LL; i <= 2; ++i )
  {
    Direction = Ray::GetDirection(ray);
    v11 = (float *)Vector3f::operator[](Direction, i);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    f = 1.0 / *v12;
    v13 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v22 = *v14;
    v15 = Vector3f::operator[]((Vector3f *const)(v4 + 64), i);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    t0 = (float)(*v16 + v22) * f;
    v17 = Vector3f::operator[]((Vector3f *const)(v4 + 32), i);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v23 = *v18;
    v19 = Vector3f::operator[]((Vector3f *const)(v4 + 64), i);
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    t1 = (float)(v23 - *v20) * f;
    if ( t1 <= t0 )
    {
      if ( t1 > tmin )
        tmin = (float)(v23 - *v20) * f;
      if ( tmax > t0 )
        tmax = t0;
      if ( tmin > tmax )
      {
        result = 0;
        goto LABEL_41;
      }
      if ( tmax < 0.0 )
      {
        result = 0;
        goto LABEL_41;
      }
    }
    else
    {
      if ( t0 > tmin )
        tmin = t0;
      if ( tmax > t1 )
        tmax = (float)(v23 - *v20) * f;
      if ( tmin > tmax )
      {
        result = 0;
        goto LABEL_41;
      }
      if ( tmax < 0.0 )
      {
        result = 0;
        goto LABEL_41;
      }
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)outT0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)outT0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outT0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(outT0);
  }
  *outT0 = tmin;
  if ( *(_BYTE *)(((unsigned __int64)outT1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)outT1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outT1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(outT1);
  }
  *outT1 = tmax;
  result = 1;
LABEL_41:
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 264: range 000000000CBE9855-000000000CBE997C
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectSphereSphere(const Sphere *s0, const Sphere *s1)
{
  __m128i v2; // xmm1
  const Vector3f *Center; // rbx
  const Vector3f *v4; // rax
  __int64 v5; // xmm0_8
  float *Radius; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  float v10; // xmm0_4
  float v12; // [rsp+Ch] [rbp-44h]
  float t; // [rsp+2Ch] [rbp-24h] BYREF
  float sqrDist; // [rsp+30h] [rbp-20h]
  Vector3f inV; // [rsp+34h] [rbp-1Ch] BYREF

  Center = Sphere::GetCenter(s1);
  v4 = Sphere::GetCenter(s0);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v4, Center);
  *(_QWORD *)&inV.x = v5;
  LODWORD(inV.z) = v2.m128i_i32[0];
  SqrMagnitude(&inV);
  sqrDist = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Radius = (float *)Sphere::GetRadius(s0);
  v7 = Radius;
  if ( *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)Radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(Radius);
  }
  v12 = *v7;
  v8 = (float *)Sphere::GetRadius(s1);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  t = *v9 + v12;
  v10 = Sqr<float>(&t);
  return v10 > sqrDist;
};

// Line 273: range 000000000CBE997D-000000000CBE9AA4
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectSphereSphereInclusive(const Sphere *s0, const Sphere *s1)
{
  __m128i v2; // xmm1
  const Vector3f *Center; // rbx
  const Vector3f *v4; // rax
  __int64 v5; // xmm0_8
  float *Radius; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  float v10; // xmm0_4
  float v12; // [rsp+Ch] [rbp-44h]
  float t; // [rsp+2Ch] [rbp-24h] BYREF
  float sqrDist; // [rsp+30h] [rbp-20h]
  Vector3f inV; // [rsp+34h] [rbp-1Ch] BYREF

  Center = Sphere::GetCenter(s1);
  v4 = Sphere::GetCenter(s0);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v4, Center);
  *(_QWORD *)&inV.x = v5;
  LODWORD(inV.z) = v2.m128i_i32[0];
  SqrMagnitude(&inV);
  sqrDist = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Radius = (float *)Sphere::GetRadius(s0);
  v7 = Radius;
  if ( *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)Radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(Radius);
  }
  v12 = *v7;
  v8 = (float *)Sphere::GetRadius(s1);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  t = *v9 + v12;
  v10 = Sqr<float>(&t);
  return v10 >= sqrDist;
};

// Line 282: range 000000000CBE9AA5-000000000CBE9D87
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectAABBAABB(const AABB *b0, const AABB *b1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const Vector3f *Center; // r14
  const Vector3f *v6; // rax
  int v7; // xmm1_4
  double v8; // xmm0_8
  float x; // xmm2_4
  double v10; // xmm0_8
  float y; // xmm2_4
  double v12; // xmm0_8
  float z; // xmm2_4
  bool result; // al
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 dif:286";
  *(_QWORD *)(v2 + 16) = IntersectAABBAABB;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Center = AABB::GetCenter(b0);
  v6 = AABB::GetCenter(b1);
  *(Vector3f *)&v8 = operator-(v6, Center);
  *(double *)(v2 + 32) = v8;
  *(_DWORD *)(v2 + 40) = v7;
  *(float *)&v8 = Abs(*(float *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&b0->m_Extent);
  }
  x = b0->m_Extent.x;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&b1->m_Extent);
  }
  if ( (float)(b1->m_Extent.x + x) <= *(float *)&v8 )
    goto LABEL_20;
  *(float *)&v10 = Abs(*(float *)(v2 + 36));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&b0->m_Extent.y);
  }
  y = b0->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&b1->m_Extent.y);
  }
  if ( (float)(b1->m_Extent.y + y) <= *(float *)&v10 )
    goto LABEL_20;
  *(float *)&v12 = Abs(*(float *)(v2 + 40));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(&b0->m_Extent.z);
  }
  z = b0->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(&b1->m_Extent.z);
  }
  if ( (float)(b1->m_Extent.z + z) <= *(float *)&v12 )
LABEL_20:
    result = 0;
  else
    result = 1;
  if ( v15 == (char *)v2 )
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

// Line 294: range 000000000CBE9D88-000000000CBEA11B
bool __cdecl IntersectAABBAABB(const MinMaxAABB *a, const MinMaxAABB *b)
{
  double v2; // xmm0_8
  float x; // xmm1_4
  double v5; // xmm0_8
  float y; // xmm1_4
  double v7; // xmm0_8
  float z; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)a & 7) + 3) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(a);
  }
  *(float *)&v2 = a->m_Min.x;
  if ( *(_BYTE *)(((unsigned __int64)&b->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->m_Max >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&b->m_Max);
  }
  if ( *(float *)&v2 > b->m_Max.x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->m_Max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->m_Max);
  }
  x = a->m_Max.x;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)b & 7) + 3) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(b);
  }
  if ( b->m_Min.x > x )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->m_Min.y);
  }
  *(float *)&v5 = a->m_Min.y;
  if ( *(_BYTE *)(((unsigned __int64)&b->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->m_Max.y >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&b->m_Max.y);
  }
  if ( *(float *)&v5 > b->m_Max.y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->m_Max.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->m_Max.y);
  }
  y = a->m_Max.y;
  if ( *(_BYTE *)(((unsigned __int64)&b->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->m_Min.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->m_Min.y);
  }
  if ( b->m_Min.y > y )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->m_Min.z);
  }
  *(float *)&v7 = a->m_Min.z;
  if ( *(_BYTE *)(((unsigned __int64)&b->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->m_Max.z >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(&b->m_Max.z);
  }
  if ( *(float *)&v7 > b->m_Max.z )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a->m_Max.z);
  }
  z = a->m_Max.z;
  if ( *(_BYTE *)(((unsigned __int64)&b->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&b->m_Min.z);
  }
  return b->m_Min.z <= z;
};

// Line 312: range 000000000CBEA11C-000000000CBEA4FB
bool __cdecl IntersectionAABBAABB(const MinMaxAABB *a, const MinMaxAABB *b, MinMaxAABB *outBoxIntersect)
{
  float *v4; // rax
  float *v5; // rdx
  float v6; // xmm0_4
  float *v7; // rax
  float *v8; // rdx
  float v9; // xmm0_4
  float *v10; // rax
  float *v11; // rdx
  float v12; // xmm0_4
  float *v13; // rax
  float *v14; // rdx
  float v15; // xmm0_4
  float *v16; // rax
  float *v17; // rdx
  float v18; // xmm0_4
  float *v19; // rax
  float *v20; // rdx
  float v21; // xmm0_4

  if ( !IntersectAABBAABB(a, b) )
    return 0;
  v4 = (float *)std::max<float>(&a->m_Min.x, &b->m_Min.x);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v6 = *v5;
  if ( *(_BYTE *)(((unsigned __int64)outBoxIntersect >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)outBoxIntersect & 7) + 3) >= *(_BYTE *)(((unsigned __int64)outBoxIntersect >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(outBoxIntersect);
  }
  outBoxIntersect->m_Min.x = v6;
  v7 = (float *)std::min<float>(&a->m_Max.x, &b->m_Max.x);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)outBoxIntersect + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&outBoxIntersect->m_Max);
  }
  outBoxIntersect->m_Max.x = v9;
  v10 = (float *)std::max<float>(&a->m_Min.y, &b->m_Min.y);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v12 = *v11;
  if ( *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Min.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)outBoxIntersect + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Min.y >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store4(&outBoxIntersect->m_Min.y);
  }
  outBoxIntersect->m_Min.y = v12;
  v13 = (float *)std::min<float>(&a->m_Max.y, &b->m_Max.y);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  v15 = *v14;
  if ( *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)outBoxIntersect + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max.y >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&outBoxIntersect->m_Max.y);
  }
  outBoxIntersect->m_Max.y = v15;
  v16 = (float *)std::max<float>(&a->m_Min.z, &b->m_Min.z);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  v18 = *v17;
  if ( *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)outBoxIntersect + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Min.z >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store4(&outBoxIntersect->m_Min.z);
  }
  outBoxIntersect->m_Min.z = v18;
  v19 = (float *)std::min<float>(&a->m_Max.z, &b->m_Max.z);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  v21 = *v20;
  if ( *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)outBoxIntersect + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&outBoxIntersect->m_Max.z >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&outBoxIntersect->m_Max.z);
  }
  outBoxIntersect->m_Max.z = v21;
  return 1;
};

// Line 327: range 000000000CBEA4FC-000000000CBEA7DE
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectAABBAABBInclusive(const AABB *b0, const AABB *b1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const Vector3f *Center; // r14
  const Vector3f *v6; // rax
  int v7; // xmm1_4
  double v8; // xmm0_8
  float x; // xmm2_4
  double v10; // xmm0_8
  float y; // xmm2_4
  double v12; // xmm0_8
  float z; // xmm2_4
  bool result; // al
  char v15[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 dif:331";
  *(_QWORD *)(v2 + 16) = IntersectAABBAABBInclusive;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Center = AABB::GetCenter(b0);
  v6 = AABB::GetCenter(b1);
  *(Vector3f *)&v8 = operator-(v6, Center);
  *(double *)(v2 + 32) = v8;
  *(_DWORD *)(v2 + 40) = v7;
  *(float *)&v8 = Abs(*(float *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&b0->m_Extent);
  }
  x = b0->m_Extent.x;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&b1->m_Extent);
  }
  if ( (float)(b1->m_Extent.x + x) < *(float *)&v8 )
    goto LABEL_20;
  *(float *)&v10 = Abs(*(float *)(v2 + 36));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&b0->m_Extent.y);
  }
  y = b0->m_Extent.y;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent.y >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(&b1->m_Extent.y);
  }
  if ( (float)(b1->m_Extent.y + y) < *(float *)&v10 )
    goto LABEL_20;
  *(float *)&v12 = Abs(*(float *)(v2 + 40));
  if ( *(_BYTE *)(((unsigned __int64)&b0->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b0->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(&b0->m_Extent.z);
  }
  z = b0->m_Extent.z;
  if ( *(_BYTE *)(((unsigned __int64)&b1->m_Extent.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)b1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&b1->m_Extent.z >> 3) + 0x7FFF8000) )
  {
    v12 = __asan_report_load4(&b1->m_Extent.z);
  }
  if ( (float)(b1->m_Extent.z + z) < *(float *)&v12 )
LABEL_20:
    result = 0;
  else
    result = 1;
  if ( v15 == (char *)v2 )
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

// Line 339: range 000000000CBEA7DF-000000000CBEA82E
bool __cdecl IntersectAABBSphere(const AABB *aabb, const Sphere *s)
{
  const Vector3f *Center; // rdx
  const float *Radius; // rax
  float v5; // [rsp+Ch] [rbp-14h]

  Center = Sphere::GetCenter(s);
  v5 = CalculateSqrDistance(Center, aabb);
  Radius = Sphere::GetRadius(s);
  return Sqr<float>(Radius) > v5;
};

// Line 346: range 000000000CBEA82F-000000000CBEA87E
bool __cdecl IntersectAABBSphereInclusive(const AABB *aabb, const Sphere *s)
{
  const Vector3f *Center; // rdx
  const float *Radius; // rax
  float v5; // [rsp+Ch] [rbp-14h]

  Center = Sphere::GetCenter(s);
  v5 = CalculateSqrDistance(Center, aabb);
  Radius = Sphere::GetRadius(s);
  return Sqr<float>(Radius) >= v5;
};

// Line 353: range 000000000CBEA87F-000000000CBEB4C6
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectTransformedAABBSphere(
        const AABB *aabb,
        const Matrix4x4f *transform,
        TransformType type,
        const Sphere *s)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  char *v7; // rbx
  _DWORD *v8; // r12
  float v9; // xmm0_4
  const Vector3f *Center; // rdx
  float *Radius; // rax
  float *v12; // rdx
  bool result; // al
  const Vector3f *v14; // rdx
  const Vector3f *v15; // rax
  const float *v16; // rax
  __int64 v17; // r14
  Vector3f *v18; // r15
  char v19; // dl
  __int64 v20; // r14
  __int64 v21; // xmm0_8
  int v22; // r14d
  float *v23; // rax
  int *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  unsigned int *v28; // rdx
  __m128i v29; // xmm0
  char v30; // dl
  __int64 v31; // r14
  __int64 v32; // xmm0_8
  __int64 v33; // rax
  const Vector3f *Extent; // rax
  float *v35; // rax
  float *v36; // rdx
  __int64 v37; // xmm0_8
  __int64 v38; // xmm0_8
  __int64 v39; // rax
  __m128i v40; // xmm0
  float *v41; // rax
  unsigned int *v42; // rdx
  __m128i v43; // xmm2
  int v44; // r14d
  float *v45; // rax
  int *v46; // rdx
  __m128i v47; // xmm0
  float *v48; // rax
  float *v49; // rdx
  const float *v50; // rax
  float r; // [rsp+18h] [rbp-288h]
  float ra; // [rsp+18h] [rbp-288h]
  float rb; // [rsp+18h] [rbp-288h]
  float rc; // [rsp+18h] [rbp-288h]
  bool intersects; // [rsp+32h] [rbp-26Eh]
  bool skewed; // [rsp+33h] [rbp-26Dh]
  int axis; // [rsp+34h] [rbp-26Ch]
  int axis_0; // [rsp+38h] [rbp-268h]
  int axis_1; // [rsp+3Ch] [rbp-264h]
  float extentProjection; // [rsp+40h] [rbp-260h]
  float boxExtent; // [rsp+44h] [rbp-25Ch]
  float maxDist; // [rsp+50h] [rbp-250h]
  float invScale; // [rsp+54h] [rbp-24Ch]
  const Vector3f *normal; // [rsp+58h] [rbp-248h]
  Vector3f inV; // [rsp+64h] [rbp-23Ch] BYREF
  char v68[560]; // [rsp+70h] [rbp-230h] BYREF

  v5 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(512LL);
    if ( v6 )
      v5 = v6;
  }
  v7 = (char *)(v5 + 512);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 48 12 13 boxCenter:366 80 12 16 relSpherePos:367 112 12 9 scale:374 144 12 17 axisDistances:39"
                        "8 176 12 13 extentVec:410 208 16 15 localSphere:361 240 36 11 normals:375 320 64 16 normalMatrix"
                        ":388 416 64 17 normalInverse:390";
  *(_QWORD *)(v5 + 16) = IntersectTransformedAABBSphere;
  v8 = (_DWORD *)(v5 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862721] = 0x4000000;
  v8[536862722] = 62194;
  v8[536862722] = 0x4000000;
  v8[536862723] = 62194;
  v8[536862723] = 0x4000000;
  v8[536862724] = 62194;
  v8[536862724] = 0x4000000;
  v8[536862725] = 62194;
  v8[536862725] = 0x4000000;
  v8[536862726] = 62194;
  v8[536862727] = 62194;
  v8[536862728] = -234618880;
  v8[536862729] = -218959118;
  v8[536862732] = -218959118;
  v8[536862735] = -202116109;
  if ( !IsNonUniformScaleTransform(type) )
  {
    if ( IsNoScaleTransform(type) )
    {
      v9 = 1.0;
    }
    else
    {
      inV = Matrix4x4f::GetAxisX(transform);
      v9 = 1.0 / Magnitude(&inV);
    }
    invScale = v9;
    Center = Sphere::GetCenter(s);
    inV = Matrix4x4f::InverseMultiplyPoint3Affine(transform, Center);
    *(Vector3f *)(v5 + 176) = operator*(&inV, invScale);
    Radius = (float *)Sphere::GetRadius(s);
    v12 = Radius;
    if ( *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)Radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(Radius);
    }
    r = *v12 * invScale;
    inV = operator*((const Vector3f *)(v5 + 176), invScale);
    Sphere::Sphere((Sphere *const)(v5 + 208), &inV, r);
    result = IntersectAABBSphere(aabb, (const Sphere *)(v5 + 208));
  }
  else
  {
    v14 = AABB::GetCenter(aabb);
    *(Vector3f *)(v5 + 48) = Matrix4x4f::MultiplyPoint3(transform, v14);
    v15 = Sphere::GetCenter(s);
    *(Vector3f *)(v5 + 80) = operator-(v15, (const Vector3f *)(v5 + 48));
    ra = SqrMagnitude((const Vector3f *)(v5 + 80));
    v16 = Sphere::GetRadius(s);
    if ( Sqr<float>(v16) <= ra )
    {
      Vector3f::Vector3f((Vector3f *const)(v5 + 112));
      v17 = 2LL;
      v18 = (Vector3f *)(v5 + 240);
      while ( v17 >= 0 )
      {
        Vector3f::Vector3f(v18++);
        --v17;
      }
      for ( axis = 0; axis <= 2; ++axis )
      {
        v19 = *(_BYTE *)(((v5 + 240 + 12LL * axis) >> 3) + 0x7FFF8000);
        if ( (char)((v5 - 16 + 12 * axis) & 7) >= v19 && v19 != 0
          || *(_BYTE *)(((v5 + 240 + 12LL * axis + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 16 + 12 * axis + 11) & 7) >= *(_BYTE *)(((v5 + 240 + 12LL * axis + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 240 + 12LL * axis, 12LL);
        }
        v20 = (__int64)&v7[12 * axis - 272];
        *(Vector3f *)((char *)&v4 - 8) = Matrix4x4f::GetAxis(transform, axis);
        *(_QWORD *)v20 = v21;
        *(_DWORD *)(v20 + 8) = v4.m128i_i32[0];
        Magnitude((const Vector3f *)(v5 + 240 + 12LL * axis));
        v22 = _mm_cvtsi128_si32(v4);
        v23 = Vector3f::operator[]((Vector3f *const)(v5 + 112), axis);
        v24 = (int *)v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v23);
        }
        *v24 = v22;
        v25 = Vector3f::operator[]((Vector3f *const)(v5 + 112), axis);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v4 = 0LL;
        if ( *v26 > 0.0 )
        {
          v27 = Vector3f::operator[]((Vector3f *const)(v5 + 112), axis);
          v28 = (unsigned int *)v27;
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          v4 = (__m128i)*v28;
          Vector3f::operator*=((Vector3f *const)(v5 + 240 + 12LL * axis), 1.0 / *(float *)v4.m128i_i32);
        }
      }
      v29 = (__m128i)0x38D1B717u;
      skewed = IsSkewedBasis((const Vector3f *)(v5 + 240), 0.000099999997);
      if ( skewed )
      {
        Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v5 + 320));
        Matrix4x4f::SetBasis(
          (Matrix4x4f *const)(v5 + 320),
          (const Vector3f *)(v5 + 240),
          (const Vector3f *)(v5 + 252),
          (const Vector3f *)(v5 + 264));
        Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v5 + 416));
        Matrix4x4f::Invert_General3D((const Matrix4x4f *)(v5 + 320), (Matrix4x4f *)(v5 + 416));
        Matrix4x4f::Transpose((Matrix4x4f *const)(v5 + 416));
        for ( axis_0 = 0; axis_0 <= 2; ++axis_0 )
        {
          inV = Matrix4x4f::GetAxis((const Matrix4x4f *const)(v5 + 416), axis_0);
          v30 = *(_BYTE *)(((v5 + 240 + 12LL * axis_0) >> 3) + 0x7FFF8000);
          if ( (char)((v5 - 16 + 12 * axis_0) & 7) >= v30 && v30 != 0
            || *(_BYTE *)(((v5 + 240 + 12LL * axis_0 + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 16 + 12 * axis_0 + 11) & 7) >= *(_BYTE *)(((v5 + 240 + 12LL * axis_0 + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 240 + 12LL * axis_0, 12LL);
          }
          v31 = (__int64)&v7[12 * axis_0 - 272];
          *(Vector3f *)((char *)&v4 - 8) = NormalizeSafe(&inV, &Vector3f::zero);
          v33 = v32;
          v29 = v4;
          *(_QWORD *)v31 = v33;
          *(_DWORD *)(v31 + 8) = v4.m128i_i32[0];
        }
      }
      Vector3f::Vector3f((Vector3f *const)(v5 + 144));
      for ( axis_1 = 0; axis_1 <= 2; ++axis_1 )
      {
        normal = (const Vector3f *)(v5 + 240 + 12LL * axis_1);
        Extent = AABB::GetExtent(aabb);
        v35 = (float *)Vector3f::operator[](Extent, axis_1);
        v36 = v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        boxExtent = *v36;
        if ( skewed )
        {
          *(Vector3f *)((char *)&v4 - 8) = Matrix4x4f::GetAxis(transform, axis_1);
          *(_QWORD *)&inV.x = v37;
          LODWORD(inV.z) = v4.m128i_i32[0];
          *(Vector3f *)((char *)&v4 - 8) = operator*(&inV, boxExtent);
          v39 = v38;
          v40 = v4;
          *(_QWORD *)(v5 + 176) = v39;
          *(_DWORD *)(v5 + 184) = v4.m128i_i32[0];
          Dot(normal, (const Vector3f *)(v5 + 176));
          extentProjection = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
        }
        else
        {
          v41 = Vector3f::operator[]((Vector3f *const)(v5 + 112), axis_1);
          v42 = (unsigned int *)v41;
          if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v41);
          }
          v40 = (__m128i)*v42;
          extentProjection = *(float *)v40.m128i_i32 * boxExtent;
        }
        *(float *)v40.m128i_i32 = Dot(normal, (const Vector3f *)(v5 + 80));
        rb = Abs(COERCE_FLOAT(_mm_cvtsi128_si32(v40)));
        v43 = (__m128i)LODWORD(rb);
        *(float *)v43.m128i_i32 = rb - Abs(extentProjection);
        v29 = v43;
        v4 = 0LL;
        *(float *)v29.m128i_i32 = FloatMax(*(float *)v43.m128i_i32, 0.0);
        v44 = _mm_cvtsi128_si32(v29);
        v45 = Vector3f::operator[]((Vector3f *const)(v5 + 144), axis_1);
        v46 = (int *)v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v45);
        }
        *v46 = v44;
      }
      if ( skewed )
      {
        rc = *(float *)(v5 + 152);
        v47 = _mm_cvtsi32_si128(*(_DWORD *)(v5 + 144));
        *(float *)v47.m128i_i32 = FloatMax(*(float *)v47.m128i_i32, *(float *)(v5 + 148));
        *(float *)v47.m128i_i32 = FloatMax(*(float *)v47.m128i_i32, rc);
        maxDist = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
        v48 = (float *)Sphere::GetRadius(s);
        v49 = v48;
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v48);
        }
        intersects = *v49 > maxDist;
      }
      else
      {
        *(float *)v29.m128i_i32 = SqrMagnitude((const Vector3f *)(v5 + 144));
        v50 = Sphere::GetRadius(s);
        intersects = Sqr<float>(v50) > COERCE_FLOAT(_mm_cvtsi128_si32(v29));
      }
      result = intersects;
    }
    else
    {
      result = 1;
    }
  }
  if ( v68 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 444: range 000000000CBEB4C7-000000000CBEB505
float __cdecl SafeClampRatio(float n, float d)
{
  if ( n <= 0.0 )
    return 0.0;
  if ( n < d )
    return n / d;
  return 1.0;
};

// Line 449: range 000000000CBEB506-000000000CBEBC80
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectCapsuleCapsule(const Capsule *c0, const Capsule *c1)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector3f *Start; // r14
  const Vector3f *End; // rax
  __int64 v8; // xmm0_8
  const Vector3f *v9; // r14
  const Vector3f *v10; // rax
  __int64 v11; // xmm0_8
  const Vector3f *v12; // r14
  const Vector3f *v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  const Vector3f *v19; // r14
  const Vector3f *v20; // rax
  const Vector3f *v21; // r14
  const Vector3f *v22; // rax
  bool result; // al
  float Radius; // [rsp+Ch] [rbp-124h]
  float s; // [rsp+24h] [rbp-10Ch]
  float sa; // [rsp+24h] [rbp-10Ch]
  float t; // [rsp+28h] [rbp-108h]
  float ta; // [rsp+28h] [rbp-108h]
  float a; // [rsp+2Ch] [rbp-104h]
  float b; // [rsp+30h] [rbp-100h]
  float c; // [rsp+34h] [rbp-FCh]
  float d; // [rsp+38h] [rbp-F8h]
  float e; // [rsp+3Ch] [rbp-F4h]
  float det; // [rsp+40h] [rbp-F0h]
  float radSum; // [rsp+44h] [rbp-ECh]
  Vector3f lhs; // [rsp+48h] [rbp-E8h] BYREF
  Vector3f rhs; // [rsp+54h] [rbp-DCh] BYREF
  char v38[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 12 6 D1:450 64 12 6 D2:451 96 12 8 diff:452 128 12 8 comp:599";
  *(_QWORD *)(v3 + 16) = IntersectCapsuleCapsule;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219020288;
  v5[536862723] = -219020288;
  v5[536862724] = -202177536;
  Start = Capsule::GetStart(c0);
  End = Capsule::GetEnd(c0);
  *(Vector3f *)((char *)&v2 - 8) = operator-(End, Start);
  *(_QWORD *)(v3 + 32) = v8;
  *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
  v9 = Capsule::GetStart(c1);
  v10 = Capsule::GetEnd(c1);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v10, v9);
  *(_QWORD *)(v3 + 64) = v11;
  *(_DWORD *)(v3 + 72) = v2.m128i_i32[0];
  v12 = Capsule::GetStart(c1);
  v13 = Capsule::GetStart(c0);
  *(Vector3f *)((char *)&v2 - 8) = operator-(v13, v12);
  v15 = v14;
  v16 = v2;
  *(_QWORD *)(v3 + 96) = v15;
  *(_DWORD *)(v3 + 104) = v2.m128i_i32[0];
  Dot((const Vector3f *)(v3 + 32), (const Vector3f *)(v3 + 32));
  a = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  *(float *)v16.m128i_i32 = Dot((const Vector3f *)(v3 + 32), (const Vector3f *)(v3 + 64));
  b = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  *(float *)v16.m128i_i32 = Dot((const Vector3f *)(v3 + 64), (const Vector3f *)(v3 + 64));
  c = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  *(float *)v16.m128i_i32 = Dot((const Vector3f *)(v3 + 32), (const Vector3f *)(v3 + 96));
  d = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  *(float *)v16.m128i_i32 = Dot((const Vector3f *)(v3 + 64), (const Vector3f *)(v3 + 96));
  e = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  det = (float)(a * c) - (float)(b * b);
  if ( det > 0.0000099999997 )
  {
    s = (float)(b * e) - (float)(c * d);
    t = (float)(a * e) - (float)(b * d);
    if ( s <= 0.0 )
    {
      if ( e <= 0.0 )
        goto LABEL_20;
      if ( c > e )
      {
        sa = 0.0;
        ta = e / c;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    if ( s >= det )
    {
      if ( (float)(b + e) <= 0.0 )
        goto LABEL_20;
      if ( c > (float)(b + e) )
      {
        sa = 1.0;
        ta = (float)(b + e) / c;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
    if ( t > 0.0 )
    {
      if ( t < det )
      {
        sa = s / det;
        ta = t / det;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
LABEL_20:
    ta = 0.0;
    v17 = (__m128i)_mm_xor_ps((__m128)LODWORD(d), (__m128)0x80000000);
    *(float *)v17.m128i_i32 = SafeClampRatio(*(float *)v17.m128i_i32, a);
    sa = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    goto LABEL_24;
  }
  if ( e <= 0.0 )
    goto LABEL_20;
  if ( c > e )
  {
    sa = 0.0;
    ta = e / c;
    goto LABEL_24;
  }
LABEL_23:
  ta = 1.0;
  v18 = (__m128i)LODWORD(b);
  *(float *)v18.m128i_i32 = SafeClampRatio(b - d, a);
  sa = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
LABEL_24:
  v19 = Capsule::GetEnd(c1);
  v20 = Capsule::GetStart(c1);
  rhs = Lerp(v20, v19, ta);
  v21 = Capsule::GetEnd(c0);
  v22 = Capsule::GetStart(c0);
  lhs = Lerp(v22, v21, sa);
  *(Vector3f *)(v3 + 128) = operator-(&lhs, &rhs);
  Radius = Capsule::GetRadius(c0);
  radSum = Capsule::GetRadius(c1) + Radius;
  result = (float)(radSum * radSum) >= SqrMagnitude((const Vector3f *)(v3 + 128));
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 605: range 000000000CBEBC81-000000000CBEBF58
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectCapsuleSphere(const Capsule *capsule, const Sphere *sphere)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const Vector3f *Start; // r14
  const Vector3f *End; // rax
  __int64 v8; // xmm0_8
  __m128i v9; // xmm1
  const Vector3f *v10; // r14
  const Vector3f *Center; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  __m128i v14; // xmm0
  const Vector3f *v15; // r13
  const Vector3f *v16; // rax
  __int64 v17; // xmm0_8
  const Vector3f *v18; // rax
  __int64 v19; // xmm0_8
  float *v20; // rax
  float *v21; // rdx
  bool result; // al
  float Radius; // [rsp+Ch] [rbp-B4h]
  float v24; // [rsp+24h] [rbp-9Ch] BYREF
  float t; // [rsp+28h] [rbp-98h]
  float magSq; // [rsp+2Ch] [rbp-94h]
  float distSq; // [rsp+30h] [rbp-90h]
  float radSum; // [rsp+34h] [rbp-8Ch]
  Vector3f v29; // [rsp+38h] [rbp-88h] BYREF
  Vector3f rhs; // [rsp+44h] [rbp-7Ch] BYREF
  char v31[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 5 D:608";
  *(_QWORD *)(v3 + 16) = IntersectCapsuleSphere;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  Start = Capsule::GetStart(capsule);
  End = Capsule::GetEnd(capsule);
  *(Vector3f *)((char *)&v2 - 8) = operator-(End, Start);
  *(_QWORD *)(v3 + 32) = v8;
  *(_DWORD *)(v3 + 40) = v2.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v3 + 32));
  magSq = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  t = 0.0;
  v9 = (__m128i)0x3727C5ACu;
  if ( magSq >= 0.0000099999997 )
  {
    v10 = Capsule::GetStart(capsule);
    Center = Sphere::GetCenter(sphere);
    *(Vector3f *)((char *)&v9 - 8) = operator-(Center, v10);
    v13 = v12;
    v14 = v9;
    *(_QWORD *)&rhs.x = v13;
    LODWORD(rhs.z) = v9.m128i_i32[0];
    v24 = Dot((const Vector3f *)(v3 + 32), &rhs) / magSq;
    *(float *)v14.m128i_i32 = clamp01<float>(&v24);
    LODWORD(t) = _mm_cvtsi128_si32(v14);
  }
  v15 = Capsule::GetEnd(capsule);
  v16 = Capsule::GetStart(capsule);
  *(Vector3f *)((char *)&v9 - 8) = Lerp(v16, v15, t);
  *(_QWORD *)&v29.x = v17;
  LODWORD(v29.z) = v9.m128i_i32[0];
  v18 = Sphere::GetCenter(sphere);
  *(Vector3f *)((char *)&v9 - 8) = operator-(v18, &v29);
  *(_QWORD *)&rhs.x = v19;
  LODWORD(rhs.z) = v9.m128i_i32[0];
  SqrMagnitude(&rhs);
  distSq = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  Radius = Capsule::GetRadius(capsule);
  v20 = (float *)Sphere::GetRadius(sphere);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  radSum = *v21 + Radius;
  result = (float)(radSum * radSum) >= distSq;
  if ( v31 == (char *)v3 )
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

// Line 628: range 000000000CBEBF59-000000000CBEC03A
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectAABBFrustum(const AABB *a, const Plane *p, uint32_t inClipMask)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // xmm0_8
  uint32_t mk; // [rsp+2Ch] [rbp-34h]
  float dist; // [rsp+30h] [rbp-30h]
  float radius; // [rsp+34h] [rbp-2Ch]
  const Vector3f *m; // [rsp+38h] [rbp-28h]
  const Vector3f *extent; // [rsp+40h] [rbp-20h]
  const Vector3f *normal; // [rsp+48h] [rbp-18h]
  Vector3f rhs; // [rsp+54h] [rbp-Ch] BYREF

  m = AABB::GetCenter(a);
  extent = AABB::GetExtent(a);
  for ( mk = 1; mk <= inClipMask; mk *= 2 )
  {
    if ( (mk & inClipMask) != 0 )
    {
      normal = Plane::GetNormal(p);
      *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(p, m);
      dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
      *(Vector3f *)((char *)&v4 - 8) = Abs(normal);
      *(_QWORD *)&rhs.x = v5;
      LODWORD(rhs.z) = v4.m128i_i32[0];
      Dot(extent, &rhs);
      radius = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      v4 = (__m128i)LODWORD(dist);
      v3 = 0LL;
      if ( (float)(dist + radius) < 0.0 )
        return 0;
    }
    ++p;
  }
  return 1;
};

// Line 664: range 000000000CBEC03B-000000000CBEC064
bool __cdecl IntersectAABBFrustumFull(const AABB *a, const Plane *p)
{
  return IntersectAABBPlaneBounds(a, p, 6);
};

// Line 669: range 000000000CBEC065-000000000CBEC13D
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectAABBPlaneBounds(const AABB *a, const Plane *p, const int planeCount)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // xmm0_8
  int i; // [rsp+2Ch] [rbp-34h]
  float dist; // [rsp+30h] [rbp-30h]
  float radius; // [rsp+34h] [rbp-2Ch]
  const Vector3f *m; // [rsp+38h] [rbp-28h]
  const Vector3f *extent; // [rsp+40h] [rbp-20h]
  const Vector3f *normal; // [rsp+48h] [rbp-18h]
  Vector3f rhs; // [rsp+54h] [rbp-Ch] BYREF

  m = AABB::GetCenter(a);
  extent = AABB::GetExtent(a);
  for ( i = 0; i < planeCount; ++i )
  {
    normal = Plane::GetNormal(p);
    *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(p, m);
    dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    *(Vector3f *)((char *)&v4 - 8) = Abs(normal);
    *(_QWORD *)&rhs.x = v5;
    LODWORD(rhs.z) = v4.m128i_i32[0];
    Dot(extent, &rhs);
    radius = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    v4 = (__m128i)LODWORD(dist);
    v3 = 0LL;
    if ( (float)(dist + radius) < 0.0 )
      return 0;
    ++p;
  }
  return 1;
};

// Line 687: range 000000000CBEC13E-000000000CBEC216
// local variable allocation has failed, the output may be wrong!
bool __cdecl AABBIncludedByPlaneBounds(const AABB *a, const Plane *p, const int planeCount)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // xmm0_8
  int i; // [rsp+2Ch] [rbp-34h]
  float dist; // [rsp+30h] [rbp-30h]
  float radius; // [rsp+34h] [rbp-2Ch]
  const Vector3f *m; // [rsp+38h] [rbp-28h]
  const Vector3f *extent; // [rsp+40h] [rbp-20h]
  const Vector3f *normal; // [rsp+48h] [rbp-18h]
  Vector3f rhs; // [rsp+54h] [rbp-Ch] BYREF

  m = AABB::GetCenter(a);
  extent = AABB::GetExtent(a);
  for ( i = 0; i < planeCount; ++i )
  {
    normal = Plane::GetNormal(p);
    *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(p, m);
    dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    *(Vector3f *)((char *)&v4 - 8) = Abs(normal);
    *(_QWORD *)&rhs.x = v5;
    LODWORD(rhs.z) = v4.m128i_i32[0];
    Dot(extent, &rhs);
    radius = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    v4 = (__m128i)LODWORD(dist);
    v3 = 0LL;
    if ( (float)(dist - radius) < 0.0 )
      return 0;
    ++p;
  }
  return 1;
};

// Line 705: range 000000000CBEC217-000000000CBEC2F5
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectAABBPlaneBoundsInv(const AABB *a, const Plane *p, const int planeCount, float culloffset)
{
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  float culloffseta; // [rsp+8h] [rbp-58h]
  int i; // [rsp+2Ch] [rbp-34h]
  float dist; // [rsp+30h] [rbp-30h]
  float radius; // [rsp+34h] [rbp-2Ch]
  const Vector3f *m; // [rsp+38h] [rbp-28h]
  const Vector3f *extent; // [rsp+40h] [rbp-20h]
  const Vector3f *normal; // [rsp+48h] [rbp-18h]
  Vector3f rhs; // [rsp+54h] [rbp-Ch] BYREF

  culloffseta = culloffset;
  m = AABB::GetCenter(a);
  extent = AABB::GetExtent(a);
  for ( i = 0; i < planeCount; ++i )
  {
    normal = Plane::GetNormal(p);
    *(float *)v5.m128i_i32 = Plane::GetDistanceToPoint(p, m);
    dist = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    *(Vector3f *)((char *)&v4 - 8) = Abs(normal);
    *(_QWORD *)&rhs.x = v5.m128i_i64[0];
    LODWORD(rhs.z) = v4.m128i_i32[0];
    Dot(extent, &rhs);
    radius = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    v4 = (__m128i)LODWORD(dist);
    *(_OWORD *)&culloffset = LODWORD(culloffseta);
    if ( culloffseta > (float)(dist - radius) )
      return 0;
    ++p;
  }
  return 1;
};

// Line 723: range 000000000CBEC2F6-000000000CBEC83C
int __cdecl PrepareOptimizedPlanes(const Plane *planes, const int planeCount, math::float4 *outPlanesSOA)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const int *v6; // rax
  _DWORD *v7; // rdx
  const int *v8; // rax
  _DWORD *v9; // rdx
  const int *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  unsigned int *v13; // rdx
  float *v14; // rax
  unsigned int *v15; // rdx
  float *v16; // rax
  unsigned int *v17; // rdx
  float *v18; // rax
  int *v19; // rdx
  char v20; // cl
  __int64 v21; // rsi
  math::meta::sp<math::meta::v4f,17185,4>::packed v22; // xmm0
  int result; // eax
  unsigned int v24; // [rsp+0h] [rbp-D0h]
  unsigned int v25; // [rsp+4h] [rbp-CCh]
  unsigned int v27; // [rsp+10h] [rbp-C0h]
  int __a; // [rsp+20h] [rbp-B0h] BYREF
  int __b; // [rsp+24h] [rbp-ACh] BYREF
  int i; // [rsp+28h] [rbp-A8h]
  int k; // [rsp+2Ch] [rbp-A4h]
  unsigned int v33; // [rsp+30h] [rbp-A0h]
  unsigned int v34; // [rsp+34h] [rbp-9Ch]
  unsigned int v35; // [rsp+38h] [rbp-98h]
  unsigned int v36; // [rsp+3Ch] [rbp-94h]
  unsigned int v37; // [rsp+40h] [rbp-90h]
  unsigned int v38; // [rsp+44h] [rbp-8Ch]
  unsigned int v39; // [rsp+48h] [rbp-88h]
  unsigned int v40; // [rsp+4Ch] [rbp-84h]
  const Vector4f *plane4; // [rsp+50h] [rbp-80h]
  unsigned __int64 v42; // [rsp+58h] [rbp-78h]
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v43; // [rsp+60h] [rbp-70h] BYREF
  char v44[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 indices:728";
  *(_QWORD *)(v3 + 16) = PrepareOptimizedPlanes;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  plane4 = (const Vector4f *)planes;
  for ( i = 0; i < planeCount; i += 4 )
  {
    *(_DWORD *)(v3 + 32) = i;
    __b = planeCount - 1;
    __a = i + 1;
    v6 = std::min<int>(&__a, &__b);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 36) = *v7;
    __b = planeCount - 1;
    __a = i + 2;
    v8 = std::min<int>(&__a, &__b);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v3 + 40) = *v9;
    __b = planeCount - 1;
    __a = i + 3;
    v10 = std::min<int>(&__a, &__b);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v3 + 44) = *v11;
    for ( k = 0; k <= 3; ++k )
    {
      v12 = (float *)Vector4f::operator[](&plane4[*(int *)(v3 + 44)], k);
      v13 = (unsigned int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v25 = *v13;
      v14 = (float *)Vector4f::operator[](&plane4[*(int *)(v3 + 40)], k);
      v15 = (unsigned int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v24 = *v15;
      v16 = (float *)Vector4f::operator[](&plane4[*(int *)(v3 + 36)], k);
      v17 = (unsigned int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v27 = *v17;
      v21 = (unsigned int)k;
      v18 = (float *)Vector4f::operator[](&plane4[*(int *)(v3 + 32)], k);
      v19 = (int *)v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      LOBYTE(v21) = v20 != 0;
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
        __asan_report_load4(v18);
      v33 = *v19;
      v34 = v27;
      v35 = v24;
      v36 = v25;
      math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v43);
      v37 = v33;
      v38 = v34;
      v39 = v35;
      v40 = v36;
      v22 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)v33, (__m128)v34), _mm_unpacklo_ps((__m128)v35, (__m128)v36));
      v43._anon_0.p = v22;
      v42 = (unsigned __int64)&outPlanesSOA[i + k];
      if ( *(_WORD *)((v42 >> 3) + 0x7FFF8000) )
        __asan_report_store16(&outPlanesSOA[i + k], v21);
      *(math::meta::sp<math::meta::v4f,17185,4>::packed *)v42 = v22;
    }
  }
  result = i;
  if ( v44 == (char *)v3 )
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

// Line 743: range 000000000CBEC83D-000000000CBEC899
void __cdecl PrepareOptimizedPlanes(
        const Plane *planes,
        const int planeCount,
        math::float4 *outPlanesSOA,
        int maxOutputPlaneCount)
{
  if ( PrepareOptimizedPlanes(planes, planeCount, outPlanesSOA) > maxOutputPlaneCount )
  {
    __asan_handle_no_return(planes);
    __assert_fail(
      "res <= maxOutputPlaneCount",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0x2E9u,
      "void PrepareOptimizedPlanes(const Plane*, int, math::float4*, int)");
  }
};

// Line 749: range 000000000CBEC89A-000000000CBEE3AE
bool __cdecl IntersectAABBPlaneBoundsOptimized(const AABB *a, math::float4 *optimizedPlanes, const int planeCount)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector3f *Center; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm1
  const Vector3f *Extent; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __m128i v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v17; // xmm0
  __m128 v18; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v19; // xmm0
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v22; // xmm0
  __m128 v23; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v24; // xmm0
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  bool result; // al
  int i; // [rsp+20h] [rbp-1200h]
  const float *Ptr; // [rsp+90h] [rbp-1190h]
  const float *v32; // [rsp+B8h] [rbp-1168h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-1140h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-1138h]
  unsigned __int64 v35; // [rsp+F0h] [rbp-1130h]
  unsigned __int64 v36; // [rsp+F8h] [rbp-1128h]
  __int128 *v37; // [rsp+100h] [rbp-1120h]
  __int128 *v38; // [rsp+108h] [rbp-1118h]
  __int128 *v39; // [rsp+110h] [rbp-1110h]
  __int128 *v40; // [rsp+118h] [rbp-1108h]
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v41; // [rsp+120h] [rbp-1100h] BYREF
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v42; // [rsp+130h] [rbp-10F0h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v43; // [rsp+140h] [rbp-10E0h] BYREF
  __m128i v44; // [rsp+150h] [rbp-10D0h]
  __m128i v45; // [rsp+160h] [rbp-10C0h]
  __m128i v46; // [rsp+170h] [rbp-10B0h] BYREF
  __m128i v47; // [rsp+180h] [rbp-10A0h]
  __m128i v48; // [rsp+190h] [rbp-1090h]
  __m128i v49; // [rsp+1A0h] [rbp-1080h] BYREF
  __int128 v50; // [rsp+1B0h] [rbp-1070h]
  __int128 v51; // [rsp+1C0h] [rbp-1060h]
  __int128 v52; // [rsp+1D0h] [rbp-1050h] BYREF
  __m128i v53; // [rsp+1E0h] [rbp-1040h]
  __int128 v54; // [rsp+1F0h] [rbp-1030h]
  __int128 v55; // [rsp+200h] [rbp-1020h]
  __int128 v56; // [rsp+210h] [rbp-1010h] BYREF
  __m128i v57; // [rsp+220h] [rbp-1000h]
  __int128 v58; // [rsp+230h] [rbp-FF0h]
  __int128 v59; // [rsp+240h] [rbp-FE0h]
  __int128 v60; // [rsp+250h] [rbp-FD0h] BYREF
  __m128i v61; // [rsp+260h] [rbp-FC0h]
  __int128 v62; // [rsp+270h] [rbp-FB0h]
  __int128 v63; // [rsp+280h] [rbp-FA0h]
  __int128 v64; // [rsp+290h] [rbp-F90h] BYREF
  __m128i v65; // [rsp+2A0h] [rbp-F80h]
  __int128 v66; // [rsp+2B0h] [rbp-F70h]
  __int128 v67; // [rsp+2C0h] [rbp-F60h]
  __int128 v68; // [rsp+2D0h] [rbp-F50h] BYREF
  __m128i v69; // [rsp+2E0h] [rbp-F40h]
  __int128 v70; // [rsp+2F0h] [rbp-F30h]
  __int128 v71; // [rsp+300h] [rbp-F20h]
  __int128 v72; // [rsp+310h] [rbp-F10h] BYREF
  __m128i v73; // [rsp+320h] [rbp-F00h]
  __m128 v74; // [rsp+330h] [rbp-EF0h]
  __m128 v75; // [rsp+340h] [rbp-EE0h]
  __m128 v76; // [rsp+350h] [rbp-ED0h]
  __m128 v77; // [rsp+360h] [rbp-EC0h]
  __m128 v78; // [rsp+370h] [rbp-EB0h]
  __m128 v79; // [rsp+380h] [rbp-EA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed p; // [rsp+390h] [rbp-E90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v81; // [rsp+3A0h] [rbp-E80h]
  __m128 v82; // [rsp+3B0h] [rbp-E70h]
  __m128 v83; // [rsp+3C0h] [rbp-E60h]
  __m128 v84; // [rsp+3D0h] [rbp-E50h]
  __m128 v85; // [rsp+3E0h] [rbp-E40h]
  __m128 v86; // [rsp+3F0h] [rbp-E30h]
  __m128 v87; // [rsp+400h] [rbp-E20h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v88; // [rsp+410h] [rbp-E10h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v89; // [rsp+420h] [rbp-E00h]
  __m128 v90; // [rsp+430h] [rbp-DF0h]
  __m128 v91; // [rsp+440h] [rbp-DE0h]
  __m128 v92; // [rsp+450h] [rbp-DD0h]
  __m128 v93; // [rsp+460h] [rbp-DC0h]
  __m128 v94; // [rsp+470h] [rbp-DB0h]
  __m128 v95; // [rsp+480h] [rbp-DA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v96; // [rsp+490h] [rbp-D90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v97; // [rsp+4A0h] [rbp-D80h]
  __m128 v98; // [rsp+4B0h] [rbp-D70h]
  __m128 v99; // [rsp+4C0h] [rbp-D60h]
  __m128 v100; // [rsp+4D0h] [rbp-D50h]
  __m128 v101; // [rsp+4E0h] [rbp-D40h]
  __m128 v102; // [rsp+4F0h] [rbp-D30h]
  __m128 v103; // [rsp+500h] [rbp-D20h]
  __m128 v104; // [rsp+510h] [rbp-D10h]
  __m128 v105; // [rsp+520h] [rbp-D00h]
  __m128 v106; // [rsp+530h] [rbp-CF0h]
  __m128 v107; // [rsp+540h] [rbp-CE0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v108; // [rsp+550h] [rbp-CD0h]
  __m128 v109; // [rsp+560h] [rbp-CC0h]
  __m128 v110; // [rsp+570h] [rbp-CB0h]
  __m128 v111; // [rsp+580h] [rbp-CA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v112; // [rsp+590h] [rbp-C90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v113; // [rsp+5A0h] [rbp-C80h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v114; // [rsp+5B0h] [rbp-C70h]
  __m128 v115; // [rsp+5C0h] [rbp-C60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v116; // [rsp+5D0h] [rbp-C50h]
  __m128 v117; // [rsp+5E0h] [rbp-C40h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v118; // [rsp+5F0h] [rbp-C30h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v119; // [rsp+600h] [rbp-C20h]
  __m128 v120; // [rsp+610h] [rbp-C10h]
  __m128 v121; // [rsp+620h] [rbp-C00h]
  __m128 v122; // [rsp+630h] [rbp-BF0h]
  __m128 v123; // [rsp+640h] [rbp-BE0h]
  __m128 v124; // [rsp+650h] [rbp-BD0h]
  __m128 v125; // [rsp+660h] [rbp-BC0h]
  __m128 v126; // [rsp+670h] [rbp-BB0h]
  __m128 v127; // [rsp+680h] [rbp-BA0h]
  __m128 v128; // [rsp+690h] [rbp-B90h]
  __m128 v129; // [rsp+6A0h] [rbp-B80h]
  __m128 v130; // [rsp+6B0h] [rbp-B70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v131; // [rsp+6C0h] [rbp-B60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v132; // [rsp+6D0h] [rbp-B50h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v133; // [rsp+6E0h] [rbp-B40h]
  __m128 v134; // [rsp+6F0h] [rbp-B30h]
  __m128 v135; // [rsp+700h] [rbp-B20h]
  __m128 v136; // [rsp+710h] [rbp-B10h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v137; // [rsp+720h] [rbp-B00h]
  __m128 v138; // [rsp+730h] [rbp-AF0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v139; // [rsp+740h] [rbp-AE0h]
  __int128 v140; // [rsp+750h] [rbp-AD0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v141; // [rsp+760h] [rbp-AC0h]
  __int128 v142; // [rsp+770h] [rbp-AB0h]
  __int128 v143; // [rsp+780h] [rbp-AA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v144; // [rsp+790h] [rbp-A90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v145; // [rsp+7A0h] [rbp-A80h]
  __int128 v146; // [rsp+7B0h] [rbp-A70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v147; // [rsp+7C0h] [rbp-A60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v148; // [rsp+7D0h] [rbp-A50h]
  __m128 v149; // [rsp+7E0h] [rbp-A40h]
  __m128 v150; // [rsp+7F0h] [rbp-A30h]
  __m128 v151; // [rsp+800h] [rbp-A20h]
  __m128 v152; // [rsp+810h] [rbp-A10h]
  __m128 v153; // [rsp+820h] [rbp-A00h]
  __m128 v154; // [rsp+830h] [rbp-9F0h]
  __m128 v155; // [rsp+840h] [rbp-9E0h]
  __m128 v156; // [rsp+850h] [rbp-9D0h]
  __m128 v157; // [rsp+860h] [rbp-9C0h]
  __m128 v158; // [rsp+870h] [rbp-9B0h]
  __m128 v159; // [rsp+880h] [rbp-9A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v160; // [rsp+890h] [rbp-990h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v161; // [rsp+8A0h] [rbp-980h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v162; // [rsp+8B0h] [rbp-970h]
  __m128 v163; // [rsp+8C0h] [rbp-960h]
  __m128 v164; // [rsp+8D0h] [rbp-950h]
  __m128 v165; // [rsp+8E0h] [rbp-940h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v166; // [rsp+8F0h] [rbp-930h]
  __m128 v167; // [rsp+900h] [rbp-920h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v168; // [rsp+910h] [rbp-910h]
  __int128 v169; // [rsp+920h] [rbp-900h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v170; // [rsp+930h] [rbp-8F0h]
  __int128 v171; // [rsp+940h] [rbp-8E0h]
  __int128 v172; // [rsp+950h] [rbp-8D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v173; // [rsp+960h] [rbp-8C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v174; // [rsp+970h] [rbp-8B0h]
  __int128 v175; // [rsp+980h] [rbp-8A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v176; // [rsp+990h] [rbp-890h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v177; // [rsp+9A0h] [rbp-880h]
  __m128 v178; // [rsp+9B0h] [rbp-870h]
  __m128 v179; // [rsp+9C0h] [rbp-860h]
  __m128 v180; // [rsp+9D0h] [rbp-850h]
  __m128 v181; // [rsp+9E0h] [rbp-840h]
  __m128 v182; // [rsp+9F0h] [rbp-830h]
  __m128 v183; // [rsp+A00h] [rbp-820h]
  __m128 v184; // [rsp+A10h] [rbp-810h]
  __m128 v185; // [rsp+A20h] [rbp-800h]
  __m128 v186; // [rsp+A30h] [rbp-7F0h]
  __m128 v187; // [rsp+A40h] [rbp-7E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v188; // [rsp+A50h] [rbp-7D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v189; // [rsp+A60h] [rbp-7C0h]
  __m128 v190; // [rsp+A70h] [rbp-7B0h]
  __m128 v191; // [rsp+A80h] [rbp-7A0h]
  __m128 v192; // [rsp+A90h] [rbp-790h]
  __m128 v193; // [rsp+AA0h] [rbp-780h]
  __m128 v194; // [rsp+AB0h] [rbp-770h]
  __m128 v195; // [rsp+AC0h] [rbp-760h]
  __m128 v196; // [rsp+AD0h] [rbp-750h]
  __m128 v197; // [rsp+AE0h] [rbp-740h]
  __m128 v198; // [rsp+AF0h] [rbp-730h]
  __m128 v199; // [rsp+B00h] [rbp-720h]
  __m128 v200; // [rsp+B10h] [rbp-710h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v201; // [rsp+B20h] [rbp-700h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v202; // [rsp+B30h] [rbp-6F0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v203; // [rsp+B40h] [rbp-6E0h]
  __m128 v204; // [rsp+B50h] [rbp-6D0h]
  __m128 v205; // [rsp+B60h] [rbp-6C0h]
  __m128 v206; // [rsp+B70h] [rbp-6B0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v207; // [rsp+B80h] [rbp-6A0h]
  __m128 v208; // [rsp+B90h] [rbp-690h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v209; // [rsp+BA0h] [rbp-680h]
  __int128 v210; // [rsp+BB0h] [rbp-670h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v211; // [rsp+BC0h] [rbp-660h]
  __int128 v212; // [rsp+BD0h] [rbp-650h]
  __int128 v213; // [rsp+BE0h] [rbp-640h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v214; // [rsp+BF0h] [rbp-630h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v215; // [rsp+C00h] [rbp-620h]
  __int128 v216; // [rsp+C10h] [rbp-610h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v217; // [rsp+C20h] [rbp-600h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v218; // [rsp+C30h] [rbp-5F0h]
  __m128 v219; // [rsp+C40h] [rbp-5E0h]
  __m128 v220; // [rsp+C50h] [rbp-5D0h]
  __m128 v221; // [rsp+C60h] [rbp-5C0h]
  __m128 v222; // [rsp+C70h] [rbp-5B0h]
  __m128 v223; // [rsp+C80h] [rbp-5A0h]
  __m128 v224; // [rsp+C90h] [rbp-590h]
  __m128 v225; // [rsp+CA0h] [rbp-580h]
  __m128 v226; // [rsp+CB0h] [rbp-570h]
  __m128 v227; // [rsp+CC0h] [rbp-560h]
  __m128 v228; // [rsp+CD0h] [rbp-550h]
  __m128 v229; // [rsp+CE0h] [rbp-540h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v230; // [rsp+CF0h] [rbp-530h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v231; // [rsp+D00h] [rbp-520h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v232; // [rsp+D10h] [rbp-510h]
  __m128 v233; // [rsp+D20h] [rbp-500h]
  __m128 v234; // [rsp+D30h] [rbp-4F0h]
  __m128 v235; // [rsp+D40h] [rbp-4E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v236; // [rsp+D50h] [rbp-4D0h]
  __m128 v237; // [rsp+D60h] [rbp-4C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v238; // [rsp+D70h] [rbp-4B0h]
  __int128 v239; // [rsp+D80h] [rbp-4A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v240; // [rsp+D90h] [rbp-490h]
  __int128 v241; // [rsp+DA0h] [rbp-480h]
  __int128 v242; // [rsp+DB0h] [rbp-470h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v243; // [rsp+DC0h] [rbp-460h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v244; // [rsp+DD0h] [rbp-450h]
  __int128 v245; // [rsp+DE0h] [rbp-440h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v246; // [rsp+DF0h] [rbp-430h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v247; // [rsp+E00h] [rbp-420h]
  __m128 v248; // [rsp+E10h] [rbp-410h]
  __m128 v249; // [rsp+E20h] [rbp-400h]
  __m128 v250; // [rsp+E30h] [rbp-3F0h]
  __m128 v251; // [rsp+E40h] [rbp-3E0h]
  __m128 v252; // [rsp+E50h] [rbp-3D0h]
  __m128 v253; // [rsp+E60h] [rbp-3C0h]
  __m128 v254; // [rsp+E70h] [rbp-3B0h]
  __m128 v255; // [rsp+E80h] [rbp-3A0h]
  __m128 v256; // [rsp+E90h] [rbp-390h]
  __m128 v257; // [rsp+EA0h] [rbp-380h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v258; // [rsp+EB0h] [rbp-370h]
  __m128 v259; // [rsp+EC0h] [rbp-360h]
  __m128 v260; // [rsp+ED0h] [rbp-350h]
  __m128 v261; // [rsp+EE0h] [rbp-340h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v262; // [rsp+EF0h] [rbp-330h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v263; // [rsp+F00h] [rbp-320h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v264; // [rsp+F10h] [rbp-310h]
  __m128 v265; // [rsp+F20h] [rbp-300h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v266; // [rsp+F30h] [rbp-2F0h]
  __m128 v267; // [rsp+F40h] [rbp-2E0h]
  __m128 v268; // [rsp+F50h] [rbp-2D0h] BYREF
  __m128i si128; // [rsp+F60h] [rbp-2C0h] BYREF
  __m128i v270; // [rsp+F70h] [rbp-2B0h] BYREF
  __m128 v271; // [rsp+F80h] [rbp-2A0h]
  __m128 v272; // [rsp+F90h] [rbp-290h]
  char v273[640]; // [rsp+FA0h] [rbp-280h] BYREF

  v3 = (unsigned __int64)v273;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 16 9 dist4:754 64 16 11 radius4:754 96 16 8 zero:756 128 16 13 centerXYZ:758 160 16 13 ext"
                        "entXYZ:759 192 16 12 centerX4:761 224 16 12 centerY4:762 256 16 12 centerZ4:763 288 16 12 extent"
                        "X4:765 320 16 12 extentY4:766 352 16 12 extentZ4:767 384 16 11 planeX4:771 416 16 11 planeY4:772"
                        " 448 16 11 planeZ4:773 480 16 11 planeW4:774 512 16 14 absPlaneX4:776 544 16 14 absPlaneY4:777 5"
                        "76 16 14 absPlaneZ4:778";
  *(_QWORD *)(v3 + 16) = IntersectAABBPlaneBoundsOptimized;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -219021312;
  v5[536862730] = -219021312;
  v5[536862731] = -219021312;
  v5[536862732] = -219021312;
  v5[536862733] = -219021312;
  v5[536862734] = -219021312;
  v5[536862735] = -219021312;
  v5[536862736] = -219021312;
  v5[536862737] = -219021312;
  v5[536862738] = -202178560;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 32));
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 64));
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 96));
  *(_OWORD *)(v3 + 96) = 0LL;
  Center = AABB::GetCenter(a);
  Ptr = Vector3f::GetPtr(Center);
  v7 = (unsigned __int64)(Ptr + 2);
  v8 = (((_BYTE)Ptr + 8) & 7u) + 3;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v7);
  v9 = _mm_cvtsi32_si128(*((_DWORD *)Ptr + 2));
  if ( *(_BYTE *)(((unsigned __int64)Ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(Ptr, v8);
  v44 = _mm_move_epi64((__m128i)*(unsigned __int64 *)Ptr);
  v45 = v44;
  v46 = v9;
  v43._anon_0.p = _mm_loadh_ps((const double *)v46.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v3 + 128));
  if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 128, v8);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 128) = v43;
  Extent = AABB::GetExtent(a);
  v32 = Vector3f::GetPtr(Extent);
  v11 = (unsigned __int64)(v32 + 2);
  v12 = (((_BYTE)v32 + 8) & 7u) + 3;
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v11);
  v13 = _mm_cvtsi32_si128(*((_DWORD *)v32 + 2));
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v32, v12);
  v47 = _mm_move_epi64((__m128i)*(unsigned __int64 *)v32);
  v48 = v47;
  v49 = v13;
  v43._anon_0.p = _mm_loadh_ps((const double *)v49.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v3 + 160));
  if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v3 + 160, v12);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 160) = v43;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 192));
  v50 = *(_OWORD *)(v3 + 128);
  v51 = v50;
  v52 = v50;
  v53 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v52), 0);
  *(__m128i *)(v3 + 192) = v53;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 224));
  v54 = *(_OWORD *)(v3 + 128);
  v55 = v54;
  v56 = v54;
  v57 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v56), 85);
  *(__m128i *)(v3 + 224) = v57;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 256));
  v58 = *(_OWORD *)(v3 + 128);
  v59 = v58;
  v60 = v58;
  v61 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v60), 170);
  *(__m128i *)(v3 + 256) = v61;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 288));
  v62 = *(_OWORD *)(v3 + 160);
  v63 = v62;
  v64 = v62;
  v65 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v64), 0);
  *(__m128i *)(v3 + 288) = v65;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 320));
  v66 = *(_OWORD *)(v3 + 160);
  v67 = v66;
  v68 = v66;
  v69 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v68), 85);
  *(__m128i *)(v3 + 320) = v69;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 352));
  v70 = *(_OWORD *)(v3 + 160);
  v71 = v70;
  v72 = v70;
  v73 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v72), 170);
  *(__m128i *)(v3 + 352) = v73;
  for ( i = 0; i < planeCount; i += 4 )
  {
    v33 = (unsigned __int64)&optimizedPlanes[i];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 384));
    if ( *(_WORD *)((v33 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v33);
    *(_OWORD *)(v3 + 384) = *(_OWORD *)v33;
    v34 = (unsigned __int64)&optimizedPlanes[i + 1];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 416));
    if ( *(_WORD *)((v34 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v34);
    *(_OWORD *)(v3 + 416) = *(_OWORD *)v34;
    v35 = (unsigned __int64)&optimizedPlanes[i + 2];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 448));
    if ( *(_WORD *)((v35 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v35);
    *(_OWORD *)(v3 + 448) = *(_OWORD *)v35;
    v36 = (unsigned __int64)&optimizedPlanes[i + 3];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 480));
    if ( *(_WORD *)((v36 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v36);
    *(_OWORD *)(v3 + 480) = *(_OWORD *)v36;
    v74 = *(__m128 *)(v3 + 384);
    v75 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v76 = v74;
    v77 = v74;
    v78 = v74;
    v79 = v75;
    v43._anon_0.p = _mm_and_ps(v74, v75);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v43._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 512));
    p = v42._anon_0.p;
    v81 = v42._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 512) = v42;
    v82 = *(__m128 *)(v3 + 416);
    v83 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v84 = v82;
    v85 = v82;
    v86 = v82;
    v87 = v83;
    v43._anon_0.p = _mm_and_ps(v82, v83);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v43._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 544));
    v88 = v42._anon_0.p;
    v89 = v42._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 544) = v42;
    v90 = *(__m128 *)(v3 + 448);
    v91 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v92 = v90;
    v93 = v90;
    v94 = v90;
    v95 = v91;
    v43._anon_0.p = _mm_and_ps(v90, v91);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v43._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 576));
    v96 = v42._anon_0.p;
    v97 = v42._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 576) = v42;
    v14 = *(__m128 *)(v3 + 384);
    v98 = *(__m128 *)(v3 + 192);
    v99 = v14;
    v100 = v14;
    v101 = v14;
    v102 = v98;
    v103 = v98;
    v104 = v98;
    v105 = v14;
    v106 = v98;
    v107 = v14;
    v43._anon_0.p = _mm_mul_ps(v98, v14);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v15 = *(__m128 *)(v3 + 480);
    v108 = v43._anon_0.p;
    v109 = v15;
    v110 = v15;
    v111 = v15;
    v112 = v43._anon_0.p;
    v113 = v43._anon_0.p;
    v114 = v43._anon_0.p;
    v115 = v15;
    v116 = v43._anon_0.p;
    v117 = v15;
    v43._anon_0.p = _mm_add_ps(v43._anon_0.p, v15);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v43._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v43);
    v118 = v42._anon_0.p;
    v119 = v42._anon_0.p;
    v43._anon_0.p = v42._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 32) = v42;
    v16 = *(__m128 *)(v3 + 416);
    v120 = *(__m128 *)(v3 + 224);
    v121 = v16;
    v122 = v16;
    v123 = v16;
    v124 = v120;
    v125 = v120;
    v126 = v120;
    v127 = v16;
    v128 = v120;
    v129 = v16;
    v43._anon_0.p = _mm_mul_ps(v120, v16);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v130 = *(__m128 *)(v3 + 32);
    v131 = v43._anon_0.p;
    v132 = v43._anon_0.p;
    v133 = v43._anon_0.p;
    v134 = v130;
    v135 = v130;
    v136 = v130;
    v137 = v43._anon_0.p;
    v138 = v130;
    v139 = v43._anon_0.p;
    v42._anon_0.p = _mm_add_ps(v130, v43._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v42._anon_0.p;
    v37 = (__int128 *)(v3 + 32);
    v17 = v42._anon_0.p;
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v17.m128_u64 = __asan_report_load16(v3 + 32);
    v140 = *v37;
    v141 = v17;
    v142 = v140;
    v143 = v140;
    v144 = v17;
    v145 = v17;
    v146 = v140;
    v147 = v17;
    v148 = v17;
    *v37 = (__int128)v17;
    v18 = *(__m128 *)(v3 + 448);
    v149 = *(__m128 *)(v3 + 256);
    v150 = v18;
    v151 = v18;
    v152 = v18;
    v153 = v149;
    v154 = v149;
    v155 = v149;
    v156 = v18;
    v157 = v149;
    v158 = v18;
    v43._anon_0.p = _mm_mul_ps(v149, v18);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v159 = *(__m128 *)(v3 + 32);
    v160 = v43._anon_0.p;
    v161 = v43._anon_0.p;
    v162 = v43._anon_0.p;
    v163 = v159;
    v164 = v159;
    v165 = v159;
    v166 = v43._anon_0.p;
    v167 = v159;
    v168 = v43._anon_0.p;
    v42._anon_0.p = _mm_add_ps(v159, v43._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v42._anon_0.p;
    v38 = (__int128 *)(v3 + 32);
    v19 = v42._anon_0.p;
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v19.m128_u64 = __asan_report_load16(v3 + 32);
    v169 = *v38;
    v170 = v19;
    v171 = v169;
    v172 = v169;
    v173 = v19;
    v174 = v19;
    v175 = v169;
    v176 = v19;
    v177 = v19;
    *v38 = (__int128)v19;
    v20 = *(__m128 *)(v3 + 512);
    v178 = *(__m128 *)(v3 + 288);
    v179 = v20;
    v180 = v20;
    v181 = v20;
    v182 = v178;
    v183 = v178;
    v184 = v178;
    v185 = v20;
    v186 = v178;
    v187 = v20;
    v43._anon_0.p = _mm_mul_ps(v178, v20);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v43._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v43);
    v188 = v42._anon_0.p;
    v189 = v42._anon_0.p;
    v43._anon_0.p = v42._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v3 + 64) = v42;
    v21 = *(__m128 *)(v3 + 544);
    v190 = *(__m128 *)(v3 + 320);
    v191 = v21;
    v192 = v21;
    v193 = v21;
    v194 = v190;
    v195 = v190;
    v196 = v190;
    v197 = v21;
    v198 = v190;
    v199 = v21;
    v43._anon_0.p = _mm_mul_ps(v190, v21);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v200 = *(__m128 *)(v3 + 64);
    v201 = v43._anon_0.p;
    v202 = v43._anon_0.p;
    v203 = v43._anon_0.p;
    v204 = v200;
    v205 = v200;
    v206 = v200;
    v207 = v43._anon_0.p;
    v208 = v200;
    v209 = v43._anon_0.p;
    v42._anon_0.p = _mm_add_ps(v200, v43._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v42._anon_0.p;
    v39 = (__int128 *)(v3 + 64);
    v22 = v42._anon_0.p;
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      *(double *)v22.m128_u64 = __asan_report_load16(v3 + 64);
    v210 = *v39;
    v211 = v22;
    v212 = v210;
    v213 = v210;
    v214 = v22;
    v215 = v22;
    v216 = v210;
    v217 = v22;
    v218 = v22;
    *v39 = (__int128)v22;
    v23 = *(__m128 *)(v3 + 576);
    v219 = *(__m128 *)(v3 + 352);
    v220 = v23;
    v221 = v23;
    v222 = v23;
    v223 = v219;
    v224 = v219;
    v225 = v219;
    v226 = v23;
    v227 = v219;
    v228 = v23;
    v43._anon_0.p = _mm_mul_ps(v219, v23);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v229 = *(__m128 *)(v3 + 64);
    v230 = v43._anon_0.p;
    v231 = v43._anon_0.p;
    v232 = v43._anon_0.p;
    v233 = v229;
    v234 = v229;
    v235 = v229;
    v236 = v43._anon_0.p;
    v237 = v229;
    v238 = v43._anon_0.p;
    v42._anon_0.p = _mm_add_ps(v229, v43._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v42._anon_0.p;
    v40 = (__int128 *)(v3 + 64);
    v24 = v42._anon_0.p;
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      *(double *)v24.m128_u64 = __asan_report_load16(v3 + 64);
    v239 = *v40;
    v240 = v24;
    v241 = v239;
    v242 = v239;
    v243 = v24;
    v244 = v24;
    v245 = v239;
    v246 = v24;
    v247 = v24;
    *v40 = (__int128)v24;
    v25 = *(__m128 *)(v3 + 64);
    v248 = *(__m128 *)(v3 + 32);
    v249 = v25;
    v250 = v25;
    v251 = v25;
    v252 = v248;
    v253 = v248;
    v254 = v248;
    v255 = v25;
    v256 = v248;
    v257 = v25;
    v43._anon_0.p = _mm_add_ps(v248, v25);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v41);
    v41._anon_0.p = v43._anon_0.p;
    v26 = *(__m128 *)(v3 + 96);
    v258 = v43._anon_0.p;
    v259 = v26;
    v260 = v26;
    v261 = v26;
    v262 = v43._anon_0.p;
    v263 = v43._anon_0.p;
    v264 = v43._anon_0.p;
    v265 = v26;
    v266 = v43._anon_0.p;
    v267 = v26;
    v268 = _mm_cmplt_ps(v43._anon_0.p, v26);
    v43._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v268);
    math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4> *const)&v42);
    v42._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v43);
    si128 = _mm_load_si128((const __m128i *)&v42);
    v270 = _mm_load_si128(&si128);
    v271 = (__m128)_mm_load_si128(&v270);
    v272 = v271;
    if ( _mm_movemask_ps(v271) )
    {
      result = 0;
      goto LABEL_38;
    }
  }
  result = 1;
LABEL_38:
  if ( v273 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 798: range 000000000CBEE3AF-000000000CBEFEE8
bool __cdecl IntersectAABBPlaneBoundsOptimizedInv(
        const AABB *a,
        math::float4 *optimizedPlanes,
        const int planeCount,
        float culloffset)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const Vector3f *Center; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __m128i v10; // xmm1
  const Vector3f *Extent; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __m128i v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v18; // xmm0
  __m128 v19; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v23; // xmm0
  __m128 v24; // xmm0
  math::meta::sp<math::meta::v4f,17185,4>::packed v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm0
  bool result; // al
  int i; // [rsp+2Ch] [rbp-1204h]
  const float *Ptr; // [rsp+A0h] [rbp-1190h]
  const float *v33; // [rsp+C8h] [rbp-1168h]
  unsigned __int64 v34; // [rsp+F0h] [rbp-1140h]
  unsigned __int64 v35; // [rsp+F8h] [rbp-1138h]
  unsigned __int64 v36; // [rsp+100h] [rbp-1130h]
  unsigned __int64 v37; // [rsp+108h] [rbp-1128h]
  __int128 *v38; // [rsp+110h] [rbp-1120h]
  __int128 *v39; // [rsp+118h] [rbp-1118h]
  __int128 *v40; // [rsp+120h] [rbp-1110h]
  __int128 *v41; // [rsp+128h] [rbp-1108h]
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v42; // [rsp+130h] [rbp-1100h] BYREF
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v43; // [rsp+140h] [rbp-10F0h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v44; // [rsp+150h] [rbp-10E0h] BYREF
  __m128i v45; // [rsp+160h] [rbp-10D0h]
  __m128i v46; // [rsp+170h] [rbp-10C0h]
  __m128i v47; // [rsp+180h] [rbp-10B0h] BYREF
  __m128i v48; // [rsp+190h] [rbp-10A0h]
  __m128i v49; // [rsp+1A0h] [rbp-1090h]
  __m128i v50; // [rsp+1B0h] [rbp-1080h] BYREF
  __int128 v51; // [rsp+1C0h] [rbp-1070h]
  __int128 v52; // [rsp+1D0h] [rbp-1060h]
  __int128 v53; // [rsp+1E0h] [rbp-1050h] BYREF
  __m128i v54; // [rsp+1F0h] [rbp-1040h]
  __int128 v55; // [rsp+200h] [rbp-1030h]
  __int128 v56; // [rsp+210h] [rbp-1020h]
  __int128 v57; // [rsp+220h] [rbp-1010h] BYREF
  __m128i v58; // [rsp+230h] [rbp-1000h]
  __int128 v59; // [rsp+240h] [rbp-FF0h]
  __int128 v60; // [rsp+250h] [rbp-FE0h]
  __int128 v61; // [rsp+260h] [rbp-FD0h] BYREF
  __m128i v62; // [rsp+270h] [rbp-FC0h]
  __int128 v63; // [rsp+280h] [rbp-FB0h]
  __int128 v64; // [rsp+290h] [rbp-FA0h]
  __int128 v65; // [rsp+2A0h] [rbp-F90h] BYREF
  __m128i v66; // [rsp+2B0h] [rbp-F80h]
  __int128 v67; // [rsp+2C0h] [rbp-F70h]
  __int128 v68; // [rsp+2D0h] [rbp-F60h]
  __int128 v69; // [rsp+2E0h] [rbp-F50h] BYREF
  __m128i v70; // [rsp+2F0h] [rbp-F40h]
  __int128 v71; // [rsp+300h] [rbp-F30h]
  __int128 v72; // [rsp+310h] [rbp-F20h]
  __int128 v73; // [rsp+320h] [rbp-F10h] BYREF
  __m128i v74; // [rsp+330h] [rbp-F00h]
  __m128 v75; // [rsp+340h] [rbp-EF0h]
  __m128 v76; // [rsp+350h] [rbp-EE0h]
  __m128 v77; // [rsp+360h] [rbp-ED0h]
  __m128 v78; // [rsp+370h] [rbp-EC0h]
  __m128 v79; // [rsp+380h] [rbp-EB0h]
  __m128 v80; // [rsp+390h] [rbp-EA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed p; // [rsp+3A0h] [rbp-E90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v82; // [rsp+3B0h] [rbp-E80h]
  __m128 v83; // [rsp+3C0h] [rbp-E70h]
  __m128 v84; // [rsp+3D0h] [rbp-E60h]
  __m128 v85; // [rsp+3E0h] [rbp-E50h]
  __m128 v86; // [rsp+3F0h] [rbp-E40h]
  __m128 v87; // [rsp+400h] [rbp-E30h]
  __m128 v88; // [rsp+410h] [rbp-E20h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v89; // [rsp+420h] [rbp-E10h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v90; // [rsp+430h] [rbp-E00h]
  __m128 v91; // [rsp+440h] [rbp-DF0h]
  __m128 v92; // [rsp+450h] [rbp-DE0h]
  __m128 v93; // [rsp+460h] [rbp-DD0h]
  __m128 v94; // [rsp+470h] [rbp-DC0h]
  __m128 v95; // [rsp+480h] [rbp-DB0h]
  __m128 v96; // [rsp+490h] [rbp-DA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v97; // [rsp+4A0h] [rbp-D90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v98; // [rsp+4B0h] [rbp-D80h]
  __m128 v99; // [rsp+4C0h] [rbp-D70h]
  __m128 v100; // [rsp+4D0h] [rbp-D60h]
  __m128 v101; // [rsp+4E0h] [rbp-D50h]
  __m128 v102; // [rsp+4F0h] [rbp-D40h]
  __m128 v103; // [rsp+500h] [rbp-D30h]
  __m128 v104; // [rsp+510h] [rbp-D20h]
  __m128 v105; // [rsp+520h] [rbp-D10h]
  __m128 v106; // [rsp+530h] [rbp-D00h]
  __m128 v107; // [rsp+540h] [rbp-CF0h]
  __m128 v108; // [rsp+550h] [rbp-CE0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v109; // [rsp+560h] [rbp-CD0h]
  __m128 v110; // [rsp+570h] [rbp-CC0h]
  __m128 v111; // [rsp+580h] [rbp-CB0h]
  __m128 v112; // [rsp+590h] [rbp-CA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v113; // [rsp+5A0h] [rbp-C90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v114; // [rsp+5B0h] [rbp-C80h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v115; // [rsp+5C0h] [rbp-C70h]
  __m128 v116; // [rsp+5D0h] [rbp-C60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v117; // [rsp+5E0h] [rbp-C50h]
  __m128 v118; // [rsp+5F0h] [rbp-C40h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v119; // [rsp+600h] [rbp-C30h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v120; // [rsp+610h] [rbp-C20h]
  __m128 v121; // [rsp+620h] [rbp-C10h]
  __m128 v122; // [rsp+630h] [rbp-C00h]
  __m128 v123; // [rsp+640h] [rbp-BF0h]
  __m128 v124; // [rsp+650h] [rbp-BE0h]
  __m128 v125; // [rsp+660h] [rbp-BD0h]
  __m128 v126; // [rsp+670h] [rbp-BC0h]
  __m128 v127; // [rsp+680h] [rbp-BB0h]
  __m128 v128; // [rsp+690h] [rbp-BA0h]
  __m128 v129; // [rsp+6A0h] [rbp-B90h]
  __m128 v130; // [rsp+6B0h] [rbp-B80h]
  __m128 v131; // [rsp+6C0h] [rbp-B70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v132; // [rsp+6D0h] [rbp-B60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v133; // [rsp+6E0h] [rbp-B50h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v134; // [rsp+6F0h] [rbp-B40h]
  __m128 v135; // [rsp+700h] [rbp-B30h]
  __m128 v136; // [rsp+710h] [rbp-B20h]
  __m128 v137; // [rsp+720h] [rbp-B10h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v138; // [rsp+730h] [rbp-B00h]
  __m128 v139; // [rsp+740h] [rbp-AF0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v140; // [rsp+750h] [rbp-AE0h]
  __int128 v141; // [rsp+760h] [rbp-AD0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v142; // [rsp+770h] [rbp-AC0h]
  __int128 v143; // [rsp+780h] [rbp-AB0h]
  __int128 v144; // [rsp+790h] [rbp-AA0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v145; // [rsp+7A0h] [rbp-A90h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v146; // [rsp+7B0h] [rbp-A80h]
  __int128 v147; // [rsp+7C0h] [rbp-A70h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v148; // [rsp+7D0h] [rbp-A60h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v149; // [rsp+7E0h] [rbp-A50h]
  __m128 v150; // [rsp+7F0h] [rbp-A40h]
  __m128 v151; // [rsp+800h] [rbp-A30h]
  __m128 v152; // [rsp+810h] [rbp-A20h]
  __m128 v153; // [rsp+820h] [rbp-A10h]
  __m128 v154; // [rsp+830h] [rbp-A00h]
  __m128 v155; // [rsp+840h] [rbp-9F0h]
  __m128 v156; // [rsp+850h] [rbp-9E0h]
  __m128 v157; // [rsp+860h] [rbp-9D0h]
  __m128 v158; // [rsp+870h] [rbp-9C0h]
  __m128 v159; // [rsp+880h] [rbp-9B0h]
  __m128 v160; // [rsp+890h] [rbp-9A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v161; // [rsp+8A0h] [rbp-990h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v162; // [rsp+8B0h] [rbp-980h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v163; // [rsp+8C0h] [rbp-970h]
  __m128 v164; // [rsp+8D0h] [rbp-960h]
  __m128 v165; // [rsp+8E0h] [rbp-950h]
  __m128 v166; // [rsp+8F0h] [rbp-940h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v167; // [rsp+900h] [rbp-930h]
  __m128 v168; // [rsp+910h] [rbp-920h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v169; // [rsp+920h] [rbp-910h]
  __int128 v170; // [rsp+930h] [rbp-900h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v171; // [rsp+940h] [rbp-8F0h]
  __int128 v172; // [rsp+950h] [rbp-8E0h]
  __int128 v173; // [rsp+960h] [rbp-8D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v174; // [rsp+970h] [rbp-8C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v175; // [rsp+980h] [rbp-8B0h]
  __int128 v176; // [rsp+990h] [rbp-8A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v177; // [rsp+9A0h] [rbp-890h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v178; // [rsp+9B0h] [rbp-880h]
  __m128 v179; // [rsp+9C0h] [rbp-870h]
  __m128 v180; // [rsp+9D0h] [rbp-860h]
  __m128 v181; // [rsp+9E0h] [rbp-850h]
  __m128 v182; // [rsp+9F0h] [rbp-840h]
  __m128 v183; // [rsp+A00h] [rbp-830h]
  __m128 v184; // [rsp+A10h] [rbp-820h]
  __m128 v185; // [rsp+A20h] [rbp-810h]
  __m128 v186; // [rsp+A30h] [rbp-800h]
  __m128 v187; // [rsp+A40h] [rbp-7F0h]
  __m128 v188; // [rsp+A50h] [rbp-7E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v189; // [rsp+A60h] [rbp-7D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v190; // [rsp+A70h] [rbp-7C0h]
  __m128 v191; // [rsp+A80h] [rbp-7B0h]
  __m128 v192; // [rsp+A90h] [rbp-7A0h]
  __m128 v193; // [rsp+AA0h] [rbp-790h]
  __m128 v194; // [rsp+AB0h] [rbp-780h]
  __m128 v195; // [rsp+AC0h] [rbp-770h]
  __m128 v196; // [rsp+AD0h] [rbp-760h]
  __m128 v197; // [rsp+AE0h] [rbp-750h]
  __m128 v198; // [rsp+AF0h] [rbp-740h]
  __m128 v199; // [rsp+B00h] [rbp-730h]
  __m128 v200; // [rsp+B10h] [rbp-720h]
  __m128 v201; // [rsp+B20h] [rbp-710h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v202; // [rsp+B30h] [rbp-700h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v203; // [rsp+B40h] [rbp-6F0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v204; // [rsp+B50h] [rbp-6E0h]
  __m128 v205; // [rsp+B60h] [rbp-6D0h]
  __m128 v206; // [rsp+B70h] [rbp-6C0h]
  __m128 v207; // [rsp+B80h] [rbp-6B0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v208; // [rsp+B90h] [rbp-6A0h]
  __m128 v209; // [rsp+BA0h] [rbp-690h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v210; // [rsp+BB0h] [rbp-680h]
  __int128 v211; // [rsp+BC0h] [rbp-670h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v212; // [rsp+BD0h] [rbp-660h]
  __int128 v213; // [rsp+BE0h] [rbp-650h]
  __int128 v214; // [rsp+BF0h] [rbp-640h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v215; // [rsp+C00h] [rbp-630h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v216; // [rsp+C10h] [rbp-620h]
  __int128 v217; // [rsp+C20h] [rbp-610h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v218; // [rsp+C30h] [rbp-600h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v219; // [rsp+C40h] [rbp-5F0h]
  __m128 v220; // [rsp+C50h] [rbp-5E0h]
  __m128 v221; // [rsp+C60h] [rbp-5D0h]
  __m128 v222; // [rsp+C70h] [rbp-5C0h]
  __m128 v223; // [rsp+C80h] [rbp-5B0h]
  __m128 v224; // [rsp+C90h] [rbp-5A0h]
  __m128 v225; // [rsp+CA0h] [rbp-590h]
  __m128 v226; // [rsp+CB0h] [rbp-580h]
  __m128 v227; // [rsp+CC0h] [rbp-570h]
  __m128 v228; // [rsp+CD0h] [rbp-560h]
  __m128 v229; // [rsp+CE0h] [rbp-550h]
  __m128 v230; // [rsp+CF0h] [rbp-540h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v231; // [rsp+D00h] [rbp-530h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v232; // [rsp+D10h] [rbp-520h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v233; // [rsp+D20h] [rbp-510h]
  __m128 v234; // [rsp+D30h] [rbp-500h]
  __m128 v235; // [rsp+D40h] [rbp-4F0h]
  __m128 v236; // [rsp+D50h] [rbp-4E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v237; // [rsp+D60h] [rbp-4D0h]
  __m128 v238; // [rsp+D70h] [rbp-4C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v239; // [rsp+D80h] [rbp-4B0h]
  __int128 v240; // [rsp+D90h] [rbp-4A0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v241; // [rsp+DA0h] [rbp-490h]
  __int128 v242; // [rsp+DB0h] [rbp-480h]
  __int128 v243; // [rsp+DC0h] [rbp-470h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v244; // [rsp+DD0h] [rbp-460h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v245; // [rsp+DE0h] [rbp-450h]
  __int128 v246; // [rsp+DF0h] [rbp-440h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v247; // [rsp+E00h] [rbp-430h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v248; // [rsp+E10h] [rbp-420h]
  __m128 v249; // [rsp+E20h] [rbp-410h]
  __m128 v250; // [rsp+E30h] [rbp-400h]
  __m128 v251; // [rsp+E40h] [rbp-3F0h]
  __m128 v252; // [rsp+E50h] [rbp-3E0h]
  __m128 v253; // [rsp+E60h] [rbp-3D0h]
  __m128 v254; // [rsp+E70h] [rbp-3C0h]
  __m128 v255; // [rsp+E80h] [rbp-3B0h]
  __m128 v256; // [rsp+E90h] [rbp-3A0h]
  __m128 v257; // [rsp+EA0h] [rbp-390h]
  __m128 v258; // [rsp+EB0h] [rbp-380h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v259; // [rsp+EC0h] [rbp-370h]
  __m128 v260; // [rsp+ED0h] [rbp-360h]
  __m128 v261; // [rsp+EE0h] [rbp-350h]
  __m128 v262; // [rsp+EF0h] [rbp-340h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v263; // [rsp+F00h] [rbp-330h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v264; // [rsp+F10h] [rbp-320h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v265; // [rsp+F20h] [rbp-310h]
  __m128 v266; // [rsp+F30h] [rbp-300h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v267; // [rsp+F40h] [rbp-2F0h]
  __m128 v268; // [rsp+F50h] [rbp-2E0h]
  __m128 v269; // [rsp+F60h] [rbp-2D0h] BYREF
  __m128i si128; // [rsp+F70h] [rbp-2C0h] BYREF
  __m128i v271; // [rsp+F80h] [rbp-2B0h] BYREF
  __m128 v272; // [rsp+F90h] [rbp-2A0h]
  __m128 v273; // [rsp+FA0h] [rbp-290h]
  char v274[640]; // [rsp+FB0h] [rbp-280h] BYREF

  v4 = (unsigned __int64)v274;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "18 32 16 9 dist4:803 64 16 11 radius4:803 96 16 8 zero:805 128 16 13 centerXYZ:807 160 16 13 ext"
                        "entXYZ:808 192 16 12 centerX4:810 224 16 12 centerY4:811 256 16 12 centerZ4:812 288 16 12 extent"
                        "X4:814 320 16 12 extentY4:815 352 16 12 extentZ4:816 384 16 11 planeX4:820 416 16 11 planeY4:821"
                        " 448 16 11 planeZ4:822 480 16 11 planeW4:823 512 16 14 absPlaneX4:825 544 16 14 absPlaneY4:826 5"
                        "76 16 14 absPlaneZ4:827";
  *(_QWORD *)(v4 + 16) = IntersectAABBPlaneBoundsOptimizedInv;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -219021312;
  v6[536862731] = -219021312;
  v6[536862732] = -219021312;
  v6[536862733] = -219021312;
  v6[536862734] = -219021312;
  v6[536862735] = -219021312;
  v6[536862736] = -219021312;
  v6[536862737] = -219021312;
  v6[536862738] = -202178560;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 32));
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 64));
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 96));
  *(__m128 *)(v4 + 96) = _mm_shuffle_ps((__m128)LODWORD(culloffset), (__m128)LODWORD(culloffset), 0);
  Center = AABB::GetCenter(a);
  Ptr = Vector3f::GetPtr(Center);
  v8 = (unsigned __int64)(Ptr + 2);
  v9 = (((_BYTE)Ptr + 8) & 7u) + 3;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v8);
  v10 = _mm_cvtsi32_si128(*((_DWORD *)Ptr + 2));
  if ( *(_BYTE *)(((unsigned __int64)Ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(Ptr, v9);
  v45 = _mm_move_epi64((__m128i)*(unsigned __int64 *)Ptr);
  v46 = v45;
  v47 = v10;
  v44._anon_0.p = _mm_loadh_ps((const double *)v47.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v4 + 128));
  if ( *(_WORD *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 128, v9);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 128) = v44;
  Extent = AABB::GetExtent(a);
  v33 = Vector3f::GetPtr(Extent);
  v12 = (unsigned __int64)(v33 + 2);
  v13 = (((_BYTE)v33 + 8) & 7u) + 3;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)((v12 & 7) + 3) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    __asan_report_load4(v12);
  v14 = _mm_cvtsi32_si128(*((_DWORD *)v33 + 2));
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v33, v13);
  v48 = _mm_move_epi64((__m128i)*(unsigned __int64 *)v33);
  v49 = v48;
  v50 = v14;
  v44._anon_0.p = _mm_loadh_ps((const double *)v50.m128i_i64);
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,801,3>,3> *const)(v4 + 160));
  if ( *(_WORD *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 160, v13);
  *(math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 160) = v44;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 192));
  v51 = *(_OWORD *)(v4 + 128);
  v52 = v51;
  v53 = v51;
  v54 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v53), 0);
  *(__m128i *)(v4 + 192) = v54;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 224));
  v55 = *(_OWORD *)(v4 + 128);
  v56 = v55;
  v57 = v55;
  v58 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v57), 85);
  *(__m128i *)(v4 + 224) = v58;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 256));
  v59 = *(_OWORD *)(v4 + 128);
  v60 = v59;
  v61 = v59;
  v62 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v61), 170);
  *(__m128i *)(v4 + 256) = v62;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 288));
  v63 = *(_OWORD *)(v4 + 160);
  v64 = v63;
  v65 = v63;
  v66 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v65), 0);
  *(__m128i *)(v4 + 288) = v66;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 320));
  v67 = *(_OWORD *)(v4 + 160);
  v68 = v67;
  v69 = v67;
  v70 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v69), 85);
  *(__m128i *)(v4 + 320) = v70;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v4 + 352));
  v71 = *(_OWORD *)(v4 + 160);
  v72 = v71;
  v73 = v71;
  v74 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v73), 170);
  *(__m128i *)(v4 + 352) = v74;
  for ( i = 0; i < planeCount; i += 4 )
  {
    v34 = (unsigned __int64)&optimizedPlanes[i];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 384));
    if ( *(_WORD *)((v34 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v34);
    *(_OWORD *)(v4 + 384) = *(_OWORD *)v34;
    v35 = (unsigned __int64)&optimizedPlanes[i + 1];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 416));
    if ( *(_WORD *)((v35 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v35);
    *(_OWORD *)(v4 + 416) = *(_OWORD *)v35;
    v36 = (unsigned __int64)&optimizedPlanes[i + 2];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 448));
    if ( *(_WORD *)((v36 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v36);
    *(_OWORD *)(v4 + 448) = *(_OWORD *)v36;
    v37 = (unsigned __int64)&optimizedPlanes[i + 3];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 480));
    if ( *(_WORD *)((v37 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v37);
    *(_OWORD *)(v4 + 480) = *(_OWORD *)v37;
    v75 = *(__m128 *)(v4 + 384);
    v76 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v77 = v75;
    v78 = v75;
    v79 = v75;
    v80 = v76;
    v44._anon_0.p = _mm_and_ps(v75, v76);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v44._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 512));
    p = v43._anon_0.p;
    v82 = v43._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 512) = v43;
    v83 = *(__m128 *)(v4 + 416);
    v84 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v85 = v83;
    v86 = v83;
    v87 = v83;
    v88 = v84;
    v44._anon_0.p = _mm_and_ps(v83, v84);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v44._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 544));
    v89 = v43._anon_0.p;
    v90 = v43._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 544) = v43;
    v91 = *(__m128 *)(v4 + 448);
    v92 = (__m128)_mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(0x7FFFFFFFu), _mm_cvtsi32_si128(0x7FFFFFFFu)));
    v93 = v91;
    v94 = v91;
    v95 = v91;
    v96 = v92;
    v44._anon_0.p = _mm_and_ps(v91, v92);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v44._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v4 + 576));
    v97 = v43._anon_0.p;
    v98 = v43._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 576) = v43;
    v15 = *(__m128 *)(v4 + 384);
    v99 = *(__m128 *)(v4 + 192);
    v100 = v15;
    v101 = v15;
    v102 = v15;
    v103 = v99;
    v104 = v99;
    v105 = v99;
    v106 = v15;
    v107 = v99;
    v108 = v15;
    v44._anon_0.p = _mm_mul_ps(v99, v15);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v16 = *(__m128 *)(v4 + 480);
    v109 = v44._anon_0.p;
    v110 = v16;
    v111 = v16;
    v112 = v16;
    v113 = v44._anon_0.p;
    v114 = v44._anon_0.p;
    v115 = v44._anon_0.p;
    v116 = v16;
    v117 = v44._anon_0.p;
    v118 = v16;
    v44._anon_0.p = _mm_add_ps(v44._anon_0.p, v16);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v44._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v44);
    v119 = v43._anon_0.p;
    v120 = v43._anon_0.p;
    v44._anon_0.p = v43._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 32) = v43;
    v17 = *(__m128 *)(v4 + 416);
    v121 = *(__m128 *)(v4 + 224);
    v122 = v17;
    v123 = v17;
    v124 = v17;
    v125 = v121;
    v126 = v121;
    v127 = v121;
    v128 = v17;
    v129 = v121;
    v130 = v17;
    v44._anon_0.p = _mm_mul_ps(v121, v17);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v131 = *(__m128 *)(v4 + 32);
    v132 = v44._anon_0.p;
    v133 = v44._anon_0.p;
    v134 = v44._anon_0.p;
    v135 = v131;
    v136 = v131;
    v137 = v131;
    v138 = v44._anon_0.p;
    v139 = v131;
    v140 = v44._anon_0.p;
    v43._anon_0.p = _mm_add_ps(v131, v44._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v44);
    v44._anon_0.p = v43._anon_0.p;
    v38 = (__int128 *)(v4 + 32);
    v18 = v43._anon_0.p;
    if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v18.m128_u64 = __asan_report_load16(v4 + 32);
    v141 = *v38;
    v142 = v18;
    v143 = v141;
    v144 = v141;
    v145 = v18;
    v146 = v18;
    v147 = v141;
    v148 = v18;
    v149 = v18;
    *v38 = (__int128)v18;
    v19 = *(__m128 *)(v4 + 448);
    v150 = *(__m128 *)(v4 + 256);
    v151 = v19;
    v152 = v19;
    v153 = v19;
    v154 = v150;
    v155 = v150;
    v156 = v150;
    v157 = v19;
    v158 = v150;
    v159 = v19;
    v44._anon_0.p = _mm_mul_ps(v150, v19);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v160 = *(__m128 *)(v4 + 32);
    v161 = v44._anon_0.p;
    v162 = v44._anon_0.p;
    v163 = v44._anon_0.p;
    v164 = v160;
    v165 = v160;
    v166 = v160;
    v167 = v44._anon_0.p;
    v168 = v160;
    v169 = v44._anon_0.p;
    v43._anon_0.p = _mm_add_ps(v160, v44._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v44);
    v44._anon_0.p = v43._anon_0.p;
    v39 = (__int128 *)(v4 + 32);
    v20 = v43._anon_0.p;
    if ( *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v20.m128_u64 = __asan_report_load16(v4 + 32);
    v170 = *v39;
    v171 = v20;
    v172 = v170;
    v173 = v170;
    v174 = v20;
    v175 = v20;
    v176 = v170;
    v177 = v20;
    v178 = v20;
    *v39 = (__int128)v20;
    v21 = *(__m128 *)(v4 + 512);
    v179 = *(__m128 *)(v4 + 288);
    v180 = v21;
    v181 = v21;
    v182 = v21;
    v183 = v179;
    v184 = v179;
    v185 = v179;
    v186 = v21;
    v187 = v179;
    v188 = v21;
    v44._anon_0.p = _mm_mul_ps(v179, v21);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v43);
    v43._anon_0.p = v44._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v44);
    v189 = v43._anon_0.p;
    v190 = v43._anon_0.p;
    v44._anon_0.p = v43._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *)(v4 + 64) = v43;
    v22 = *(__m128 *)(v4 + 544);
    v191 = *(__m128 *)(v4 + 320);
    v192 = v22;
    v193 = v22;
    v194 = v22;
    v195 = v191;
    v196 = v191;
    v197 = v191;
    v198 = v22;
    v199 = v191;
    v200 = v22;
    v44._anon_0.p = _mm_mul_ps(v191, v22);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v201 = *(__m128 *)(v4 + 64);
    v202 = v44._anon_0.p;
    v203 = v44._anon_0.p;
    v204 = v44._anon_0.p;
    v205 = v201;
    v206 = v201;
    v207 = v201;
    v208 = v44._anon_0.p;
    v209 = v201;
    v210 = v44._anon_0.p;
    v43._anon_0.p = _mm_add_ps(v201, v44._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v44);
    v44._anon_0.p = v43._anon_0.p;
    v40 = (__int128 *)(v4 + 64);
    v23 = v43._anon_0.p;
    if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      *(double *)v23.m128_u64 = __asan_report_load16(v4 + 64);
    v211 = *v40;
    v212 = v23;
    v213 = v211;
    v214 = v211;
    v215 = v23;
    v216 = v23;
    v217 = v211;
    v218 = v23;
    v219 = v23;
    *v40 = (__int128)v23;
    v24 = *(__m128 *)(v4 + 576);
    v220 = *(__m128 *)(v4 + 352);
    v221 = v24;
    v222 = v24;
    v223 = v24;
    v224 = v220;
    v225 = v220;
    v226 = v220;
    v227 = v24;
    v228 = v220;
    v229 = v24;
    v44._anon_0.p = _mm_mul_ps(v220, v24);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v230 = *(__m128 *)(v4 + 64);
    v231 = v44._anon_0.p;
    v232 = v44._anon_0.p;
    v233 = v44._anon_0.p;
    v234 = v230;
    v235 = v230;
    v236 = v230;
    v237 = v44._anon_0.p;
    v238 = v230;
    v239 = v44._anon_0.p;
    v43._anon_0.p = _mm_add_ps(v230, v44._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v44);
    v44._anon_0.p = v43._anon_0.p;
    v41 = (__int128 *)(v4 + 64);
    v25 = v43._anon_0.p;
    if ( *(_WORD *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      *(double *)v25.m128_u64 = __asan_report_load16(v4 + 64);
    v240 = *v41;
    v241 = v25;
    v242 = v240;
    v243 = v240;
    v244 = v25;
    v245 = v25;
    v246 = v240;
    v247 = v25;
    v248 = v25;
    *v41 = (__int128)v25;
    v26 = *(__m128 *)(v4 + 64);
    v249 = *(__m128 *)(v4 + 32);
    v250 = v26;
    v251 = v26;
    v252 = v26;
    v253 = v249;
    v254 = v249;
    v255 = v249;
    v256 = v26;
    v257 = v249;
    v258 = v26;
    v44._anon_0.p = _mm_sub_ps(v249, v26);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v42);
    v42._anon_0.p = v44._anon_0.p;
    v27 = *(__m128 *)(v4 + 96);
    v259 = v44._anon_0.p;
    v260 = v27;
    v261 = v27;
    v262 = v27;
    v263 = v44._anon_0.p;
    v264 = v44._anon_0.p;
    v265 = v44._anon_0.p;
    v266 = v27;
    v267 = v44._anon_0.p;
    v268 = v27;
    v269 = _mm_cmplt_ps(v44._anon_0.p, v27);
    v44._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v269);
    math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4> *const)&v43);
    v43._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v44);
    si128 = _mm_load_si128((const __m128i *)&v43);
    v271 = _mm_load_si128(&si128);
    v272 = (__m128)_mm_load_si128(&v271);
    v273 = v272;
    if ( _mm_movemask_ps(v272) )
    {
      result = 0;
      goto LABEL_38;
    }
  }
  result = 1;
LABEL_38:
  if ( v274 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 847: range 000000000CBEFEE9-000000000CBF0CCA
bool __cdecl IntersectSpherePlaneBoundsOptimized(
        math::float4 *sphere,
        math::float4 *optimizedPlanes,
        const int planeCount)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  math::meta::sp<math::meta::v4f,1,1>::packed v9; // xmm0
  __m128 v10; // xmm0
  math::meta::sp<math::meta::v4f,1,1>::packed v11; // xmm0
  __m128 v12; // xmm0
  bool result; // al
  int i; // [rsp+2Ch] [rbp-944h]
  unsigned __int64 v16; // [rsp+50h] [rbp-920h]
  unsigned __int64 v17; // [rsp+58h] [rbp-918h]
  unsigned __int64 v18; // [rsp+60h] [rbp-910h]
  unsigned __int64 v19; // [rsp+68h] [rbp-908h]
  __int128 *v20; // [rsp+70h] [rbp-900h]
  __int128 *v21; // [rsp+78h] [rbp-8F8h]
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v22; // [rsp+80h] [rbp-8F0h] BYREF
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> v23; // [rsp+90h] [rbp-8E0h] BYREF
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> v24; // [rsp+A0h] [rbp-8D0h] BYREF
  math::meta::sp<math::meta::v4f,17185,4>::packed p; // [rsp+B0h] [rbp-8C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v26; // [rsp+C0h] [rbp-8B0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v27; // [rsp+D0h] [rbp-8A0h] BYREF
  __m128i v28; // [rsp+E0h] [rbp-890h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v29; // [rsp+F0h] [rbp-880h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v30; // [rsp+100h] [rbp-870h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v31; // [rsp+110h] [rbp-860h] BYREF
  __m128i v32; // [rsp+120h] [rbp-850h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v33; // [rsp+130h] [rbp-840h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v34; // [rsp+140h] [rbp-830h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v35; // [rsp+150h] [rbp-820h] BYREF
  __m128i v36; // [rsp+160h] [rbp-810h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v37; // [rsp+170h] [rbp-800h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v38; // [rsp+180h] [rbp-7F0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v39; // [rsp+190h] [rbp-7E0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v40; // [rsp+1A0h] [rbp-7D0h] BYREF
  __m128 v41; // [rsp+1B0h] [rbp-7C0h]
  __m128 v42; // [rsp+1C0h] [rbp-7B0h]
  __int128 v43; // [rsp+1D0h] [rbp-7A0h]
  math::meta::sp<math::meta::v4f,1,1>::packed v44; // [rsp+1E0h] [rbp-790h]
  math::meta::sp<math::meta::v4f,1,1>::packed v45; // [rsp+1F0h] [rbp-780h]
  math::meta::sp<math::meta::v4f,1,1>::packed v46; // [rsp+200h] [rbp-770h] BYREF
  __m128i v47; // [rsp+210h] [rbp-760h]
  __m128 v48; // [rsp+220h] [rbp-750h]
  __m128 v49; // [rsp+230h] [rbp-740h]
  __m128 v50; // [rsp+240h] [rbp-730h]
  __m128 v51; // [rsp+250h] [rbp-720h]
  __m128 v52; // [rsp+260h] [rbp-710h]
  __m128 v53; // [rsp+270h] [rbp-700h]
  __m128 v54; // [rsp+280h] [rbp-6F0h]
  __m128 v55; // [rsp+290h] [rbp-6E0h]
  __m128 v56; // [rsp+2A0h] [rbp-6D0h]
  __m128 v57; // [rsp+2B0h] [rbp-6C0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v58; // [rsp+2C0h] [rbp-6B0h]
  __m128 v59; // [rsp+2D0h] [rbp-6A0h]
  __m128 v60; // [rsp+2E0h] [rbp-690h]
  __m128 v61; // [rsp+2F0h] [rbp-680h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v62; // [rsp+300h] [rbp-670h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v63; // [rsp+310h] [rbp-660h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v64; // [rsp+320h] [rbp-650h]
  __m128 v65; // [rsp+330h] [rbp-640h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v66; // [rsp+340h] [rbp-630h]
  __m128 v67; // [rsp+350h] [rbp-620h]
  math::meta::sp<math::meta::v4f,1,1>::packed v68; // [rsp+360h] [rbp-610h]
  math::meta::sp<math::meta::v4f,1,1>::packed v69; // [rsp+370h] [rbp-600h]
  __m128 v70; // [rsp+380h] [rbp-5F0h]
  __m128 v71; // [rsp+390h] [rbp-5E0h]
  __m128 v72; // [rsp+3A0h] [rbp-5D0h]
  __m128 v73; // [rsp+3B0h] [rbp-5C0h]
  __m128 v74; // [rsp+3C0h] [rbp-5B0h]
  __m128 v75; // [rsp+3D0h] [rbp-5A0h]
  __m128 v76; // [rsp+3E0h] [rbp-590h]
  __m128 v77; // [rsp+3F0h] [rbp-580h]
  __m128 v78; // [rsp+400h] [rbp-570h]
  __m128 v79; // [rsp+410h] [rbp-560h]
  __m128 v80; // [rsp+420h] [rbp-550h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v81; // [rsp+430h] [rbp-540h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v82; // [rsp+440h] [rbp-530h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v83; // [rsp+450h] [rbp-520h]
  __m128 v84; // [rsp+460h] [rbp-510h]
  __m128 v85; // [rsp+470h] [rbp-500h]
  __m128 v86; // [rsp+480h] [rbp-4F0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v87; // [rsp+490h] [rbp-4E0h]
  __m128 v88; // [rsp+4A0h] [rbp-4D0h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v89; // [rsp+4B0h] [rbp-4C0h]
  __int128 v90; // [rsp+4C0h] [rbp-4B0h]
  math::meta::sp<math::meta::v4f,1,1>::packed v91; // [rsp+4D0h] [rbp-4A0h]
  __int128 v92; // [rsp+4E0h] [rbp-490h]
  __int128 v93; // [rsp+4F0h] [rbp-480h]
  math::meta::sp<math::meta::v4f,1,1>::packed v94; // [rsp+500h] [rbp-470h]
  math::meta::sp<math::meta::v4f,1,1>::packed v95; // [rsp+510h] [rbp-460h]
  __int128 v96; // [rsp+520h] [rbp-450h]
  math::meta::sp<math::meta::v4f,1,1>::packed v97; // [rsp+530h] [rbp-440h]
  math::meta::sp<math::meta::v4f,1,1>::packed v98; // [rsp+540h] [rbp-430h]
  __m128 v99; // [rsp+550h] [rbp-420h]
  __m128 v100; // [rsp+560h] [rbp-410h]
  __m128 v101; // [rsp+570h] [rbp-400h]
  __m128 v102; // [rsp+580h] [rbp-3F0h]
  __m128 v103; // [rsp+590h] [rbp-3E0h]
  __m128 v104; // [rsp+5A0h] [rbp-3D0h]
  __m128 v105; // [rsp+5B0h] [rbp-3C0h]
  __m128 v106; // [rsp+5C0h] [rbp-3B0h]
  __m128 v107; // [rsp+5D0h] [rbp-3A0h]
  __m128 v108; // [rsp+5E0h] [rbp-390h]
  __m128 v109; // [rsp+5F0h] [rbp-380h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v110; // [rsp+600h] [rbp-370h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v111; // [rsp+610h] [rbp-360h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v112; // [rsp+620h] [rbp-350h]
  __m128 v113; // [rsp+630h] [rbp-340h]
  __m128 v114; // [rsp+640h] [rbp-330h]
  __m128 v115; // [rsp+650h] [rbp-320h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v116; // [rsp+660h] [rbp-310h]
  __m128 v117; // [rsp+670h] [rbp-300h]
  math::meta::sp<math::meta::v4f,17185,4>::packed v118; // [rsp+680h] [rbp-2F0h]
  __int128 v119; // [rsp+690h] [rbp-2E0h]
  math::meta::sp<math::meta::v4f,1,1>::packed v120; // [rsp+6A0h] [rbp-2D0h]
  __int128 v121; // [rsp+6B0h] [rbp-2C0h]
  __int128 v122; // [rsp+6C0h] [rbp-2B0h]
  math::meta::sp<math::meta::v4f,1,1>::packed v123; // [rsp+6D0h] [rbp-2A0h]
  math::meta::sp<math::meta::v4f,1,1>::packed v124; // [rsp+6E0h] [rbp-290h]
  __int128 v125; // [rsp+6F0h] [rbp-280h]
  math::meta::sp<math::meta::v4f,1,1>::packed v126; // [rsp+700h] [rbp-270h]
  math::meta::sp<math::meta::v4f,1,1>::packed v127; // [rsp+710h] [rbp-260h]
  __m128 v128; // [rsp+720h] [rbp-250h]
  __m128 v129; // [rsp+730h] [rbp-240h]
  __m128 v130; // [rsp+740h] [rbp-230h]
  __m128 v131; // [rsp+750h] [rbp-220h]
  __m128 v132; // [rsp+760h] [rbp-210h]
  __m128 v133; // [rsp+770h] [rbp-200h]
  __m128 v134; // [rsp+780h] [rbp-1F0h]
  __m128 v135; // [rsp+790h] [rbp-1E0h]
  __m128 v136; // [rsp+7A0h] [rbp-1D0h]
  __m128 v137; // [rsp+7B0h] [rbp-1C0h]
  __m128 v138; // [rsp+7C0h] [rbp-1B0h] BYREF
  __m128i si128; // [rsp+7D0h] [rbp-1A0h] BYREF
  __m128i v140; // [rsp+7E0h] [rbp-190h] BYREF
  __m128 v141; // [rsp+7F0h] [rbp-180h]
  __m128 v142; // [rsp+800h] [rbp-170h]
  char v143[352]; // [rsp+810h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v143;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 16 9 dist4:850 64 16 12 centerX4:852 96 16 12 centerY4:853 128 16 12 centerZ4:854 160 16 14"
                        " neg_radius:855 192 16 11 planeX4:859 224 16 11 planeY4:860 256 16 11 planeZ4:861 288 16 11 planeW4:862";
  *(_QWORD *)(v3 + 16) = IntersectSpherePlaneBoundsOptimized;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862729] = -202178560;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 32));
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 64));
  if ( *(_WORD *)(((unsigned __int64)sphere >> 3) + 0x7FFF8000) )
    __asan_report_load16(sphere);
  p = sphere->_anon_0.p;
  v26 = p;
  v27 = p;
  v28 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v27), 0);
  *(__m128i *)(v3 + 64) = v28;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 96));
  if ( *(_WORD *)(((unsigned __int64)sphere >> 3) + 0x7FFF8000) )
    __asan_report_load16(sphere);
  v29 = sphere->_anon_0.p;
  v30 = v29;
  v31 = v29;
  v32 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v31), 85);
  *(__m128i *)(v3 + 96) = v32;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 128));
  if ( *(_WORD *)(((unsigned __int64)sphere >> 3) + 0x7FFF8000) )
    __asan_report_load16(sphere);
  v33 = sphere->_anon_0.p;
  v34 = v33;
  v35 = v33;
  v36 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v35), 170);
  *(__m128i *)(v3 + 128) = v36;
  if ( *(_WORD *)(((unsigned __int64)sphere >> 3) + 0x7FFF8000) )
    __asan_report_load16(sphere);
  v37 = sphere->_anon_0.p;
  v38 = v37;
  v39 = v37;
  v40 = v37;
  v41 = (__m128)_mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v40), 255);
  v42 = v41;
  v43 = xmmword_1A661F60;
  v24._anon_0.p = _mm_xor_ps(v41, (__m128)xmmword_1A661F60);
  math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1>::v(&v23);
  v23._anon_0.p = v24._anon_0.p;
  math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,30583,1>,1> *const)(v3 + 160));
  v44 = v23._anon_0.p;
  v45 = v23._anon_0.p;
  v46 = v23._anon_0.p;
  v47 = _mm_shuffle_epi32(_mm_load_si128((const __m128i *)&v46), 0);
  *(__m128i *)(v3 + 160) = v47;
  for ( i = 0; i < planeCount; i += 4 )
  {
    v16 = (unsigned __int64)&optimizedPlanes[i];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 192));
    if ( *(_WORD *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v16);
    *(_OWORD *)(v3 + 192) = *(_OWORD *)v16;
    v17 = (unsigned __int64)&optimizedPlanes[i + 1];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 224));
    if ( *(_WORD *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v17);
    *(_OWORD *)(v3 + 224) = *(_OWORD *)v17;
    v18 = (unsigned __int64)&optimizedPlanes[i + 2];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 256));
    if ( *(_WORD *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v18);
    *(_OWORD *)(v3 + 256) = *(_OWORD *)v18;
    v19 = (unsigned __int64)&optimizedPlanes[i + 3];
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv((math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)(v3 + 288));
    if ( *(_WORD *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load16(v19);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)v19;
    v6 = *(__m128 *)(v3 + 192);
    v48 = *(__m128 *)(v3 + 64);
    v49 = v6;
    v50 = v6;
    v51 = v6;
    v52 = v48;
    v53 = v48;
    v54 = v48;
    v55 = v6;
    v56 = v48;
    v57 = v6;
    v24._anon_0.p = _mm_mul_ps(v48, v6);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v22);
    v22._anon_0.p = v24._anon_0.p;
    v7 = *(__m128 *)(v3 + 288);
    v58 = v24._anon_0.p;
    v59 = v7;
    v60 = v7;
    v61 = v7;
    v62 = v24._anon_0.p;
    v63 = v24._anon_0.p;
    v64 = v24._anon_0.p;
    v65 = v7;
    v66 = v24._anon_0.p;
    v67 = v7;
    v24._anon_0.p = _mm_add_ps(v24._anon_0.p, v7);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v((math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4> *const)&v23);
    v23._anon_0.p = v24._anon_0.p;
    math::meta::lv<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::lv(&v24);
    v68 = v23._anon_0.p;
    v69 = v23._anon_0.p;
    v24._anon_0.p = v23._anon_0.p;
    *(math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,1,1>,1> *)(v3 + 32) = v23;
    v8 = *(__m128 *)(v3 + 224);
    v70 = *(__m128 *)(v3 + 96);
    v71 = v8;
    v72 = v8;
    v73 = v8;
    v74 = v70;
    v75 = v70;
    v76 = v70;
    v77 = v8;
    v78 = v70;
    v79 = v8;
    v24._anon_0.p = _mm_mul_ps(v70, v8);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v22);
    v22._anon_0.p = v24._anon_0.p;
    v80 = *(__m128 *)(v3 + 32);
    v81 = v24._anon_0.p;
    v82 = v24._anon_0.p;
    v83 = v24._anon_0.p;
    v84 = v80;
    v85 = v80;
    v86 = v80;
    v87 = v24._anon_0.p;
    v88 = v80;
    v89 = v24._anon_0.p;
    v23._anon_0.p = _mm_add_ps(v80, v24._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v24);
    v24._anon_0.p = v23._anon_0.p;
    v20 = (__int128 *)(v3 + 32);
    v9 = v23._anon_0.p;
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v9.m128_u64 = __asan_report_load16(v3 + 32);
    v90 = *v20;
    v91 = v9;
    v92 = v90;
    v93 = v90;
    v94 = v9;
    v95 = v9;
    v96 = v90;
    v97 = v9;
    v98 = v9;
    *v20 = (__int128)v9;
    v10 = *(__m128 *)(v3 + 256);
    v99 = *(__m128 *)(v3 + 128);
    v100 = v10;
    v101 = v10;
    v102 = v10;
    v103 = v99;
    v104 = v99;
    v105 = v99;
    v106 = v10;
    v107 = v99;
    v108 = v10;
    v24._anon_0.p = _mm_mul_ps(v99, v10);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v22);
    v22._anon_0.p = v24._anon_0.p;
    v109 = *(__m128 *)(v3 + 32);
    v110 = v24._anon_0.p;
    v111 = v24._anon_0.p;
    v112 = v24._anon_0.p;
    v113 = v109;
    v114 = v109;
    v115 = v109;
    v116 = v24._anon_0.p;
    v117 = v109;
    v118 = v24._anon_0.p;
    v23._anon_0.p = _mm_add_ps(v109, v24._anon_0.p);
    math::meta::v<math::meta::v4f,math::meta::sp<math::meta::v4f,17185,4>,4>::v(&v24);
    v24._anon_0.p = v23._anon_0.p;
    v21 = (__int128 *)(v3 + 32);
    v11 = v23._anon_0.p;
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      *(double *)v11.m128_u64 = __asan_report_load16(v3 + 32);
    v119 = *v21;
    v120 = v11;
    v121 = v119;
    v122 = v119;
    v123 = v11;
    v124 = v11;
    v125 = v119;
    v126 = v11;
    v127 = v11;
    *v21 = (__int128)v11;
    v12 = *(__m128 *)(v3 + 160);
    v128 = *(__m128 *)(v3 + 32);
    v129 = v12;
    v130 = v12;
    v131 = v12;
    v132 = v128;
    v133 = v128;
    v134 = v128;
    v135 = v12;
    v136 = v128;
    v137 = v12;
    v138 = _mm_cmplt_ps(v128, v12);
    v24._anon_0.p = (math::meta::sp<math::meta::v4f,17185,4>::packed)_mm_load_si128((const __m128i *)&v138);
    math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4>::v((math::meta::v<math::meta::v4i,math::meta::sp<math::meta::v4i,17185,4>,4> *const)&v23);
    v23._anon_0.p = (math::meta::sp<math::meta::v4f,1,1>::packed)_mm_load_si128((const __m128i *)&v24);
    si128 = _mm_load_si128((const __m128i *)&v23);
    v140 = _mm_load_si128(&si128);
    v141 = (__m128)_mm_load_si128(&v140);
    v142 = v141;
    if ( _mm_movemask_ps(v141) )
    {
      result = 0;
      goto LABEL_30;
    }
  }
  result = 1;
LABEL_30:
  if ( v143 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 880: range 000000000CBF0CCB-000000000CBF0EEA
float __cdecl RayDistanceToFrustumOriented(const Ray *ray, const Plane *p, const int planeCount, int *planeNumber)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  float result; // xmm0_4
  float maxDistance; // [rsp+28h] [rbp-68h]
  int i; // [rsp+2Ch] [rbp-64h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 8 dist:885";
  *(_QWORD *)(v4 + 16) = RayDistanceToFrustumOriented;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  maxDistance = INFINITY;
  if ( *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)planeNumber & 7) + 3) >= *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(planeNumber);
  }
  *planeNumber = -1;
  for ( i = 0; i < planeCount; ++i )
  {
    if ( IntersectRayPlaneOriented(ray, p, (float *)(v4 + 32)) && maxDistance > *(float *)(v4 + 32) )
    {
      maxDistance = *(float *)(v4 + 32);
      if ( *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)planeNumber & 7) + 3) >= *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(planeNumber);
      }
      *planeNumber = i;
    }
    ++p;
  }
  if ( *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)planeNumber & 7) + 3) >= *(_BYTE *)(((unsigned __int64)planeNumber >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(planeNumber);
  }
  if ( *planeNumber == -1 )
    result = -1.0;
  else
    result = maxDistance;
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 901: range 000000000CBF0EEB-000000000CBF0F9C
float __cdecl PointDistanceToFrustum(const Vector4f *point, const Plane *p, const int planeCount)
{
  __m128i v3; // xmm0
  float maxDistanceNegative; // [rsp+24h] [rbp-Ch]
  int i; // [rsp+28h] [rbp-8h]
  float dist; // [rsp+2Ch] [rbp-4h]

  v3 = (__m128i)0xFF800000;
  maxDistanceNegative = -INFINITY;
  for ( i = 0; i < planeCount; ++i )
  {
    *(float *)v3.m128i_i32 = Plane::GetDistanceToPoint(p, point);
    dist = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v3 = 0LL;
    if ( dist < 0.0 )
    {
      v3 = (__m128i)LODWORD(dist);
      if ( dist > maxDistanceNegative )
      {
        v3 = (__m128i)LODWORD(dist);
        maxDistanceNegative = dist;
      }
    }
    ++p;
  }
  if ( (float)-std::numeric_limits<float>::infinity() == maxDistanceNegative )
    return 0.0;
  else
    return -maxDistanceNegative;
};

// Line 918: range 000000000CBF0F9D-000000000CBF11A9
bool __cdecl IntersectTriTri(
        const Vector3f *a0,
        const Vector3f *b0,
        const Vector3f *c0,
        const Vector3f *a1,
        const Vector3f *b1,
        const Vector3f *c1,
        Vector3f *intersectionLine0,
        Vector3f *intersectionLine1,
        bool *coplanar)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  float *Ptr; // r15
  float *v13; // r14
  float *v14; // rax
  bool v15; // cl
  bool result; // al
  float *V1; // [rsp+8h] [rbp-D8h]
  float *V2; // [rsp+10h] [rbp-D0h]
  float *U0; // [rsp+18h] [rbp-C8h]
  float *U1; // [rsp+20h] [rbp-C0h]
  float *U2; // [rsp+28h] [rbp-B8h]
  bool ret; // [rsp+6Fh] [rbp-71h]
  char v27[112]; // [rsp+70h] [rbp-70h] BYREF

  v9 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_0(64LL);
    if ( v10 )
      v9 = v10;
  }
  *(_QWORD *)v9 = 1102416563LL;
  *(_QWORD *)(v9 + 8) = "1 32 4 15 coplanarInt:919";
  *(_QWORD *)(v9 + 16) = IntersectTriTri;
  v11 = v9 >> 3;
  *(_DWORD *)(v11 + 2147450880) = -235802127;
  *(_DWORD *)(v11 + 2147450884) = -202116348;
  Ptr = Vector3f::GetPtr(intersectionLine1);
  v13 = Vector3f::GetPtr(intersectionLine0);
  U2 = Vector3f::GetPtr((Vector3f *const)c1);
  U1 = Vector3f::GetPtr((Vector3f *const)b1);
  U0 = Vector3f::GetPtr((Vector3f *const)a1);
  V2 = Vector3f::GetPtr((Vector3f *const)c0);
  V1 = Vector3f::GetPtr((Vector3f *const)b0);
  v14 = Vector3f::GetPtr((Vector3f *const)a0);
  ret = tri_tri_intersect_with_isectline(v14, V1, V2, U0, U1, U2, (int *)(v9 + 32), v13, Ptr) != 0;
  v15 = *(_DWORD *)(v9 + 32) != 0;
  if ( *(_BYTE *)(((unsigned __int64)coplanar >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)coplanar & 7) >= *(_BYTE *)(((unsigned __int64)coplanar >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(coplanar);
  }
  *coplanar = v15;
  result = ret;
  if ( v27 == (char *)v9 )
  {
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 1172321806LL;
    *(_QWORD *)((v9 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 929: range 000000000CBF11AA-000000000CBF132C
bool __cdecl IntersectRayPlane(const Ray *ray, const Plane *plane, float *enter)
{
  __m128i v3; // xmm0
  const Vector3f *Normal; // rbx
  const Vector3f *Direction; // rax
  const Vector3f *v6; // rbx
  const Vector3f *Origin; // rax
  float *v8; // rax
  float *v9; // rdx
  float v11; // [rsp+4h] [rbp-3Ch]
  float vdot; // [rsp+28h] [rbp-18h]
  float ndot; // [rsp+2Ch] [rbp-14h]

  if ( !enter )
  {
    __asan_handle_no_return(ray);
    __assert_fail(
      "enter != __null",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0x3A2u,
      "bool IntersectRayPlane(const Ray&, const Plane&, float*)");
  }
  Normal = Plane::GetNormal(plane);
  Direction = Ray::GetDirection(ray);
  *(float *)v3.m128i_i32 = Dot(Direction, Normal);
  vdot = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v6 = Plane::GetNormal(plane);
  Origin = Ray::GetOrigin(ray);
  v11 = -Dot(Origin, v6);
  v8 = (float *)Plane::d(plane);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  ndot = v11 - *v9;
  if ( CompareApproximately(vdot, 0.0, 0.000001) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)enter >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)enter & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(enter);
  }
  *enter = ndot / vdot;
  return *enter > 0.0;
};

// Line 948: range 000000000CBF132D-000000000CBF14C4
bool __cdecl IntersectRayPlaneOriented(const Ray *ray, const Plane *plane, float *enter)
{
  __m128i v3; // xmm0
  const Vector3f *Normal; // rbx
  const Vector3f *Direction; // rax
  const Vector3f *v6; // rbx
  const Vector3f *Origin; // rax
  float *v8; // rax
  float *v9; // rdx
  float v11; // [rsp+4h] [rbp-3Ch]
  float vdot; // [rsp+28h] [rbp-18h]
  float ndot; // [rsp+2Ch] [rbp-14h]

  if ( !enter )
  {
    __asan_handle_no_return(ray);
    __assert_fail(
      "enter != __null",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0x3B5u,
      "bool IntersectRayPlaneOriented(const Ray&, const Plane&, float*)");
  }
  Normal = Plane::GetNormal(plane);
  Direction = Ray::GetDirection(ray);
  *(float *)v3.m128i_i32 = Dot(Direction, Normal);
  vdot = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v6 = Plane::GetNormal(plane);
  Origin = Ray::GetOrigin(ray);
  v11 = -Dot(Origin, v6);
  v8 = (float *)Plane::d(plane);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  ndot = v11 - *v9;
  if ( vdot > 0.0 )
    return 0;
  if ( CompareApproximately(vdot, 0.0, 0.000001) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)enter >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)enter & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(enter);
  }
  *enter = ndot / vdot;
  return *enter > 0.0;
};

// Line 971: range 000000000CBF14C5-000000000CBF17CE
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectSegmentPlane(const Vector3f *p1, const Vector3f *p2, const Plane *plane, Vector3f *result)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // xmm0_8
  __int64 v9; // rax
  __m128i v10; // xmm0
  const Vector3f *Normal; // rax
  bool v12; // al
  const Vector3f *v13; // rdx
  float *v14; // rax
  float *v15; // rdx
  float v16; // [rsp+Ch] [rbp-A4h]
  const Vector3f *p1a; // [rsp+28h] [rbp-88h]
  float vdot; // [rsp+38h] [rbp-78h]
  float u; // [rsp+40h] [rbp-70h]
  Vector3f rhs; // [rsp+44h] [rbp-6Ch] BYREF
  char v23[96]; // [rsp+50h] [rbp-60h] BYREF

  p1a = p1;
  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    p1 = (const Vector3f *)64;
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 12 7 vec:973";
  *(_QWORD *)(v5 + 16) = IntersectSegmentPlane;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202177536;
  if ( !result )
  {
    __asan_handle_no_return(p1);
    __assert_fail(
      "result != __null",
      "./src/pathfinding/Internal/Geometry/Intersection.cpp",
      0x3CCu,
      "bool IntersectSegmentPlane(const Vector3f&, const Vector3f&, const Plane&, Vector3f*)");
  }
  *(Vector3f *)((char *)&v4 - 8) = operator-(p2, p1a);
  v9 = v8;
  v10 = v4;
  *(_QWORD *)(v5 + 32) = v9;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  Normal = Plane::GetNormal(plane);
  *(float *)v10.m128i_i32 = Dot((const Vector3f *)(v5 + 32), Normal);
  vdot = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  if ( CompareApproximately(vdot, 0.0, 0.000001) )
  {
    v12 = 0;
  }
  else
  {
    v13 = Plane::GetNormal(plane);
    v16 = -Dot(p1a, v13);
    v14 = (float *)Plane::d(plane);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    u = (float)(v16 - *v15) / vdot;
    if ( u >= 0.0 && u <= 1.0 )
    {
      rhs = operator*((const Vector3f *)(v5 + 32), u);
      if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&result->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(result, 12LL);
      }
      *result = operator+(p1a, &rhs);
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v23 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v12;
};

// Line 991: range 000000000CBF17CF-000000000CBF1C99
bool __cdecl IntersectLineSegmentWithLine(
        const Vector2f *p1,
        const Vector2f *p2,
        const Vector2f *p3,
        const Vector2f *p4,
        Vector2f *result)
{
  double v5; // xmm0_8
  double v6; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm0_8
  float bx_0; // [rsp+38h] [rbp-28h]
  float by; // [rsp+3Ch] [rbp-24h]
  float dx_0; // [rsp+40h] [rbp-20h]
  float dy; // [rsp+44h] [rbp-1Ch]
  float cx_0; // [rsp+4Ch] [rbp-14h]
  float t; // [rsp+54h] [rbp-Ch]
  Vector2f v21; // [rsp+58h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p2);
  }
  *(float *)&v5 = p2->x;
  if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(p1);
  }
  bx_0 = *(float *)&v5 - p1->x;
  if ( *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p2->y);
  }
  *(float *)&v6 = p2->y;
  if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load4(&p1->y);
  }
  by = *(float *)&v6 - p1->y;
  if ( *(_BYTE *)(((unsigned __int64)p4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p4);
  }
  *(float *)&v7 = p4->x;
  if ( *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000) )
  {
    v7 = __asan_report_load4(p3);
  }
  dx_0 = *(float *)&v7 - p3->x;
  if ( *(_BYTE *)(((unsigned __int64)&p4->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p4 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p4->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p4->y);
  }
  *(float *)&v8 = p4->y;
  if ( *(_BYTE *)(((unsigned __int64)&p3->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p3->y >> 3) + 0x7FFF8000) )
  {
    v8 = __asan_report_load4(&p3->y);
  }
  dy = *(float *)&v8 - p3->y;
  if ( CompareApproximately((float)(bx_0 * dy) - (float)(by * dx_0), 0.0, 0.000001) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p3);
  }
  *(float *)&v10 = p3->x;
  if ( *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) )
  {
    v10 = __asan_report_load4(p1);
  }
  cx_0 = *(float *)&v10 - p1->x;
  if ( *(_BYTE *)(((unsigned __int64)&p3->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p3->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p3->y);
  }
  *(float *)&v11 = p3->y;
  if ( *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->y >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load4(&p1->y);
  }
  t = (float)((float)(cx_0 * dy) - (float)((float)(*(float *)&v11 - p1->y) * dx_0))
    / (float)((float)(bx_0 * dy) - (float)(by * dx_0));
  if ( t < -0.0000099999997 || (float)(0.0000099999997 + 1.0) < t )
    return 0;
  Vector2f::Vector2f(&v21, (float)(t * bx_0) + p1->x, p1->y + (float)(t * by));
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&result->y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(result, 8LL);
  }
  *result = v21;
  return 1;
};

// Line 1014: range 000000000CBF1C9A-000000000CBF2BA0
// local variable allocation has failed, the output may be wrong!
bool __cdecl IntersectSphereTriangle(
        const Sphere *s,
        const Vector3f *vert0,
        const Vector3f *vert1,
        const Vector3f *vert2)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  float *Radius; // rax
  float *v9; // rdx
  __int64 v10; // xmm0_8
  bool result; // al
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  float v19; // xmm0_4
  __m128i v20; // xmm0
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float radius2; // [rsp+28h] [rbp-F8h]
  float A00; // [rsp+30h] [rbp-F0h]
  float A01; // [rsp+34h] [rbp-ECh]
  float A11; // [rsp+38h] [rbp-E8h]
  float tempB0; // [rsp+3Ch] [rbp-E4h]
  float tempB1; // [rsp+40h] [rbp-E0h]
  float C; // [rsp+44h] [rbp-DCh]
  float Det; // [rsp+48h] [rbp-D8h]
  float u; // [rsp+4Ch] [rbp-D4h]
  float v; // [rsp+50h] [rbp-D0h]
  const Vector3f *center; // [rsp+58h] [rbp-C8h]
  double Numer; // [rsp+60h] [rbp-C0h]
  double Denom; // [rsp+68h] [rbp-B8h]
  double Denoma; // [rsp+68h] [rbp-B8h]
  double Denomb; // [rsp+68h] [rbp-B8h]
  double Tmp0; // [rsp+70h] [rbp-B0h]
  double Tmp0a; // [rsp+70h] [rbp-B0h]
  double Tmp1; // [rsp+78h] [rbp-A8h]
  double Tmp1a; // [rsp+78h] [rbp-A8h]
  char v46[160]; // [rsp+80h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 12 9 Diff:1018 64 12 10 Edge0:1038 96 12 10 Edge1:1039";
  *(_QWORD *)(v5 + 16) = IntersectSphereTriangle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -202177536;
  center = Sphere::GetCenter(s);
  Radius = (float *)Sphere::GetRadius(s);
  v9 = Radius;
  if ( *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)Radius & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(Radius);
  }
  radius2 = *v9 * *v9;
  Vector3f::Vector3f((Vector3f *const)(v5 + 32));
  *(Vector3f *)((char *)&v4 - 8) = operator-(vert1, center);
  *(_QWORD *)(v5 + 32) = v10;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v5 + 32));
  if ( radius2 >= COERCE_FLOAT(_mm_cvtsi128_si32(v4)) )
  {
    result = 1;
    goto LABEL_60;
  }
  *(Vector3f *)((char *)&v4 - 8) = operator-(vert2, center);
  *(_QWORD *)(v5 + 32) = v12;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v5 + 32));
  if ( radius2 >= COERCE_FLOAT(_mm_cvtsi128_si32(v4)) )
  {
    result = 1;
    goto LABEL_60;
  }
  *(Vector3f *)((char *)&v4 - 8) = operator-(vert0, center);
  *(_QWORD *)(v5 + 32) = v13;
  *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
  SqrMagnitude((const Vector3f *)(v5 + 32));
  if ( radius2 >= COERCE_FLOAT(_mm_cvtsi128_si32(v4)) )
  {
    result = 1;
    goto LABEL_60;
  }
  *(Vector3f *)((char *)&v4 - 8) = operator-(vert1, vert0);
  *(_QWORD *)(v5 + 64) = v14;
  *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
  *(Vector3f *)((char *)&v4 - 8) = operator-(vert2, vert0);
  v16 = v15;
  v17 = v4;
  *(_QWORD *)(v5 + 96) = v16;
  *(_DWORD *)(v5 + 104) = v4.m128i_i32[0];
  Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 64));
  A00 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *(float *)v17.m128i_i32 = Dot((const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 96));
  A01 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  *(float *)v17.m128i_i32 = Dot((const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 96));
  A11 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  *(float *)v17.m128i_i32 = Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 64));
  tempB0 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  *(float *)v17.m128i_i32 = Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 96));
  tempB1 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  *(float *)v17.m128i_i32 = Dot((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 32));
  C = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  v18 = (__m128i)LODWORD(A00);
  *(float *)v18.m128i_i32 = (float)(A00 * A11) - (float)(A01 * A01);
  Abs(*(float *)v18.m128i_i32);
  Det = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
  u = (float)(A01 * tempB1) - (float)(A11 * tempB0);
  v = (float)(A01 * tempB0) - (float)(A00 * tempB1);
  if ( Det < (float)(u + v) )
  {
    if ( u >= 0.0 )
    {
      if ( v >= 0.0 )
      {
        Numer = (float)((float)((float)(A11 + tempB1) - A01) - tempB0);
        if ( Numer <= 0.0 )
          goto LABEL_55;
        Denomb = (float)((float)(A00 - (float)(A01 + A01)) + A11);
        if ( Numer < Denomb )
        {
          v24 = Numer / Denomb;
          v21 = (float)((float)((float)((float)(tempB1 + tempB1)
                                      + (float)((float)(A01 * v24) + (float)(A11 * (float)(1.0 - v24))))
                              * (float)(1.0 - v24))
                      + (float)((float)((float)(tempB0 + tempB0)
                                      + (float)((float)(A00 * v24) + (float)(A01 * (float)(1.0 - v24))))
                              * v24))
              + C;
        }
        else
        {
          v21 = (float)((float)(tempB0 + tempB0) + A00) + C;
        }
      }
      else
      {
        Tmp0a = (float)(A01 + tempB1);
        Tmp1a = (float)(A00 + tempB0);
        if ( Tmp1a <= Tmp0a )
        {
          if ( Tmp1a <= 0.0 )
          {
LABEL_50:
            v19 = Abs((float)((float)(tempB0 + tempB0) + A00) + C);
            goto LABEL_59;
          }
          if ( tempB0 < 0.0 )
            goto LABEL_30;
          goto LABEL_52;
        }
        Denoma = (float)((float)(A00 - (float)(A01 + A01)) + A11);
        if ( Tmp1a - Tmp0a < Denoma )
        {
          v23 = (Tmp1a - Tmp0a) / Denoma;
          v21 = (float)((float)((float)((float)(tempB1 + tempB1)
                                      + (float)((float)(A01 * (float)(1.0 - v23)) + (float)(A11 * v23)))
                              * v23)
                      + (float)((float)((float)(tempB0 + tempB0)
                                      + (float)((float)(A00 * (float)(1.0 - v23)) + (float)(A01 * v23)))
                              * (float)(1.0 - v23)))
              + C;
        }
        else
        {
          v21 = C + A11 + tempB1 + tempB1;
        }
      }
    }
    else
    {
      Tmp0 = (float)(A01 + tempB0);
      Tmp1 = (float)(A11 + tempB1);
      if ( Tmp1 <= Tmp0 )
      {
        if ( Tmp1 <= 0.0 )
          goto LABEL_55;
        if ( tempB1 >= 0.0 )
          goto LABEL_52;
        goto LABEL_26;
      }
      Denom = (float)((float)(A00 - (float)(A01 + A01)) + A11);
      if ( Tmp1 - Tmp0 < Denom )
      {
        v22 = (Tmp1 - Tmp0) / Denom;
        v21 = (float)((float)((float)((float)(tempB1 + tempB1)
                                    + (float)((float)(A01 * v22) + (float)(A11 * (float)(1.0 - v22))))
                            * (float)(1.0 - v22))
                    + (float)((float)((float)(tempB0 + tempB0)
                                    + (float)((float)(A00 * v22) + (float)(A01 * (float)(1.0 - v22))))
                            * v22))
            + C;
      }
      else
      {
        v21 = (float)((float)(tempB0 + tempB0) + A00) + C;
      }
    }
    v19 = Abs(v21);
    goto LABEL_59;
  }
  if ( u >= 0.0 )
  {
    if ( v >= 0.0 )
    {
      v20 = 0LL;
      if ( Det == 0.0 )
      {
        *(float *)v20.m128i_i32 = std::numeric_limits<float>::max();
        v19 = Abs(COERCE_FLOAT(_mm_cvtsi128_si32(v20)));
      }
      else
      {
        v19 = Abs(
                (float)((float)((float)((float)(tempB1 + tempB1)
                                      + (float)((float)(A01 * (float)(u * (float)(1.0 / Det)))
                                              + (float)(A11 * (float)(v * (float)(1.0 / Det)))))
                              * (float)(v * (float)(1.0 / Det)))
                      + (float)((float)((float)(tempB0 + tempB0)
                                      + (float)((float)(A00 * (float)(u * (float)(1.0 / Det)))
                                              + (float)(A01 * (float)(v * (float)(1.0 / Det)))))
                              * (float)(u * (float)(1.0 / Det))))
              + C);
      }
      goto LABEL_59;
    }
    if ( tempB0 < 0.0 )
    {
      if ( (float)-tempB0 >= A00 )
        goto LABEL_50;
LABEL_30:
      v19 = Abs((float)(tempB0 * (float)((float)-tempB0 / A00)) + C);
      goto LABEL_59;
    }
LABEL_52:
    v19 = Abs(C);
    goto LABEL_59;
  }
  if ( v >= 0.0 )
  {
    if ( tempB1 >= 0.0 )
      goto LABEL_52;
    if ( (float)-tempB1 >= A11 )
      goto LABEL_55;
  }
  else
  {
    if ( tempB0 < 0.0 )
    {
      if ( (float)-tempB0 >= A00 )
        goto LABEL_50;
      goto LABEL_30;
    }
    if ( tempB1 >= 0.0 )
      goto LABEL_52;
    if ( (float)-tempB1 >= A11 )
    {
LABEL_55:
      v19 = Abs((float)((float)(tempB1 + tempB1) + A11) + C);
      goto LABEL_59;
    }
  }
LABEL_26:
  v19 = Abs((float)(tempB1 * (float)((float)-tempB1 / A11)) + C);
LABEL_59:
  result = radius2 >= v19;
LABEL_60:
  if ( v46 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1214: range 000000000CBF2BA1-000000000CBF2C07
bool __cdecl TestPlanesAABB(const Plane *planes, const int planeCount, const AABB *bounds)
{
  uint32_t planeMask; // [rsp+28h] [rbp-8h]
  int i; // [rsp+2Ch] [rbp-4h]

  planeMask = 0;
  if ( planeCount == 6 )
  {
    planeMask = 63;
  }
  else
  {
    for ( i = 0; i < planeCount; ++i )
      planeMask |= 1 << i;
  }
  return IntersectAABBFrustum(bounds, planes, planeMask);
};
