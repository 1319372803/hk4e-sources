// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Matrix3x3.h

// Line 16: range 000000000CCB4A7C-000000000CCB4B1F
void __cdecl Matrix3x3f::Matrix3x3f(Matrix3x3f *const this)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Data[8] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Data[8] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 36LL);
  }
  *(_QWORD *)this->m_Data = 0LL;
  *(_QWORD *)&this->m_Data[2] = 0LL;
  *(_QWORD *)&this->m_Data[4] = 0LL;
  *(_QWORD *)&this->m_Data[6] = 0LL;
  this->m_Data[8] = 0.0;
};

// Line 17: range 000000000CCB4B20-000000000CCB4F66
void __cdecl Matrix3x3f::Matrix3x3f(
        Matrix3x3f *const this,
        float m00,
        float m01,
        float m02,
        float m10,
        float m11,
        float m12,
        float m20,
        float m21,
        float m22)
{
  float *v10; // rax
  float *v11; // rdx
  float *v12; // rax
  float *v13; // rdx
  float *v14; // rax
  float *v15; // rdx
  float *v16; // rax
  float *v17; // rdx
  float *v18; // rax
  float *v19; // rdx
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rdx
  float *v24; // rax
  float *v25; // rdx
  float *v26; // rax
  float *v27; // rdx

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Data[8] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Data[8] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 36LL);
  }
  *(_QWORD *)this->m_Data = 0LL;
  *(_QWORD *)&this->m_Data[2] = 0LL;
  *(_QWORD *)&this->m_Data[4] = 0LL;
  *(_QWORD *)&this->m_Data[6] = 0LL;
  this->m_Data[8] = 0.0;
  v10 = Matrix3x3f::Get(this, 0, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = m00;
  v12 = Matrix3x3f::Get(this, 1, 0);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = m10;
  v14 = Matrix3x3f::Get(this, 2, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = m20;
  v16 = Matrix3x3f::Get(this, 0, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = m01;
  v18 = Matrix3x3f::Get(this, 1, 1);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = m11;
  v20 = Matrix3x3f::Get(this, 2, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = m21;
  v22 = Matrix3x3f::Get(this, 0, 2);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = m02;
  v24 = Matrix3x3f::Get(this, 1, 2);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = m12;
  v26 = Matrix3x3f::Get(this, 2, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = m22;
};

// Line 30: range 000000000CCB4F68-000000000CCB4F96
float *__cdecl Matrix3x3f::Get(Matrix3x3f *const this, int row, int column)
{
  return &this->m_Data[3 * column + row];
};

// Line 31: range 000000000CCB4F98-000000000CCB4FC6
const float *__cdecl Matrix3x3f::Get(const Matrix3x3f *const this, int row, int column)
{
  return &this->m_Data[3 * column + row];
};

// Line 36: range 000000000CCB4FC8-000000000CCB4FD5
float *__cdecl Matrix3x3f::GetPtr(Matrix3x3f *const this)
{
  return this->m_Data;
};

// Line 39: range 000000000CCB4FD6-000000000CCB5121
Vector3f __cdecl Matrix3x3f::GetColumn(const Matrix3x3f *const this, int col)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  float *v7; // rdx
  float z; // xmm1_4
  __int64 v9; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v12; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (float *)Matrix3x3f::Get(this, 2, col);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  inZ = *v3;
  v4 = (float *)Matrix3x3f::Get(this, 1, col);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  inY = *v5;
  v6 = (float *)Matrix3x3f::Get(this, 0, col);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  Vector3f::Vector3f(&v12, *v7, inY, inZ);
  z = v12.z;
  v9 = *(_QWORD *)&v12.x;
  result.x = *(float *)&v9;
  result.y = *((float *)&v9 + 1);
  result.z = z;
  return result;
};

// Line 48: range 000000000CCB5122-000000000CCB516C
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl Matrix3x3f::MultiplyPoint3(const Matrix3x3f *const this, const Vector3f *inV)
{
  __int64 v2; // xmm0_8
  float v3; // xmm1_4
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  *(Vector3f *)&v2 = Matrix3x3f::MultiplyVector3(this, inV);
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = v3;
  return result;
};

// Line 85: range 000000000CCB516E-000000000CCB5605
Vector3f __cdecl Matrix3x3f::MultiplyVector3(const Matrix3x3f *const this, const Vector3f *v)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  __int64 v15; // xmm0_8
  __int64 v16; // [rsp+8h] [rbp-98h]
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 6 res:86";
  *(_QWORD *)(v2 + 16) = Matrix3x3f::MultiplyVector3;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v5 = this->m_Data[0];
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  v6 = v5 * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[3]);
  }
  v7 = this->m_Data[3];
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v8 = v6 + (float)(v->y * v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[6]);
  }
  v9 = this->m_Data[6];
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  *(float *)(v2 + 32) = (float)(v->z * v9) + v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[1]);
  }
  v10 = this->m_Data[1] * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[4]);
  }
  v11 = v10 + (float)(v->y * this->m_Data[4]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[7]);
  }
  *(float *)(v2 + 36) = (float)(v->z * this->m_Data[7]) + v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[2]);
  }
  v12 = this->m_Data[2] * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[5]);
  }
  v13 = v12 + (float)(v->y * this->m_Data[5]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[8]);
  }
  *(float *)(v2 + 40) = (float)(v->z * this->m_Data[8]) + v13;
  v16 = *(_QWORD *)(v2 + 32);
  v14 = *(float *)(v2 + 40);
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v15 = v16;
  result.x = *(float *)&v15;
  result.y = *((float *)&v15 + 1);
  result.z = v14;
  return result;
};
