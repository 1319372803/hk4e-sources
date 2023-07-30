// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Matrix4x4.h

// Line 42: range 000000000CCB204A-000000000CCB2106
void __cdecl Matrix4x4f::Matrix4x4f(Matrix4x4f *const this)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Data[15] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Data[15] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 64LL);
  }
  *(_QWORD *)this->m_Data = 0LL;
  *(_QWORD *)&this->m_Data[2] = 0LL;
  *(_QWORD *)&this->m_Data[4] = 0LL;
  *(_QWORD *)&this->m_Data[6] = 0LL;
  *(_QWORD *)&this->m_Data[8] = 0LL;
  *(_QWORD *)&this->m_Data[10] = 0LL;
  *(_QWORD *)&this->m_Data[12] = 0LL;
  *(_QWORD *)&this->m_Data[14] = 0LL;
};

// Line 43: range 000000000CCB2108-000000000CCB21D3
void __cdecl Matrix4x4f::Matrix4x4f(Matrix4x4f *const this, Matrix4x4f::InitIdentity a2)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Data[15] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Data[15] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 64LL);
  }
  *(_QWORD *)this->m_Data = 0LL;
  *(_QWORD *)&this->m_Data[2] = 0LL;
  *(_QWORD *)&this->m_Data[4] = 0LL;
  *(_QWORD *)&this->m_Data[6] = 0LL;
  *(_QWORD *)&this->m_Data[8] = 0LL;
  *(_QWORD *)&this->m_Data[10] = 0LL;
  *(_QWORD *)&this->m_Data[12] = 0LL;
  *(_QWORD *)&this->m_Data[14] = 0LL;
  Matrix4x4f::SetIdentity(this);
};

// Line 50: range 000000000CCB21D4-000000000CCB2203
float *__cdecl Matrix4x4f::Get(Matrix4x4f *const this, int row, int column)
{
  return &this->m_Data[4 * column + row];
};

// Line 51: range 000000000CCB2204-000000000CCB2233
const float *__cdecl Matrix4x4f::Get(const Matrix4x4f *const this, int row, int column)
{
  return &this->m_Data[4 * column + row];
};

// Line 52: range 000000000CCB2234-000000000CCB2241
float *__cdecl Matrix4x4f::GetPtr(Matrix4x4f *const this)
{
  return this->m_Data;
};

// Line 55: range 000000000CCB2242-000000000CCB22A8
float __cdecl Matrix4x4f::operator[](const Matrix4x4f *const this, int index)
{
  char v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->m_Data[index] >> 3) + 0x7FFF8000);
  if ( v2 != 0 && (char)(((4 * index + (_BYTE)this) & 7) + 3) >= v2 )
    __asan_report_load4(&this->m_Data[index]);
  return this->m_Data[index];
};

// Line 78: range 000000000CCB22AA-000000000CCB2433
bool __cdecl Matrix4x4f::IsPerspective(const Matrix4x4f *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[3]);
  }
  if ( this->m_Data[3] != 0.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[7]);
  }
  if ( this->m_Data[7] != 0.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[11]);
  }
  if ( this->m_Data[11] != 0.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[15]);
  }
  return this->m_Data[15] != 1.0;
};

// Line 93: range 000000000CCB2434-000000000CCB2458
bool __cdecl Matrix4x4f::Invert_General3D(const Matrix4x4f *inM, Matrix4x4f *outM)
{
  return InvertMatrix4x4_General3D(inM->m_Data, outM->m_Data);
};

// Line 229: range 000000000CCB245A-000000000CCB25A8
Vector3f __cdecl Matrix4x4f::GetAxisX(const Matrix4x4f *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v11; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (float *)Matrix4x4f::Get(this, 2, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  inZ = *v2;
  v3 = (float *)Matrix4x4f::Get(this, 1, 0);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  inY = *v4;
  v5 = (float *)Matrix4x4f::Get(this, 0, 0);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  Vector3f::Vector3f(&v11, *v6, inY, inZ);
  z = v11.z;
  v8 = *(_QWORD *)&v11.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 234: range 000000000CCB25AA-000000000CCB26F8
Vector3f __cdecl Matrix4x4f::GetAxisY(const Matrix4x4f *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v11; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (float *)Matrix4x4f::Get(this, 2, 1);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  inZ = *v2;
  v3 = (float *)Matrix4x4f::Get(this, 1, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  inY = *v4;
  v5 = (float *)Matrix4x4f::Get(this, 0, 1);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  Vector3f::Vector3f(&v11, *v6, inY, inZ);
  z = v11.z;
  v8 = *(_QWORD *)&v11.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 239: range 000000000CCB26FA-000000000CCB2848
Vector3f __cdecl Matrix4x4f::GetAxisZ(const Matrix4x4f *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float z; // xmm1_4
  __int64 v8; // xmm0_8
  float inY; // [rsp+4h] [rbp-4Ch]
  float inZ; // [rsp+8h] [rbp-48h]
  Vector3f v11; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (float *)Matrix4x4f::Get(this, 2, 2);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  inZ = *v2;
  v3 = (float *)Matrix4x4f::Get(this, 1, 2);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  inY = *v4;
  v5 = (float *)Matrix4x4f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  Vector3f::Vector3f(&v11, *v6, inY, inZ);
  z = v11.z;
  v8 = *(_QWORD *)&v11.x;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = z;
  return result;
};

// Line 244: range 000000000CCB284A-000000000CCB2995
Vector3f __cdecl Matrix4x4f::GetAxis(const Matrix4x4f *const this, int axis)
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

  v2 = (float *)Matrix4x4f::Get(this, 2, axis);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  inZ = *v3;
  v4 = (float *)Matrix4x4f::Get(this, 1, axis);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  inY = *v5;
  v6 = (float *)Matrix4x4f::Get(this, 0, axis);
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

// Line 299: range 000000000CCB2996-000000000CCB2F05
Vector3f __cdecl Matrix4x4f::MultiplyPoint3(const Matrix4x4f *const this, const Vector3f *v)
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
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int64 v18; // xmm0_8
  __int64 v19; // [rsp+8h] [rbp-98h]
  char v20[96]; // [rsp+40h] [rbp-60h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 res:300";
  *(_QWORD *)(v2 + 16) = Matrix4x4f::MultiplyPoint3;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[4]);
  }
  v7 = this->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v8 = v6 + (float)(v->y * v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[8]);
  }
  v9 = this->m_Data[8];
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v10 = v8 + (float)(v->z * v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[12]);
  }
  *(float *)(v2 + 32) = this->m_Data[12] + v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[1]);
  }
  v11 = this->m_Data[1] * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[5]);
  }
  v12 = v11 + (float)(v->y * this->m_Data[5]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[9]);
  }
  v13 = v12 + (float)(v->z * this->m_Data[9]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[13]);
  }
  *(float *)(v2 + 36) = this->m_Data[13] + v13;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[2]);
  }
  v14 = this->m_Data[2] * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[6]);
  }
  v15 = v14 + (float)(v->y * this->m_Data[6]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[10]);
  }
  v16 = v15 + (float)(v->z * this->m_Data[10]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[14]);
  }
  *(float *)(v2 + 40) = this->m_Data[14] + v16;
  v19 = *(_QWORD *)(v2 + 32);
  v17 = *(float *)(v2 + 40);
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v18 = v19;
  result.x = *(float *)&v18;
  result.y = *((float *)&v18 + 1);
  result.z = v17;
  return result;
};

// Line 315: range 000000000CCB2F06-000000000CCB339D
Vector3f __cdecl Matrix4x4f::MultiplyVector3(const Matrix4x4f *const this, const Vector3f *v)
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
  *(_QWORD *)(v2 + 8) = "1 32 12 7 res:316";
  *(_QWORD *)(v2 + 16) = Matrix4x4f::MultiplyVector3;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[4]);
  }
  v7 = this->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v8 = v6 + (float)(v->y * v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[8]);
  }
  v9 = this->m_Data[8];
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
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[5]);
  }
  v11 = v10 + (float)(v->y * this->m_Data[5]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[9]);
  }
  *(float *)(v2 + 36) = (float)(v->z * this->m_Data[9]) + v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[2]);
  }
  v12 = this->m_Data[2] * v->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[6]);
  }
  v13 = v12 + (float)(v->y * this->m_Data[6]);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[10]);
  }
  *(float *)(v2 + 40) = (float)(v->z * this->m_Data[10]) + v13;
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

// Line 396: range 000000000CCB339E-000000000CCB3ADC
Vector3f __cdecl Matrix4x4f::InverseMultiplyPoint3Affine(const Matrix4x4f *const this, const Vector3f *inV)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
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
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float v29; // xmm1_4
  __int64 v30; // xmm0_8
  float x; // [rsp+0h] [rbp-C0h]
  float inY; // [rsp+4h] [rbp-BCh]
  float inYa; // [rsp+4h] [rbp-BCh]
  float inZ; // [rsp+8h] [rbp-B8h]
  float inZa; // [rsp+8h] [rbp-B8h]
  float inZb; // [rsp+8h] [rbp-B8h]
  float inZc; // [rsp+8h] [rbp-B8h]
  float inZd; // [rsp+8h] [rbp-B8h]
  float inZe; // [rsp+8h] [rbp-B8h]
  float inZf; // [rsp+8h] [rbp-B8h]
  float inZg; // [rsp+8h] [rbp-B8h]
  __int64 inZh; // [rsp+8h] [rbp-B8h]
  char v43[128]; // [rsp+40h] [rbp-80h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 5 v:397 64 12 7 res:398";
  *(_QWORD *)(v2 + 16) = Matrix4x4f::InverseMultiplyPoint3Affine;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->z);
  }
  inZ = inV->z;
  v5 = (float *)Matrix4x4f::Get(this, 2, 3);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  inZa = inZ - *v6;
  if ( *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inV + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&inV->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&inV->y);
  }
  inY = inV->y;
  v7 = (float *)Matrix4x4f::Get(this, 1, 3);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  inYa = inY - *v8;
  if ( *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inV & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inV >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inV);
  }
  x = inV->x;
  v9 = (float *)Matrix4x4f::Get(this, 0, 3);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  Vector3f::Vector3f((Vector3f *const)(v2 + 32), x - *v10, inYa, inZa);
  Vector3f::Vector3f((Vector3f *const)(v2 + 64));
  v11 = (float *)Matrix4x4f::Get(this, 0, 0);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  inZb = *v12 * *(float *)(v2 + 32);
  v13 = (float *)Matrix4x4f::Get(this, 1, 0);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  inZc = (float)(*(float *)(v2 + 36) * *v14) + inZb;
  v15 = (float *)Matrix4x4f::Get(this, 2, 0);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  *(float *)(v2 + 64) = (float)(*(float *)(v2 + 40) * *v16) + inZc;
  v17 = (float *)Matrix4x4f::Get(this, 0, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  inZd = *v18 * *(float *)(v2 + 32);
  v19 = (float *)Matrix4x4f::Get(this, 1, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  inZe = (float)(*(float *)(v2 + 36) * *v20) + inZd;
  v21 = (float *)Matrix4x4f::Get(this, 2, 1);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  *(float *)(v2 + 68) = (float)(*(float *)(v2 + 40) * *v22) + inZe;
  v23 = (float *)Matrix4x4f::Get(this, 0, 2);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  inZf = *v24 * *(float *)(v2 + 32);
  v25 = (float *)Matrix4x4f::Get(this, 1, 2);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  inZg = (float)(*(float *)(v2 + 36) * *v26) + inZf;
  v27 = (float *)Matrix4x4f::Get(this, 2, 2);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v27);
  }
  *(float *)(v2 + 72) = (float)(*(float *)(v2 + 40) * *v28) + inZg;
  inZh = *(_QWORD *)(v2 + 64);
  v29 = *(float *)(v2 + 72);
  if ( v43 == (char *)v2 )
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
  v30 = inZh;
  result.x = *(float *)&v30;
  result.y = *((float *)&v30 + 1);
  result.z = v29;
  return result;
};
