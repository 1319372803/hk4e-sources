// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Quaternion.h

// Line 20: range 000000000CCB5606-000000000CCB572F
void __cdecl Quaternionf::Quaternionf(Quaternionf *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w);
  }
  this->w = 0.0;
};

// Line 36: range 000000000CCB5730-000000000CCB577D
Quaternionf __cdecl Normalize(const Quaternionf *q)
{
  float v1; // xmm0_4
  __int64 v2; // xmm0_8
  __int64 v3; // xmm1_8
  Quaternionf v4; // kr00_16
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v1 = Magnitude(q);
  v4 = operator/(q, v1);
  v3 = *(_QWORD *)&v4.z;
  v2 = *(_QWORD *)&v4.x;
  result.z = *(float *)&v3;
  result.w = *((float *)&v3 + 1);
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  return result;
};

// Line 54: range 000000000CCB577E-000000000CCB5950
Quaternionf __cdecl operator+(const Quaternionf *lhs, const Quaternionf *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  Quaternionf *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // xmm1_8
  __int64 v11; // [rsp+8h] [rbp-78h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 4 q:56";
  *(_QWORD *)(v2 + 16) = operator+;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( ((unsigned __int8)lhs & 7) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&lhs->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)lhs + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&lhs->w + 3) >> 3) + 0x7FFF8000) )
  {
    v4 = 16LL;
    __asan_report_load_n(lhs, 16LL);
  }
  v6 = *(_QWORD *)&lhs->z;
  *(_QWORD *)(v4 - 32) = *(_QWORD *)&lhs->x;
  *(_QWORD *)(v4 - 24) = v6;
  v7 = Quaternionf::operator+=((Quaternionf *const)(v4 - 32), rhs);
  v8 = (__int64 *)v7;
  if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v7, 16LL);
  }
  v9 = *v8;
  v11 = v8[1];
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v10 = v11;
  result.z = *(float *)&v10;
  result.w = *((float *)&v10 + 1);
  result.x = *(float *)&v9;
  result.y = *((float *)&v9 + 1);
  return result;
};

// Line 60: range 000000000CCB5951-000000000CCB5B23
Quaternionf __cdecl operator-(const Quaternionf *lhs, const Quaternionf *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  Quaternionf *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // xmm1_8
  __int64 v11; // [rsp+8h] [rbp-78h]
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 4 t:62";
  *(_QWORD *)(v2 + 16) = operator-;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( ((unsigned __int8)lhs & 7) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&lhs->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)lhs + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&lhs->w + 3) >> 3) + 0x7FFF8000) )
  {
    v4 = 16LL;
    __asan_report_load_n(lhs, 16LL);
  }
  v6 = *(_QWORD *)&lhs->z;
  *(_QWORD *)(v4 - 32) = *(_QWORD *)&lhs->x;
  *(_QWORD *)(v4 - 24) = v6;
  v7 = Quaternionf::operator-=((Quaternionf *const)(v4 - 32), rhs);
  v8 = (__int64 *)v7;
  if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v7, 16LL);
  }
  v9 = *v8;
  v11 = v8[1];
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v10 = v11;
  result.z = *(float *)&v10;
  result.w = *((float *)&v10 + 1);
  result.x = *(float *)&v9;
  result.y = *((float *)&v9 + 1);
  return result;
};

// Line 82: range 000000000CCB5B24-000000000CCB5CF7
Quaternionf __cdecl operator/(const Quaternionf *q, const float s)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  Quaternionf *v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // xmm1_8
  __int64 v11; // [rsp+8h] [rbp-78h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 64;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 4 t:84";
  *(_QWORD *)(v2 + 16) = operator/;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( ((unsigned __int8)q & 7) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&q->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)q + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&q->w + 3) >> 3) + 0x7FFF8000) )
  {
    v4 = 16LL;
    __asan_report_load_n(q, 16LL);
  }
  v6 = *(_QWORD *)&q->z;
  *(_QWORD *)(v4 - 32) = *(_QWORD *)&q->x;
  *(_QWORD *)(v4 - 24) = v6;
  v7 = Quaternionf::operator/=((Quaternionf *const)(v4 - 32), s);
  v8 = (__int64 *)v7;
  if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v7, 16LL);
  }
  v9 = *v8;
  v11 = v8[1];
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v10 = v11;
  result.z = *(float *)&v10;
  result.w = *((float *)&v10 + 1);
  result.x = *(float *)&v9;
  result.y = *((float *)&v9 + 1);
  return result;
};

// Line 88: range 000000000CCB5CF8-000000000CCB609E
Quaternionf __cdecl operator*(const Quaternionf *lhs, const Quaternionf *rhs)
{
  float w; // xmm1_4
  double v3; // xmm0_8
  float x; // xmm2_4
  float y; // xmm2_4
  float z; // xmm2_4
  __int64 v7; // xmm0_8
  __int64 v8; // xmm1_8
  Quaternionf v9; // [rsp+20h] [rbp-20h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  if ( *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->w);
  }
  w = lhs->w;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->w);
  }
  *(float *)&v3 = rhs->w * w;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(lhs);
  }
  x = lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(rhs);
  }
  *(float *)&v3 = *(float *)&v3 - (float)(rhs->x * x);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&lhs->y);
  }
  y = lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&rhs->y);
  }
  *(float *)&v3 = *(float *)&v3 - (float)(rhs->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&lhs->z);
  }
  z = lhs->z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&rhs->z);
  }
  Quaternionf::Quaternionf(
    &v9,
    (float)((float)(rhs->z * lhs->y) + (float)((float)(lhs->w * rhs->x) + (float)(rhs->w * lhs->x)))
  - (float)(rhs->y * lhs->z),
    (float)((float)(rhs->x * lhs->z) + (float)((float)(lhs->w * rhs->y) + (float)(rhs->w * lhs->y)))
  - (float)(rhs->z * lhs->x),
    (float)((float)(rhs->y * lhs->x) + (float)((float)(lhs->w * rhs->z) + (float)(rhs->w * lhs->z)))
  - (float)(rhs->x * lhs->y),
    *(float *)&v3 - (float)(rhs->z * z));
  v7 = *(_QWORD *)&v9.x;
  v8 = *(_QWORD *)&v9.z;
  result.z = *(float *)&v8;
  result.w = *((float *)&v8 + 1);
  result.x = *(float *)&v7;
  result.y = *((float *)&v7 + 1);
  return result;
};

// Line 97: range 000000000CCB609F-000000000CCB60EA
Quaternionf __cdecl Quaternionf::identity()
{
  __int64 v0; // xmm0_8
  __int64 v1; // xmm1_8
  Quaternionf v2; // [rsp+10h] [rbp-20h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  Quaternionf::Quaternionf(&v2, 0.0, 0.0, 0.0, 1.0);
  v0 = *(_QWORD *)&v2.x;
  v1 = *(_QWORD *)&v2.z;
  result.z = *(float *)&v1;
  result.w = *((float *)&v1 + 1);
  result.x = *(float *)&v0;
  result.y = *((float *)&v0 + 1);
  return result;
};

// Line 128: range 000000000CCB60EB-000000000CCB6656
Vector3f __cdecl RotateVectorByQuat(const Quaternionf *lhs, const Vector3f *rhs)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v9; // [rsp+8h] [rbp-C8h]
  float x; // [rsp+34h] [rbp-9Ch]
  float y; // [rsp+38h] [rbp-98h]
  float z; // [rsp+3Ch] [rbp-94h]
  float xx; // [rsp+40h] [rbp-90h]
  float yy; // [rsp+44h] [rbp-8Ch]
  float zz; // [rsp+48h] [rbp-88h]
  float xy; // [rsp+4Ch] [rbp-84h]
  float xz; // [rsp+50h] [rbp-80h]
  float yz; // [rsp+54h] [rbp-7Ch]
  float wx; // [rsp+58h] [rbp-78h]
  float wy; // [rsp+5Ch] [rbp-74h]
  float wz; // [rsp+60h] [rbp-70h]
  char v22[96]; // [rsp+70h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 res:145";
  *(_QWORD *)(v2 + 16) = RotateVectorByQuat;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  x = lhs->x + lhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->y);
  }
  y = lhs->y + lhs->y;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->z);
  }
  z = lhs->z + lhs->z;
  xx = lhs->x * x;
  yy = lhs->y * y;
  zz = lhs->z * z;
  xy = lhs->x * y;
  xz = lhs->x * z;
  yz = lhs->y * z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->w);
  }
  wx = lhs->w * x;
  wy = lhs->w * y;
  wz = lhs->w * z;
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  v5 = (float)(1.0 - (float)(yy + zz)) * rhs->x;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->y);
  }
  v6 = v5 + (float)(rhs->y * (float)(xy - wz));
  if ( *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->z);
  }
  *(float *)(v2 + 32) = (float)(rhs->z * (float)(xz + wy)) + v6;
  *(float *)(v2 + 36) = (float)(rhs->z * (float)(yz - wx))
                      + (float)((float)((float)(xy + wz) * rhs->x) + (float)(rhs->y * (float)(1.0 - (float)(xx + zz))));
  *(float *)(v2 + 40) = (float)(rhs->z * (float)(1.0 - (float)(xx + yy)))
                      + (float)((float)((float)(xz - wy) * rhs->x) + (float)(rhs->y * (float)(yz + wx)));
  v9 = *(_QWORD *)(v2 + 32);
  v7 = *(float *)(v2 + 40);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 157: range 000000000CCB6658-000000000CCB6799
void __cdecl Quaternionf::Quaternionf(Quaternionf *const this, float inX, float inY, float inZ, float inW)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = inX;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = inY;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = inZ;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w);
  }
  this->w = inW;
};

// Line 166: range 000000000CF46972-000000000CF46A00
void __cdecl Quaternionf::Transfer<StreamedBinaryRead<false>>(
        Quaternionf *const this,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->x, "x", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->y, "y", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->z, "z", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->w, "w", kNoTransferFlags);
};

// Line 176: range 000000000CCB679A-000000000CCB68DB
void __cdecl Quaternionf::Set(Quaternionf *const this, float inX, float inY, float inZ, float inW)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->x = inX;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y);
  }
  this->y = inY;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->z);
  }
  this->z = inZ;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->w);
  }
  this->w = inW;
};

// Line 192: range 000000000CCB68DC-000000000CCB6A4C
Quaternionf __cdecl Conjugate(const Quaternionf *q)
{
  float w; // xmm3_4
  float v2; // xmm2_4
  float v3; // xmm4_4
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  Quaternionf v6; // [rsp+10h] [rbp-20h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  if ( *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->w);
  }
  w = q->w;
  if ( *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->z);
  }
  v2 = -q->z;
  if ( *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q->y);
  }
  v3 = -q->y;
  if ( *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q);
  }
  Quaternionf::Quaternionf(&v6, -q->x, v3, v2, w);
  v4 = *(_QWORD *)&v6.x;
  v5 = *(_QWORD *)&v6.z;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 197: range 000000000CCB6A4D-000000000CCB6B3B
Quaternionf __cdecl Inverse(const Quaternionf *q)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // xmm0_8
  __int64 v5; // xmm1_8
  __int64 v6; // [rsp+0h] [rbp-70h]
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 7 res:199";
  *(_QWORD *)(v1 + 16) = Inverse;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  *(Quaternionf *)(v1 + 32) = Conjugate(q);
  v4 = *(_QWORD *)(v1 + 32);
  v6 = *(_QWORD *)(v1 + 40);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v5 = v6;
  result.z = *(float *)&v5;
  result.w = *((float *)&v5 + 1);
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  return result;
};

// Line 204: range 000000000CCB6B3C-000000000CCB6B5A
float __cdecl Magnitude(const Quaternionf *q)
{
  float v1; // xmm0_4

  v1 = SqrMagnitude(q);
  return SqrtImpl(v1);
};

// Line 209: range 000000000CCB6B5B-000000000CCB6B7B
float __cdecl SqrMagnitude(const Quaternionf *q)
{
  return Dot(q, q);
};

// Line 214: range 000000000CCB6B7C-000000000CCB6DDA
Quaternionf *__cdecl Quaternionf::operator+=(Quaternionf *const this, const Quaternionf *aQuat)
{
  float x; // xmm1_4
  float y; // xmm1_4
  float z; // xmm1_4
  float w; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->x;
  if ( *(_BYTE *)(((unsigned __int64)aQuat >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)aQuat & 7) + 3) >= *(_BYTE *)(((unsigned __int64)aQuat >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(aQuat);
  }
  this->x = aQuat->x + x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  y = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&aQuat->y);
  }
  this->y = aQuat->y + y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  z = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&aQuat->z);
  }
  this->z = aQuat->z + z;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  w = this->w;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&aQuat->w);
  }
  this->w = aQuat->w + w;
  return this;
};

// Line 223: range 000000000CCB6DDC-000000000CCB703A
Quaternionf *__cdecl Quaternionf::operator-=(Quaternionf *const this, const Quaternionf *aQuat)
{
  double v2; // xmm0_8
  double v3; // xmm0_8
  double v4; // xmm0_8
  double v5; // xmm0_8

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&v2 = this->x;
  if ( *(_BYTE *)(((unsigned __int64)aQuat >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)aQuat & 7) + 3) >= *(_BYTE *)(((unsigned __int64)aQuat >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(aQuat);
  }
  this->x = *(float *)&v2 - aQuat->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  *(float *)&v3 = this->y;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->y >> 3) + 0x7FFF8000) )
  {
    v3 = __asan_report_load4(&aQuat->y);
  }
  this->y = *(float *)&v3 - aQuat->y;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  *(float *)&v4 = this->z;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->z >> 3) + 0x7FFF8000) )
  {
    v4 = __asan_report_load4(&aQuat->z);
  }
  this->z = *(float *)&v4 - aQuat->z;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  *(float *)&v5 = this->w;
  if ( *(_BYTE *)(((unsigned __int64)&aQuat->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)aQuat + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aQuat->w >> 3) + 0x7FFF8000) )
  {
    v5 = __asan_report_load4(&aQuat->w);
  }
  this->w = *(float *)&v5 - aQuat->w;
  return this;
};

// Line 241: range 000000000CCB703C-000000000CCB71D7
Quaternionf *__cdecl Quaternionf::operator/=(Quaternionf *const this, const float aScalar)
{
  if ( CompareApproximately(aScalar, 0.0, 0.000001) )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "!CompareApproximately(aScalar, 0.0F)",
      "./src/pathfinding/Internal/Math/Quaternion.h",
      0xF2u,
      "Quaternionf& Quaternionf::operator/=(float)");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  this->x = this->x / aScalar;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y);
  }
  this->y = this->y / aScalar;
  if ( *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->z);
  }
  this->z = this->z / aScalar;
  if ( *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->w);
  }
  this->w = this->w / aScalar;
  return this;
};

// Line 261: range 000000000CCB71D8-000000000CCB7834
Quaternionf __cdecl Lerp(const Quaternionf *q1, const Quaternionf *q2, float t)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  float w; // xmm1_4
  float v14; // xmm3_4
  float z; // xmm1_4
  float v16; // xmm5_4
  float y; // xmm1_4
  float v18; // xmm4_4
  float x; // xmm1_4
  __int64 v20; // xmm0_8
  __int64 v21; // xmm1_8
  Quaternionf v22; // kr00_16
  char v24[96]; // [rsp+20h] [rbp-60h] BYREF
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 tmpQuat:262";
  *(_QWORD *)(v3 + 16) = Lerp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Quaternionf::Quaternionf((Quaternionf *const)(v3 + 32));
  if ( Dot(q1, q2) >= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->w);
    }
    w = q1->w;
    if ( *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->w);
    }
    v14 = w + (float)((float)(q2->w - q1->w) * t);
    if ( *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->z);
    }
    z = q1->z;
    if ( *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->z);
    }
    v16 = z + (float)((float)(q2->z - q1->z) * t);
    if ( *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->y);
    }
    y = q1->y;
    if ( *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->y);
    }
    v18 = y + (float)((float)(q2->y - q1->y) * t);
    if ( *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q1);
    }
    x = q1->x;
    if ( *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q2);
    }
    Quaternionf::Set((Quaternionf *const)(v3 + 32), (float)((float)(q2->x - q1->x) * t) + x, v18, v16, v14);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->w);
    }
    v6 = q1->w;
    if ( *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->w);
    }
    v7 = v6 + (float)((float)((float)-q2->w - q1->w) * t);
    if ( *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->z);
    }
    v8 = q1->z;
    if ( *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->z);
    }
    v9 = v8 + (float)((float)((float)-q2->z - q1->z) * t);
    if ( *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q1->y);
    }
    v10 = q1->y;
    if ( *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)q2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&q2->y);
    }
    v11 = v10 + (float)((float)((float)-q2->y - q1->y) * t);
    if ( *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q1);
    }
    v12 = q1->x;
    if ( *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)q2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(q2);
    }
    Quaternionf::Set((Quaternionf *const)(v3 + 32), (float)((float)((float)-q2->x - q1->x) * t) + v12, v11, v9, v7);
  }
  v22 = Normalize((const Quaternionf *)(v3 + 32));
  v21 = *(_QWORD *)&v22.z;
  v20 = *(_QWORD *)&v22.x;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result.z = *(float *)&v21;
  result.w = *((float *)&v21 + 1);
  result.x = *(float *)&v20;
  result.y = *((float *)&v20 + 1);
  return result;
};

// Line 284: range 000000000CCB7835-000000000CCB7A78
float __cdecl Dot(const Quaternionf *q1, const Quaternionf *q2)
{
  float x; // xmm1_4
  float v3; // xmm1_4
  float y; // xmm2_4
  float v5; // xmm1_4
  float z; // xmm2_4
  float v7; // xmm1_4
  float w; // xmm2_4

  if ( *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q1);
  }
  x = q1->x;
  if ( *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)q2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)q2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(q2);
  }
  v3 = x * q2->x;
  if ( *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q1->y);
  }
  y = q1->y;
  if ( *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q2->y);
  }
  v5 = v3 + (float)(q2->y * y);
  if ( *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q1->z);
  }
  z = q1->z;
  if ( *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q2->z);
  }
  v7 = v5 + (float)(q2->z * z);
  if ( *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q1->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q1->w);
  }
  w = q1->w;
  if ( *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)q2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&q2->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&q2->w);
  }
  return (float)(q2->w * w) + v7;
};

// Line 371: range 000000000CCB7A79-000000000CCB7B37
bool __cdecl CompareApproximately(const Quaternionf *q1, const Quaternionf *q2, float epsilon)
{
  Quaternionf v3; // kr00_16
  Quaternionf v4; // kr10_16
  bool result; // al
  Quaternionf q; // [rsp+20h] [rbp-30h] BYREF
  Quaternionf v8; // [rsp+30h] [rbp-20h] BYREF

  v3 = operator-(q1, q2);
  q = v3;
  SqrMagnitude(&q);
  result = 1;
  if ( (float)(epsilon * epsilon) < v3.z )
  {
    v4 = operator+(q1, q2);
    v8 = v4;
    SqrMagnitude(&v8);
    if ( (float)(epsilon * epsilon) < v4.z )
      return 0;
  }
  return result;
};

// Line 396: range 000000000CCB7B38-000000000CCB7B9E
bool __cdecl IsFinite(const Quaternionf *f)
{
  bool v1; // bl
  bool v2; // bl
  bool v3; // bl

  v1 = IsFinite(&f->x);
  v2 = IsFinite(&f->y) && v1;
  v3 = IsFinite(&f->z) && v2;
  return (v3 & IsFinite(&f->w)) != 0;
};

// Line 401: range 000000000CCB7B9F-000000000CCB7CF7
bool __cdecl IsNAN(const Quaternionf *f)
{
  if ( *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)f & 7) + 3) >= *(_BYTE *)(((unsigned __int64)f >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(f);
  }
  if ( IsNAN(f->x) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&f->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)f + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&f->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&f->y);
  }
  if ( IsNAN(f->y) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&f->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)f + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&f->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&f->z);
  }
  if ( IsNAN(f->z) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&f->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)f + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&f->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&f->w);
  }
  return IsNAN(f->w);
};
