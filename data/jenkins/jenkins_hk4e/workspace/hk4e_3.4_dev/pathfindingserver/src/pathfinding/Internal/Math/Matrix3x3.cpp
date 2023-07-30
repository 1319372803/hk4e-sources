// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Matrix3x3.cpp

// Line 8: range 000000000CBF97DC-000000000CBF9806
Matrix3x3f *__cdecl `anonymous namespace'::CreateIdentityMatrix3x3f(Matrix3x3f *retstr)
{
  Matrix3x3f::Matrix3x3f(retstr);
  Matrix3x3f::SetIdentity(retstr);
  return retstr;
};

// Line 15: range 000000000CBF9807-000000000CBF9831
Matrix3x3f *__cdecl `anonymous namespace'::CreateZeroMatrix3x3f(Matrix3x3f *retstr)
{
  Matrix3x3f::Matrix3x3f(retstr);
  Matrix3x3f::SetZero(retstr);
  return retstr;
};

// Line 28: range 000000000CBF9832-000000000CBF9D05
Matrix3x3f *__cdecl Matrix3x3f::operator=(Matrix3x3f *const this, const Matrix4x4f *other)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  v2 = other->m_Data[0];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->m_Data[0] = v2;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[1]);
  }
  v3 = other->m_Data[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[1]);
  }
  this->m_Data[1] = v3;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[2]);
  }
  v4 = other->m_Data[2];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[2]);
  }
  this->m_Data[2] = v4;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[4]);
  }
  v5 = other->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[3]);
  }
  this->m_Data[3] = v5;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[5]);
  }
  v6 = other->m_Data[5];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[4]);
  }
  this->m_Data[4] = v6;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[6]);
  }
  v7 = other->m_Data[6];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[5]);
  }
  this->m_Data[5] = v7;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[8]);
  }
  v8 = other->m_Data[8];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[6]);
  }
  this->m_Data[6] = v8;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[9]);
  }
  v9 = other->m_Data[9];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[7]);
  }
  this->m_Data[7] = v9;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[10]);
  }
  v10 = other->m_Data[10];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[8]);
  }
  this->m_Data[8] = v10;
  return this;
};

// Line 43: range 000000000CBF9D06-000000000CBFA26B
void __cdecl Matrix3x3f::Matrix3x3f(Matrix3x3f *const this, const Matrix4x4f *other)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4

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
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)other & 7) + 3) >= *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(other);
  }
  v2 = other->m_Data[0];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->m_Data[0] = v2;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[1]);
  }
  v3 = other->m_Data[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[1]);
  }
  this->m_Data[1] = v3;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[2]);
  }
  v4 = other->m_Data[2];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[2]);
  }
  this->m_Data[2] = v4;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[4]);
  }
  v5 = other->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[3]);
  }
  this->m_Data[3] = v5;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[5]);
  }
  v6 = other->m_Data[5];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[4]);
  }
  this->m_Data[4] = v6;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[6]);
  }
  v7 = other->m_Data[6];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[5]);
  }
  this->m_Data[5] = v7;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[8]);
  }
  v8 = other->m_Data[8];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[6]);
  }
  this->m_Data[6] = v8;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[9]);
  }
  v9 = other->m_Data[9];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[7]);
  }
  this->m_Data[7] = v9;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[10]);
  }
  v10 = other->m_Data[10];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[8]);
  }
  this->m_Data[8] = v10;
};

// Line 59: range 000000000CBFA26C-000000000CBFA5A1
Matrix3x3f *__cdecl Matrix3x3f::SetIdentity(Matrix3x3f *const this)
{
  float *v1; // rax
  _DWORD *v2; // rdx
  float *v3; // rax
  _DWORD *v4; // rdx
  float *v5; // rax
  _DWORD *v6; // rdx
  float *v7; // rax
  _DWORD *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
  float *v11; // rax
  _DWORD *v12; // rdx
  float *v13; // rax
  _DWORD *v14; // rdx
  float *v15; // rax
  _DWORD *v16; // rdx
  float *v17; // rax
  _DWORD *v18; // rdx

  v1 = Matrix3x3f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v1);
  }
  *v2 = 1065353216;
  v3 = Matrix3x3f::Get(this, 0, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = 0;
  v5 = Matrix3x3f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = 0;
  v7 = Matrix3x3f::Get(this, 1, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 0;
  v9 = Matrix3x3f::Get(this, 1, 1);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 1065353216;
  v11 = Matrix3x3f::Get(this, 1, 2);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = 0;
  v13 = Matrix3x3f::Get(this, 2, 0);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix3x3f::Get(this, 2, 1);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix3x3f::Get(this, 2, 2);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = 1065353216;
  return this;
};

// Line 67: range 000000000CBFA5A2-000000000CBFA8CB
Matrix3x3f *__cdecl Matrix3x3f::SetZero(Matrix3x3f *const this)
{
  float *v1; // rax
  _DWORD *v2; // rdx
  float *v3; // rax
  _DWORD *v4; // rdx
  float *v5; // rax
  _DWORD *v6; // rdx
  float *v7; // rax
  _DWORD *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
  float *v11; // rax
  _DWORD *v12; // rdx
  float *v13; // rax
  _DWORD *v14; // rdx
  float *v15; // rax
  _DWORD *v16; // rdx
  float *v17; // rax
  _DWORD *v18; // rdx

  v1 = Matrix3x3f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v1);
  }
  *v2 = 0;
  v3 = Matrix3x3f::Get(this, 0, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = 0;
  v5 = Matrix3x3f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = 0;
  v7 = Matrix3x3f::Get(this, 1, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 0;
  v9 = Matrix3x3f::Get(this, 1, 1);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = Matrix3x3f::Get(this, 1, 2);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = 0;
  v13 = Matrix3x3f::Get(this, 2, 0);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix3x3f::Get(this, 2, 1);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix3x3f::Get(this, 2, 2);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = 0;
  return this;
};

// Line 75: range 000000000CBFA8CC-000000000CBFAEFE
Matrix3x3f *__cdecl Matrix3x3f::SetBasis(
        Matrix3x3f *const this,
        const Vector3f *inX,
        const Vector3f *inY,
        const Vector3f *inZ)
{
  float *v4; // rax
  int *v5; // rdx
  float *v6; // rax
  _DWORD *v7; // rdx
  float *v8; // rax
  int *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  int *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  int *v17; // rdx
  float *v18; // rax
  _DWORD *v19; // rdx
  float *v20; // rax
  int *v21; // rdx
  float *v22; // rax
  _DWORD *v23; // rdx
  float *v24; // rax
  int *v25; // rdx
  float *v26; // rax
  _DWORD *v27; // rdx
  float *v28; // rax
  int *v29; // rdx
  float *v30; // rax
  _DWORD *v31; // rdx
  float *v32; // rax
  int *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  int *v37; // rdx
  float *v38; // rax
  _DWORD *v39; // rdx
  int v41; // [rsp+Ch] [rbp-24h]
  int v42; // [rsp+Ch] [rbp-24h]
  int v43; // [rsp+Ch] [rbp-24h]
  int v44; // [rsp+Ch] [rbp-24h]
  int v45; // [rsp+Ch] [rbp-24h]
  int v46; // [rsp+Ch] [rbp-24h]
  int v47; // [rsp+Ch] [rbp-24h]
  int v48; // [rsp+Ch] [rbp-24h]
  int v49; // [rsp+Ch] [rbp-24h]

  v4 = (float *)Vector3f::operator[](inX, 0);
  v5 = (int *)v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v41 = *v5;
  v6 = Matrix3x3f::Get(this, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v41;
  v8 = (float *)Vector3f::operator[](inY, 0);
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v42 = *v9;
  v10 = Matrix3x3f::Get(this, 0, 1);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v42;
  v12 = (float *)Vector3f::operator[](inZ, 0);
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v43 = *v13;
  v14 = Matrix3x3f::Get(this, 0, 2);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = v43;
  v16 = (float *)Vector3f::operator[](inX, 1);
  v17 = (int *)v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  v44 = *v17;
  v18 = Matrix3x3f::Get(this, 1, 0);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = v44;
  v20 = (float *)Vector3f::operator[](inY, 1);
  v21 = (int *)v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v45 = *v21;
  v22 = Matrix3x3f::Get(this, 1, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = v45;
  v24 = (float *)Vector3f::operator[](inZ, 1);
  v25 = (int *)v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v24);
  }
  v46 = *v25;
  v26 = Matrix3x3f::Get(this, 1, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = v46;
  v28 = (float *)Vector3f::operator[](inX, 2);
  v29 = (int *)v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v47 = *v29;
  v30 = Matrix3x3f::Get(this, 2, 0);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = v47;
  v32 = (float *)Vector3f::operator[](inY, 2);
  v33 = (int *)v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v48 = *v33;
  v34 = Matrix3x3f::Get(this, 2, 1);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = v48;
  v36 = (float *)Vector3f::operator[](inZ, 2);
  v37 = (int *)v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v49 = *v37;
  v38 = Matrix3x3f::Get(this, 2, 2);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = v49;
  return this;
};

// Line 83: range 000000000CBFAF00-000000000CBFB532
Matrix3x3f *__cdecl Matrix3x3f::SetBasisTransposed(
        Matrix3x3f *const this,
        const Vector3f *inX,
        const Vector3f *inY,
        const Vector3f *inZ)
{
  float *v4; // rax
  int *v5; // rdx
  float *v6; // rax
  _DWORD *v7; // rdx
  float *v8; // rax
  int *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  int *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  int *v17; // rdx
  float *v18; // rax
  _DWORD *v19; // rdx
  float *v20; // rax
  int *v21; // rdx
  float *v22; // rax
  _DWORD *v23; // rdx
  float *v24; // rax
  int *v25; // rdx
  float *v26; // rax
  _DWORD *v27; // rdx
  float *v28; // rax
  int *v29; // rdx
  float *v30; // rax
  _DWORD *v31; // rdx
  float *v32; // rax
  int *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  int *v37; // rdx
  float *v38; // rax
  _DWORD *v39; // rdx
  int v41; // [rsp+Ch] [rbp-24h]
  int v42; // [rsp+Ch] [rbp-24h]
  int v43; // [rsp+Ch] [rbp-24h]
  int v44; // [rsp+Ch] [rbp-24h]
  int v45; // [rsp+Ch] [rbp-24h]
  int v46; // [rsp+Ch] [rbp-24h]
  int v47; // [rsp+Ch] [rbp-24h]
  int v48; // [rsp+Ch] [rbp-24h]
  int v49; // [rsp+Ch] [rbp-24h]

  v4 = (float *)Vector3f::operator[](inX, 0);
  v5 = (int *)v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v41 = *v5;
  v6 = Matrix3x3f::Get(this, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v41;
  v8 = (float *)Vector3f::operator[](inY, 0);
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v42 = *v9;
  v10 = Matrix3x3f::Get(this, 1, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v42;
  v12 = (float *)Vector3f::operator[](inZ, 0);
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v43 = *v13;
  v14 = Matrix3x3f::Get(this, 2, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = v43;
  v16 = (float *)Vector3f::operator[](inX, 1);
  v17 = (int *)v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  v44 = *v17;
  v18 = Matrix3x3f::Get(this, 0, 1);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = v44;
  v20 = (float *)Vector3f::operator[](inY, 1);
  v21 = (int *)v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v45 = *v21;
  v22 = Matrix3x3f::Get(this, 1, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = v45;
  v24 = (float *)Vector3f::operator[](inZ, 1);
  v25 = (int *)v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v24);
  }
  v46 = *v25;
  v26 = Matrix3x3f::Get(this, 2, 1);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = v46;
  v28 = (float *)Vector3f::operator[](inX, 2);
  v29 = (int *)v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v47 = *v29;
  v30 = Matrix3x3f::Get(this, 0, 2);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = v47;
  v32 = (float *)Vector3f::operator[](inY, 2);
  v33 = (int *)v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v48 = *v33;
  v34 = Matrix3x3f::Get(this, 1, 2);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = v48;
  v36 = (float *)Vector3f::operator[](inZ, 2);
  v37 = (int *)v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v49 = *v37;
  v38 = Matrix3x3f::Get(this, 2, 2);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = v49;
  return this;
};

// Line 91: range 000000000CBFB534-000000000CBFB960
Matrix3x3f *__cdecl Matrix3x3f::SetScale(Matrix3x3f *const this, const Vector3f *inScale)
{
  float *v2; // rax
  int *v3; // rdx
  float *v4; // rax
  _DWORD *v5; // rdx
  float *v6; // rax
  _DWORD *v7; // rdx
  float *v8; // rax
  _DWORD *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  int *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  _DWORD *v17; // rdx
  float *v18; // rax
  _DWORD *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  int *v23; // rdx
  float *v24; // rax
  _DWORD *v25; // rdx
  int v27; // [rsp+Ch] [rbp-14h]
  int v28; // [rsp+Ch] [rbp-14h]
  int v29; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inScale, 0);
  v3 = (int *)v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v27 = *v3;
  v4 = Matrix3x3f::Get(this, 0, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = v27;
  v6 = Matrix3x3f::Get(this, 0, 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = 0;
  v8 = Matrix3x3f::Get(this, 0, 2);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = 0;
  v10 = Matrix3x3f::Get(this, 1, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = 0;
  v12 = (float *)Vector3f::operator[](inScale, 1);
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v28 = *v13;
  v14 = Matrix3x3f::Get(this, 1, 1);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = v28;
  v16 = Matrix3x3f::Get(this, 1, 2);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = 0;
  v18 = Matrix3x3f::Get(this, 2, 0);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = 0;
  v20 = Matrix3x3f::Get(this, 2, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = 0;
  v22 = (float *)Vector3f::operator[](inScale, 2);
  v23 = (int *)v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v29 = *v23;
  v24 = Matrix3x3f::Get(this, 2, 2);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = v29;
  return this;
};

// Line 99: range 000000000CBFB962-000000000CBFBD7B
bool __cdecl Matrix3x3f::IsIdentity(Matrix3x3f *const this, float threshold)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
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
  char v20; // al

  v2 = Matrix3x3f::Get(this, 0, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  if ( !CompareApproximately(*v3, 1.0, threshold) )
    goto LABEL_29;
  v4 = Matrix3x3f::Get(this, 0, 1);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  if ( !CompareApproximately(*v5, 0.0, threshold) )
    goto LABEL_29;
  v6 = Matrix3x3f::Get(this, 0, 2);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  if ( !CompareApproximately(*v7, 0.0, threshold) )
    goto LABEL_29;
  v8 = Matrix3x3f::Get(this, 1, 0);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  if ( !CompareApproximately(*v9, 0.0, threshold) )
    goto LABEL_29;
  v10 = Matrix3x3f::Get(this, 1, 1);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  if ( !CompareApproximately(*v11, 1.0, threshold) )
    goto LABEL_29;
  v12 = Matrix3x3f::Get(this, 1, 2);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  if ( !CompareApproximately(*v13, 0.0, threshold) )
    goto LABEL_29;
  v14 = Matrix3x3f::Get(this, 2, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  if ( !CompareApproximately(*v15, 0.0, threshold) )
    goto LABEL_29;
  v16 = Matrix3x3f::Get(this, 2, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  if ( !CompareApproximately(*v17, 0.0, threshold) )
    goto LABEL_29;
  v18 = Matrix3x3f::Get(this, 2, 2);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  if ( CompareApproximately(*v19, 1.0, threshold) )
    v20 = 1;
  else
LABEL_29:
    v20 = 0;
  return v20 != 0;
};

// Line 108: range 000000000CBFBD7C-000000000CBFC3AF
Matrix3x3f *__cdecl Matrix3x3f::Scale(Matrix3x3f *const this, const Vector3f *inScale)
{
  float *v2; // rax
  float *v3; // rdx
  float *v4; // rax
  float *v5; // rax
  float *v6; // rdx
  float *v7; // rax
  float *v8; // rax
  float *v9; // rdx
  float *v10; // rax
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  float *v14; // rax
  float *v15; // rdx
  float *v16; // rax
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rax
  float *v24; // rdx
  float *v25; // rax
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  float v30; // [rsp+Ch] [rbp-14h]
  float v31; // [rsp+Ch] [rbp-14h]
  float v32; // [rsp+Ch] [rbp-14h]
  float v33; // [rsp+Ch] [rbp-14h]
  float v34; // [rsp+Ch] [rbp-14h]
  float v35; // [rsp+Ch] [rbp-14h]
  float v36; // [rsp+Ch] [rbp-14h]
  float v37; // [rsp+Ch] [rbp-14h]
  float v38; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inScale, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v30 = *v3;
  v4 = Matrix3x3f::Get(this, 0, 0);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  *v4 = *v4 * v30;
  v5 = (float *)Vector3f::operator[](inScale, 0);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v31 = *v6;
  v7 = Matrix3x3f::Get(this, 1, 0);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *v7 = *v7 * v31;
  v8 = (float *)Vector3f::operator[](inScale, 0);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v32 = *v9;
  v10 = Matrix3x3f::Get(this, 2, 0);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  *v10 = *v10 * v32;
  v11 = (float *)Vector3f::operator[](inScale, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v33 = *v12;
  v13 = Matrix3x3f::Get(this, 0, 1);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  *v13 = *v13 * v33;
  v14 = (float *)Vector3f::operator[](inScale, 1);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v34 = *v15;
  v16 = Matrix3x3f::Get(this, 1, 1);
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  *v16 = *v16 * v34;
  v17 = (float *)Vector3f::operator[](inScale, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v35 = *v18;
  v19 = Matrix3x3f::Get(this, 2, 1);
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  *v19 = *v19 * v35;
  v20 = (float *)Vector3f::operator[](inScale, 2);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v36 = *v21;
  v22 = Matrix3x3f::Get(this, 0, 2);
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  *v22 = *v22 * v36;
  v23 = (float *)Vector3f::operator[](inScale, 2);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  v37 = *v24;
  v25 = Matrix3x3f::Get(this, 1, 2);
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  *v25 = *v25 * v37;
  v26 = (float *)Vector3f::operator[](inScale, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v38 = *v27;
  v28 = Matrix3x3f::Get(this, 2, 2);
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  *v28 = *v28 * v38;
  return this;
};

// Line 124: range 000000000CBFC3B0-000000000CBFCA59
float __cdecl Matrix3x3f::GetDeterminant(const Matrix3x3f *const this)
{
  float *v1; // rax
  float *v2; // rdx
  float *v3; // rax
  float *v4; // rdx
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
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  float *v32; // rdx
  float *v33; // rax
  float *v34; // rdx
  float *v35; // rax
  float *v36; // rdx
  float v38; // [rsp+4h] [rbp-2Ch]
  float v39; // [rsp+4h] [rbp-2Ch]
  float v40; // [rsp+4h] [rbp-2Ch]
  float v41; // [rsp+4h] [rbp-2Ch]
  float v42; // [rsp+4h] [rbp-2Ch]
  float v43; // [rsp+4h] [rbp-2Ch]
  float v44; // [rsp+4h] [rbp-2Ch]
  float v45; // [rsp+4h] [rbp-2Ch]
  float v46; // [rsp+4h] [rbp-2Ch]
  float v47; // [rsp+4h] [rbp-2Ch]
  float v48; // [rsp+4h] [rbp-2Ch]
  float v49; // [rsp+4h] [rbp-2Ch]
  float fCofactor0; // [rsp+18h] [rbp-18h]
  float fCofactor1; // [rsp+1Ch] [rbp-14h]
  float fCofactor2; // [rsp+20h] [rbp-10h]
  float fCofactor3; // [rsp+24h] [rbp-Ch]
  float fCofactor4; // [rsp+28h] [rbp-8h]

  v1 = (float *)Matrix3x3f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  v38 = *v2;
  v3 = (float *)Matrix3x3f::Get(this, 1, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  v39 = *v4 * v38;
  v5 = (float *)Matrix3x3f::Get(this, 2, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  fCofactor0 = *v6 * v39;
  v7 = (float *)Matrix3x3f::Get(this, 0, 1);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v40 = *v8;
  v9 = (float *)Matrix3x3f::Get(this, 1, 2);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v41 = *v10 * v40;
  v11 = (float *)Matrix3x3f::Get(this, 2, 0);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  fCofactor1 = *v12 * v41;
  v13 = (float *)Matrix3x3f::Get(this, 0, 2);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  v42 = *v14;
  v15 = (float *)Matrix3x3f::Get(this, 1, 0);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  v43 = *v16 * v42;
  v17 = (float *)Matrix3x3f::Get(this, 2, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  fCofactor2 = *v18 * v43;
  v19 = (float *)Matrix3x3f::Get(this, 0, 2);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  v44 = *v20;
  v21 = (float *)Matrix3x3f::Get(this, 1, 1);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  v45 = *v22 * v44;
  v23 = (float *)Matrix3x3f::Get(this, 2, 0);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  fCofactor3 = *v24 * v45;
  v25 = (float *)Matrix3x3f::Get(this, 0, 1);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  v46 = *v26;
  v27 = (float *)Matrix3x3f::Get(this, 1, 0);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v27);
  }
  v47 = *v28 * v46;
  v29 = (float *)Matrix3x3f::Get(this, 2, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  fCofactor4 = *v30 * v47;
  v31 = (float *)Matrix3x3f::Get(this, 0, 0);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v31);
  }
  v48 = *v32;
  v33 = (float *)Matrix3x3f::Get(this, 1, 2);
  v34 = v33;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v33);
  }
  v49 = *v34 * v48;
  v35 = (float *)Matrix3x3f::Get(this, 2, 1);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v35);
  }
  return (float)((float)((float)((float)(fCofactor0 + fCofactor1) + fCofactor2) - fCofactor3) - fCofactor4)
       - (float)(*v36 * v49);
};

// Line 137: range 000000000CBFCA5A-000000000CBFCB1F
Matrix3x3f *__cdecl Matrix3x3f::Transpose(Matrix3x3f *const this)
{
  float *v1; // rbx
  float *v2; // rax
  float *v3; // rbx
  float *v4; // rax
  float *v5; // rbx
  float *v6; // rax

  v1 = Matrix3x3f::Get(this, 1, 0);
  v2 = Matrix3x3f::Get(this, 0, 1);
  std::swap<float>(v2, v1);
  v3 = Matrix3x3f::Get(this, 2, 0);
  v4 = Matrix3x3f::Get(this, 0, 2);
  std::swap<float>(v4, v3);
  v5 = Matrix3x3f::Get(this, 1, 2);
  v6 = Matrix3x3f::Get(this, 2, 1);
  std::swap<float>(v6, v5);
  return this;
};

// Line 159: range 000000000CBFCB20-000000000CBFCC63
bool __cdecl Matrix3x3f::Invert(Matrix3x3f *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  float *Ptr; // r14
  float *v5; // rax
  bool result; // al
  bool success; // [rsp+1Fh] [rbp-B1h]
  char v8[176]; // [rsp+20h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 64 5 m:161";
  *(_QWORD *)(v1 + 16) = Matrix3x3f::Invert;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450892) = -202116109;
  Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v1 + 32), this);
  Ptr = Matrix4x4f::GetPtr((Matrix4x4f *const)(v1 + 32));
  v5 = Matrix4x4f::GetPtr((Matrix4x4f *const)(v1 + 32));
  success = InvertMatrix4x4_Full(v5, Ptr);
  Matrix3x3f::operator=(this, (const Matrix4x4f *)(v1 + 32));
  result = success;
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 200: range 000000000CBFCC64-000000000CBFCC8A
void __cdecl Matrix3x3f::InvertTranspose(Matrix3x3f *const this)
{
  Matrix3x3f::Invert(this);
  Matrix3x3f::Transpose(this);
};

// Line 206: range 000000000CBFCC8C-000000000CBFCD1F
Matrix3x3f *__cdecl Matrix3x3f::operator*=(Matrix3x3f *const this, float f)
{
  char v2; // dl
  int i; // [rsp+1Ch] [rbp-4h]

  for ( i = 0; i <= 8; ++i )
  {
    v2 = *(_BYTE *)(((unsigned __int64)&this->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v2 != 0 && (char)(((4 * i + (_BYTE)this) & 7) + 3) >= v2 )
      __asan_report_load4(&this->m_Data[i]);
    this->m_Data[i] = this->m_Data[i] * f;
  }
  return this;
};

// Line 213: range 000000000CBFCD20-000000000CBFD43E
Matrix3x3f *__cdecl Matrix3x3f::operator*=(Matrix3x3f *const this, const Matrix3x3f *inM)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float *v5; // rax
  _DWORD *v6; // rdx
  float *v7; // rax
  _DWORD *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
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
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  float *v32; // rdx
  float *v33; // rax
  float *v34; // rdx
  Matrix3x3f *result; // rax
  float v36; // [rsp+8h] [rbp-88h]
  float v37; // [rsp+8h] [rbp-88h]
  float v38; // [rsp+8h] [rbp-88h]
  float v39; // [rsp+8h] [rbp-88h]
  float v40; // [rsp+8h] [rbp-88h]
  float v41; // [rsp+8h] [rbp-88h]
  float v42; // [rsp+Ch] [rbp-84h]
  float v43; // [rsp+Ch] [rbp-84h]
  float v44; // [rsp+Ch] [rbp-84h]
  float v45; // [rsp+Ch] [rbp-84h]
  float v46; // [rsp+Ch] [rbp-84h]
  float v47; // [rsp+Ch] [rbp-84h]
  float v48; // [rsp+Ch] [rbp-84h]
  float v49; // [rsp+Ch] [rbp-84h]
  float v50; // [rsp+Ch] [rbp-84h]
  float v51; // [rsp+Ch] [rbp-84h]
  float v52; // [rsp+Ch] [rbp-84h]
  float v53; // [rsp+Ch] [rbp-84h]
  int i; // [rsp+2Ch] [rbp-64h]
  char v55[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 5 v:217";
  *(_QWORD *)(v2 + 16) = Matrix3x3f::operator*=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  for ( i = 0; i <= 2; ++i )
  {
    v5 = Matrix3x3f::Get(this, i, 0);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    v7 = Matrix3x3f::Get(this, i, 1);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 36) = *v8;
    v9 = Matrix3x3f::Get(this, i, 2);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v2 + 40) = *v10;
    v42 = *(float *)(v2 + 32);
    v11 = (float *)Matrix3x3f::Get(inM, 0, 0);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v43 = *v12 * v42;
    v36 = *(float *)(v2 + 36);
    v13 = (float *)Matrix3x3f::Get(inM, 1, 0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v44 = (float)(*v14 * v36) + v43;
    v37 = *(float *)(v2 + 40);
    v15 = (float *)Matrix3x3f::Get(inM, 2, 0);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v45 = (float)(*v16 * v37) + v44;
    v17 = Matrix3x3f::Get(this, i, 0);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v17);
    }
    *v18 = v45;
    v46 = *(float *)(v2 + 32);
    v19 = (float *)Matrix3x3f::Get(inM, 0, 1);
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    v47 = *v20 * v46;
    v38 = *(float *)(v2 + 36);
    v21 = (float *)Matrix3x3f::Get(inM, 1, 1);
    v22 = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    v48 = (float)(*v22 * v38) + v47;
    v39 = *(float *)(v2 + 40);
    v23 = (float *)Matrix3x3f::Get(inM, 2, 1);
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    v49 = (float)(*v24 * v39) + v48;
    v25 = Matrix3x3f::Get(this, i, 1);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v25);
    }
    *v26 = v49;
    v50 = *(float *)(v2 + 32);
    v27 = (float *)Matrix3x3f::Get(inM, 0, 2);
    v28 = v27;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    v51 = *v28 * v50;
    v40 = *(float *)(v2 + 36);
    v29 = (float *)Matrix3x3f::Get(inM, 1, 2);
    v30 = v29;
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v29);
    }
    v52 = (float)(*v30 * v40) + v51;
    v41 = *(float *)(v2 + 40);
    v31 = (float *)Matrix3x3f::Get(inM, 2, 2);
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v31);
    }
    v53 = (float)(*v32 * v41) + v52;
    v33 = Matrix3x3f::Get(this, i, 2);
    v34 = v33;
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v33);
    }
    *v34 = v53;
  }
  result = this;
  if ( v55 == (char *)v2 )
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

// Line 226: range 000000000CBFD440-000000000CBFDB5E
Matrix3x3f *__cdecl Matrix3x3f::operator*=(Matrix3x3f *const this, const Matrix4x4f *inM)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  float *v5; // rax
  _DWORD *v6; // rdx
  float *v7; // rax
  _DWORD *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
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
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  float *v32; // rdx
  float *v33; // rax
  float *v34; // rdx
  Matrix3x3f *result; // rax
  float v36; // [rsp+8h] [rbp-88h]
  float v37; // [rsp+8h] [rbp-88h]
  float v38; // [rsp+8h] [rbp-88h]
  float v39; // [rsp+8h] [rbp-88h]
  float v40; // [rsp+8h] [rbp-88h]
  float v41; // [rsp+8h] [rbp-88h]
  float v42; // [rsp+Ch] [rbp-84h]
  float v43; // [rsp+Ch] [rbp-84h]
  float v44; // [rsp+Ch] [rbp-84h]
  float v45; // [rsp+Ch] [rbp-84h]
  float v46; // [rsp+Ch] [rbp-84h]
  float v47; // [rsp+Ch] [rbp-84h]
  float v48; // [rsp+Ch] [rbp-84h]
  float v49; // [rsp+Ch] [rbp-84h]
  float v50; // [rsp+Ch] [rbp-84h]
  float v51; // [rsp+Ch] [rbp-84h]
  float v52; // [rsp+Ch] [rbp-84h]
  float v53; // [rsp+Ch] [rbp-84h]
  int i; // [rsp+2Ch] [rbp-64h]
  char v55[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 5 v:230";
  *(_QWORD *)(v2 + 16) = Matrix3x3f::operator*=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  for ( i = 0; i <= 2; ++i )
  {
    v5 = Matrix3x3f::Get(this, i, 0);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    v7 = Matrix3x3f::Get(this, i, 1);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 36) = *v8;
    v9 = Matrix3x3f::Get(this, i, 2);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v2 + 40) = *v10;
    v42 = *(float *)(v2 + 32);
    v11 = (float *)Matrix4x4f::Get(inM, 0, 0);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v43 = *v12 * v42;
    v36 = *(float *)(v2 + 36);
    v13 = (float *)Matrix4x4f::Get(inM, 1, 0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v44 = (float)(*v14 * v36) + v43;
    v37 = *(float *)(v2 + 40);
    v15 = (float *)Matrix4x4f::Get(inM, 2, 0);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v45 = (float)(*v16 * v37) + v44;
    v17 = Matrix3x3f::Get(this, i, 0);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v17);
    }
    *v18 = v45;
    v46 = *(float *)(v2 + 32);
    v19 = (float *)Matrix4x4f::Get(inM, 0, 1);
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    v47 = *v20 * v46;
    v38 = *(float *)(v2 + 36);
    v21 = (float *)Matrix4x4f::Get(inM, 1, 1);
    v22 = v21;
    if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v21);
    }
    v48 = (float)(*v22 * v38) + v47;
    v39 = *(float *)(v2 + 40);
    v23 = (float *)Matrix4x4f::Get(inM, 2, 1);
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    v49 = (float)(*v24 * v39) + v48;
    v25 = Matrix3x3f::Get(this, i, 1);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v25);
    }
    *v26 = v49;
    v50 = *(float *)(v2 + 32);
    v27 = (float *)Matrix4x4f::Get(inM, 0, 2);
    v28 = v27;
    if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v27);
    }
    v51 = *v28 * v50;
    v40 = *(float *)(v2 + 36);
    v29 = (float *)Matrix4x4f::Get(inM, 1, 2);
    v30 = v29;
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v29);
    }
    v52 = (float)(*v30 * v40) + v51;
    v41 = *(float *)(v2 + 40);
    v31 = (float *)Matrix4x4f::Get(inM, 2, 2);
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v31);
    }
    v53 = (float)(*v32 * v41) + v52;
    v33 = Matrix3x3f::Get(this, i, 2);
    v34 = v33;
    if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v33);
    }
    *v34 = v53;
  }
  result = this;
  if ( v55 == (char *)v2 )
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

// Line 239: range 000000000CBFDB60-000000000CBFDB9F
Matrix3x3f *__cdecl Matrix3x3f::SetAxisAngle(Matrix3x3f *const this, const Vector3f *rotationAxis, float radians)
{
  const float *Ptr; // rcx

  Ptr = Vector3f::GetPtr(rotationAxis);
  GetRotMatrixNormVec(this->m_Data, Ptr, radians);
  return this;
};

// Line 245: range 000000000CBFDBA0-000000000CBFE1A2
void __cdecl EulerToMatrix(const Vector3f *v, Matrix3x3f *matrix)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  float *v8; // rax
  float *v9; // rdx
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
  float cx_0; // [rsp+28h] [rbp-18h]
  float sx; // [rsp+2Ch] [rbp-14h]
  float cy; // [rsp+30h] [rbp-10h]
  float sy; // [rsp+34h] [rbp-Ch]
  float cz; // [rsp+38h] [rbp-8h]
  float sz; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  v2 = _mm_cvtsi32_si128(LODWORD(v->x));
  *(float *)v2.m128i_i32 = std::cos(*(float *)v2.m128i_i32);
  cx_0 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  v3 = _mm_cvtsi32_si128(LODWORD(v->x));
  *(float *)v3.m128i_i32 = std::sin(*(float *)v3.m128i_i32);
  sx = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v4 = _mm_cvtsi32_si128(LODWORD(v->y));
  *(float *)v4.m128i_i32 = std::cos(*(float *)v4.m128i_i32);
  cy = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  v5 = _mm_cvtsi32_si128(LODWORD(v->y));
  *(float *)v5.m128i_i32 = std::sin(*(float *)v5.m128i_i32);
  sy = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v6 = _mm_cvtsi32_si128(LODWORD(v->z));
  *(float *)v6.m128i_i32 = std::cos(*(float *)v6.m128i_i32);
  cz = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  v7 = _mm_cvtsi32_si128(LODWORD(v->z));
  *(float *)v7.m128i_i32 = std::sin(*(float *)v7.m128i_i32);
  sz = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v8 = Matrix3x3f::Get(matrix, 0, 0);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = (float)(cy * cz) + (float)((float)(sx * sy) * sz);
  v10 = Matrix3x3f::Get(matrix, 0, 1);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = (float)((float)(cz * sx) * sy) - (float)(cy * sz);
  v12 = Matrix3x3f::Get(matrix, 0, 2);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = cx_0 * sy;
  v14 = Matrix3x3f::Get(matrix, 1, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = cx_0 * sz;
  v16 = Matrix3x3f::Get(matrix, 1, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = cx_0 * cz;
  v18 = Matrix3x3f::Get(matrix, 1, 2);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = -sx;
  v20 = Matrix3x3f::Get(matrix, 2, 0);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = (float)((float)-cz * sy) + (float)((float)(cy * sx) * sz);
  v22 = Matrix3x3f::Get(matrix, 2, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = (float)((float)(cy * cz) * sx) + (float)(sy * sz);
  v24 = Matrix3x3f::Get(matrix, 2, 2);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = cx_0 * cy;
};

// Line 274: range 000000000CBFE1A4-000000000CC006A7
// local variable allocation has failed, the output may be wrong!
Matrix3x3f *__cdecl Matrix3x3f::SetFromToRotation(Matrix3x3f *const this, const Vector3f *from, const Vector3f *to)
{
  __m128i v3; // xmm1
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // xmm0_8
  float *v8; // rax
  _DWORD *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  _DWORD *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  _DWORD *v17; // rdx
  float *v18; // rax
  _DWORD *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  _DWORD *v23; // rdx
  float *v24; // rax
  _DWORD *v25; // rdx
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  float *v29; // rdx
  float *v30; // rax
  float *v31; // rdx
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  int *v37; // rdx
  float *v38; // rax
  _DWORD *v39; // rdx
  float v40; // xmm0_4
  float *v41; // rax
  float *v42; // rax
  float *v43; // rax
  float *v44; // rax
  float *v45; // rdx
  float *v46; // rax
  float *v47; // rdx
  float *v48; // rax
  float *v49; // rdx
  float *v50; // rax
  float *v51; // rdx
  float *v52; // rax
  float *v53; // rdx
  float *v54; // rax
  float *v55; // rdx
  float *v56; // rax
  float *v57; // rdx
  float *v58; // rax
  float *v59; // rdx
  float *v60; // rax
  float *v61; // rdx
  float *v62; // rax
  float *v63; // rdx
  float *v64; // rax
  float *v65; // rdx
  float *v66; // rax
  float *v67; // rdx
  float *v68; // rax
  float *v69; // rdx
  float *v70; // rax
  float *v71; // rdx
  float *v72; // rax
  float *v73; // rdx
  float *v74; // rax
  float *v75; // rdx
  float *v76; // rax
  float *v77; // rdx
  float *v78; // rax
  float *v79; // rdx
  float *v80; // rax
  float *v81; // rdx
  float *v82; // rax
  float *v83; // rdx
  float *v84; // rax
  float *v85; // rdx
  float *v86; // rax
  float *v87; // rdx
  float *v88; // rax
  float *v89; // rdx
  float *v90; // rax
  float *v91; // rdx
  float *v92; // rax
  float *v93; // rdx
  float *v94; // rax
  float *v95; // rdx
  float *v96; // rax
  float *v97; // rdx
  float *v98; // rax
  float *v99; // rdx
  float *v100; // rax
  float *v101; // rdx
  float *v102; // rax
  float *v103; // rdx
  float *v104; // rax
  float *v105; // rdx
  float *v106; // rax
  float *v107; // rdx
  float *v108; // rax
  float *v109; // rdx
  float *v110; // rax
  float *v111; // rdx
  float *v112; // rax
  float *v113; // rdx
  float *v114; // rax
  float *v115; // rdx
  float *v116; // rax
  float *v117; // rdx
  float *v118; // rax
  float *v119; // rdx
  float *v120; // rax
  float *v121; // rdx
  float *v122; // rax
  int *v123; // rdx
  float *v124; // rax
  _DWORD *v125; // rdx
  float *v126; // rax
  float *v127; // rdx
  float *v128; // rax
  float *v129; // rdx
  float *v130; // rax
  int *v131; // rdx
  float *v132; // rax
  _DWORD *v133; // rdx
  float *v134; // rax
  int *v135; // rdx
  float *v136; // rax
  _DWORD *v137; // rdx
  float *v138; // rax
  float *v139; // rdx
  float *v140; // rax
  float *v141; // rdx
  float *v142; // rax
  float *v143; // rdx
  float *v144; // rax
  float *v145; // rdx
  float *v146; // rax
  float *v147; // rdx
  float *v148; // rax
  float *v149; // rdx
  float *v150; // rax
  float *v151; // rdx
  float *v152; // rax
  float *v153; // rdx
  float *v154; // rax
  float *v155; // rdx
  float *v156; // rax
  float *v157; // rdx
  float *v158; // rax
  float *v159; // rdx
  float *v160; // rax
  float *v161; // rdx
  float *v162; // rax
  float *v163; // rdx
  float *v164; // rax
  float *v165; // rdx
  float *v166; // rax
  float *v167; // rdx
  float *v168; // rax
  float *v169; // rdx
  float *v170; // rax
  float *v171; // rdx
  float *v172; // rax
  float *v173; // rdx
  float *v174; // rax
  float *v175; // rdx
  float *v176; // rax
  float *v177; // rdx
  float *v178; // rax
  float *v179; // rdx
  float *v180; // rax
  float *v181; // rdx
  float *v182; // rax
  float *v183; // rdx
  float *v184; // rax
  float *v185; // rdx
  float *v186; // rax
  float *v187; // rdx
  Matrix3x3f *result; // rax
  float inZ; // [rsp+4h] [rbp-12Ch]
  float inZa; // [rsp+4h] [rbp-12Ch]
  int inZb; // [rsp+4h] [rbp-12Ch]
  float inZc; // [rsp+4h] [rbp-12Ch]
  float inZd; // [rsp+4h] [rbp-12Ch]
  float inZe; // [rsp+4h] [rbp-12Ch]
  float inZf; // [rsp+4h] [rbp-12Ch]
  float inZg; // [rsp+4h] [rbp-12Ch]
  float inZh; // [rsp+4h] [rbp-12Ch]
  float inZi; // [rsp+4h] [rbp-12Ch]
  float inZj; // [rsp+4h] [rbp-12Ch]
  float inZk; // [rsp+4h] [rbp-12Ch]
  float inZl; // [rsp+4h] [rbp-12Ch]
  float inZm; // [rsp+4h] [rbp-12Ch]
  float inZn; // [rsp+4h] [rbp-12Ch]
  float inZo; // [rsp+4h] [rbp-12Ch]
  float inZp; // [rsp+4h] [rbp-12Ch]
  float inZq; // [rsp+4h] [rbp-12Ch]
  float inZr; // [rsp+4h] [rbp-12Ch]
  float inZs; // [rsp+4h] [rbp-12Ch]
  float inZt; // [rsp+4h] [rbp-12Ch]
  int inZu; // [rsp+4h] [rbp-12Ch]
  int inZv; // [rsp+4h] [rbp-12Ch]
  int inZw; // [rsp+4h] [rbp-12Ch]
  float inZx; // [rsp+4h] [rbp-12Ch]
  float inZy; // [rsp+4h] [rbp-12Ch]
  float inZz; // [rsp+4h] [rbp-12Ch]
  float inZba; // [rsp+4h] [rbp-12Ch]
  float inZbb; // [rsp+4h] [rbp-12Ch]
  float inZbc; // [rsp+4h] [rbp-12Ch]
  float inZbd; // [rsp+4h] [rbp-12Ch]
  float inZbe; // [rsp+4h] [rbp-12Ch]
  float inZbf; // [rsp+4h] [rbp-12Ch]
  float inZbg; // [rsp+4h] [rbp-12Ch]
  float e; // [rsp+24h] [rbp-10Ch]
  float h; // [rsp+2Ch] [rbp-104h]
  float hvx; // [rsp+30h] [rbp-100h]
  float hvz; // [rsp+34h] [rbp-FCh]
  float hvxy; // [rsp+38h] [rbp-F8h]
  float hvxz; // [rsp+3Ch] [rbp-F4h]
  float hvyz; // [rsp+40h] [rbp-F0h]
  float invlen; // [rsp+44h] [rbp-ECh]
  float fxx; // [rsp+48h] [rbp-E8h]
  float fyy; // [rsp+4Ch] [rbp-E4h]
  float fzz; // [rsp+50h] [rbp-E0h]
  float fxy; // [rsp+54h] [rbp-DCh]
  float fxz; // [rsp+58h] [rbp-D8h]
  float fyz; // [rsp+5Ch] [rbp-D4h]
  float uxx; // [rsp+60h] [rbp-D0h]
  float uyy; // [rsp+64h] [rbp-CCh]
  float uzz; // [rsp+68h] [rbp-C8h]
  float uxy; // [rsp+6Ch] [rbp-C4h]
  float uxz; // [rsp+70h] [rbp-C0h]
  float uyz; // [rsp+74h] [rbp-BCh]
  float lxx; // [rsp+78h] [rbp-B8h]
  float lyy; // [rsp+7Ch] [rbp-B4h]
  float lzz; // [rsp+80h] [rbp-B0h]
  float lxy; // [rsp+84h] [rbp-ACh]
  float lxz; // [rsp+88h] [rbp-A8h]
  float lyz; // [rsp+8Ch] [rbp-A4h]
  char v250[160]; // [rsp+90h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v250;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 12 5 v:275 64 12 8 left:292 96 12 6 up:303";
  *(_QWORD *)(v4 + 16) = Matrix3x3f::SetFromToRotation;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -219020288;
  v6[536862723] = -202177536;
  *(Vector3f *)((char *)&v3 - 8) = Cross(from, to);
  *(_QWORD *)(v4 + 32) = v7;
  *(_DWORD *)(v4 + 40) = v3.m128i_i32[0];
  Dot(from, to);
  e = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( e <= 0.9999990000000025 )
  {
    if ( e >= -0.9999990000000025 )
    {
      h = (float)(1.0 - e) / Dot((const Vector3f *)(v4 + 32), (const Vector3f *)(v4 + 32));
      v140 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 0);
      v141 = v140;
      if ( *(_BYTE *)(((unsigned __int64)v140 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v140 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v140 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v140);
      }
      hvx = *v141 * h;
      v142 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 2);
      v143 = v142;
      if ( *(_BYTE *)(((unsigned __int64)v142 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v142 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v142 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v142);
      }
      hvz = *v143 * h;
      v144 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v145 = v144;
      if ( *(_BYTE *)(((unsigned __int64)v144 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v144 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v144 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v144);
      }
      hvxy = *v145 * hvx;
      v146 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 2);
      v147 = v146;
      if ( *(_BYTE *)(((unsigned __int64)v146 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v146 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v146 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v146);
      }
      hvxz = *v147 * hvx;
      v148 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v149 = v148;
      if ( *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v148 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v148);
      }
      hvyz = *v149 * hvz;
      v150 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 0);
      v151 = v150;
      if ( *(_BYTE *)(((unsigned __int64)v150 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v150 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v150 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v150);
      }
      inZx = (float)(*v151 * hvx) + e;
      v152 = Matrix3x3f::Get(this, 0, 0);
      v153 = v152;
      if ( *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v152 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v152);
      }
      *v153 = inZx;
      v154 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 2);
      v155 = v154;
      if ( *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v154 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v154);
      }
      inZy = hvxy - *v155;
      v156 = Matrix3x3f::Get(this, 0, 1);
      v157 = v156;
      if ( *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v156 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v156);
      }
      *v157 = inZy;
      v158 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v159 = v158;
      if ( *(_BYTE *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v158 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v158);
      }
      inZz = *v159 + hvxz;
      v160 = Matrix3x3f::Get(this, 0, 2);
      v161 = v160;
      if ( *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v160 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v160);
      }
      *v161 = inZz;
      v162 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 2);
      v163 = v162;
      if ( *(_BYTE *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v162 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v162 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v162);
      }
      inZba = *v163 + hvxy;
      v164 = Matrix3x3f::Get(this, 1, 0);
      v165 = v164;
      if ( *(_BYTE *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v164 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v164 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v164);
      }
      *v165 = inZba;
      v166 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v167 = v166;
      if ( *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v166 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v166 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v166);
      }
      inZbb = *v167 * h;
      v168 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v169 = v168;
      if ( *(_BYTE *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v168 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v168 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v168);
      }
      inZbc = (float)(*v169 * inZbb) + e;
      v170 = Matrix3x3f::Get(this, 1, 1);
      v171 = v170;
      if ( *(_BYTE *)(((unsigned __int64)v170 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v170 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v170 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v170);
      }
      *v171 = inZbc;
      v172 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 0);
      v173 = v172;
      if ( *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v172 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v172 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v172);
      }
      inZbd = hvyz - *v173;
      v174 = Matrix3x3f::Get(this, 1, 2);
      v175 = v174;
      if ( *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v174 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v174);
      }
      *v175 = inZbd;
      v176 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 1);
      v177 = v176;
      if ( *(_BYTE *)(((unsigned __int64)v176 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v176 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v176 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v176);
      }
      inZbe = hvxz - *v177;
      v178 = Matrix3x3f::Get(this, 2, 0);
      v179 = v178;
      if ( *(_BYTE *)(((unsigned __int64)v178 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v178 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v178 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v178);
      }
      *v179 = inZbe;
      v180 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 0);
      v181 = v180;
      if ( *(_BYTE *)(((unsigned __int64)v180 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v180 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v180 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v180);
      }
      inZbf = *v181 + hvyz;
      v182 = Matrix3x3f::Get(this, 2, 1);
      v183 = v182;
      if ( *(_BYTE *)(((unsigned __int64)v182 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v182 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v182 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v182);
      }
      *v183 = inZbf;
      v184 = Vector3f::operator[]((Vector3f *const)(v4 + 32), 2);
      v185 = v184;
      if ( *(_BYTE *)(((unsigned __int64)v184 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v184 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v184 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v184);
      }
      inZbg = (float)(*v185 * hvz) + e;
      v186 = Matrix3x3f::Get(this, 2, 2);
      v187 = v186;
      if ( *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v186 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v186);
      }
      *v187 = inZbg;
    }
    else
    {
      v26 = (float *)Vector3f::operator[](from, 1);
      v27 = v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      inZ = -*v27;
      v28 = (float *)Vector3f::operator[](from, 2);
      v29 = v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      Vector3f::Vector3f((Vector3f *const)(v4 + 64), 0.0, *v29, inZ);
      if ( Dot((const Vector3f *)(v4 + 64), (const Vector3f *)(v4 + 64)) < 0.000001 )
      {
        v30 = (float *)Vector3f::operator[](from, 2);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        inZa = -*v31;
        v32 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
        v33 = v32;
        if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v32);
        }
        *v33 = inZa;
        v34 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
        v35 = v34;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v34);
        }
        *v35 = 0;
        v36 = (float *)Vector3f::operator[](from, 0);
        v37 = (int *)v36;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        inZb = *v37;
        v38 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
        v39 = v38;
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v38);
        }
        *v39 = inZb;
      }
      v40 = Dot((const Vector3f *)(v4 + 64), (const Vector3f *)(v4 + 64));
      invlen = 1.0 / std::sqrt(v40);
      v41 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v41);
      }
      *v41 = *v41 * invlen;
      v42 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v42);
      }
      *v42 = *v42 * invlen;
      v43 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
      if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v43);
      }
      *v43 = *v43 * invlen;
      *(Vector3f *)(v4 + 96) = Cross((const Vector3f *)(v4 + 64), from);
      v44 = (float *)Vector3f::operator[](from, 0);
      v45 = v44;
      if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v44);
      }
      inZc = -*v45;
      v46 = (float *)Vector3f::operator[](from, 0);
      v47 = v46;
      if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v46);
      }
      fxx = *v47 * inZc;
      v48 = (float *)Vector3f::operator[](from, 1);
      v49 = v48;
      if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v48);
      }
      inZd = -*v49;
      v50 = (float *)Vector3f::operator[](from, 1);
      v51 = v50;
      if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v50);
      }
      fyy = *v51 * inZd;
      v52 = (float *)Vector3f::operator[](from, 2);
      v53 = v52;
      if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v52);
      }
      inZe = -*v53;
      v54 = (float *)Vector3f::operator[](from, 2);
      v55 = v54;
      if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v54);
      }
      fzz = *v55 * inZe;
      v56 = (float *)Vector3f::operator[](from, 0);
      v57 = v56;
      if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v56);
      }
      inZf = -*v57;
      v58 = (float *)Vector3f::operator[](from, 1);
      v59 = v58;
      if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v58);
      }
      fxy = *v59 * inZf;
      v60 = (float *)Vector3f::operator[](from, 0);
      v61 = v60;
      if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v60);
      }
      inZg = -*v61;
      v62 = (float *)Vector3f::operator[](from, 2);
      v63 = v62;
      if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v62);
      }
      fxz = *v63 * inZg;
      v64 = (float *)Vector3f::operator[](from, 1);
      v65 = v64;
      if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v64);
      }
      inZh = -*v65;
      v66 = (float *)Vector3f::operator[](from, 2);
      v67 = v66;
      if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v66);
      }
      fyz = *v67 * inZh;
      v68 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 0);
      v69 = v68;
      if ( *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v68 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v68);
      }
      inZi = *v69;
      v70 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 0);
      v71 = v70;
      if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v70 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v70);
      }
      uxx = *v71 * inZi;
      v72 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 1);
      v73 = v72;
      if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v72 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v72);
      }
      inZj = *v73;
      v74 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 1);
      v75 = v74;
      if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v74);
      }
      uyy = *v75 * inZj;
      v76 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 2);
      v77 = v76;
      if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v76 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v76);
      }
      inZk = *v77;
      v78 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 2);
      v79 = v78;
      if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v78 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v78);
      }
      uzz = *v79 * inZk;
      v80 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 0);
      v81 = v80;
      if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v80 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v80);
      }
      inZl = *v81;
      v82 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 1);
      v83 = v82;
      if ( *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v82 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v82);
      }
      uxy = *v83 * inZl;
      v84 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 0);
      v85 = v84;
      if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v84 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v84);
      }
      inZm = *v85;
      v86 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 2);
      v87 = v86;
      if ( *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v86 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v86 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v86);
      }
      uxz = *v87 * inZm;
      v88 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 1);
      v89 = v88;
      if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v88);
      }
      inZn = *v89;
      v90 = Vector3f::operator[]((Vector3f *const)(v4 + 96), 2);
      v91 = v90;
      if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v90);
      }
      uyz = *v91 * inZn;
      v92 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
      v93 = v92;
      if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v92);
      }
      inZo = -*v93;
      v94 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
      v95 = v94;
      if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v94);
      }
      lxx = *v95 * inZo;
      v96 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
      v97 = v96;
      if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v96);
      }
      inZp = -*v97;
      v98 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
      v99 = v98;
      if ( *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v98 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v98 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v98);
      }
      lyy = *v99 * inZp;
      v100 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
      v101 = v100;
      if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v100 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v100);
      }
      inZq = -*v101;
      v102 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
      v103 = v102;
      if ( *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v102 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v102);
      }
      lzz = *v103 * inZq;
      v104 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
      v105 = v104;
      if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v104 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v104);
      }
      inZr = -*v105;
      v106 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
      v107 = v106;
      if ( *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v106 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v106);
      }
      lxy = *v107 * inZr;
      v108 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 0);
      v109 = v108;
      if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v108 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v108);
      }
      inZs = -*v109;
      v110 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
      v111 = v110;
      if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v110);
      }
      lxz = *v111 * inZs;
      v112 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 1);
      v113 = v112;
      if ( *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v112 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v112 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v112);
      }
      inZt = -*v113;
      v114 = Vector3f::operator[]((Vector3f *const)(v4 + 64), 2);
      v115 = v114;
      if ( *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v114 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v114 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v114);
      }
      lyz = *v115 * inZt;
      v116 = Matrix3x3f::Get(this, 0, 0);
      v117 = v116;
      if ( *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v116 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v116);
      }
      *v117 = (float)(fxx + uxx) + lxx;
      v118 = Matrix3x3f::Get(this, 0, 1);
      v119 = v118;
      if ( *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v118 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v118 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v118);
      }
      *v119 = (float)(fxy + uxy) + lxy;
      v120 = Matrix3x3f::Get(this, 0, 2);
      v121 = v120;
      if ( *(_BYTE *)(((unsigned __int64)v120 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v120 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v120 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v120);
      }
      *v121 = (float)(fxz + uxz) + lxz;
      v122 = Matrix3x3f::Get(this, 0, 1);
      v123 = (int *)v122;
      if ( *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v122 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v122);
      }
      inZu = *v123;
      v124 = Matrix3x3f::Get(this, 1, 0);
      v125 = v124;
      if ( *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v124 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v124 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v124);
      }
      *v125 = inZu;
      v126 = Matrix3x3f::Get(this, 1, 1);
      v127 = v126;
      if ( *(_BYTE *)(((unsigned __int64)v126 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v126 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v126 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v126);
      }
      *v127 = (float)(fyy + uyy) + lyy;
      v128 = Matrix3x3f::Get(this, 1, 2);
      v129 = v128;
      if ( *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v128 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v128);
      }
      *v129 = (float)(fyz + uyz) + lyz;
      v130 = Matrix3x3f::Get(this, 0, 2);
      v131 = (int *)v130;
      if ( *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v130 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v130);
      }
      inZv = *v131;
      v132 = Matrix3x3f::Get(this, 2, 0);
      v133 = v132;
      if ( *(_BYTE *)(((unsigned __int64)v132 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v132 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v132 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v132);
      }
      *v133 = inZv;
      v134 = Matrix3x3f::Get(this, 1, 2);
      v135 = (int *)v134;
      if ( *(_BYTE *)(((unsigned __int64)v134 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v134 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v134 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v134);
      }
      inZw = *v135;
      v136 = Matrix3x3f::Get(this, 2, 1);
      v137 = v136;
      if ( *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v136 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v136);
      }
      *v137 = inZw;
      v138 = Matrix3x3f::Get(this, 2, 2);
      v139 = v138;
      if ( *(_BYTE *)(((unsigned __int64)v138 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v138 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v138 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v138);
      }
      *v139 = (float)(fzz + uzz) + lzz;
    }
  }
  else
  {
    v8 = Matrix3x3f::Get(this, 0, 0);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v8);
    }
    *v9 = 1065353216;
    v10 = Matrix3x3f::Get(this, 0, 1);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    *v11 = 0;
    v12 = Matrix3x3f::Get(this, 0, 2);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v12);
    }
    *v13 = 0;
    v14 = Matrix3x3f::Get(this, 1, 0);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = 0;
    v16 = Matrix3x3f::Get(this, 1, 1);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v16);
    }
    *v17 = 1065353216;
    v18 = Matrix3x3f::Get(this, 1, 2);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v18);
    }
    *v19 = 0;
    v20 = Matrix3x3f::Get(this, 2, 0);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v20);
    }
    *v21 = 0;
    v22 = Matrix3x3f::Get(this, 2, 1);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v22);
    }
    *v23 = 0;
    v24 = Matrix3x3f::Get(this, 2, 2);
    v25 = v24;
    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v24);
    }
    *v25 = 1065353216;
  }
  result = this;
  if ( v250 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 340: range 000000000CC006A8-000000000CC00973
// local variable allocation has failed, the output may be wrong!
bool __cdecl LookRotationToMatrix(const Vector3f *viewVec, const Vector3f *upVec, Matrix3x3f *m)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  bool result; // al
  __int64 v9; // xmm0_8
  float v10; // xmm0_4
  float mag; // [rsp+2Ch] [rbp-A4h]
  float maga; // [rsp+2Ch] [rbp-A4h]
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 12 5 z:341 64 12 5 x:351 96 12 5 y:360";
  *(_QWORD *)(v5 + 16) = LookRotationToMatrix;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -219020288;
  v7[536862723] = -202177536;
  if ( ((unsigned __int8)viewVec & 7) >= *(_BYTE *)(((unsigned __int64)viewVec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)viewVec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&viewVec->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)viewVec + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&viewVec->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(viewVec, 12LL);
  }
  *(Vector3f *)(v5 + 32) = *viewVec;
  *(float *)v3.m128i_i32 = Magnitude((const Vector3f *)(v5 + 32));
  mag = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  if ( mag < 0.0000099999997
    || (Vector3f::operator/=((Vector3f *const)(v5 + 32), mag),
        *(Vector3f *)((char *)&v4 - 8) = Cross(upVec, (const Vector3f *)(v5 + 32)),
        *(_QWORD *)(v5 + 64) = v9,
        *(_DWORD *)(v5 + 72) = v4.m128i_i32[0],
        Magnitude((const Vector3f *)(v5 + 64)),
        maga = COERCE_FLOAT(_mm_cvtsi128_si32(v4)),
        maga < 0.0000099999997) )
  {
    Matrix3x3f::SetIdentity(m);
    result = 0;
  }
  else
  {
    Vector3f::operator/=((Vector3f *const)(v5 + 64), maga);
    *(Vector3f *)(v5 + 96) = Cross((const Vector3f *)(v5 + 32), (const Vector3f *)(v5 + 64));
    v10 = SqrMagnitude((const Vector3f *)(v5 + 96));
    if ( !CompareApproximately(v10, 1.0, 0.000001) )
    {
      result = 0;
    }
    else
    {
      Matrix3x3f::SetBasis(m, (const Vector3f *)(v5 + 64), (const Vector3f *)(v5 + 96), (const Vector3f *)(v5 + 32));
      result = 1;
    }
  }
  if ( v14 == (char *)v5 )
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

// Line 395: range 000000000CC00974-000000000CC00DF9
void __cdecl GetRotMatrixNormVec(float *out, const float *inVec, float radians)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  float *v5; // rcx
  float *v6; // rcx
  float *v7; // rcx
  float *v8; // rcx
  float *v9; // rcx
  float *v10; // rcx
  float *v11; // rcx
  float *v12; // rcx
  float *v13; // rcx
  float *v14; // rcx
  float s; // [rsp+24h] [rbp-3Ch]
  float c; // [rsp+28h] [rbp-38h]
  float vx; // [rsp+2Ch] [rbp-34h]
  float vy; // [rsp+30h] [rbp-30h]
  float zz; // [rsp+40h] [rbp-20h]
  float xy; // [rsp+44h] [rbp-1Ch]
  float yz; // [rsp+48h] [rbp-18h]
  float zx; // [rsp+4Ch] [rbp-14h]
  float xs; // [rsp+50h] [rbp-10h]
  float ys; // [rsp+54h] [rbp-Ch]
  float zs; // [rsp+58h] [rbp-8h]
  float one_c; // [rsp+5Ch] [rbp-4h]

  v3 = _mm_cvtsi32_si128(LODWORD(radians));
  *(float *)v3.m128i_i32 = std::sin(*(float *)v3.m128i_i32);
  s = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v4 = _mm_cvtsi32_si128(LODWORD(radians));
  *(float *)v4.m128i_i32 = std::cos(*(float *)v4.m128i_i32);
  c = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  if ( *(_BYTE *)(((unsigned __int64)inVec >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)inVec & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inVec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inVec);
  }
  vx = *inVec;
  v5 = (float *)(inVec + 1);
  if ( *(_BYTE *)(((unsigned __int64)(inVec + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inVec + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(inVec + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inVec + 1);
  }
  vy = *v5;
  v6 = (float *)(inVec + 2);
  if ( *(_BYTE *)(((unsigned __int64)(inVec + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)inVec + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(inVec + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(inVec + 2);
  }
  zz = *v6 * *v6;
  xy = vx * vy;
  yz = vy * *v6;
  zx = *v6 * vx;
  xs = vx * s;
  ys = vy * s;
  zs = *v6 * s;
  one_c = 1.0 - c;
  if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)out & 7) + 3) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out);
  }
  *out = (float)((float)(1.0 - c) * (float)(vx * vx)) + c;
  v7 = out + 3;
  if ( *(_BYTE *)(((unsigned __int64)(out + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 3);
  }
  *v7 = (float)(one_c * xy) - zs;
  v8 = out + 6;
  if ( *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 6);
  }
  *v8 = (float)(one_c * zx) + ys;
  v9 = out + 1;
  if ( *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 1);
  }
  *v9 = (float)(one_c * xy) + zs;
  v10 = out + 4;
  if ( *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 4);
  }
  *v10 = (float)(one_c * (float)(vy * vy)) + c;
  v11 = out + 7;
  if ( *(_BYTE *)(((unsigned __int64)(out + 7) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 7);
  }
  *v11 = (float)(one_c * yz) - xs;
  v12 = out + 2;
  if ( *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 2);
  }
  *v12 = (float)(one_c * zx) - ys;
  v13 = out + 5;
  if ( *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 5);
  }
  *v13 = (float)(one_c * yz) + xs;
  v14 = out + 8;
  if ( *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)out + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(out + 8);
  }
  *v14 = (float)(one_c * zz) + c;
};

// Line 489: range 000000000CC00DFA-000000000CC00E57
void __cdecl OrthoNormalize(Matrix3x3f *matrix)
{
  Vector3f *v1; // rdx
  Vector3f *c0; // [rsp+18h] [rbp-18h]
  Vector3f *c1; // [rsp+20h] [rbp-10h]

  c0 = (Vector3f *)Matrix3x3f::GetPtr(matrix);
  c1 = (Vector3f *)(Matrix3x3f::GetPtr(matrix) + 9);
  v1 = (Vector3f *)(Matrix3x3f::GetPtr(matrix) + 18);
  OrthoNormalize(c0, c1, v1);
};
