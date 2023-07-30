// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Quaternion.cpp

// Line 6: range 000000000CC14038-000000000CC145B5
// local variable allocation has failed, the output may be wrong!
Quaternionf __cdecl Slerp(const Quaternionf *q1, const Quaternionf *q2, float t)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __m128i v6; // xmm0
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  Quaternionf v17; // rax
  __int64 v18; // xmm0_8
  __int64 v19; // xmm1_8
  float dot; // [rsp+2Ch] [rbp-74h]
  float angle; // [rsp+30h] [rbp-70h]
  float sinadiv; // [rsp+34h] [rbp-6Ch]
  float sinat; // [rsp+38h] [rbp-68h]
  float sinaomt; // [rsp+3Ch] [rbp-64h]
  char v26[96]; // [rsp+40h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 tmpQuat:12";
  *(_QWORD *)(v3 + 16) = Slerp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  *(float *)v6.m128i_i32 = Dot(q1, q2);
  dot = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  Quaternionf::Quaternionf((Quaternionf *const)(v3 + 32));
  if ( dot >= 0.0 )
  {
    if ( ((unsigned __int8)q2 & 7) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&q2->w + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)q2 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&q2->w + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(q2, 16LL);
    }
    v10 = *(_QWORD *)&q2->z;
    *(_QWORD *)(v3 + 32) = *(_QWORD *)&q2->x;
    *(_QWORD *)(v3 + 40) = v10;
  }
  else
  {
    dot = -dot;
    if ( *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->w);
    }
    v7 = -q2->w;
    if ( *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->z);
    }
    v8 = -q2->z;
    if ( *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->y);
    }
    v9 = -q2->y;
    if ( *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q2);
    }
    Quaternionf::Set((Quaternionf *const)(v3 + 32), -q2->x, v9, v8, v7);
  }
  if ( dot >= 0.94999999 )
  {
    v17 = Lerp(q1, (const Quaternionf *)(v3 + 32), t);
  }
  else
  {
    v11 = _mm_cvtsi32_si128(LODWORD(dot));
    *(float *)v11.m128i_i32 = std::acos(*(float *)v11.m128i_i32);
    angle = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    sinadiv = 1.0 / std::sin(angle);
    v12 = (__m128i)LODWORD(angle);
    *(float *)v12.m128i_i32 = std::sin(angle * t);
    sinat = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    v13 = (__m128i)0x3F800000u;
    *(float *)v13.m128i_i32 = std::sin((float)(1.0 - t) * angle);
    sinaomt = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
    if ( *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->w);
    }
    v14 = (float)((float)(*(float *)(v3 + 44) * sinat) + (float)(q1->w * sinaomt)) * sinadiv;
    if ( *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->z);
    }
    v15 = (float)((float)(*(float *)(v3 + 40) * sinat) + (float)(q1->z * sinaomt)) * sinadiv;
    if ( *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->y);
    }
    v16 = (float)((float)(*(float *)(v3 + 36) * sinat) + (float)(q1->y * sinaomt)) * sinadiv;
    if ( *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q1);
    }
    Quaternionf::Set(
      (Quaternionf *const)(v3 + 32),
      (float)((float)(*(float *)(v3 + 32) * sinat) + (float)(q1->x * sinaomt)) * sinadiv,
      v16,
      v15,
      v14);
    v17 = *(Quaternionf *)(v3 + 32);
  }
  v18 = *(_QWORD *)&v17.x;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v19 = *(_QWORD *)&v17.z;
  result.z = *(float *)&v19;
  result.w = *((float *)&v19 + 1);
  result.x = *(float *)&v18;
  result.y = *((float *)&v18 + 1);
  return result;
};

// Line 45: range 000000000CC145B6-000000000CC14718
float __cdecl AngularDistance(const Quaternionf *lhs, const Quaternionf *rhs)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  float *v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  float result; // xmm0_4
  float __a; // [rsp+1Ch] [rbp-64h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 dot:46";
  *(_QWORD *)(v3 + 16) = AngularDistance;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(float *)v2.m128i_i32 = Dot(lhs, rhs);
  *(_DWORD *)(v3 + 32) = _mm_cvtsi128_si32(v2);
  if ( *(float *)(v3 + 32) < 0.0 )
    *(float *)(v3 + 32) = -*(float *)(v3 + 32);
  __a = 1.0;
  v6 = (float *)std::min<float>(&__a, (const float *)(v3 + 32));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = std::acos(*v7);
  result = v8 + v8;
  if ( v11 == (char *)v3 )
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

// Line 53: range 000000000CC14719-000000000CC148C3
Quaternionf __cdecl CreateQuaternionFromAxisQuaternions(
        const Quaternionf *q1,
        const Quaternionf *q2,
        const Quaternionf *q3,
        Quaternionf *result)
{
  float v4; // xmm0_4
  __int64 v5; // xmm0_8
  __int64 v6; // xmm1_8
  Quaternionf lhs; // [rsp+30h] [rbp-20h] BYREF
  Quaternionf v10; // 0:xmm0_8.8,8:xmm1_8.8

  lhs = operator*(q1, q2);
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(result, 16LL);
  }
  *result = operator*(&lhs, q3);
  v4 = SqrMagnitude(result);
  if ( !CompareApproximately(v4, 1.0, 0.000001) )
  {
    __asan_handle_no_return(result);
    __assert_fail(
      "CompareApproximately(SqrMagnitude(result), 1.0F)",
      "./src/pathfinding/Internal/Math/Quaternion.cpp",
      0x37u,
      "Quaternionf CreateQuaternionFromAxisQuaternions(const Quaternionf&, const Quaternionf&, const Quaternionf&, Quaternionf&)");
  }
  if ( ((unsigned __int8)result & 7) >= *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&result->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(result, 16LL);
  }
  v5 = *(_QWORD *)&result->x;
  v6 = *(_QWORD *)&result->z;
  v10.z = *(float *)&v6;
  v10.w = *((float *)&v6 + 1);
  v10.x = *(float *)&v5;
  v10.y = *((float *)&v5 + 1);
  return v10;
};

// Line 60: range 000000000CC148C4-000000000CC14E0C
Quaternionf __cdecl EulerToQuaternion(const Vector3f *someEulerAngles, math::RotationOrder order)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __m128i x_low; // xmm0
  __m128i v6; // xmm0
  __m128i y_low; // xmm0
  __m128i v8; // xmm0
  __m128i z_low; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // xmm0_8
  __int64 v12; // xmm1_8
  __int64 v13; // [rsp+8h] [rbp-F8h]
  float cX_0; // [rsp+28h] [rbp-D8h]
  float sX; // [rsp+2Ch] [rbp-D4h]
  float cY; // [rsp+30h] [rbp-D0h]
  float sY; // [rsp+34h] [rbp-CCh]
  float cZ; // [rsp+38h] [rbp-C8h]
  char v19[192]; // [rsp+40h] [rbp-C0h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 5 qX:70 64 16 5 qY:71 96 16 5 qZ:72 128 16 6 ret:73";
  *(_QWORD *)(v2 + 16) = EulerToQuaternion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)someEulerAngles >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)someEulerAngles & 7) + 3) >= *(_BYTE *)(((unsigned __int64)someEulerAngles >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(someEulerAngles);
  }
  x_low = (__m128i)LODWORD(someEulerAngles->x);
  *(float *)x_low.m128i_i32 = std::cos(*(float *)x_low.m128i_i32 / 2.0);
  cX_0 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  if ( *(_BYTE *)(((unsigned __int64)someEulerAngles >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)someEulerAngles & 7) + 3) >= *(_BYTE *)(((unsigned __int64)someEulerAngles >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(someEulerAngles);
  }
  v6 = (__m128i)LODWORD(someEulerAngles->x);
  *(float *)v6.m128i_i32 = std::sin(*(float *)v6.m128i_i32 / 2.0);
  sX = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( *(_BYTE *)(((unsigned __int64)&someEulerAngles->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)someEulerAngles + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&someEulerAngles->y >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&someEulerAngles->y);
  }
  y_low = (__m128i)LODWORD(someEulerAngles->y);
  *(float *)y_low.m128i_i32 = std::cos(*(float *)y_low.m128i_i32 / 2.0);
  cY = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  if ( *(_BYTE *)(((unsigned __int64)&someEulerAngles->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)someEulerAngles + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&someEulerAngles->y >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&someEulerAngles->y);
  }
  v8 = (__m128i)LODWORD(someEulerAngles->y);
  *(float *)v8.m128i_i32 = std::sin(*(float *)v8.m128i_i32 / 2.0);
  sY = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  if ( *(_BYTE *)(((unsigned __int64)&someEulerAngles->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)someEulerAngles + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&someEulerAngles->z >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&someEulerAngles->z);
  }
  z_low = (__m128i)LODWORD(someEulerAngles->z);
  *(float *)z_low.m128i_i32 = std::cos(*(float *)z_low.m128i_i32 / 2.0);
  cZ = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
  if ( *(_BYTE *)(((unsigned __int64)&someEulerAngles->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)someEulerAngles + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&someEulerAngles->z >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&someEulerAngles->z);
  }
  v10 = (__m128i)LODWORD(someEulerAngles->z);
  *(float *)v10.m128i_i32 = std::sin(*(float *)v10.m128i_i32 / 2.0);
  Quaternionf::Quaternionf((Quaternionf *const)(v2 + 32), sX, 0.0, 0.0, cX_0);
  Quaternionf::Quaternionf((Quaternionf *const)(v2 + 64), 0.0, sY, 0.0, cY);
  Quaternionf::Quaternionf((Quaternionf *const)(v2 + 96), 0.0, 0.0, COERCE_FLOAT(_mm_cvtsi128_si32(v10)), cZ);
  Quaternionf::Quaternionf((Quaternionf *const)(v2 + 128));
  switch ( order )
  {
    case kOrderXYZ:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 96),
        (const Quaternionf *)(v2 + 64),
        (const Quaternionf *)(v2 + 32),
        (Quaternionf *)(v2 + 128));
      break;
    case kOrderXZY:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 64),
        (const Quaternionf *)(v2 + 96),
        (const Quaternionf *)(v2 + 32),
        (Quaternionf *)(v2 + 128));
      break;
    case kOrderYZX:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 32),
        (const Quaternionf *)(v2 + 96),
        (const Quaternionf *)(v2 + 64),
        (Quaternionf *)(v2 + 128));
      break;
    case kOrderYXZ:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 96),
        (const Quaternionf *)(v2 + 32),
        (const Quaternionf *)(v2 + 64),
        (Quaternionf *)(v2 + 128));
      break;
    case kOrderZXY:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 64),
        (const Quaternionf *)(v2 + 32),
        (const Quaternionf *)(v2 + 96),
        (Quaternionf *)(v2 + 128));
      break;
    case kOrderZYX:
      CreateQuaternionFromAxisQuaternions(
        (const Quaternionf *)(v2 + 32),
        (const Quaternionf *)(v2 + 64),
        (const Quaternionf *)(v2 + 96),
        (Quaternionf *)(v2 + 128));
      break;
    default:
      break;
  }
  v11 = *(_QWORD *)(v2 + 128);
  v13 = *(_QWORD *)(v2 + 136);
  if ( v19 == (char *)v2 )
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
  v12 = v13;
  result.z = *(float *)&v12;
  result.w = *((float *)&v12 + 1);
  result.x = *(float *)&v11;
  result.y = *((float *)&v11 + 1);
  return result;
};

// Line 120: range 000000000CC14E0D-000000000CC14F47
float __fastcall `anonymous namespace'::qAsin(float a, float b)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float result; // xmm0_4
  float __lo; // [rsp+18h] [rbp-68h] BYREF
  float __hi; // [rsp+1Ch] [rbp-64h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 b:119";
  *(_QWORD *)(v2 + 16) = `anonymous namespace'::qAsin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(float *)(v2 + 32) = b;
  __hi = 1.0;
  __lo = -1.0;
  v5 = (float *)std::clamp<float>((const float *)(v2 + 32), &__lo, &__hi);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  result = std::asin(*v6) * a;
  if ( v11 == (char *)v2 )
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

// Line 125: range 000000000CC14F48-000000000CC14F6F
float __cdecl `anonymous namespace'::qAtan2(float a, float b)
{
  return std::atan2(a, b);
};

// Line 130: range 000000000CC14F70-000000000CC14F83
float __cdecl `anonymous namespace'::qNull(float a, float b)
{
  return 0.0;
};

// Line 148: range 000000000CC14F84-000000000CC1606E
Vector3f __cdecl QuaternionToEuler(const Quaternionf *q, math::RotationOrder order)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  float x; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // rsi
  math::RotationOrder v9; // edx
  math::RotationOrder v10; // edx
  math::RotationOrder v11; // edx
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float z; // xmm1_4
  __int64 v26; // xmm0_8
  float inY; // [rsp+4h] [rbp-20Ch]
  float inZa; // [rsp+8h] [rbp-208h]
  __int64 inZ; // [rsp+8h] [rbp-208h]
  float a; // [rsp+44h] [rbp-1CCh]
  float b; // [rsp+48h] [rbp-1C8h]
  float c; // [rsp+4Ch] [rbp-1C4h]
  float e; // [rsp+50h] [rbp-1C0h]
  float a_2; // [rsp+54h] [rbp-1BCh]
  float b_2; // [rsp+58h] [rbp-1B8h]
  float c_2; // [rsp+5Ch] [rbp-1B4h]
  float e_2; // [rsp+60h] [rbp-1B0h]
  float a_3; // [rsp+64h] [rbp-1ACh]
  float b_3; // [rsp+68h] [rbp-1A8h]
  float c_3; // [rsp+6Ch] [rbp-1A4h]
  float e_3; // [rsp+70h] [rbp-1A0h]
  float a_1; // [rsp+74h] [rbp-19Ch]
  float b_1; // [rsp+78h] [rbp-198h]
  float c_1; // [rsp+7Ch] [rbp-194h]
  float e_1; // [rsp+80h] [rbp-190h]
  float a_0; // [rsp+84h] [rbp-18Ch]
  float b_0; // [rsp+88h] [rbp-188h]
  float c_0; // [rsp+8Ch] [rbp-184h]
  float e_0; // [rsp+90h] [rbp-180h]
  float a_4; // [rsp+94h] [rbp-17Ch]
  float b_4; // [rsp+98h] [rbp-178h]
  float c_4; // [rsp+9Ch] [rbp-174h]
  float e_4; // [rsp+A0h] [rbp-170h]
  Vector3f v55; // [rsp+A4h] [rbp-16Ch] BYREF
  common::milog::MiLogStream v56; // [rsp+B0h] [rbp-160h] BYREF
  char v57[320]; // [rsp+D0h] [rbp-140h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 12 7 rot:158 80 24 5 f:155 144 28 5 v:154 208 40 5 d:151";
  *(_QWORD *)(v2 + 16) = QuaternionToEuler;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862725] = -219020288;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( fabs(SqrMagnitude(q) - 1.0) >= 0.0000099999997 )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/pathfinding/Internal/Math/Quaternion.cpp",
      "QuaternionToEuler",
      149);
    common::milog::MiLogStream::operator()(&v56, "QuaternionToEuler: Input quaternion was not normalized");
    common::milog::MiLogStream::~MiLogStream(&v56);
    __asan_handle_no_return(&v56);
    __assert_fail(
      "false",
      "./src/pathfinding/Internal/Math/Quaternion.cpp",
      0x95u,
      "Vector3f QuaternionToEuler(const Quaternionf&, math::RotationOrder)");
  }
  if ( *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q);
  }
  *(float *)(v2 + 208) = q->x * q->x;
  x = q->x;
  if ( *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->y);
  }
  *(float *)(v2 + 212) = q->y * x;
  v6 = q->x;
  if ( *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->z);
  }
  *(float *)(v2 + 216) = q->z * v6;
  v7 = q->x;
  v8 = (((_BYTE)q + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->w);
  }
  *(float *)(v2 + 220) = q->w * v7;
  *(float *)(v2 + 224) = q->y * q->y;
  *(float *)(v2 + 228) = q->z * q->y;
  *(float *)(v2 + 232) = q->w * q->y;
  *(float *)(v2 + 236) = q->z * q->z;
  *(float *)(v2 + 240) = q->w * q->z;
  *(float *)(v2 + 244) = q->w * q->w;
  v9 = order;
  if ( *(_BYTE *)(((unsigned __int64)`anonymous namespace'::qFuncs[order] >> 3) + 0x7FFF8000) )
    __asan_report_load8(`anonymous namespace'::qFuncs[order], v8);
  *(_QWORD *)(v2 + 80) = `anonymous namespace'::qFuncs[v9][0];
  v10 = order;
  if ( *(_BYTE *)(((unsigned __int64)&`anonymous namespace'::qFuncs[order][1] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&`anonymous namespace'::qFuncs[order][1], v8);
  *(_QWORD *)(v2 + 88) = `anonymous namespace'::qFuncs[v10][1];
  v11 = order;
  if ( *(_BYTE *)(((unsigned __int64)&`anonymous namespace'::qFuncs[order][2] >> 3) + 0x7FFF8000) )
    __asan_report_load8(&`anonymous namespace'::qFuncs[order][2], v8);
  *(_QWORD *)(v2 + 96) = `anonymous namespace'::qFuncs[v11][2];
  Vector3f::Vector3f((Vector3f *const)(v2 + 48));
  switch ( order )
  {
    case kOrderXYZ:
      *(float *)(v2 + 168) = *(float *)(v2 + 216) - *(float *)(v2 + 232);
      v22 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
      *(float *)(v2 + 144) = v22 + v22;
      *(float *)(v2 + 148) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 236) - *(float *)(v2 + 224)) - *(float *)(v2 + 208));
      *(_DWORD *)(v2 + 152) = -1082130432;
      *(float *)(v2 + 156) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a_4 = *(float *)(v2 + 216) - *(float *)(v2 + 232);
        b_4 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
        c_4 = *(float *)(v2 + 232) + *(float *)(v2 + 216);
        e_4 = *(float *)(v2 + 220) - *(float *)(v2 + 228);
        *(float *)(v2 + 160) = (float)(b_4 * c_4) + (float)(a_4 * e_4);
        *(float *)(v2 + 164) = (float)(b_4 * e_4) - (float)(a_4 * c_4);
        *(_QWORD *)(v2 + 80) = `anonymous namespace'::qNull;
      }
      else
      {
        v23 = *(float *)(v2 + 240) + *(float *)(v2 + 212);
        *(float *)(v2 + 160) = v23 + v23;
        *(float *)(v2 + 164) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 208) - *(float *)(v2 + 236)) - *(float *)(v2 + 224));
      }
      break;
    case kOrderXZY:
      *(float *)(v2 + 168) = *(float *)(v2 + 240) + *(float *)(v2 + 212);
      v14 = *(float *)(v2 + 220) - *(float *)(v2 + 228);
      *(float *)(v2 + 144) = v14 + v14;
      *(float *)(v2 + 148) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 224) - *(float *)(v2 + 236)) - *(float *)(v2 + 208));
      *(_DWORD *)(v2 + 160) = 1065353216;
      *(float *)(v2 + 164) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a_0 = *(float *)(v2 + 240) + *(float *)(v2 + 212);
        b_0 = *(float *)(v2 + 220) - *(float *)(v2 + 228);
        c_0 = *(float *)(v2 + 212) - *(float *)(v2 + 240);
        e_0 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
        *(float *)(v2 + 152) = (float)(b_0 * c_0) + (float)(a_0 * e_0);
        *(float *)(v2 + 156) = (float)(b_0 * e_0) - (float)(a_0 * c_0);
        *(_QWORD *)(v2 + 80) = `anonymous namespace'::qNull;
      }
      else
      {
        v15 = *(float *)(v2 + 232) - *(float *)(v2 + 216);
        *(float *)(v2 + 152) = v15 + v15;
        *(float *)(v2 + 156) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 208) - *(float *)(v2 + 236)) - *(float *)(v2 + 224));
      }
      break;
    case kOrderYZX:
      *(float *)(v2 + 168) = *(float *)(v2 + 212) - *(float *)(v2 + 240);
      v16 = *(float *)(v2 + 232) + *(float *)(v2 + 216);
      *(float *)(v2 + 152) = v16 + v16;
      *(float *)(v2 + 156) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 208) - *(float *)(v2 + 236)) - *(float *)(v2 + 224));
      *(_DWORD *)(v2 + 160) = -1082130432;
      *(float *)(v2 + 164) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a_1 = *(float *)(v2 + 212) - *(float *)(v2 + 240);
        b_1 = *(float *)(v2 + 232) + *(float *)(v2 + 216);
        c_1 = *(float *)(v2 + 240) + *(float *)(v2 + 212);
        e_1 = *(float *)(v2 + 232) - *(float *)(v2 + 216);
        *(float *)(v2 + 144) = (float)(b_1 * c_1) + (float)(a_1 * e_1);
        *(float *)(v2 + 148) = (float)(b_1 * e_1) - (float)(a_1 * c_1);
        *(_QWORD *)(v2 + 88) = `anonymous namespace'::qNull;
      }
      else
      {
        v17 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
        *(float *)(v2 + 144) = v17 + v17;
        *(float *)(v2 + 148) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 224) - *(float *)(v2 + 208)) - *(float *)(v2 + 236));
      }
      break;
    case kOrderYXZ:
      *(float *)(v2 + 168) = *(float *)(v2 + 220) + *(float *)(v2 + 228);
      v20 = *(float *)(v2 + 232) - *(float *)(v2 + 216);
      *(float *)(v2 + 152) = v20 + v20;
      *(float *)(v2 + 156) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 236) - *(float *)(v2 + 224)) - *(float *)(v2 + 208));
      *(_DWORD *)(v2 + 144) = 1065353216;
      *(float *)(v2 + 148) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a_3 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
        b_3 = *(float *)(v2 + 232) - *(float *)(v2 + 216);
        c_3 = *(float *)(v2 + 228) - *(float *)(v2 + 220);
        e_3 = *(float *)(v2 + 232) + *(float *)(v2 + 216);
        *(float *)(v2 + 160) = (float)(b_3 * c_3) + (float)(a_3 * e_3);
        *(float *)(v2 + 164) = (float)(b_3 * e_3) - (float)(a_3 * c_3);
        *(_QWORD *)(v2 + 88) = `anonymous namespace'::qNull;
      }
      else
      {
        v21 = *(float *)(v2 + 240) - *(float *)(v2 + 212);
        *(float *)(v2 + 160) = v21 + v21;
        *(float *)(v2 + 164) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 224) - *(float *)(v2 + 236)) - *(float *)(v2 + 208));
      }
      break;
    case kOrderZXY:
      *(float *)(v2 + 168) = *(float *)(v2 + 228) - *(float *)(v2 + 220);
      v18 = *(float *)(v2 + 240) + *(float *)(v2 + 212);
      *(float *)(v2 + 160) = v18 + v18;
      *(float *)(v2 + 164) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 224) - *(float *)(v2 + 236)) - *(float *)(v2 + 208));
      *(_DWORD *)(v2 + 144) = -1082130432;
      *(float *)(v2 + 148) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a_2 = *(float *)(v2 + 240) + *(float *)(v2 + 212);
        b_2 = *(float *)(v2 + 220) - *(float *)(v2 + 228);
        c_2 = *(float *)(v2 + 212) - *(float *)(v2 + 240);
        e_2 = *(float *)(v2 + 220) + *(float *)(v2 + 228);
        *(float *)(v2 + 152) = (float)(b_2 * c_2) + (float)(a_2 * e_2);
        *(float *)(v2 + 156) = (float)(b_2 * e_2) - (float)(a_2 * c_2);
        *(_QWORD *)(v2 + 96) = `anonymous namespace'::qNull;
      }
      else
      {
        v19 = *(float *)(v2 + 232) + *(float *)(v2 + 216);
        *(float *)(v2 + 152) = v19 + v19;
        *(float *)(v2 + 156) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 236) - *(float *)(v2 + 208)) - *(float *)(v2 + 224));
      }
      break;
    case kOrderZYX:
      *(float *)(v2 + 168) = *(float *)(v2 + 232) + *(float *)(v2 + 216);
      v12 = *(float *)(v2 + 240) - *(float *)(v2 + 212);
      *(float *)(v2 + 160) = v12 + v12;
      *(float *)(v2 + 164) = *(float *)(v2 + 244)
                           + (float)((float)(*(float *)(v2 + 208) - *(float *)(v2 + 236)) - *(float *)(v2 + 224));
      *(_DWORD *)(v2 + 152) = 1065353216;
      *(float *)(v2 + 156) = *(float *)(v2 + 168) + *(float *)(v2 + 168);
      if ( Abs(*(float *)(v2 + 168)) >= 0.49999899 )
      {
        a = *(float *)(v2 + 232) + *(float *)(v2 + 216);
        b = *(float *)(v2 + 240) - *(float *)(v2 + 212);
        c = *(float *)(v2 + 216) - *(float *)(v2 + 232);
        e = *(float *)(v2 + 240) + *(float *)(v2 + 212);
        *(float *)(v2 + 144) = (float)(b * c) + (float)(a * e);
        *(float *)(v2 + 148) = (float)(b * e) - (float)(a * c);
        *(_QWORD *)(v2 + 96) = `anonymous namespace'::qNull;
      }
      else
      {
        v13 = *(float *)(v2 + 220) - *(float *)(v2 + 228);
        *(float *)(v2 + 144) = v13 + v13;
        *(float *)(v2 + 148) = *(float *)(v2 + 244)
                             + (float)((float)(*(float *)(v2 + 236) - *(float *)(v2 + 224)) - *(float *)(v2 + 208));
      }
      break;
    default:
      break;
  }
  inZa = (*(float (__fastcall **)(double, float))(v2 + 96))(
           *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v2 + 160)).m128i_i64,
           *(float *)(v2 + 164));
  inY = (*(float (__fastcall **)(double, float))(v2 + 88))(
          *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v2 + 152)).m128i_i64,
          *(float *)(v2 + 156));
  v24 = (*(float (__fastcall **)(double, float))(v2 + 80))(
          *(double *)_mm_cvtsi32_si128(*(_DWORD *)(v2 + 144)).m128i_i64,
          *(float *)(v2 + 148));
  Vector3f::Vector3f(&v55, v24, inY, inZa);
  *(Vector3f *)(v2 + 48) = v55;
  if ( !IsFinite((const Vector3f *)(v2 + 48)) )
  {
    __asan_handle_no_return(v2 + 48);
    __assert_fail(
      "IsFinite(rot)",
      "./src/pathfinding/Internal/Math/Quaternion.cpp",
      0x13Fu,
      "Vector3f QuaternionToEuler(const Quaternionf&, math::RotationOrder)");
  }
  v55 = *(Vector3f *)(v2 + 48);
  inZ = *(_QWORD *)&v55.x;
  z = v55.z;
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  v26 = inZ;
  result.x = *(float *)&v26;
  result.y = *((float *)&v26 + 1);
  result.z = z;
  return result;
};

// Line 325: range 000000000CC1606F-000000000CC16550
void __cdecl QuaternionToMatrix(const Quaternionf *q, Matrix3x3f *m)
{
  float x; // [rsp+10h] [rbp-30h]
  float y; // [rsp+14h] [rbp-2Ch]
  float z; // [rsp+18h] [rbp-28h]
  float xx; // [rsp+1Ch] [rbp-24h]
  float yy; // [rsp+20h] [rbp-20h]
  float zz; // [rsp+24h] [rbp-1Ch]
  float xy; // [rsp+28h] [rbp-18h]
  float xz; // [rsp+2Ch] [rbp-14h]
  float yz; // [rsp+30h] [rbp-10h]
  float wx; // [rsp+34h] [rbp-Ch]
  float wy; // [rsp+38h] [rbp-8h]
  float wz; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q);
  }
  x = q->x + q->x;
  if ( *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->y);
  }
  y = q->y + q->y;
  if ( *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->z);
  }
  z = q->z + q->z;
  xx = q->x * x;
  yy = q->y * y;
  zz = q->z * z;
  xy = q->x * y;
  xz = q->x * z;
  yz = q->y * z;
  if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->w);
  }
  wx = q->w * x;
  wy = q->w * y;
  wz = q->w * z;
  if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)m & 7) + 3) >= *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(m);
  }
  m->m_Data[0] = 1.0 - (float)(yy + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[1]);
  }
  m->m_Data[1] = xy + wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[2]);
  }
  m->m_Data[2] = xz - wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[3]);
  }
  m->m_Data[3] = xy - wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[4]);
  }
  m->m_Data[4] = 1.0 - (float)(xx + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[5]);
  }
  m->m_Data[5] = yz + wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[6]);
  }
  m->m_Data[6] = xz + wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[7]);
  }
  m->m_Data[7] = yz - wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[8]);
  }
  m->m_Data[8] = 1.0 - (float)(xx + yy);
};

// Line 364: range 000000000CC16551-000000000CC16C2E
void __cdecl QuaternionToMatrix(const Quaternionf *q, Matrix4x4f *m)
{
  float x; // [rsp+10h] [rbp-30h]
  float y; // [rsp+14h] [rbp-2Ch]
  float z; // [rsp+18h] [rbp-28h]
  float xx; // [rsp+1Ch] [rbp-24h]
  float yy; // [rsp+20h] [rbp-20h]
  float zz; // [rsp+24h] [rbp-1Ch]
  float xy; // [rsp+28h] [rbp-18h]
  float xz; // [rsp+2Ch] [rbp-14h]
  float yz; // [rsp+30h] [rbp-10h]
  float wx; // [rsp+34h] [rbp-Ch]
  float wy; // [rsp+38h] [rbp-8h]
  float wz; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q);
  }
  x = q->x + q->x;
  if ( *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->y);
  }
  y = q->y + q->y;
  if ( *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->z);
  }
  z = q->z + q->z;
  xx = q->x * x;
  yy = q->y * y;
  zz = q->z * z;
  xy = q->x * y;
  xz = q->x * z;
  yz = q->y * z;
  if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->w);
  }
  wx = q->w * x;
  wy = q->w * y;
  wz = q->w * z;
  if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)m & 7) + 3) >= *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(m);
  }
  m->m_Data[0] = 1.0 - (float)(yy + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[1]);
  }
  m->m_Data[1] = xy + wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[2]);
  }
  m->m_Data[2] = xz - wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[3]);
  }
  m->m_Data[3] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[4]);
  }
  m->m_Data[4] = xy - wz;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[5]);
  }
  m->m_Data[5] = 1.0 - (float)(xx + zz);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[6]);
  }
  m->m_Data[6] = yz + wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[7]);
  }
  m->m_Data[7] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[8]);
  }
  m->m_Data[8] = xz + wy;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[9]);
  }
  m->m_Data[9] = yz - wx;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[10]);
  }
  m->m_Data[10] = 1.0 - (float)(xx + yy);
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[11] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[11] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[11]);
  }
  m->m_Data[11] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[12]);
  }
  m->m_Data[12] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[13]);
  }
  m->m_Data[13] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[14]);
  }
  m->m_Data[14] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&m->m_Data[15] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&m->m_Data[15] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&m->m_Data[15]);
  }
  m->m_Data[15] = 1.0;
};

// Line 411: range 000000000CC16C2F-000000000CC170F1
void __cdecl MatrixToQuaternion(const Matrix4x4f *m, Quaternionf *q)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float *v7; // rax
  float *v8; // rdx
  float *v9; // rax
  float *v10; // rdx
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
  float *v21; // rax
  float *v22; // rdx
  float m01; // [rsp+10h] [rbp-D0h]
  float m02; // [rsp+14h] [rbp-CCh]
  float m10; // [rsp+18h] [rbp-C8h]
  float m11; // [rsp+1Ch] [rbp-C4h]
  float m12; // [rsp+20h] [rbp-C0h]
  float m20; // [rsp+24h] [rbp-BCh]
  float m21; // [rsp+28h] [rbp-B8h]
  float m22; // [rsp+2Ch] [rbp-B4h]
  char v31[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 36 7 mat:412";
  *(_QWORD *)(v2 + 16) = MatrixToQuaternion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -217841664;
  v4[536862723] = -202116109;
  v5 = (float *)Matrix4x4f::Get(m, 2, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  m22 = *v6;
  v7 = (float *)Matrix4x4f::Get(m, 2, 1);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  m21 = *v8;
  v9 = (float *)Matrix4x4f::Get(m, 2, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  m20 = *v10;
  v11 = (float *)Matrix4x4f::Get(m, 1, 2);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  m12 = *v12;
  v13 = (float *)Matrix4x4f::Get(m, 1, 1);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  m11 = *v14;
  v15 = (float *)Matrix4x4f::Get(m, 1, 0);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  m10 = *v16;
  v17 = (float *)Matrix4x4f::Get(m, 0, 2);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  m02 = *v18;
  v19 = (float *)Matrix4x4f::Get(m, 0, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  m01 = *v20;
  v21 = (float *)Matrix4x4f::Get(m, 0, 0);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v2 + 48), *v22, m01, m02, m10, m11, m12, m20, m21, m22);
  MatrixToQuaternion((const Matrix3x3f *)(v2 + 48), q);
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 421: range 000000000CC170F2-000000000CC1802D
void __cdecl MatrixToQuaternion(const Matrix3x3f *kRot, Quaternionf *q)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  char *v4; // rbx
  _DWORD *v5; // r13
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  float *v10; // rax
  float *v11; // rdx
  __m128i v12; // xmm0
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float v17; // xmm0_4
  float *v18; // rax
  float *v19; // rdx
  float *v20; // rax
  float *v21; // rdx
  float v22; // xmm0_4
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float v27; // xmm0_4
  float *v28; // rax
  float *v29; // rdx
  float *v30; // rax
  float *v31; // rdx
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  float *v35; // rdx
  char v36; // dl
  char v37; // dl
  float *v38; // rax
  float *v39; // rdx
  float *v40; // rax
  float *v41; // rdx
  float *v42; // rax
  float *v43; // rdx
  char v44; // cl
  __int64 v45; // rsi
  float *v46; // rdi
  __m128i v47; // xmm0
  unsigned __int64 v48; // rdx
  float *v49; // rax
  float *v50; // rdx
  float *v51; // rax
  float *v52; // rdx
  float v53; // xmm0_4
  float *v54; // rax
  float *v55; // rdx
  float *v56; // rax
  float *v57; // rdx
  char v58; // cl
  __int64 v59; // rsi
  float v60; // xmm0_4
  float *v61; // rdx
  float v62; // xmm0_4
  float *v63; // rax
  float *v64; // rdx
  float *v65; // rax
  float *v66; // rdx
  char v67; // cl
  __int64 v68; // rsi
  float v69; // xmm0_4
  float *v70; // rdx
  float v71; // xmm0_4
  float v72; // [rsp+Ch] [rbp-D4h]
  float v73; // [rsp+Ch] [rbp-D4h]
  float v74; // [rsp+Ch] [rbp-D4h]
  float v75; // [rsp+Ch] [rbp-D4h]
  float v76; // [rsp+Ch] [rbp-D4h]
  float v77; // [rsp+Ch] [rbp-D4h]
  float v78; // [rsp+Ch] [rbp-D4h]
  float v79; // [rsp+Ch] [rbp-D4h]
  float v80; // [rsp+Ch] [rbp-D4h]
  float v81; // [rsp+Ch] [rbp-D4h]
  float v82; // [rsp+Ch] [rbp-D4h]
  float v83; // [rsp+Ch] [rbp-D4h]
  int i; // [rsp+2Ch] [rbp-B4h]
  float fTrace; // [rsp+30h] [rbp-B0h]
  int j; // [rsp+34h] [rbp-ACh]
  int k; // [rsp+38h] [rbp-A8h]
  float fRoot; // [rsp+3Ch] [rbp-A4h]
  float fRoota; // [rsp+3Ch] [rbp-A4h]
  float fRootb; // [rsp+3Ch] [rbp-A4h]
  float fRootc; // [rsp+3Ch] [rbp-A4h]
  char v94[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 128);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 11 s_iNext:444 64 24 11 apkQuat:454";
  *(_QWORD *)(v2 + 16) = MatrixToQuaternion;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = (float *)Matrix3x3f::Get(kRot, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v72 = *v7;
  v8 = (float *)Matrix3x3f::Get(kRot, 1, 1);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v73 = *v9 + v72;
  v10 = (float *)Matrix3x3f::Get(kRot, 2, 2);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  fTrace = *v11 + v73;
  if ( fTrace <= 0.0 )
  {
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 32) = 1;
    *(_DWORD *)(v2 + 36) = 2;
    i = 0;
    v28 = (float *)Matrix3x3f::Get(kRot, 1, 1);
    v29 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v28);
    }
    v77 = *v29;
    v30 = (float *)Matrix3x3f::Get(kRot, 0, 0);
    v31 = v30;
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v30);
    }
    if ( v77 > *v31 )
      i = 1;
    v32 = (float *)Matrix3x3f::Get(kRot, 2, 2);
    v33 = v32;
    if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v32);
    }
    v78 = *v33;
    v34 = (float *)Matrix3x3f::Get(kRot, i, i);
    v35 = v34;
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v34);
    }
    if ( v78 > *v35 )
      i = 2;
    v36 = *(_BYTE *)(((4LL * i + v2 + 32) >> 3) + 0x7FFF8000);
    if ( v36 != 0 && (char)(((4 * i + v2 + 32) & 7) + 3) >= v36 )
      __asan_report_load4(4LL * i + v2 + 32);
    j = *(_DWORD *)&v4[4 * i - 96];
    v37 = *(_BYTE *)(((4LL * j + v2 + 32) >> 3) + 0x7FFF8000);
    if ( v37 != 0 && (char)(((4 * j + v2 + 32) & 7) + 3) >= v37 )
      __asan_report_load4(4LL * j + v2 + 32);
    k = *(_DWORD *)&v4[4 * j - 96];
    v38 = (float *)Matrix3x3f::Get(kRot, i, i);
    v39 = v38;
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v38);
    }
    v79 = *v39;
    v40 = (float *)Matrix3x3f::Get(kRot, j, j);
    v41 = v40;
    if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v40);
    }
    v80 = v79 - *v41;
    v45 = (unsigned int)k;
    v42 = (float *)Matrix3x3f::Get(kRot, k, k);
    v43 = v42;
    v44 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
    LOBYTE(v45) = v44 != 0;
    v46 = (float *)(((unsigned __int8)v42 & 7u) + 3);
    if ( v44 != 0 && (char)(((unsigned __int8)v42 & 7) + 3) >= v44 )
    {
      v46 = v42;
      __asan_report_load4(v42);
    }
    v47 = (__m128i)0x3F800000u;
    *(float *)v47.m128i_i32 = std::sqrt((float)(v80 - *v43) + 1.0);
    fRootb = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
    *(_QWORD *)(v2 + 64) = q;
    *(_QWORD *)(v2 + 72) = &q->y;
    *(_QWORD *)(v2 + 80) = &q->z;
    if ( fRootb < 0.0000099999997 )
    {
      __asan_handle_no_return(v46);
      __assert_fail(
        "fRoot >= Vector3f::epsilon",
        "./src/pathfinding/Internal/Math/Quaternion.cpp",
        0x1C7u,
        "void MatrixToQuaternion(const Matrix3x3f&, Quaternionf&)");
    }
    if ( *(_BYTE *)(((8LL * i + v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(8LL * i + v2 + 64, v45);
    v48 = *(_QWORD *)&v4[8 * i - 64];
    if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0 && (char)((v48 & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
      __asan_report_store4(*(_QWORD *)&v4[8 * i - 64]);
    *(float *)v48 = 0.5 * fRootb;
    fRootc = 0.5 / fRootb;
    v49 = (float *)Matrix3x3f::Get(kRot, k, j);
    v50 = v49;
    if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v49);
    }
    v81 = *v50;
    v51 = (float *)Matrix3x3f::Get(kRot, j, k);
    v52 = v51;
    if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v51);
    }
    v53 = (float)(v81 - *v52) * fRootc;
    if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&q->w);
    }
    q->w = v53;
    v54 = (float *)Matrix3x3f::Get(kRot, j, i);
    v55 = v54;
    if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v54);
    }
    v82 = *v55;
    v59 = (unsigned int)i;
    v56 = (float *)Matrix3x3f::Get(kRot, i, j);
    v57 = v56;
    v58 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
    LOBYTE(v59) = v58 != 0;
    if ( v58 != 0 && (char)(((unsigned __int8)v56 & 7) + 3) >= v58 )
      __asan_report_load4(v56);
    v60 = *v57 + v82;
    if ( *(_BYTE *)(((8LL * j + v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(8LL * j + v2 + 64, v59);
    v61 = *(float **)&v4[8 * j - 64];
    v62 = v60 * fRootc;
    if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(*(_QWORD *)&v4[8 * j - 64]);
    }
    *v61 = v62;
    v63 = (float *)Matrix3x3f::Get(kRot, k, i);
    v64 = v63;
    if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v63);
    }
    v83 = *v64;
    v68 = (unsigned int)i;
    v65 = (float *)Matrix3x3f::Get(kRot, i, k);
    v66 = v65;
    v67 = *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000);
    LOBYTE(v68) = v67 != 0;
    if ( v67 != 0 && (char)(((unsigned __int8)v65 & 7) + 3) >= v67 )
      __asan_report_load4(v65);
    v69 = *v66 + v83;
    if ( *(_BYTE *)(((8LL * k + v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(8LL * k + v2 + 64, v68);
    v70 = *(float **)&v4[8 * k - 64];
    v71 = v69 * fRootc;
    if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v70 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(*(_QWORD *)&v4[8 * k - 64]);
    }
    *v70 = v71;
  }
  else
  {
    v12 = (__m128i)0x3F800000u;
    *(float *)v12.m128i_i32 = std::sqrt(fTrace + 1.0);
    fRoot = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&q->w);
    }
    q->w = 0.5 * fRoot;
    fRoota = 0.5 / fRoot;
    v13 = (float *)Matrix3x3f::Get(kRot, 2, 1);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v74 = *v14;
    v15 = (float *)Matrix3x3f::Get(kRot, 1, 2);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v17 = (float)(v74 - *v16) * fRoota;
    if ( *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(q);
    }
    q->x = v17;
    v18 = (float *)Matrix3x3f::Get(kRot, 0, 2);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v75 = *v19;
    v20 = (float *)Matrix3x3f::Get(kRot, 2, 0);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    v22 = (float)(v75 - *v21) * fRoota;
    if ( *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&q->y);
    }
    q->y = v22;
    v23 = (float *)Matrix3x3f::Get(kRot, 1, 0);
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    v76 = *v24;
    v25 = (float *)Matrix3x3f::Get(kRot, 0, 1);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    v27 = (float)(v76 - *v26) * fRoota;
    if ( *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&q->z);
    }
    q->z = v27;
  }
  if ( ((unsigned __int8)q & 7) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&q->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)q + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&q->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(q, 16LL);
  }
  *q = Normalize(q);
  if ( v94 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 466: range 000000000CC1802E-000000000CC18186
bool __cdecl LookRotationToQuaternion(const Vector3f *viewVec, const Vector3f *upVec, Quaternionf *res)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 36 5 m:467";
  *(_QWORD *)(v3 + 16) = LookRotationToQuaternion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -217841664;
  v5[536862723] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v3 + 48));
  if ( !LookRotationToMatrix(viewVec, upVec, (Matrix3x3f *)(v3 + 48)) )
  {
    result = 0;
  }
  else
  {
    MatrixToQuaternion((const Matrix3x3f *)(v3 + 48), res);
    result = 1;
  }
  if ( v8 == (char *)v3 )
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

// Line 475: range 000000000CC18187-000000000CC18272
Quaternionf __cdecl FromToQuaternionSafe(const Vector3f *lhs, const Vector3f *rhs)
{
  __m128i v2; // xmm0
  Quaternionf v3; // rax
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  const Vector3f *rhsa; // [rsp+10h] [rbp-40h]
  const Vector3f *lhsa; // [rsp+18h] [rbp-38h]
  float lhsMag; // [rsp+20h] [rbp-30h]
  float rhsMag; // [rsp+24h] [rbp-2Ch]
  Vector3f from; // [rsp+28h] [rbp-28h] BYREF
  Vector3f to; // [rsp+34h] [rbp-1Ch] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  lhsa = lhs;
  rhsa = rhs;
  *(float *)v2.m128i_i32 = Magnitude(lhs);
  lhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  *(float *)v2.m128i_i32 = Magnitude(rhs);
  rhsMag = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( lhsMag >= 0.0000099999997 && rhsMag >= 0.0000099999997 )
  {
    to = operator/(rhsa, rhsMag);
    from = operator/(lhsa, lhsMag);
    v3 = FromToQuaternion(&from, &to);
  }
  else
  {
    v3 = Quaternionf::identity();
  }
  v4 = *(_QWORD *)&v3.x;
  v5 = *(_QWORD *)&v3.z;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 485: range 000000000CC18273-000000000CC183F3
Quaternionf __cdecl FromToQuaternion(const Vector3f *from, const Vector3f *to)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // xmm0_8
  __int64 v6; // xmm1_8
  __int64 v7; // [rsp+8h] [rbp-D8h]
  const Vector3f *toa; // [rsp+10h] [rbp-D0h]
  const Vector3f *froma; // [rsp+18h] [rbp-C8h]
  char v10[192]; // [rsp+20h] [rbp-C0h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  froma = from;
  toa = to;
  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 5 q:488 80 36 5 m:486";
  *(_QWORD *)(v2 + 16) = FromToQuaternion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = -217841664;
  v4[536862724] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v2 + 80));
  Matrix3x3f::SetFromToRotation((Matrix3x3f *const)(v2 + 80), froma, toa);
  Quaternionf::Quaternionf((Quaternionf *const)(v2 + 48));
  MatrixToQuaternion((const Matrix3x3f *)(v2 + 80), (Quaternionf *)(v2 + 48));
  v5 = *(_QWORD *)(v2 + 48);
  v7 = *(_QWORD *)(v2 + 56);
  if ( v10 == (char *)v2 )
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
  v6 = v7;
  result.z = *(float *)&v6;
  result.w = *((float *)&v6 + 1);
  result.x = *(float *)&v5;
  result.y = *((float *)&v5 + 1);
  return result;
};
