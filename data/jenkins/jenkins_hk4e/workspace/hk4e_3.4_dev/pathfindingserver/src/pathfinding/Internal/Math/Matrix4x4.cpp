// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/Matrix4x4.cpp

// Line 8: range 000000000CC00E58-000000000CC00FD8
void __cdecl Matrix4x4f::Matrix4x4f(Matrix4x4f *const this, const float *data)
{
  float *v2; // rcx
  float v3; // xmm0_4
  char v4; // dl
  int i; // [rsp+1Ch] [rbp-4h]

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
  for ( i = 0; i <= 15; ++i )
  {
    v2 = (float *)&data[i];
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((4 * i + (_BYTE)data) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data[i]);
    }
    v3 = *v2;
    v4 = *(_BYTE *)(((unsigned __int64)&this->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v4 != 0 && (char)(((4 * i + (_BYTE)this) & 7) + 3) >= v4 )
      __asan_report_store4(&this->m_Data[i]);
    this->m_Data[i] = v3;
  }
};

// Line 14: range 000000000CC00FDA-000000000CC01754
void __cdecl Matrix4x4f::Matrix4x4f(Matrix4x4f *const this, const Matrix3x3f *other)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[3]);
  }
  this->m_Data[3] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[3]);
  }
  v5 = other->m_Data[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[4]);
  }
  this->m_Data[4] = v5;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[4]);
  }
  v6 = other->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[5]);
  }
  this->m_Data[5] = v6;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[5]);
  }
  v7 = other->m_Data[5];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[6]);
  }
  this->m_Data[6] = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[7]);
  }
  this->m_Data[7] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[6]);
  }
  v8 = other->m_Data[6];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[8]);
  }
  this->m_Data[8] = v8;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[7]);
  }
  v9 = other->m_Data[7];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[9]);
  }
  this->m_Data[9] = v9;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[8]);
  }
  v10 = other->m_Data[8];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[10]);
  }
  this->m_Data[10] = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[11]);
  }
  this->m_Data[11] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[12]);
  }
  this->m_Data[12] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[13]);
  }
  this->m_Data[13] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[14]);
  }
  this->m_Data[14] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[15]);
  }
  this->m_Data[15] = 1.0;
};

// Line 38: range 000000000CC01756-000000000CC01E25
Matrix4x4f *__cdecl Matrix4x4f::operator=(Matrix4x4f *const this, const Matrix3x3f *other)
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
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[3]);
  }
  this->m_Data[3] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[3]);
  }
  v5 = other->m_Data[3];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[4]);
  }
  this->m_Data[4] = v5;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[4]);
  }
  v6 = other->m_Data[4];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[5]);
  }
  this->m_Data[5] = v6;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[5]);
  }
  v7 = other->m_Data[5];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[6]);
  }
  this->m_Data[6] = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[7]);
  }
  this->m_Data[7] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[6]);
  }
  v8 = other->m_Data[6];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[8]);
  }
  this->m_Data[8] = v8;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[7]);
  }
  v9 = other->m_Data[7];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[9]);
  }
  this->m_Data[9] = v9;
  if ( *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)other + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&other->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&other->m_Data[8]);
  }
  v10 = other->m_Data[8];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[10]);
  }
  this->m_Data[10] = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[11] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[11]);
  }
  this->m_Data[11] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[12]);
  }
  this->m_Data[12] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[13]);
  }
  this->m_Data[13] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[14]);
  }
  this->m_Data[14] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[15] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[15]);
  }
  this->m_Data[15] = 1.0;
  return this;
};

// Line 62: range 000000000CC01E26-000000000CC0254C
bool __cdecl Matrix4x4f::IsIdentity(const Matrix4x4f *const this, float threshold)
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
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rdx
  float *v24; // rax
  float *v25; // rdx
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  float *v29; // rdx
  float *v30; // rax
  float *v31; // rdx
  float *v32; // rax
  float *v33; // rdx
  char v34; // al

  v2 = (float *)Matrix4x4f::Get(this, 0, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  if ( !CompareApproximately(*v3, 1.0, threshold) )
    goto LABEL_50;
  v4 = (float *)Matrix4x4f::Get(this, 0, 1);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  if ( !CompareApproximately(*v5, 0.0, threshold) )
    goto LABEL_50;
  v6 = (float *)Matrix4x4f::Get(this, 0, 2);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  if ( !CompareApproximately(*v7, 0.0, threshold) )
    goto LABEL_50;
  v8 = (float *)Matrix4x4f::Get(this, 0, 3);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  if ( !CompareApproximately(*v9, 0.0, threshold) )
    goto LABEL_50;
  v10 = (float *)Matrix4x4f::Get(this, 1, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  if ( !CompareApproximately(*v11, 0.0, threshold) )
    goto LABEL_50;
  v12 = (float *)Matrix4x4f::Get(this, 1, 1);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  if ( !CompareApproximately(*v13, 1.0, threshold) )
    goto LABEL_50;
  v14 = (float *)Matrix4x4f::Get(this, 1, 2);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  if ( !CompareApproximately(*v15, 0.0, threshold) )
    goto LABEL_50;
  v16 = (float *)Matrix4x4f::Get(this, 1, 3);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  if ( !CompareApproximately(*v17, 0.0, threshold) )
    goto LABEL_50;
  v18 = (float *)Matrix4x4f::Get(this, 2, 0);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  if ( !CompareApproximately(*v19, 0.0, threshold) )
    goto LABEL_50;
  v20 = (float *)Matrix4x4f::Get(this, 2, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  if ( !CompareApproximately(*v21, 0.0, threshold) )
    goto LABEL_50;
  v22 = (float *)Matrix4x4f::Get(this, 2, 2);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  if ( !CompareApproximately(*v23, 1.0, threshold) )
    goto LABEL_50;
  v24 = (float *)Matrix4x4f::Get(this, 2, 3);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v24);
  }
  if ( !CompareApproximately(*v25, 0.0, threshold) )
    goto LABEL_50;
  v26 = (float *)Matrix4x4f::Get(this, 3, 0);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  if ( !CompareApproximately(*v27, 0.0, threshold) )
    goto LABEL_50;
  v28 = (float *)Matrix4x4f::Get(this, 3, 1);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  if ( !CompareApproximately(*v29, 0.0, threshold) )
    goto LABEL_50;
  v30 = (float *)Matrix4x4f::Get(this, 3, 2);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v30);
  }
  if ( !CompareApproximately(*v31, 0.0, threshold) )
    goto LABEL_50;
  v32 = (float *)Matrix4x4f::Get(this, 3, 3);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  if ( CompareApproximately(*v33, 1.0, threshold) )
    v34 = 1;
  else
LABEL_50:
    v34 = 0;
  return v34 != 0;
};

// Line 72: range 000000000CC0254E-000000000CC02DD4
float __cdecl Matrix4x4f::GetDeterminant(const Matrix4x4f *const this)
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
  double m00; // [rsp+18h] [rbp-88h]
  double m01; // [rsp+20h] [rbp-80h]
  double m02; // [rsp+28h] [rbp-78h]
  double m03; // [rsp+30h] [rbp-70h]
  double m10; // [rsp+38h] [rbp-68h]
  double m11; // [rsp+40h] [rbp-60h]
  double m12; // [rsp+48h] [rbp-58h]
  double m13; // [rsp+50h] [rbp-50h]
  double m20; // [rsp+58h] [rbp-48h]
  double m21; // [rsp+60h] [rbp-40h]
  double m22; // [rsp+68h] [rbp-38h]
  double m23; // [rsp+70h] [rbp-30h]
  double m30; // [rsp+78h] [rbp-28h]
  double m31; // [rsp+80h] [rbp-20h]
  double m32; // [rsp+88h] [rbp-18h]
  double m33; // [rsp+90h] [rbp-10h]

  v1 = (float *)Matrix4x4f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  m00 = *v2;
  v3 = (float *)Matrix4x4f::Get(this, 0, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  m01 = *v4;
  v5 = (float *)Matrix4x4f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  m02 = *v6;
  v7 = (float *)Matrix4x4f::Get(this, 0, 3);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  m03 = *v8;
  v9 = (float *)Matrix4x4f::Get(this, 1, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  m10 = *v10;
  v11 = (float *)Matrix4x4f::Get(this, 1, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  m11 = *v12;
  v13 = (float *)Matrix4x4f::Get(this, 1, 2);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  m12 = *v14;
  v15 = (float *)Matrix4x4f::Get(this, 1, 3);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v15);
  }
  m13 = *v16;
  v17 = (float *)Matrix4x4f::Get(this, 2, 0);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  m20 = *v18;
  v19 = (float *)Matrix4x4f::Get(this, 2, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  m21 = *v20;
  v21 = (float *)Matrix4x4f::Get(this, 2, 2);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  m22 = *v22;
  v23 = (float *)Matrix4x4f::Get(this, 2, 3);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  m23 = *v24;
  v25 = (float *)Matrix4x4f::Get(this, 3, 0);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  m30 = *v26;
  v27 = (float *)Matrix4x4f::Get(this, 3, 1);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v27);
  }
  m31 = *v28;
  v29 = (float *)Matrix4x4f::Get(this, 3, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  m32 = *v30;
  v31 = (float *)Matrix4x4f::Get(this, 3, 3);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v31);
  }
  m33 = *v32;
  return m00 * m11 * m22 * m33
       + m02 * m10 * m21 * m33
       + m01 * m10 * m23 * m32
       + m03 * m11 * m20 * m32
       + m03 * m10 * m22 * m31
       + m02 * m11 * m23 * m30
       + m03 * m12 * m21 * m30
       - m02 * m13 * m21 * m30
       - m03 * m11 * m22 * m30
       + m01 * m13 * m22 * m30
       - m01 * m12 * m23 * m30
       - m03 * m12 * m20 * m31
       + m02 * m13 * m20 * m31
       - m00 * m13 * m22 * m31
       - m02 * m10 * m23 * m31
       + m00 * m12 * m23 * m31
       - m01 * m13 * m20 * m32
       - m03 * m10 * m21 * m32
       + m00 * m13 * m21 * m32
       - m00 * m11 * m23 * m32
       - m02 * m11 * m20 * m33
       + m01 * m12 * m20 * m33
       - m00 * m12 * m21 * m33
       - m01 * m10 * m22 * m33;
};

// Line 89: range 000000000CC02DD6-000000000CC02FD9
Matrix4x4f *__cdecl Matrix4x4f::operator*=(Matrix4x4f *const this, const Matrix4x4f *inM1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  Matrix4x4f *result; // rax
  Matrix4x4f *thisa; // [rsp+8h] [rbp-A8h]
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  thisa = this;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (Matrix4x4f *const)128;
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 6 tmp:91";
  *(_QWORD *)(v2 + 16) = Matrix4x4f::operator*=;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( inM1 == thisa )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "&inM1 != this",
      "./src/pathfinding/Internal/Math/Matrix4x4.cpp",
      0x5Au,
      "Matrix4x4f& Matrix4x4f::operator*=(const Matrix4x4f&)");
  }
  Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v2 + 32));
  MultiplyMatrices4x4REF(thisa, inM1, (Matrix4x4f *)(v2 + 32));
  if ( ((unsigned __int8)thisa & 7) >= *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&thisa->m_Data[15] + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->m_Data[15] + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(thisa, 64LL);
  }
  v5 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)thisa->m_Data = *(_QWORD *)(v2 + 32);
  *(_QWORD *)&thisa->m_Data[2] = v5;
  v6 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)&thisa->m_Data[4] = *(_QWORD *)(v2 + 48);
  *(_QWORD *)&thisa->m_Data[6] = v6;
  v7 = *(_QWORD *)(v2 + 72);
  *(_QWORD *)&thisa->m_Data[8] = *(_QWORD *)(v2 + 64);
  *(_QWORD *)&thisa->m_Data[10] = v7;
  v8 = *(_QWORD *)(v2 + 88);
  *(_QWORD *)&thisa->m_Data[12] = *(_QWORD *)(v2 + 80);
  *(_QWORD *)&thisa->m_Data[14] = v8;
  result = thisa;
  if ( v11 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 000000000CC02FDA-000000000CC039A6
void __cdecl MultiplyMatrices3x4(const Matrix4x4f *lhs, const Matrix4x4f *rhs, Matrix4x4f *res)
{
  char v3; // dl
  float v4; // xmm1_4
  float v5; // xmm1_4
  int v6; // ecx
  char v7; // dl
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // ecx
  char v11; // dl
  float v12; // xmm2_4
  float v13; // xmm0_4
  char v14; // dl
  float v15; // xmm1_4
  float v16; // xmm1_4
  int v17; // ecx
  char v18; // dl
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // ecx
  char v22; // dl
  float v23; // xmm2_4
  int v24; // ecx
  float v25; // xmm0_4
  char v26; // dl
  float v27; // xmm1_4
  float v28; // xmm1_4
  int v29; // ecx
  char v30; // dl
  float v31; // xmm2_4
  float v32; // xmm1_4
  int v33; // ecx
  char v34; // dl
  float v35; // xmm2_4
  int v36; // ecx
  float v37; // xmm0_4
  char v38; // dl
  float v39; // xmm1_4
  float v40; // xmm1_4
  int v41; // ecx
  char v42; // dl
  float v43; // xmm2_4
  float v44; // xmm1_4
  int v45; // ecx
  char v46; // dl
  float v47; // xmm2_4
  float v48; // xmm1_4
  int v49; // ecx
  char v50; // dl
  float v51; // xmm0_4
  int v52; // ecx
  float v53; // xmm0_4
  char v54; // dl
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i <= 2; ++i )
  {
    v3 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v3 != 0 && (char)(((4 * i + (_BYTE)lhs) & 7) + 3) >= v3 )
      __asan_report_load4(&lhs->m_Data[i]);
    v4 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(rhs);
    }
    v5 = v4 * rhs->m_Data[0];
    v6 = i + 4;
    v7 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v7 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v8 = lhs->m_Data[v6];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[1] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[1] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[1]);
    }
    v9 = v5 + (float)(rhs->m_Data[1] * v8);
    v10 = i + 8;
    v11 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v11 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v12 = lhs->m_Data[v10];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[2] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[2] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[2]);
    }
    v13 = (float)(rhs->m_Data[2] * v12) + v9;
    v14 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i] >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((4 * i + (_BYTE)res) & 7) + 3) >= v14 )
      __asan_report_store4(&res->m_Data[i]);
    res->m_Data[i] = v13;
    v15 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[4] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[4] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[4]);
    }
    v16 = v15 * rhs->m_Data[4];
    v17 = i + 4;
    v18 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v18 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v19 = lhs->m_Data[v17];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[5] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[5] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[5]);
    }
    v20 = v16 + (float)(rhs->m_Data[5] * v19);
    v21 = i + 8;
    v22 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v22 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v22 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v23 = lhs->m_Data[v21];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[6] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[6] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[6]);
    }
    v24 = i + 4;
    v25 = (float)(rhs->m_Data[6] * v23) + v20;
    v26 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v26 != 0 && (char)(((4 * (i + 4) + (_BYTE)res) & 7) + 3) >= v26 )
      __asan_report_store4(&res->m_Data[i + 4]);
    res->m_Data[v24] = v25;
    v27 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[8] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[8] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[8]);
    }
    v28 = v27 * rhs->m_Data[8];
    v29 = i + 4;
    v30 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v30 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v30 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v31 = lhs->m_Data[v29];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[9] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[9] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[9]);
    }
    v32 = v28 + (float)(rhs->m_Data[9] * v31);
    v33 = i + 8;
    v34 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v34 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v34 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v35 = lhs->m_Data[v33];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[10] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[10] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[10]);
    }
    v36 = i + 8;
    v37 = (float)(rhs->m_Data[10] * v35) + v32;
    v38 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v38 != 0 && (char)(((4 * (i + 8) + (_BYTE)res) & 7) + 3) >= v38 )
      __asan_report_store4(&res->m_Data[i + 8]);
    res->m_Data[v36] = v37;
    v39 = lhs->m_Data[i];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[12] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[12] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[12]);
    }
    v40 = v39 * rhs->m_Data[12];
    v41 = i + 4;
    v42 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 4] >> 3) + 0x7FFF8000);
    if ( v42 != 0 && (char)(((4 * (i + 4) + (_BYTE)lhs) & 7) + 3) >= v42 )
      __asan_report_load4(&lhs->m_Data[i + 4]);
    v43 = lhs->m_Data[v41];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[13] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[13] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[13]);
    }
    v44 = v40 + (float)(rhs->m_Data[13] * v43);
    v45 = i + 8;
    v46 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 8] >> 3) + 0x7FFF8000);
    if ( v46 != 0 && (char)(((4 * (i + 8) + (_BYTE)lhs) & 7) + 3) >= v46 )
      __asan_report_load4(&lhs->m_Data[i + 8]);
    v47 = lhs->m_Data[v45];
    if ( *(_BYTE *)(((unsigned __int64)&rhs->m_Data[14] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)rhs + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->m_Data[14] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&rhs->m_Data[14]);
    }
    v48 = v44 + (float)(rhs->m_Data[14] * v47);
    v49 = i + 12;
    v50 = *(_BYTE *)(((unsigned __int64)&lhs->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v50 != 0 && (char)(((4 * (i + 12) + (_BYTE)lhs) & 7) + 3) >= v50 )
      __asan_report_load4(&lhs->m_Data[i + 12]);
    v51 = lhs->m_Data[v49];
    v52 = i + 12;
    v53 = v51 + v48;
    v54 = *(_BYTE *)(((unsigned __int64)&res->m_Data[i + 12] >> 3) + 0x7FFF8000);
    if ( v54 != 0 && (char)(((4 * (i + 12) + (_BYTE)res) & 7) + 3) >= v54 )
      __asan_report_store4(&res->m_Data[i + 12]);
    res->m_Data[v52] = v53;
  }
  if ( *(_BYTE *)(((unsigned __int64)&res->m_Data[3] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->m_Data[3] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->m_Data[3]);
  }
  res->m_Data[3] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&res->m_Data[7] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->m_Data[7] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->m_Data[7]);
  }
  res->m_Data[7] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&res->m_Data[11] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->m_Data[11] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->m_Data[11]);
  }
  res->m_Data[11] = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&res->m_Data[15] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)res + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&res->m_Data[15] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&res->m_Data[15]);
  }
  res->m_Data[15] = 1.0;
};

// Line 114: range 000000000CC039A8-000000000CC03F49
Matrix4x4f *__cdecl Matrix4x4f::SetIdentity(Matrix4x4f *const this)
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
  float *v19; // rax
  _DWORD *v20; // rdx
  float *v21; // rax
  _DWORD *v22; // rdx
  float *v23; // rax
  _DWORD *v24; // rdx
  float *v25; // rax
  _DWORD *v26; // rdx
  float *v27; // rax
  _DWORD *v28; // rdx
  float *v29; // rax
  _DWORD *v30; // rdx
  float *v31; // rax
  _DWORD *v32; // rdx

  v1 = Matrix4x4f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v1);
  }
  *v2 = 1065353216;
  v3 = Matrix4x4f::Get(this, 0, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = 0;
  v5 = Matrix4x4f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = 0;
  v7 = Matrix4x4f::Get(this, 0, 3);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 0;
  v9 = Matrix4x4f::Get(this, 1, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = Matrix4x4f::Get(this, 1, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = 1065353216;
  v13 = Matrix4x4f::Get(this, 1, 2);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix4x4f::Get(this, 1, 3);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix4x4f::Get(this, 2, 0);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = 0;
  v19 = Matrix4x4f::Get(this, 2, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = 0;
  v21 = Matrix4x4f::Get(this, 2, 2);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v21);
  }
  *v22 = 1065353216;
  v23 = Matrix4x4f::Get(this, 2, 3);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v23);
  }
  *v24 = 0;
  v25 = Matrix4x4f::Get(this, 3, 0);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v25);
  }
  *v26 = 0;
  v27 = Matrix4x4f::Get(this, 3, 1);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v27);
  }
  *v28 = 0;
  v29 = Matrix4x4f::Get(this, 3, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v29);
  }
  *v30 = 0;
  v31 = Matrix4x4f::Get(this, 3, 3);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v31);
  }
  *v32 = 1065353216;
  return this;
};

// Line 123: range 000000000CC03F4A-000000000CC044DB
Matrix4x4f *__cdecl Matrix4x4f::SetZero(Matrix4x4f *const this)
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
  float *v19; // rax
  _DWORD *v20; // rdx
  float *v21; // rax
  _DWORD *v22; // rdx
  float *v23; // rax
  _DWORD *v24; // rdx
  float *v25; // rax
  _DWORD *v26; // rdx
  float *v27; // rax
  _DWORD *v28; // rdx
  float *v29; // rax
  _DWORD *v30; // rdx
  float *v31; // rax
  _DWORD *v32; // rdx

  v1 = Matrix4x4f::Get(this, 0, 0);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v1);
  }
  *v2 = 0;
  v3 = Matrix4x4f::Get(this, 0, 1);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = 0;
  v5 = Matrix4x4f::Get(this, 0, 2);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v5);
  }
  *v6 = 0;
  v7 = Matrix4x4f::Get(this, 0, 3);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 0;
  v9 = Matrix4x4f::Get(this, 1, 0);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = Matrix4x4f::Get(this, 1, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = 0;
  v13 = Matrix4x4f::Get(this, 1, 2);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix4x4f::Get(this, 1, 3);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix4x4f::Get(this, 2, 0);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = 0;
  v19 = Matrix4x4f::Get(this, 2, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = 0;
  v21 = Matrix4x4f::Get(this, 2, 2);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v21);
  }
  *v22 = 0;
  v23 = Matrix4x4f::Get(this, 2, 3);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v23);
  }
  *v24 = 0;
  v25 = Matrix4x4f::Get(this, 3, 0);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v25);
  }
  *v26 = 0;
  v27 = Matrix4x4f::Get(this, 3, 1);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v27);
  }
  *v28 = 0;
  v29 = Matrix4x4f::Get(this, 3, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v29);
  }
  *v30 = 0;
  v31 = Matrix4x4f::Get(this, 3, 3);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v31);
  }
  *v32 = 0;
  return this;
};

// Line 132: range 000000000CC044DC-000000000CC04D7A
Matrix4x4f *__cdecl Matrix4x4f::SetBasis(
        Matrix4x4f *const this,
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
  _DWORD *v17; // rdx
  float *v18; // rax
  int *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  int *v23; // rdx
  float *v24; // rax
  _DWORD *v25; // rdx
  float *v26; // rax
  int *v27; // rdx
  float *v28; // rax
  _DWORD *v29; // rdx
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
  float *v40; // rax
  int *v41; // rdx
  float *v42; // rax
  _DWORD *v43; // rdx
  float *v44; // rax
  _DWORD *v45; // rdx
  float *v46; // rax
  _DWORD *v47; // rdx
  float *v48; // rax
  _DWORD *v49; // rdx
  float *v50; // rax
  _DWORD *v51; // rdx
  float *v52; // rax
  _DWORD *v53; // rdx
  int v55; // [rsp+Ch] [rbp-24h]
  int v56; // [rsp+Ch] [rbp-24h]
  int v57; // [rsp+Ch] [rbp-24h]
  int v58; // [rsp+Ch] [rbp-24h]
  int v59; // [rsp+Ch] [rbp-24h]
  int v60; // [rsp+Ch] [rbp-24h]
  int v61; // [rsp+Ch] [rbp-24h]
  int v62; // [rsp+Ch] [rbp-24h]
  int v63; // [rsp+Ch] [rbp-24h]

  v4 = (float *)Vector3f::operator[](inX, 0);
  v5 = (int *)v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v55 = *v5;
  v6 = Matrix4x4f::Get(this, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v55;
  v8 = (float *)Vector3f::operator[](inY, 0);
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v56 = *v9;
  v10 = Matrix4x4f::Get(this, 0, 1);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v56;
  v12 = (float *)Vector3f::operator[](inZ, 0);
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v57 = *v13;
  v14 = Matrix4x4f::Get(this, 0, 2);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = v57;
  v16 = Matrix4x4f::Get(this, 0, 3);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = 0;
  v18 = (float *)Vector3f::operator[](inX, 1);
  v19 = (int *)v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v58 = *v19;
  v20 = Matrix4x4f::Get(this, 1, 0);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = v58;
  v22 = (float *)Vector3f::operator[](inY, 1);
  v23 = (int *)v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v59 = *v23;
  v24 = Matrix4x4f::Get(this, 1, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = v59;
  v26 = (float *)Vector3f::operator[](inZ, 1);
  v27 = (int *)v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v60 = *v27;
  v28 = Matrix4x4f::Get(this, 1, 2);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v28);
  }
  *v29 = v60;
  v30 = Matrix4x4f::Get(this, 1, 3);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = 0;
  v32 = (float *)Vector3f::operator[](inX, 2);
  v33 = (int *)v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v61 = *v33;
  v34 = Matrix4x4f::Get(this, 2, 0);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = v61;
  v36 = (float *)Vector3f::operator[](inY, 2);
  v37 = (int *)v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v62 = *v37;
  v38 = Matrix4x4f::Get(this, 2, 1);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = v62;
  v40 = (float *)Vector3f::operator[](inZ, 2);
  v41 = (int *)v40;
  if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v40);
  }
  v63 = *v41;
  v42 = Matrix4x4f::Get(this, 2, 2);
  v43 = v42;
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v42);
  }
  *v43 = v63;
  v44 = Matrix4x4f::Get(this, 2, 3);
  v45 = v44;
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v44);
  }
  *v45 = 0;
  v46 = Matrix4x4f::Get(this, 3, 0);
  v47 = v46;
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v46);
  }
  *v47 = 0;
  v48 = Matrix4x4f::Get(this, 3, 1);
  v49 = v48;
  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v48);
  }
  *v49 = 0;
  v50 = Matrix4x4f::Get(this, 3, 2);
  v51 = v50;
  if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v50);
  }
  *v51 = 0;
  v52 = Matrix4x4f::Get(this, 3, 3);
  v53 = v52;
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v52);
  }
  *v53 = 1065353216;
  return this;
};

// Line 141: range 000000000CC04D7C-000000000CC0561A
Matrix4x4f *__cdecl Matrix4x4f::SetBasisTransposed(
        Matrix4x4f *const this,
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
  _DWORD *v17; // rdx
  float *v18; // rax
  int *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  int *v23; // rdx
  float *v24; // rax
  _DWORD *v25; // rdx
  float *v26; // rax
  int *v27; // rdx
  float *v28; // rax
  _DWORD *v29; // rdx
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
  float *v40; // rax
  int *v41; // rdx
  float *v42; // rax
  _DWORD *v43; // rdx
  float *v44; // rax
  _DWORD *v45; // rdx
  float *v46; // rax
  _DWORD *v47; // rdx
  float *v48; // rax
  _DWORD *v49; // rdx
  float *v50; // rax
  _DWORD *v51; // rdx
  float *v52; // rax
  _DWORD *v53; // rdx
  int v55; // [rsp+Ch] [rbp-24h]
  int v56; // [rsp+Ch] [rbp-24h]
  int v57; // [rsp+Ch] [rbp-24h]
  int v58; // [rsp+Ch] [rbp-24h]
  int v59; // [rsp+Ch] [rbp-24h]
  int v60; // [rsp+Ch] [rbp-24h]
  int v61; // [rsp+Ch] [rbp-24h]
  int v62; // [rsp+Ch] [rbp-24h]
  int v63; // [rsp+Ch] [rbp-24h]

  v4 = (float *)Vector3f::operator[](inX, 0);
  v5 = (int *)v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v55 = *v5;
  v6 = Matrix4x4f::Get(this, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = v55;
  v8 = (float *)Vector3f::operator[](inY, 0);
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v56 = *v9;
  v10 = Matrix4x4f::Get(this, 1, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v56;
  v12 = (float *)Vector3f::operator[](inZ, 0);
  v13 = (int *)v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v57 = *v13;
  v14 = Matrix4x4f::Get(this, 2, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = v57;
  v16 = Matrix4x4f::Get(this, 3, 0);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = 0;
  v18 = (float *)Vector3f::operator[](inX, 1);
  v19 = (int *)v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v58 = *v19;
  v20 = Matrix4x4f::Get(this, 0, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = v58;
  v22 = (float *)Vector3f::operator[](inY, 1);
  v23 = (int *)v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v59 = *v23;
  v24 = Matrix4x4f::Get(this, 1, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = v59;
  v26 = (float *)Vector3f::operator[](inZ, 1);
  v27 = (int *)v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v60 = *v27;
  v28 = Matrix4x4f::Get(this, 2, 1);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v28);
  }
  *v29 = v60;
  v30 = Matrix4x4f::Get(this, 3, 1);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = 0;
  v32 = (float *)Vector3f::operator[](inX, 2);
  v33 = (int *)v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v61 = *v33;
  v34 = Matrix4x4f::Get(this, 0, 2);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = v61;
  v36 = (float *)Vector3f::operator[](inY, 2);
  v37 = (int *)v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v62 = *v37;
  v38 = Matrix4x4f::Get(this, 1, 2);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = v62;
  v40 = (float *)Vector3f::operator[](inZ, 2);
  v41 = (int *)v40;
  if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v40);
  }
  v63 = *v41;
  v42 = Matrix4x4f::Get(this, 2, 2);
  v43 = v42;
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v42);
  }
  *v43 = v63;
  v44 = Matrix4x4f::Get(this, 3, 2);
  v45 = v44;
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v44);
  }
  *v45 = 0;
  v46 = Matrix4x4f::Get(this, 0, 3);
  v47 = v46;
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v46);
  }
  *v47 = 0;
  v48 = Matrix4x4f::Get(this, 1, 3);
  v49 = v48;
  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v48);
  }
  *v49 = 0;
  v50 = Matrix4x4f::Get(this, 2, 3);
  v51 = v50;
  if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v50);
  }
  *v51 = 0;
  v52 = Matrix4x4f::Get(this, 3, 3);
  v53 = v52;
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v52);
  }
  *v53 = 1065353216;
  return this;
};

// Line 150: range 000000000CC0561C-000000000CC05FBD
Matrix4x4f *__cdecl Matrix4x4f::SetPositionAndOrthoNormalBasis(
        Matrix4x4f *const this,
        const Vector3f *inPosition,
        const Vector3f *inX,
        const Vector3f *inY,
        const Vector3f *inZ)
{
  float *v5; // rax
  int *v6; // rdx
  float *v7; // rax
  _DWORD *v8; // rdx
  float *v9; // rax
  int *v10; // rdx
  float *v11; // rax
  _DWORD *v12; // rdx
  float *v13; // rax
  int *v14; // rdx
  float *v15; // rax
  _DWORD *v16; // rdx
  float *v17; // rax
  int *v18; // rdx
  float *v19; // rax
  _DWORD *v20; // rdx
  float *v21; // rax
  int *v22; // rdx
  float *v23; // rax
  _DWORD *v24; // rdx
  float *v25; // rax
  int *v26; // rdx
  float *v27; // rax
  _DWORD *v28; // rdx
  float *v29; // rax
  int *v30; // rdx
  float *v31; // rax
  _DWORD *v32; // rdx
  float *v33; // rax
  int *v34; // rdx
  float *v35; // rax
  _DWORD *v36; // rdx
  float *v37; // rax
  int *v38; // rdx
  float *v39; // rax
  _DWORD *v40; // rdx
  float *v41; // rax
  int *v42; // rdx
  float *v43; // rax
  _DWORD *v44; // rdx
  float *v45; // rax
  int *v46; // rdx
  float *v47; // rax
  _DWORD *v48; // rdx
  float *v49; // rax
  int *v50; // rdx
  float *v51; // rax
  _DWORD *v52; // rdx
  float *v53; // rax
  _DWORD *v54; // rdx
  float *v55; // rax
  _DWORD *v56; // rdx
  float *v57; // rax
  _DWORD *v58; // rdx
  float *v59; // rax
  _DWORD *v60; // rdx
  int v62; // [rsp+4h] [rbp-2Ch]
  int v63; // [rsp+4h] [rbp-2Ch]
  int v64; // [rsp+4h] [rbp-2Ch]
  int v65; // [rsp+4h] [rbp-2Ch]
  int v66; // [rsp+4h] [rbp-2Ch]
  int v67; // [rsp+4h] [rbp-2Ch]
  int v68; // [rsp+4h] [rbp-2Ch]
  int v69; // [rsp+4h] [rbp-2Ch]
  int v70; // [rsp+4h] [rbp-2Ch]
  int v71; // [rsp+4h] [rbp-2Ch]
  int v72; // [rsp+4h] [rbp-2Ch]
  int v73; // [rsp+4h] [rbp-2Ch]

  v5 = (float *)Vector3f::operator[](inX, 0);
  v6 = (int *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v62 = *v6;
  v7 = Matrix4x4f::Get(this, 0, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v62;
  v9 = (float *)Vector3f::operator[](inY, 0);
  v10 = (int *)v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v63 = *v10;
  v11 = Matrix4x4f::Get(this, 0, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = v63;
  v13 = (float *)Vector3f::operator[](inZ, 0);
  v14 = (int *)v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  v64 = *v14;
  v15 = Matrix4x4f::Get(this, 0, 2);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = v64;
  v17 = (float *)Vector3f::operator[](inPosition, 0);
  v18 = (int *)v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v65 = *v18;
  v19 = Matrix4x4f::Get(this, 0, 3);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = v65;
  v21 = (float *)Vector3f::operator[](inX, 1);
  v22 = (int *)v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v21);
  }
  v66 = *v22;
  v23 = Matrix4x4f::Get(this, 1, 0);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v23);
  }
  *v24 = v66;
  v25 = (float *)Vector3f::operator[](inY, 1);
  v26 = (int *)v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  v67 = *v26;
  v27 = Matrix4x4f::Get(this, 1, 1);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v27);
  }
  *v28 = v67;
  v29 = (float *)Vector3f::operator[](inZ, 1);
  v30 = (int *)v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  v68 = *v30;
  v31 = Matrix4x4f::Get(this, 1, 2);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v31);
  }
  *v32 = v68;
  v33 = (float *)Vector3f::operator[](inPosition, 1);
  v34 = (int *)v33;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v33);
  }
  v69 = *v34;
  v35 = Matrix4x4f::Get(this, 1, 3);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v35);
  }
  *v36 = v69;
  v37 = (float *)Vector3f::operator[](inX, 2);
  v38 = (int *)v37;
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v37);
  }
  v70 = *v38;
  v39 = Matrix4x4f::Get(this, 2, 0);
  v40 = v39;
  if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v39);
  }
  *v40 = v70;
  v41 = (float *)Vector3f::operator[](inY, 2);
  v42 = (int *)v41;
  if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v41);
  }
  v71 = *v42;
  v43 = Matrix4x4f::Get(this, 2, 1);
  v44 = v43;
  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v43);
  }
  *v44 = v71;
  v45 = (float *)Vector3f::operator[](inZ, 2);
  v46 = (int *)v45;
  if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v45);
  }
  v72 = *v46;
  v47 = Matrix4x4f::Get(this, 2, 2);
  v48 = v47;
  if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v47);
  }
  *v48 = v72;
  v49 = (float *)Vector3f::operator[](inPosition, 2);
  v50 = (int *)v49;
  if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v49);
  }
  v73 = *v50;
  v51 = Matrix4x4f::Get(this, 2, 3);
  v52 = v51;
  if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v51);
  }
  *v52 = v73;
  v53 = Matrix4x4f::Get(this, 3, 0);
  v54 = v53;
  if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v53);
  }
  *v54 = 0;
  v55 = Matrix4x4f::Get(this, 3, 1);
  v56 = v55;
  if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v55);
  }
  *v56 = 0;
  v57 = Matrix4x4f::Get(this, 3, 2);
  v58 = v57;
  if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v57);
  }
  *v58 = 0;
  v59 = Matrix4x4f::Get(this, 3, 3);
  v60 = v59;
  if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v59);
  }
  *v60 = 1065353216;
  return this;
};

// Line 159: range 000000000CC05FBE-000000000CC06656
Matrix4x4f *__cdecl Matrix4x4f::SetScale(Matrix4x4f *const this, const Vector3f *inScale)
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
  _DWORD *v13; // rdx
  float *v14; // rax
  int *v15; // rdx
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
  int *v27; // rdx
  float *v28; // rax
  _DWORD *v29; // rdx
  float *v30; // rax
  _DWORD *v31; // rdx
  float *v32; // rax
  _DWORD *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  _DWORD *v37; // rdx
  float *v38; // rax
  _DWORD *v39; // rdx
  int v41; // [rsp+Ch] [rbp-14h]
  int v42; // [rsp+Ch] [rbp-14h]
  int v43; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inScale, 0);
  v3 = (int *)v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v41 = *v3;
  v4 = Matrix4x4f::Get(this, 0, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = v41;
  v6 = Matrix4x4f::Get(this, 0, 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = 0;
  v8 = Matrix4x4f::Get(this, 0, 2);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = 0;
  v10 = Matrix4x4f::Get(this, 0, 3);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = 0;
  v12 = Matrix4x4f::Get(this, 1, 0);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = 0;
  v14 = (float *)Vector3f::operator[](inScale, 1);
  v15 = (int *)v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v42 = *v15;
  v16 = Matrix4x4f::Get(this, 1, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = v42;
  v18 = Matrix4x4f::Get(this, 1, 2);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = 0;
  v20 = Matrix4x4f::Get(this, 1, 3);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = 0;
  v22 = Matrix4x4f::Get(this, 2, 0);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = 0;
  v24 = Matrix4x4f::Get(this, 2, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = 0;
  v26 = (float *)Vector3f::operator[](inScale, 2);
  v27 = (int *)v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v43 = *v27;
  v28 = Matrix4x4f::Get(this, 2, 2);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v28);
  }
  *v29 = v43;
  v30 = Matrix4x4f::Get(this, 2, 3);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = 0;
  v32 = Matrix4x4f::Get(this, 3, 0);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v32);
  }
  *v33 = 0;
  v34 = Matrix4x4f::Get(this, 3, 1);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = 0;
  v36 = Matrix4x4f::Get(this, 3, 2);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v36);
  }
  *v37 = 0;
  v38 = Matrix4x4f::Get(this, 3, 3);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = 1065353216;
  return this;
};

// Line 168: range 000000000CC06658-000000000CC06E95
Matrix4x4f *__cdecl Matrix4x4f::Scale(Matrix4x4f *const this, const Vector3f *inScale)
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
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  float *v35; // rax
  float *v36; // rdx
  float *v37; // rax
  float v39; // [rsp+Ch] [rbp-14h]
  float v40; // [rsp+Ch] [rbp-14h]
  float v41; // [rsp+Ch] [rbp-14h]
  float v42; // [rsp+Ch] [rbp-14h]
  float v43; // [rsp+Ch] [rbp-14h]
  float v44; // [rsp+Ch] [rbp-14h]
  float v45; // [rsp+Ch] [rbp-14h]
  float v46; // [rsp+Ch] [rbp-14h]
  float v47; // [rsp+Ch] [rbp-14h]
  float v48; // [rsp+Ch] [rbp-14h]
  float v49; // [rsp+Ch] [rbp-14h]
  float v50; // [rsp+Ch] [rbp-14h]

  v2 = (float *)Vector3f::operator[](inScale, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v39 = *v3;
  v4 = Matrix4x4f::Get(this, 0, 0);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  *v4 = *v4 * v39;
  v5 = (float *)Vector3f::operator[](inScale, 0);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  v40 = *v6;
  v7 = Matrix4x4f::Get(this, 1, 0);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *v7 = *v7 * v40;
  v8 = (float *)Vector3f::operator[](inScale, 0);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v41 = *v9;
  v10 = Matrix4x4f::Get(this, 2, 0);
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  *v10 = *v10 * v41;
  v11 = (float *)Vector3f::operator[](inScale, 0);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v42 = *v12;
  v13 = Matrix4x4f::Get(this, 3, 0);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  *v13 = *v13 * v42;
  v14 = (float *)Vector3f::operator[](inScale, 1);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v43 = *v15;
  v16 = Matrix4x4f::Get(this, 0, 1);
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  *v16 = *v16 * v43;
  v17 = (float *)Vector3f::operator[](inScale, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v44 = *v18;
  v19 = Matrix4x4f::Get(this, 1, 1);
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  *v19 = *v19 * v44;
  v20 = (float *)Vector3f::operator[](inScale, 1);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v45 = *v21;
  v22 = Matrix4x4f::Get(this, 2, 1);
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  *v22 = *v22 * v45;
  v23 = (float *)Vector3f::operator[](inScale, 1);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v23);
  }
  v46 = *v24;
  v25 = Matrix4x4f::Get(this, 3, 1);
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  *v25 = *v25 * v46;
  v26 = (float *)Vector3f::operator[](inScale, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v47 = *v27;
  v28 = Matrix4x4f::Get(this, 0, 2);
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  *v28 = *v28 * v47;
  v29 = (float *)Vector3f::operator[](inScale, 2);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v29);
  }
  v48 = *v30;
  v31 = Matrix4x4f::Get(this, 1, 2);
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v31);
  }
  *v31 = *v31 * v48;
  v32 = (float *)Vector3f::operator[](inScale, 2);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v32);
  }
  v49 = *v33;
  v34 = Matrix4x4f::Get(this, 2, 2);
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  *v34 = *v34 * v49;
  v35 = (float *)Vector3f::operator[](inScale, 2);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v35);
  }
  v50 = *v36;
  v37 = Matrix4x4f::Get(this, 3, 2);
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v37);
  }
  *v37 = *v37 * v50;
  return this;
};

// Line 187: range 000000000CC06E96-000000000CC07A07
Matrix4x4f *__cdecl Matrix4x4f::Translate(Matrix4x4f *const this, const Vector3f *inTrans)
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
  float *v20; // rax
  float *v21; // rdx
  float *v22; // rax
  float *v23; // rdx
  float *v24; // rax
  float *v25; // rdx
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  float *v29; // rdx
  float *v30; // rax
  float *v31; // rdx
  float *v32; // rax
  float *v33; // rdx
  float *v34; // rax
  float *v35; // rdx
  float *v36; // rax
  float *v37; // rdx
  float *v38; // rax
  float *v39; // rdx
  float *v40; // rax
  float *v41; // rdx
  float *v42; // rax
  float *v43; // rdx
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
  float v67; // [rsp+8h] [rbp-18h]
  float v68; // [rsp+8h] [rbp-18h]
  float v69; // [rsp+8h] [rbp-18h]
  float v70; // [rsp+8h] [rbp-18h]
  float v71; // [rsp+8h] [rbp-18h]
  float v72; // [rsp+8h] [rbp-18h]
  float v73; // [rsp+8h] [rbp-18h]
  float v74; // [rsp+8h] [rbp-18h]
  float v75; // [rsp+Ch] [rbp-14h]
  float v76; // [rsp+Ch] [rbp-14h]
  float v77; // [rsp+Ch] [rbp-14h]
  float v78; // [rsp+Ch] [rbp-14h]
  float v79; // [rsp+Ch] [rbp-14h]
  float v80; // [rsp+Ch] [rbp-14h]
  float v81; // [rsp+Ch] [rbp-14h]
  float v82; // [rsp+Ch] [rbp-14h]
  float v83; // [rsp+Ch] [rbp-14h]
  float v84; // [rsp+Ch] [rbp-14h]
  float v85; // [rsp+Ch] [rbp-14h]
  float v86; // [rsp+Ch] [rbp-14h]
  float v87; // [rsp+Ch] [rbp-14h]
  float v88; // [rsp+Ch] [rbp-14h]
  float v89; // [rsp+Ch] [rbp-14h]
  float v90; // [rsp+Ch] [rbp-14h]
  float v91; // [rsp+Ch] [rbp-14h]
  float v92; // [rsp+Ch] [rbp-14h]
  float v93; // [rsp+Ch] [rbp-14h]
  float v94; // [rsp+Ch] [rbp-14h]

  v2 = Matrix4x4f::Get(this, 0, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  v75 = *v3;
  v4 = (float *)Vector3f::operator[](inTrans, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v76 = *v5 * v75;
  v6 = Matrix4x4f::Get(this, 0, 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v67 = *v7;
  v8 = (float *)Vector3f::operator[](inTrans, 1);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v77 = (float)(*v9 * v67) + v76;
  v10 = Matrix4x4f::Get(this, 0, 2);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v68 = *v11;
  v12 = (float *)Vector3f::operator[](inTrans, 2);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v78 = (float)(*v13 * v68) + v77;
  v14 = Matrix4x4f::Get(this, 0, 3);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  v79 = *v15 + v78;
  v16 = Matrix4x4f::Get(this, 0, 3);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = v79;
  v18 = Matrix4x4f::Get(this, 1, 0);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v80 = *v19;
  v20 = (float *)Vector3f::operator[](inTrans, 0);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v20);
  }
  v81 = *v21 * v80;
  v22 = Matrix4x4f::Get(this, 1, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v69 = *v23;
  v24 = (float *)Vector3f::operator[](inTrans, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v24);
  }
  v82 = (float)(*v25 * v69) + v81;
  v26 = Matrix4x4f::Get(this, 1, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v26);
  }
  v70 = *v27;
  v28 = (float *)Vector3f::operator[](inTrans, 2);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v83 = (float)(*v29 * v70) + v82;
  v30 = Matrix4x4f::Get(this, 1, 3);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v30);
  }
  v84 = *v31 + v83;
  v32 = Matrix4x4f::Get(this, 1, 3);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v32);
  }
  *v33 = v84;
  v34 = Matrix4x4f::Get(this, 2, 0);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  v85 = *v35;
  v36 = (float *)Vector3f::operator[](inTrans, 0);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v36);
  }
  v86 = *v37 * v85;
  v38 = Matrix4x4f::Get(this, 2, 1);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v38);
  }
  v71 = *v39;
  v40 = (float *)Vector3f::operator[](inTrans, 1);
  v41 = v40;
  if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v40);
  }
  v87 = (float)(*v41 * v71) + v86;
  v42 = Matrix4x4f::Get(this, 2, 2);
  v43 = v42;
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v42);
  }
  v72 = *v43;
  v44 = (float *)Vector3f::operator[](inTrans, 2);
  v45 = v44;
  if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v44);
  }
  v88 = (float)(*v45 * v72) + v87;
  v46 = Matrix4x4f::Get(this, 2, 3);
  v47 = v46;
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v46);
  }
  v89 = *v47 + v88;
  v48 = Matrix4x4f::Get(this, 2, 3);
  v49 = v48;
  if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v48);
  }
  *v49 = v89;
  v50 = Matrix4x4f::Get(this, 3, 0);
  v51 = v50;
  if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v50);
  }
  v90 = *v51;
  v52 = (float *)Vector3f::operator[](inTrans, 0);
  v53 = v52;
  if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v52);
  }
  v91 = *v53 * v90;
  v54 = Matrix4x4f::Get(this, 3, 1);
  v55 = v54;
  if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v54);
  }
  v73 = *v55;
  v56 = (float *)Vector3f::operator[](inTrans, 1);
  v57 = v56;
  if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v56);
  }
  v92 = (float)(*v57 * v73) + v91;
  v58 = Matrix4x4f::Get(this, 3, 2);
  v59 = v58;
  if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v58 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v58);
  }
  v74 = *v59;
  v60 = (float *)Vector3f::operator[](inTrans, 2);
  v61 = v60;
  if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v60);
  }
  v93 = (float)(*v61 * v74) + v92;
  v62 = Matrix4x4f::Get(this, 3, 3);
  v63 = v62;
  if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v62);
  }
  v94 = *v63 + v93;
  v64 = Matrix4x4f::Get(this, 3, 3);
  v65 = v64;
  if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v64);
  }
  *v65 = v94;
  return this;
};

// Line 196: range 000000000CC07A08-000000000CC080AC
Matrix4x4f *__cdecl Matrix4x4f::SetTranslate(Matrix4x4f *const this, const Vector3f *inTrans)
{
  float *v2; // rax
  _DWORD *v3; // rdx
  float *v4; // rax
  _DWORD *v5; // rdx
  float *v6; // rax
  _DWORD *v7; // rdx
  float *v8; // rax
  int *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  _DWORD *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  _DWORD *v17; // rdx
  float *v18; // rax
  int *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  _DWORD *v23; // rdx
  float *v24; // rax
  _DWORD *v25; // rdx
  float *v26; // rax
  _DWORD *v27; // rdx
  float *v28; // rax
  int *v29; // rdx
  float *v30; // rax
  _DWORD *v31; // rdx
  float *v32; // rax
  _DWORD *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  _DWORD *v37; // rdx
  float *v38; // rax
  _DWORD *v39; // rdx
  int v41; // [rsp+Ch] [rbp-14h]
  int v42; // [rsp+Ch] [rbp-14h]
  int v43; // [rsp+Ch] [rbp-14h]

  v2 = Matrix4x4f::Get(this, 0, 0);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2);
  }
  *v3 = 1065353216;
  v4 = Matrix4x4f::Get(this, 0, 1);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = 0;
  v6 = Matrix4x4f::Get(this, 0, 2);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = 0;
  v8 = (float *)Vector3f::operator[](inTrans, 0);
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v41 = *v9;
  v10 = Matrix4x4f::Get(this, 0, 3);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = v41;
  v12 = Matrix4x4f::Get(this, 1, 0);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = 0;
  v14 = Matrix4x4f::Get(this, 1, 1);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = 1065353216;
  v16 = Matrix4x4f::Get(this, 1, 2);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = 0;
  v18 = (float *)Vector3f::operator[](inTrans, 1);
  v19 = (int *)v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  v42 = *v19;
  v20 = Matrix4x4f::Get(this, 1, 3);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = v42;
  v22 = Matrix4x4f::Get(this, 2, 0);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = 0;
  v24 = Matrix4x4f::Get(this, 2, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = 0;
  v26 = Matrix4x4f::Get(this, 2, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = 1065353216;
  v28 = (float *)Vector3f::operator[](inTrans, 2);
  v29 = (int *)v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v43 = *v29;
  v30 = Matrix4x4f::Get(this, 2, 3);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = v43;
  v32 = Matrix4x4f::Get(this, 3, 0);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v32);
  }
  *v33 = 0;
  v34 = Matrix4x4f::Get(this, 3, 1);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = 0;
  v36 = Matrix4x4f::Get(this, 3, 2);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v36);
  }
  *v37 = 0;
  v38 = Matrix4x4f::Get(this, 3, 3);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v38);
  }
  *v39 = 1065353216;
  return this;
};

// Line 211: range 000000000CC080AE-000000000CC0872D
Matrix4x4f *__cdecl Matrix4x4f::SetPerspective(
        Matrix4x4f *const this,
        float l,
        float r,
        float t,
        float b,
        float zNear,
        float zFar)
{
  float *v7; // rax
  float *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  _DWORD *v14; // rdx
  float *v15; // rax
  _DWORD *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  _DWORD *v22; // rdx
  float *v23; // rax
  _DWORD *v24; // rdx
  float *v25; // rax
  _DWORD *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  _DWORD *v32; // rdx
  float *v33; // rax
  _DWORD *v34; // rdx
  float *v35; // rax
  _DWORD *v36; // rdx
  float *v37; // rax
  _DWORD *v38; // rdx
  float v40; // [rsp+Ch] [rbp-24h]

  v40 = (float)(zNear + zNear) / (float)(r - l);
  v7 = Matrix4x4f::Get(this, 0, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v40;
  v9 = Matrix4x4f::Get(this, 0, 1);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = Matrix4x4f::Get(this, 0, 2);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = (float)(r + l) / (float)(r - l);
  v13 = Matrix4x4f::Get(this, 0, 3);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix4x4f::Get(this, 1, 0);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix4x4f::Get(this, 1, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = (float)(zNear + zNear) / (float)(t - b);
  v19 = Matrix4x4f::Get(this, 1, 2);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = (float)(t + b) / (float)(t - b);
  v21 = Matrix4x4f::Get(this, 1, 3);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v21);
  }
  *v22 = 0;
  v23 = Matrix4x4f::Get(this, 2, 0);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v23);
  }
  *v24 = 0;
  v25 = Matrix4x4f::Get(this, 2, 1);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v25);
  }
  *v26 = 0;
  v27 = Matrix4x4f::Get(this, 2, 2);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v27);
  }
  *v28 = (float)-(float)(zFar + zNear) / (float)(zFar - zNear);
  v29 = Matrix4x4f::Get(this, 2, 3);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v29);
  }
  *v30 = (float)-(float)((float)(zFar + zFar) * zNear) / (float)(zFar - zNear);
  v31 = Matrix4x4f::Get(this, 3, 0);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v31);
  }
  *v32 = 0;
  v33 = Matrix4x4f::Get(this, 3, 1);
  v34 = v33;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v33);
  }
  *v34 = 0;
  v35 = Matrix4x4f::Get(this, 3, 2);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v35);
  }
  *v36 = -1082130432;
  v37 = Matrix4x4f::Get(this, 3, 3);
  v38 = v37;
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v37);
  }
  *v38 = 0;
  return this;
};

// Line 225: range 000000000CC0872E-000000000CC08D7A
// local variable allocation has failed, the output may be wrong!
Matrix4x4f *__cdecl Matrix4x4f::SetPerspective(
        Matrix4x4f *const this,
        float fovy,
        float aspect,
        float zNear,
        float zFar)
{
  __m128i v5; // xmm0
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  _DWORD *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  _DWORD *v13; // rdx
  float *v14; // rax
  _DWORD *v15; // rdx
  float *v16; // rax
  float *v17; // rdx
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
  _DWORD *v31; // rdx
  float *v32; // rax
  _DWORD *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float *v36; // rax
  _DWORD *v37; // rdx
  float v39; // [rsp+4h] [rbp-2Ch]
  float radians; // [rsp+24h] [rbp-Ch]
  float cotangent; // [rsp+28h] [rbp-8h]
  float deltaZ; // [rsp+2Ch] [rbp-4h]

  *(_OWORD *)&fovy = LODWORD(fovy);
  *(float *)v5.m128i_i32 = Deg2Rad(fovy / 2.0);
  radians = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v39 = std::cos(radians);
  cotangent = v39 / std::sin(radians);
  deltaZ = zNear - zFar;
  v6 = Matrix4x4f::Get(this, 0, 0);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = cotangent / aspect;
  v8 = Matrix4x4f::Get(this, 0, 1);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = 0;
  v10 = Matrix4x4f::Get(this, 0, 2);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = 0;
  v12 = Matrix4x4f::Get(this, 0, 3);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = 0;
  v14 = Matrix4x4f::Get(this, 1, 0);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = 0;
  v16 = Matrix4x4f::Get(this, 1, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = cotangent;
  v18 = Matrix4x4f::Get(this, 1, 2);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = 0;
  v20 = Matrix4x4f::Get(this, 1, 3);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = 0;
  v22 = Matrix4x4f::Get(this, 2, 0);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = 0;
  v24 = Matrix4x4f::Get(this, 2, 1);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = 0;
  v26 = Matrix4x4f::Get(this, 2, 2);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = (float)(zFar + zNear) / deltaZ;
  v28 = Matrix4x4f::Get(this, 2, 3);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v28);
  }
  *v29 = (float)((float)(zNear + zNear) * zFar) / deltaZ;
  v30 = Matrix4x4f::Get(this, 3, 0);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = 0;
  v32 = Matrix4x4f::Get(this, 3, 1);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v32);
  }
  *v33 = 0;
  v34 = Matrix4x4f::Get(this, 3, 2);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = -1082130432;
  v36 = Matrix4x4f::Get(this, 3, 3);
  v37 = v36;
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v36);
  }
  *v37 = 0;
  return this;
};

// Line 243: range 000000000CC08D7C-000000000CC09373
Matrix4x4f *__cdecl Matrix4x4f::SetPerspectiveCotan(Matrix4x4f *const this, float cotangent, float zNear, float zFar)
{
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  _DWORD *v7; // rdx
  float *v8; // rax
  _DWORD *v9; // rdx
  float *v10; // rax
  _DWORD *v11; // rdx
  float *v12; // rax
  _DWORD *v13; // rdx
  float *v14; // rax
  float *v15; // rdx
  float *v16; // rax
  _DWORD *v17; // rdx
  float *v18; // rax
  _DWORD *v19; // rdx
  float *v20; // rax
  _DWORD *v21; // rdx
  float *v22; // rax
  _DWORD *v23; // rdx
  float *v24; // rax
  float *v25; // rdx
  float *v26; // rax
  float *v27; // rdx
  float *v28; // rax
  _DWORD *v29; // rdx
  float *v30; // rax
  _DWORD *v31; // rdx
  float *v32; // rax
  _DWORD *v33; // rdx
  float *v34; // rax
  _DWORD *v35; // rdx
  float deltaZ; // [rsp+2Ch] [rbp-4h]

  deltaZ = zNear - zFar;
  v4 = Matrix4x4f::Get(this, 0, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v4);
  }
  *v5 = cotangent;
  v6 = Matrix4x4f::Get(this, 0, 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = 0;
  v8 = Matrix4x4f::Get(this, 0, 2);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v8);
  }
  *v9 = 0;
  v10 = Matrix4x4f::Get(this, 0, 3);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v10);
  }
  *v11 = 0;
  v12 = Matrix4x4f::Get(this, 1, 0);
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v12);
  }
  *v13 = 0;
  v14 = Matrix4x4f::Get(this, 1, 1);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v14);
  }
  *v15 = cotangent;
  v16 = Matrix4x4f::Get(this, 1, 2);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v16);
  }
  *v17 = 0;
  v18 = Matrix4x4f::Get(this, 1, 3);
  v19 = v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v18);
  }
  *v19 = 0;
  v20 = Matrix4x4f::Get(this, 2, 0);
  v21 = v20;
  if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v20);
  }
  *v21 = 0;
  v22 = Matrix4x4f::Get(this, 2, 1);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v22);
  }
  *v23 = 0;
  v24 = Matrix4x4f::Get(this, 2, 2);
  v25 = v24;
  if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v24);
  }
  *v25 = (float)(zFar + zNear) / deltaZ;
  v26 = Matrix4x4f::Get(this, 2, 3);
  v27 = v26;
  if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v26);
  }
  *v27 = (float)((float)(zNear + zNear) * zFar) / deltaZ;
  v28 = Matrix4x4f::Get(this, 3, 0);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v28);
  }
  *v29 = 0;
  v30 = Matrix4x4f::Get(this, 3, 1);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v30);
  }
  *v31 = 0;
  v32 = Matrix4x4f::Get(this, 3, 2);
  v33 = v32;
  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v32);
  }
  *v33 = -1082130432;
  v34 = Matrix4x4f::Get(this, 3, 3);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v34);
  }
  *v35 = 0;
  return this;
};

// Line 261: range 000000000CC09374-000000000CC09685
Matrix4x4f *__cdecl Matrix4x4f::SetOrtho(
        Matrix4x4f *const this,
        float left,
        float right,
        float bottom,
        float top,
        float zNear,
        float zFar)
{
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
  float deltay; // [rsp+38h] [rbp-8h]
  float deltaz; // [rsp+3Ch] [rbp-4h]

  Matrix4x4f::SetIdentity(this);
  deltay = top - bottom;
  deltaz = zFar - zNear;
  v7 = Matrix4x4f::Get(this, 0, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = 2.0 / (float)(right - left);
  v9 = Matrix4x4f::Get(this, 0, 3);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = (float)-(float)(right + left) / (float)(right - left);
  v11 = Matrix4x4f::Get(this, 1, 1);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = 2.0 / deltay;
  v13 = Matrix4x4f::Get(this, 1, 3);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = (float)-(float)(top + bottom) / deltay;
  v15 = Matrix4x4f::Get(this, 2, 2);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = -2.0 / deltaz;
  v17 = Matrix4x4f::Get(this, 2, 3);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = (float)-(float)(zFar + zNear) / deltaz;
  return this;
};

// Line 284: range 000000000CC09686-000000000CC09D55
Matrix4x4f *__cdecl Matrix4x4f::SetFrustum(
        Matrix4x4f *const this,
        float left,
        float right,
        float bottom,
        float top,
        float nearval,
        float farval)
{
  float *v7; // rax
  float *v8; // rdx
  float *v9; // rax
  _DWORD *v10; // rdx
  float *v11; // rax
  float *v12; // rdx
  float *v13; // rax
  _DWORD *v14; // rdx
  float *v15; // rax
  _DWORD *v16; // rdx
  float *v17; // rax
  float *v18; // rdx
  float *v19; // rax
  float *v20; // rdx
  float *v21; // rax
  _DWORD *v22; // rdx
  float *v23; // rax
  _DWORD *v24; // rdx
  float *v25; // rax
  _DWORD *v26; // rdx
  float *v27; // rax
  float *v28; // rdx
  float *v29; // rax
  float *v30; // rdx
  float *v31; // rax
  _DWORD *v32; // rdx
  float *v33; // rax
  _DWORD *v34; // rdx
  float *v35; // rax
  _DWORD *v36; // rdx
  float *v37; // rax
  _DWORD *v38; // rdx
  float v40; // [rsp+Ch] [rbp-44h]
  float y; // [rsp+38h] [rbp-18h]
  float c; // [rsp+44h] [rbp-Ch]
  float d; // [rsp+48h] [rbp-8h]

  y = (float)(nearval + nearval) / (float)(top - bottom);
  c = (float)-(float)(farval + nearval) / (float)(farval - nearval);
  d = (float)-(float)((float)(farval + farval) * nearval) / (float)(farval - nearval);
  v40 = (float)(nearval + nearval) / (float)(right - left);
  v7 = Matrix4x4f::Get(this, 0, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v7);
  }
  *v8 = v40;
  v9 = Matrix4x4f::Get(this, 0, 1);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v9);
  }
  *v10 = 0;
  v11 = Matrix4x4f::Get(this, 0, 2);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v11);
  }
  *v12 = (float)(right + left) / (float)(right - left);
  v13 = Matrix4x4f::Get(this, 0, 3);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v13);
  }
  *v14 = 0;
  v15 = Matrix4x4f::Get(this, 1, 0);
  v16 = v15;
  if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v15);
  }
  *v16 = 0;
  v17 = Matrix4x4f::Get(this, 1, 1);
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v17);
  }
  *v18 = y;
  v19 = Matrix4x4f::Get(this, 1, 2);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v19);
  }
  *v20 = (float)(top + bottom) / (float)(top - bottom);
  v21 = Matrix4x4f::Get(this, 1, 3);
  v22 = v21;
  if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v21);
  }
  *v22 = 0;
  v23 = Matrix4x4f::Get(this, 2, 0);
  v24 = v23;
  if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v23);
  }
  *v24 = 0;
  v25 = Matrix4x4f::Get(this, 2, 1);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v25);
  }
  *v26 = 0;
  v27 = Matrix4x4f::Get(this, 2, 2);
  v28 = v27;
  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v27);
  }
  *v28 = c;
  v29 = Matrix4x4f::Get(this, 2, 3);
  v30 = v29;
  if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v29);
  }
  *v30 = d;
  v31 = Matrix4x4f::Get(this, 3, 0);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v31);
  }
  *v32 = 0;
  v33 = Matrix4x4f::Get(this, 3, 1);
  v34 = v33;
  if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v33);
  }
  *v34 = 0;
  v35 = Matrix4x4f::Get(this, 3, 2);
  v36 = v35;
  if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v35);
  }
  *v36 = -1082130432;
  v37 = Matrix4x4f::Get(this, 3, 3);
  v38 = v37;
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v37);
  }
  *v38 = 0;
  return this;
};

// Line 303: range 000000000CC09D56-000000000CC0A15F
Matrix4x4f *__cdecl Matrix4x4f::AdjustDepthRange(Matrix4x4f *const this, float origNear, float newNear, float newFar)
{
  float *v4; // rax
  float *v5; // rdx
  float *v6; // rax
  float *v7; // rdx
  float *v8; // rax
  float *v9; // rdx
  float *v10; // rax
  float *v11; // rdx
  float *v13; // rax
  float *v14; // rdx
  float *v15; // rax
  float *v16; // rdx
  float x; // [rsp+2Ch] [rbp-24h]
  float y; // [rsp+30h] [rbp-20h]
  float w; // [rsp+34h] [rbp-1Ch]

  if ( Matrix4x4f::IsPerspective(this) )
  {
    v4 = Matrix4x4f::Get(this, 0, 0);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    x = *v5;
    v6 = Matrix4x4f::Get(this, 1, 1);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    y = *v7;
    v8 = Matrix4x4f::Get(this, 0, 2);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    w = *v9;
    v10 = Matrix4x4f::Get(this, 1, 2);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    return Matrix4x4f::SetPerspective(
             this,
             (float)((float)((float)(0.5 * (float)(w + 1.0)) - 1.0) * (float)((float)(origNear + origNear) / x))
           * (float)(newNear / origNear),
             (float)((float)(0.5 * (float)(w + 1.0)) * (float)((float)(origNear + origNear) / x))
           * (float)(newNear / origNear),
             (float)((float)(0.5 * (float)(*v11 + 1.0)) * (float)((float)(origNear + origNear) / y))
           * (float)(newNear / origNear),
             (float)((float)((float)(0.5 * (float)(*v11 + 1.0)) - 1.0) * (float)((float)(origNear + origNear) / y))
           * (float)(newNear / origNear),
             newNear,
             newFar);
  }
  else
  {
    v13 = Matrix4x4f::Get(this, 2, 2);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *v14 = -2.0 / (float)(newFar - newNear);
    v15 = Matrix4x4f::Get(this, 2, 3);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v15);
    }
    *v16 = (float)-(float)(newFar + newNear) / (float)(newFar - newNear);
    return this;
  }
};

// Line 335: range 000000000CC0A160-000000000CC0A45B
// local variable allocation has failed, the output may be wrong!
TransformType __cdecl ComputeTransformType(const Matrix4x4f *matrix, float epsilon)
{
  __m128i v2; // xmm1
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // xmm0_8
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  const float *v9; // rax
  float *v10; // rax
  float *v11; // rdx
  const float *v12; // rax
  float *v13; // rax
  float *v14; // rdx
  TransformType result; // eax
  float v17; // [rsp+0h] [rbp-90h]
  TransformType transType; // [rsp+18h] [rbp-78h]
  float minAxis; // [rsp+1Ch] [rbp-74h]
  float maxAxis; // [rsp+20h] [rbp-70h]
  Vector3f inV; // [rsp+24h] [rbp-6Ch] BYREF
  char v23[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 17 outLocalScale:336";
  *(_QWORD *)(v3 + 16) = ComputeTransformType;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  Vector3f::Vector3f((Vector3f *const)(v3 + 32));
  *(Vector3f *)((char *)&v2 - 8) = Matrix4x4f::GetAxisX(matrix);
  *(_QWORD *)&inV.x = v6;
  LODWORD(inV.z) = v2.m128i_i32[0];
  SqrMagnitude(&inV);
  *(_DWORD *)(v3 + 32) = _mm_cvtsi128_si32(v2);
  *(Vector3f *)((char *)&v2 - 8) = Matrix4x4f::GetAxisY(matrix);
  *(_QWORD *)&inV.x = v7;
  LODWORD(inV.z) = v2.m128i_i32[0];
  SqrMagnitude(&inV);
  *(_DWORD *)(v3 + 36) = _mm_cvtsi128_si32(v2);
  *(Vector3f *)((char *)&v2 - 8) = Matrix4x4f::GetAxisZ(matrix);
  *(_QWORD *)&inV.x = v8;
  LODWORD(inV.z) = v2.m128i_i32[0];
  SqrMagnitude(&inV);
  *(_DWORD *)(v3 + 40) = _mm_cvtsi128_si32(v2);
  v9 = std::min<float>((const float *)(v3 + 32), (const float *)(v3 + 36));
  v10 = (float *)std::min<float>(v9, (const float *)(v3 + 40));
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  minAxis = *v11;
  v12 = std::max<float>((const float *)(v3 + 32), (const float *)(v3 + 36));
  v13 = (float *)std::max<float>(v12, (const float *)(v3 + 40));
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  maxAxis = *v14;
  transType = kNoScaleTransform;
  if ( (float)(1.0 - epsilon) > minAxis || maxAxis > (float)(epsilon + 1.0) )
  {
    if ( minAxis != 0.0 && (v17 = Sqrt(maxAxis), (float)(epsilon + 1.0) > (float)(v17 / Sqrt(minAxis))) )
      transType = kUniformScaleTransform;
    else
      transType = kNonUniformScaleTransform;
  }
  result = transType;
  if ( v23 == (char *)v3 )
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

// Line 354: range 000000000CC0A45C-000000000CC0A492
float __cdecl ComputeUniformScale(const Matrix4x4f *matrix)
{
  Vector3f inV; // [rsp+14h] [rbp-Ch] BYREF

  inV = Matrix4x4f::GetAxisX(matrix);
  return Magnitude(&inV);
};

// Line 371: range 000000000CC0A493-000000000CC1011E
bool __cdecl InvertMatrix4x4_Full(const float *m, float *out)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // xmm0_4
  unsigned __int64 v6; // rcx
  int v7; // xmm0_4
  unsigned __int64 v8; // rcx
  int v9; // xmm0_4
  unsigned __int64 v10; // rcx
  int v11; // xmm0_4
  _DWORD *v12; // rcx
  int *v13; // rdx
  int *v14; // rax
  int v15; // xmm0_4
  _DWORD *v16; // rcx
  int v17; // xmm0_4
  const float *v18; // rcx
  int v19; // xmm0_4
  unsigned __int64 v20; // rcx
  int v21; // xmm0_4
  unsigned __int64 v22; // rcx
  int v23; // xmm0_4
  unsigned __int64 v24; // rcx
  int v25; // xmm0_4
  _DWORD *v26; // rcx
  int *v27; // rdx
  int *v28; // rax
  int v29; // xmm0_4
  _DWORD *v30; // rcx
  int v31; // xmm0_4
  const float *v32; // rcx
  int v33; // xmm0_4
  unsigned __int64 v34; // rcx
  int v35; // xmm0_4
  unsigned __int64 v36; // rcx
  int v37; // xmm0_4
  unsigned __int64 v38; // rcx
  int v39; // xmm0_4
  _DWORD *v40; // rcx
  int *v41; // rdx
  int *v42; // rax
  int v43; // xmm0_4
  _DWORD *v44; // rcx
  int v45; // xmm0_4
  const float *v46; // rcx
  int v47; // xmm0_4
  unsigned __int64 v48; // rcx
  int v49; // xmm0_4
  unsigned __int64 v50; // rcx
  int v51; // xmm0_4
  unsigned __int64 v52; // rcx
  int v53; // xmm0_4
  _DWORD *v54; // rcx
  int *v55; // rdx
  int *v56; // rax
  int v57; // xmm0_4
  _DWORD *v58; // rcx
  int v59; // xmm0_4
  unsigned __int64 v60; // rcx
  bool result; // al
  double v62; // xmm0_8
  float *v63; // rcx
  float v64; // xmm0_4
  float *v65; // rcx
  float v66; // xmm0_4
  float *v67; // rcx
  float v68; // xmm0_4
  float *v69; // rcx
  float v70; // xmm0_4
  float *v71; // rcx
  float v72; // xmm0_4
  float *v73; // rcx
  float v74; // xmm0_4
  float *v75; // rcx
  float v76; // xmm0_4
  float *v77; // rcx
  float v78; // xmm0_4
  float *v79; // rcx
  float v80; // xmm0_4
  float *v81; // rcx
  float v82; // xmm0_4
  float *v83; // rcx
  float v84; // xmm0_4
  float *v85; // rcx
  float v86; // xmm0_4
  float *v87; // rcx
  float v88; // xmm0_4
  float *v89; // rcx
  float v90; // xmm0_4
  float *v91; // rcx
  float v92; // xmm0_4
  float *v93; // rcx
  float v94; // xmm0_4
  float *v95; // rcx
  float v96; // xmm0_4
  float *v97; // rcx
  float v98; // xmm0_4
  float *v99; // rcx
  float v100; // xmm0_4
  float *v101; // rcx
  float v102; // xmm0_4
  float *v103; // rcx
  float v104; // xmm0_4
  float *v105; // rcx
  float v106; // xmm0_4
  float *v107; // rcx
  float v108; // xmm0_4
  float *v109; // rcx
  float v110; // xmm0_4
  float *v111; // rcx
  float v112; // xmm0_4
  float *v113; // rcx
  float v114; // xmm0_4
  float *v115; // rcx
  float v116; // xmm0_4
  float *v117; // rcx
  float v118; // xmm0_4
  float *v119; // rcx
  float v120; // xmm0_4
  float *v121; // rcx
  float v122; // xmm0_4
  float *v123; // rcx
  float v124; // xmm0_4
  float *v125; // rcx
  float v126; // xmm0_4
  float *v127; // rcx
  float v128; // xmm0_4
  float *v129; // rcx
  float v130; // xmm0_4
  float *v131; // rcx
  float v132; // xmm0_4
  float *v133; // rcx
  float v134; // xmm0_4
  float *v135; // rcx
  float v136; // xmm0_4
  float *v137; // rcx
  float v138; // xmm0_4
  float *v139; // rcx
  float v140; // xmm0_4
  float *v141; // rcx
  float v142; // xmm0_4
  float *v143; // rcx
  float v144; // xmm0_4
  float *v145; // rcx
  float v146; // xmm0_4
  float *v147; // rcx
  float *v148; // rcx
  float *v149; // rcx
  float *v150; // rcx
  float *v151; // rcx
  unsigned __int64 v152; // rcx
  _DWORD *v153; // rcx
  double v154; // xmm0_8
  float *v155; // rcx
  _DWORD *v156; // rcx
  double v157; // xmm0_8
  float *v158; // rcx
  _DWORD *v159; // rcx
  double v160; // xmm0_8
  float *v161; // rcx
  float v162; // xmm1_4
  float *v163; // rcx
  float v164; // xmm0_4
  _DWORD *v165; // rcx
  double v166; // xmm0_8
  float *v167; // rcx
  float v168; // xmm1_4
  float *v169; // rcx
  float v170; // xmm0_4
  _DWORD *v171; // rcx
  double v172; // xmm0_8
  float *v173; // rcx
  float v174; // xmm1_4
  float *v175; // rcx
  float v176; // xmm0_4
  _DWORD *v177; // rcx
  double v178; // xmm0_8
  float *v179; // rcx
  float v180; // xmm1_4
  float *v181; // rcx
  float v182; // xmm0_4
  float *v183; // rcx
  float v184; // xmm0_4
  float *v185; // rcx
  float v186; // xmm0_4
  float *v187; // rcx
  float v188; // xmm0_4
  float *v189; // rcx
  float v190; // xmm0_4
  float *v191; // rcx
  float v192; // xmm0_4
  float *v193; // rcx
  float v194; // xmm0_4
  float *v195; // rcx
  float v196; // xmm0_4
  float *v197; // rcx
  float v198; // xmm0_4
  float *v199; // rcx
  float v200; // xmm0_4
  float *v201; // rcx
  float v202; // xmm0_4
  float *v203; // rcx
  float v204; // xmm0_4
  float *v205; // rcx
  float v206; // xmm0_4
  float *v207; // rcx
  float v208; // xmm0_4
  float *v209; // rcx
  float v210; // xmm0_4
  float *v211; // rcx
  float v212; // xmm0_4
  float *v213; // rcx
  float v214; // xmm0_4
  float *v215; // rcx
  float *v216; // rcx
  float *v217; // rcx
  unsigned __int64 v218; // rcx
  _DWORD *v219; // rcx
  double v220; // xmm0_8
  float *v221; // rcx
  _DWORD *v222; // rcx
  double v223; // xmm0_8
  float *v224; // rcx
  float v225; // xmm1_4
  float *v226; // rcx
  float v227; // xmm0_4
  _DWORD *v228; // rcx
  double v229; // xmm0_8
  float *v230; // rcx
  float v231; // xmm1_4
  float *v232; // rcx
  float v233; // xmm0_4
  _DWORD *v234; // rcx
  double v235; // xmm0_8
  float *v236; // rcx
  float v237; // xmm1_4
  float *v238; // rcx
  float v239; // xmm0_4
  _DWORD *v240; // rcx
  double v241; // xmm0_8
  float *v242; // rcx
  float v243; // xmm1_4
  float *v244; // rcx
  float v245; // xmm0_4
  _DWORD *v246; // rcx
  double v247; // xmm0_8
  float *v248; // rcx
  float v249; // xmm1_4
  float *v250; // rcx
  float v251; // xmm0_4
  float *v252; // rcx
  unsigned __int64 v253; // rcx
  float *v254; // rcx
  float *v255; // rcx
  float v256; // xmm0_4
  float *v257; // rcx
  float v258; // xmm0_4
  float *v259; // rcx
  float v260; // xmm0_4
  float *v261; // rcx
  float v262; // xmm0_4
  float *v263; // rcx
  float v264; // xmm0_4
  float *v265; // rcx
  float v266; // xmm0_4
  float *v267; // rcx
  float v268; // xmm0_4
  float *v269; // rcx
  float v270; // xmm0_4
  float *v271; // rcx
  _DWORD *v272; // rcx
  double v273; // xmm0_8
  float *v274; // rcx
  float v275; // xmm1_4
  float *v276; // rcx
  float v277; // xmm0_4
  _DWORD *v278; // rcx
  double v279; // xmm0_8
  float *v280; // rcx
  float v281; // xmm1_4
  float *v282; // rcx
  float v283; // xmm0_4
  _DWORD *v284; // rcx
  double v285; // xmm0_8
  float *v286; // rcx
  float v287; // xmm1_4
  float *v288; // rcx
  float v289; // xmm0_4
  _DWORD *v290; // rcx
  double v291; // xmm0_8
  float *v292; // rcx
  float v293; // xmm1_4
  float *v294; // rcx
  float v295; // xmm0_4
  _DWORD *v296; // rcx
  double v297; // xmm0_8
  float *v298; // rcx
  float v299; // xmm1_4
  float *v300; // rcx
  float v301; // xmm0_4
  _DWORD *v302; // rcx
  double v303; // xmm0_8
  float *v304; // rcx
  float v305; // xmm1_4
  float *v306; // rcx
  float v307; // xmm0_4
  _DWORD *v308; // rcx
  double v309; // xmm0_8
  float *v310; // rcx
  float v311; // xmm1_4
  float *v312; // rcx
  float v313; // xmm0_4
  _DWORD *v314; // rcx
  double v315; // xmm0_8
  float *v316; // rcx
  float v317; // xmm1_4
  float *v318; // rcx
  float v319; // xmm0_4
  _DWORD *v320; // rcx
  double v321; // xmm0_8
  float *v322; // rcx
  float v323; // xmm1_4
  float *v324; // rcx
  float v325; // xmm0_4
  _DWORD *v326; // rcx
  double v327; // xmm0_8
  float *v328; // rcx
  float v329; // xmm1_4
  float *v330; // rcx
  float v331; // xmm0_4
  _DWORD *v332; // rcx
  double v333; // xmm0_8
  float *v334; // rcx
  float v335; // xmm1_4
  float *v336; // rcx
  float v337; // xmm0_4
  _DWORD *v338; // rcx
  double v339; // xmm0_8
  float *v340; // rcx
  float v341; // xmm1_4
  float *v342; // rcx
  float v343; // xmm0_4
  float *v344; // rcx
  _DWORD *v345; // rcx
  double v346; // xmm0_8
  float *v347; // rcx
  float v348; // xmm1_4
  float *v349; // rcx
  float v350; // xmm0_4
  _DWORD *v351; // rcx
  double v352; // xmm0_8
  float *v353; // rcx
  float v354; // xmm1_4
  float *v355; // rcx
  float v356; // xmm0_4
  _DWORD *v357; // rcx
  double v358; // xmm0_8
  float *v359; // rcx
  float v360; // xmm1_4
  float *v361; // rcx
  float v362; // xmm0_4
  _DWORD *v363; // rcx
  double v364; // xmm0_8
  float *v365; // rcx
  float v366; // xmm1_4
  float *v367; // rcx
  float v368; // xmm0_4
  _DWORD *v369; // rcx
  double v370; // xmm0_8
  float *v371; // rcx
  float v372; // xmm1_4
  float *v373; // rcx
  float v374; // xmm0_4
  _DWORD *v375; // rcx
  double v376; // xmm0_8
  float *v377; // rcx
  float v378; // xmm1_4
  float *v379; // rcx
  float v380; // xmm0_4
  _DWORD *v381; // rcx
  double v382; // xmm0_8
  float *v383; // rcx
  float v384; // xmm1_4
  float *v385; // rcx
  float v386; // xmm0_4
  _DWORD *v387; // rcx
  double v388; // xmm0_8
  float *v389; // rcx
  float v390; // xmm1_4
  float *v391; // rcx
  float v392; // xmm0_4
  _DWORD *v393; // rcx
  double v394; // xmm0_8
  float *v395; // rcx
  float v396; // xmm1_4
  float *v397; // rcx
  float v398; // xmm0_4
  _DWORD *v399; // rcx
  double v400; // xmm0_8
  float *v401; // rcx
  float v402; // xmm1_4
  float *v403; // rcx
  float v404; // xmm0_4
  _DWORD *v405; // rcx
  double v406; // xmm0_8
  float *v407; // rcx
  float v408; // xmm1_4
  float *v409; // rcx
  float v410; // xmm0_4
  _DWORD *v411; // rcx
  double v412; // xmm0_8
  float *v413; // rcx
  float v414; // xmm1_4
  float *v415; // rcx
  float v416; // xmm0_4
  int v417; // xmm0_4
  unsigned __int64 v418; // rcx
  int v419; // xmm0_4
  unsigned __int64 v420; // rcx
  int v421; // xmm0_4
  unsigned __int64 v422; // rcx
  int v423; // xmm0_4
  unsigned __int64 v424; // rcx
  int v425; // xmm0_4
  unsigned __int64 v426; // rcx
  int v427; // xmm0_4
  unsigned __int64 v428; // rcx
  int v429; // xmm0_4
  unsigned __int64 v430; // rcx
  int v431; // xmm0_4
  unsigned __int64 v432; // rcx
  int v433; // xmm0_4
  unsigned __int64 v434; // rcx
  int v435; // xmm0_4
  unsigned __int64 v436; // rcx
  int v437; // xmm0_4
  unsigned __int64 v438; // rcx
  int v439; // xmm0_4
  unsigned __int64 v440; // rcx
  int v441; // xmm0_4
  unsigned __int64 v442; // rcx
  int v443; // xmm0_4
  unsigned __int64 v444; // rcx
  int v445; // xmm0_4
  unsigned __int64 v446; // rcx
  int v447; // xmm0_4
  float v448; // [rsp+Ch] [rbp-174h]
  float v449; // [rsp+Ch] [rbp-174h]
  float v450; // [rsp+Ch] [rbp-174h]
  float v451; // [rsp+Ch] [rbp-174h]
  float v452; // [rsp+Ch] [rbp-174h]
  float v453; // [rsp+Ch] [rbp-174h]
  int i; // [rsp+2Ch] [rbp-154h]
  int i_0; // [rsp+30h] [rbp-150h]
  int i_1; // [rsp+34h] [rbp-14Ch]
  int i_2; // [rsp+38h] [rbp-148h]
  float m1; // [rsp+3Ch] [rbp-144h]
  float m1a; // [rsp+3Ch] [rbp-144h]
  float m1b; // [rsp+3Ch] [rbp-144h]
  float m2; // [rsp+40h] [rbp-140h]
  float m2a; // [rsp+40h] [rbp-140h]
  float m2b; // [rsp+40h] [rbp-140h]
  float m3; // [rsp+44h] [rbp-13Ch]
  float m3a; // [rsp+44h] [rbp-13Ch]
  float m3b; // [rsp+44h] [rbp-13Ch]
  float s; // [rsp+48h] [rbp-138h]
  float sa; // [rsp+48h] [rbp-138h]
  float sb; // [rsp+48h] [rbp-138h]
  float sc; // [rsp+48h] [rbp-138h]
  float sd; // [rsp+48h] [rbp-138h]
  float se; // [rsp+48h] [rbp-138h]
  float sf; // [rsp+48h] [rbp-138h]
  float sg; // [rsp+48h] [rbp-138h]
  float sh; // [rsp+48h] [rbp-138h]
  float si; // [rsp+48h] [rbp-138h]
  float sj; // [rsp+48h] [rbp-138h]
  float sk; // [rsp+48h] [rbp-138h]
  float sl; // [rsp+48h] [rbp-138h]
  float sm; // [rsp+48h] [rbp-138h]
  float sn; // [rsp+48h] [rbp-138h]
  float m0; // [rsp+4Ch] [rbp-134h]
  float m0a; // [rsp+4Ch] [rbp-134h]
  float m0b; // [rsp+4Ch] [rbp-134h]
  float *r0; // [rsp+50h] [rbp-130h]
  float *r1; // [rsp+58h] [rbp-128h]
  float *r2; // [rsp+60h] [rbp-120h]
  float *r3; // [rsp+68h] [rbp-118h]
  float *_tmp_0; // [rsp+78h] [rbp-108h]
  float *_tmp_1; // [rsp+80h] [rbp-100h]
  float *_tmp_2; // [rsp+88h] [rbp-F8h]
  float *_tmp_3; // [rsp+90h] [rbp-F0h]
  float *_tmp_4; // [rsp+98h] [rbp-E8h]
  char v494[224]; // [rsp+A0h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v494;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 8 wtmp:372";
  *(_QWORD *)(v2 + 16) = InvertMatrix4x4_Full;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  r0 = (float *)(v2 + 32);
  r1 = (float *)(v2 + 64);
  r2 = (float *)(v2 + 96);
  r3 = (float *)(v2 + 128);
  if ( *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)m & 7) + 3) >= *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m);
  }
  v5 = *(_DWORD *)m;
  if ( *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(r0);
  }
  *(_DWORD *)r0 = v5;
  v6 = v2 + 36;
  if ( *(_BYTE *)(((unsigned __int64)(m + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 4);
  }
  v7 = *((_DWORD *)m + 4);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && (char)((v6 & 7) + 3) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v6);
  *(_DWORD *)v6 = v7;
  v8 = v2 + 40;
  if ( *(_BYTE *)(((unsigned __int64)(m + 8) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 8);
  }
  v9 = *((_DWORD *)m + 8);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v8);
  *(_DWORD *)v8 = v9;
  v10 = v2 + 44;
  if ( *(_BYTE *)(((unsigned __int64)(m + 12) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 12) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 12);
  }
  v11 = *((_DWORD *)m + 12);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v10);
  *(_DWORD *)v10 = v11;
  v12 = (_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 48) & 7) + 3) >= *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 48);
  }
  *v12 = 1065353216;
  v13 = (int *)(v2 + 60);
  if ( *(_BYTE *)(((v2 + 60) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 60) & 7) + 3) >= *(_BYTE *)(((v2 + 60) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 60);
  }
  *v13 = 0;
  v14 = (int *)(v2 + 56);
  v15 = *v13;
  if ( *(_BYTE *)(((v2 + 56) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 56) & 7) + 3) >= *(_BYTE *)(((v2 + 56) >> 3) + 0x7FFF8000) )
  {
    v14 = (int *)__asan_report_store4(v2 + 56);
  }
  *v14 = v15;
  v16 = (_DWORD *)(v2 + 52);
  v17 = *v14;
  if ( *(_BYTE *)(((v2 + 52) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 52) & 7) + 3) >= *(_BYTE *)(((v2 + 52) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 52);
  }
  *v16 = v17;
  v18 = m + 1;
  if ( *(_BYTE *)(((unsigned __int64)(m + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 1);
  }
  v19 = *(_DWORD *)v18;
  if ( *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(r1);
  }
  *(_DWORD *)r1 = v19;
  v20 = v2 + 68;
  if ( *(_BYTE *)(((unsigned __int64)(m + 5) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 5);
  }
  v21 = *((_DWORD *)m + 5);
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0 && (char)((v20 & 7) + 3) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v20);
  *(_DWORD *)v20 = v21;
  v22 = v2 + 72;
  if ( *(_BYTE *)(((unsigned __int64)(m + 9) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 9);
  }
  v23 = *((_DWORD *)m + 9);
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) != 0 && (char)((v22 & 7) + 3) >= *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v22);
  *(_DWORD *)v22 = v23;
  v24 = v2 + 76;
  if ( *(_BYTE *)(((unsigned __int64)(m + 13) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 13) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 13);
  }
  v25 = *((_DWORD *)m + 13);
  if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) != 0 && (char)((v24 & 7) + 3) >= *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v24);
  *(_DWORD *)v24 = v25;
  v26 = (_DWORD *)(v2 + 84);
  if ( *(_BYTE *)(((v2 + 84) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 84) & 7) + 3) >= *(_BYTE *)(((v2 + 84) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 84);
  }
  *v26 = 1065353216;
  v27 = (int *)(v2 + 92);
  if ( *(_BYTE *)(((v2 + 92) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 92) & 7) + 3) >= *(_BYTE *)(((v2 + 92) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 92);
  }
  *v27 = 0;
  v28 = (int *)(v2 + 88);
  v29 = *v27;
  if ( *(_BYTE *)(((v2 + 88) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 88) & 7) + 3) >= *(_BYTE *)(((v2 + 88) >> 3) + 0x7FFF8000) )
  {
    v28 = (int *)__asan_report_store4(v2 + 88);
  }
  *v28 = v29;
  v30 = (_DWORD *)(v2 + 80);
  v31 = *v28;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 80) & 7) + 3) >= *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 80);
  }
  *v30 = v31;
  v32 = m + 2;
  if ( *(_BYTE *)(((unsigned __int64)(m + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 2);
  }
  v33 = *(_DWORD *)v32;
  if ( *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(r2);
  }
  *(_DWORD *)r2 = v33;
  v34 = v2 + 100;
  if ( *(_BYTE *)(((unsigned __int64)(m + 6) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 6);
  }
  v35 = *((_DWORD *)m + 6);
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) != 0 && (char)((v34 & 7) + 3) >= *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v34);
  *(_DWORD *)v34 = v35;
  v36 = v2 + 104;
  if ( *(_BYTE *)(((unsigned __int64)(m + 10) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 10);
  }
  v37 = *((_DWORD *)m + 10);
  if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) != 0 && (char)((v36 & 7) + 3) >= *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v36);
  *(_DWORD *)v36 = v37;
  v38 = v2 + 108;
  if ( *(_BYTE *)(((unsigned __int64)(m + 14) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 14) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 14);
  }
  v39 = *((_DWORD *)m + 14);
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) != 0 && (char)((v38 & 7) + 3) >= *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v38);
  *(_DWORD *)v38 = v39;
  v40 = (_DWORD *)(v2 + 120);
  if ( *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 120) & 7) + 3) >= *(_BYTE *)(((v2 + 120) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 120);
  }
  *v40 = 1065353216;
  v41 = (int *)(v2 + 124);
  if ( *(_BYTE *)(((v2 + 124) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 124) & 7) + 3) >= *(_BYTE *)(((v2 + 124) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 124);
  }
  *v41 = 0;
  v42 = (int *)(v2 + 116);
  v43 = *v41;
  if ( *(_BYTE *)(((v2 + 116) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 116) & 7) + 3) >= *(_BYTE *)(((v2 + 116) >> 3) + 0x7FFF8000) )
  {
    v42 = (int *)__asan_report_store4(v2 + 116);
  }
  *v42 = v43;
  v44 = (_DWORD *)(v2 + 112);
  v45 = *v42;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 112) & 7) + 3) >= *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 112);
  }
  *v44 = v45;
  v46 = m + 3;
  if ( *(_BYTE *)(((unsigned __int64)(m + 3) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 3);
  }
  v47 = *(_DWORD *)v46;
  if ( *(_BYTE *)(((unsigned __int64)r3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(r3);
  }
  *(_DWORD *)r3 = v47;
  v48 = v2 + 132;
  if ( *(_BYTE *)(((unsigned __int64)(m + 7) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 7);
  }
  v49 = *((_DWORD *)m + 7);
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) != 0 && (char)((v48 & 7) + 3) >= *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v48);
  *(_DWORD *)v48 = v49;
  v50 = v2 + 136;
  if ( *(_BYTE *)(((unsigned __int64)(m + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 11) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 11);
  }
  v51 = *((_DWORD *)m + 11);
  if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) != 0 && (char)((v50 & 7) + 3) >= *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v50);
  *(_DWORD *)v50 = v51;
  v52 = v2 + 140;
  if ( *(_BYTE *)(((unsigned __int64)(m + 15) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)m + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(m + 15) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(m + 15);
  }
  v53 = *((_DWORD *)m + 15);
  if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) != 0 && (char)((v52 & 7) + 3) >= *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
    __asan_report_store4(v52);
  *(_DWORD *)v52 = v53;
  v54 = (_DWORD *)(v2 + 156);
  if ( *(_BYTE *)(((v2 + 156) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 - 100) & 7) + 3) >= *(_BYTE *)(((v2 + 156) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 156);
  }
  *v54 = 1065353216;
  v55 = (int *)(v2 + 152);
  if ( *(_BYTE *)(((v2 + 152) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 - 104) & 7) + 3) >= *(_BYTE *)(((v2 + 152) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 152);
  }
  *v55 = 0;
  v56 = (int *)(v2 + 148);
  v57 = *v55;
  if ( *(_BYTE *)(((v2 + 148) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 - 108) & 7) + 3) >= *(_BYTE *)(((v2 + 148) >> 3) + 0x7FFF8000) )
  {
    v56 = (int *)__asan_report_store4(v2 + 148);
  }
  *v56 = v57;
  v58 = (_DWORD *)(v2 + 144);
  v59 = *v56;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 - 112) & 7) + 3) >= *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 144);
  }
  *v58 = v59;
  v448 = Abs(*r3);
  if ( *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r2);
  }
  if ( v448 > Abs(*r2) )
  {
    r3 = (float *)(v2 + 96);
    r2 = (float *)(v2 + 128);
  }
  if ( *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r2);
  }
  v449 = Abs(*r2);
  if ( *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r1);
  }
  if ( v449 > Abs(*r1) )
  {
    _tmp_0 = r2;
    r2 = (float *)(v2 + 64);
    r1 = _tmp_0;
  }
  if ( *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r1);
  }
  v450 = Abs(*r1);
  if ( *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r0);
  }
  if ( v450 > Abs(*r0) )
  {
    _tmp_1 = r1;
    r1 = (float *)(v2 + 32);
    r0 = _tmp_1;
  }
  if ( *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)r0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(r0);
  }
  if ( *r0 == 0.0 )
  {
    for ( i = 0; i <= 15; ++i )
    {
      v60 = (unsigned __int64)&out[i];
      if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * i + (_BYTE)out) & 7) + 3) >= *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&out[i]);
      }
      *(_DWORD *)v60 = 0;
    }
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)r1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1);
    }
    *(float *)&v62 = *r1;
    if ( *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)r0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) )
    {
      v62 = __asan_report_load4(r0);
    }
    m1 = *(float *)&v62 / *r0;
    if ( *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)r2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2);
    }
    m2 = *r2 / *r0;
    if ( *(_BYTE *)(((unsigned __int64)r3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)r3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r3);
    }
    m3 = *r3 / *r0;
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 1);
    }
    s = r0[1];
    v63 = r1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1 + 1);
    }
    v64 = *v63;
    v65 = r1 + 1;
    v66 = v64 - (float)(m1 * s);
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r1 + 1);
    }
    *v65 = v66;
    v67 = r2 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2 + 1);
    }
    v68 = *v67;
    v69 = r2 + 1;
    v70 = v68 - (float)(m2 * s);
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r2 + 1);
    }
    *v69 = v70;
    v71 = r3 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r3 + 1);
    }
    v72 = *v71;
    v73 = r3 + 1;
    v74 = v72 - (float)(m3 * s);
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r3 + 1);
    }
    *v73 = v74;
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 2);
    }
    sa = r0[2];
    v75 = r1 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1 + 2);
    }
    v76 = *v75;
    v77 = r1 + 2;
    v78 = v76 - (float)(m1 * sa);
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r1 + 2);
    }
    *v77 = v78;
    v79 = r2 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2 + 2);
    }
    v80 = *v79;
    v81 = r2 + 2;
    v82 = v80 - (float)(m2 * sa);
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r2 + 2);
    }
    *v81 = v82;
    v83 = r3 + 2;
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r3 + 2);
    }
    v84 = *v83;
    v85 = r3 + 2;
    v86 = v84 - (float)(m3 * sa);
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r3 + 2);
    }
    *v85 = v86;
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 3);
    }
    sb = r0[3];
    v87 = r1 + 3;
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1 + 3);
    }
    v88 = *v87;
    v89 = r1 + 3;
    v90 = v88 - (float)(m1 * sb);
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r1 + 3);
    }
    *v89 = v90;
    v91 = r2 + 3;
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2 + 3);
    }
    v92 = *v91;
    v93 = r2 + 3;
    v94 = v92 - (float)(m2 * sb);
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r2 + 3);
    }
    *v93 = v94;
    v95 = r3 + 3;
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r3 + 3);
    }
    v96 = *v95;
    v97 = r3 + 3;
    v98 = v96 - (float)(m3 * sb);
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(r3 + 3);
    }
    *v97 = v98;
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 4);
    }
    sc = r0[4];
    if ( sc != 0.0 )
    {
      v99 = r1 + 4;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 4);
      }
      v100 = *v99;
      v101 = r1 + 4;
      v102 = v100 - (float)(m1 * sc);
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r1 + 4);
      }
      *v101 = v102;
      v103 = r2 + 4;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 4);
      }
      v104 = *v103;
      v105 = r2 + 4;
      v106 = v104 - (float)(m2 * sc);
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 4);
      }
      *v105 = v106;
      v107 = r3 + 4;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 4);
      }
      v108 = *v107;
      v109 = r3 + 4;
      v110 = v108 - (float)(m3 * sc);
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 4);
      }
      *v109 = v110;
    }
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 5);
    }
    sd = r0[5];
    if ( sd != 0.0 )
    {
      v111 = r1 + 5;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 5);
      }
      v112 = *v111;
      v113 = r1 + 5;
      v114 = v112 - (float)(m1 * sd);
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r1 + 5);
      }
      *v113 = v114;
      v115 = r2 + 5;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 5);
      }
      v116 = *v115;
      v117 = r2 + 5;
      v118 = v116 - (float)(m2 * sd);
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 5);
      }
      *v117 = v118;
      v119 = r3 + 5;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 5);
      }
      v120 = *v119;
      v121 = r3 + 5;
      v122 = v120 - (float)(m3 * sd);
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 5);
      }
      *v121 = v122;
    }
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 6);
    }
    se = r0[6];
    if ( se != 0.0 )
    {
      v123 = r1 + 6;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 6);
      }
      v124 = *v123;
      v125 = r1 + 6;
      v126 = v124 - (float)(m1 * se);
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r1 + 6);
      }
      *v125 = v126;
      v127 = r2 + 6;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 6);
      }
      v128 = *v127;
      v129 = r2 + 6;
      v130 = v128 - (float)(m2 * se);
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 6);
      }
      *v129 = v130;
      v131 = r3 + 6;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 6);
      }
      v132 = *v131;
      v133 = r3 + 6;
      v134 = v132 - (float)(m3 * se);
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 6);
      }
      *v133 = v134;
    }
    if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r0 + 7);
    }
    sf = r0[7];
    if ( sf != 0.0 )
    {
      v135 = r1 + 7;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 7);
      }
      v136 = *v135;
      v137 = r1 + 7;
      v138 = v136 - (float)(m1 * sf);
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r1 + 7);
      }
      *v137 = v138;
      v139 = r2 + 7;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 7);
      }
      v140 = *v139;
      v141 = r2 + 7;
      v142 = v140 - (float)(m2 * sf);
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 7);
      }
      *v141 = v142;
      v143 = r3 + 7;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 7);
      }
      v144 = *v143;
      v145 = r3 + 7;
      v146 = v144 - (float)(m3 * sf);
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 7);
      }
      *v145 = v146;
    }
    v147 = r3 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r3 + 1);
    }
    v451 = Abs(*v147);
    v148 = r2 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2 + 1);
    }
    if ( v451 > Abs(*v148) )
    {
      _tmp_2 = r3;
      r3 = r2;
      r2 = _tmp_2;
    }
    v149 = r2 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r2 + 1);
    }
    v452 = Abs(*v149);
    v150 = r1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1 + 1);
    }
    if ( v452 > Abs(*v150) )
    {
      _tmp_3 = r2;
      r2 = r1;
      r1 = _tmp_3;
    }
    v151 = r1 + 1;
    if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(r1 + 1);
    }
    if ( *v151 == 0.0 )
    {
      for ( i_0 = 0; i_0 <= 15; ++i_0 )
      {
        v152 = (unsigned __int64)&out[i_0];
        if ( *(_BYTE *)((v152 >> 3) + 0x7FFF8000) != 0
          && (char)(((4 * i_0 + (_BYTE)out) & 7) + 3) >= *(_BYTE *)((v152 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&out[i_0]);
        }
        *(_DWORD *)v152 = 0;
      }
      result = 0;
    }
    else
    {
      v153 = r2 + 1;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 1);
      }
      LODWORD(v154) = *v153;
      v155 = r1 + 1;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
      {
        v154 = __asan_report_load4(r1 + 1);
      }
      m2a = *(float *)&v154 / *v155;
      v156 = r3 + 1;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 1);
      }
      LODWORD(v157) = *v156;
      v158 = r1 + 1;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
      {
        v157 = __asan_report_load4(r1 + 1);
      }
      m3a = *(float *)&v157 / *v158;
      v159 = r2 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 2);
      }
      LODWORD(v160) = *v159;
      v161 = r1 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) )
      {
        v160 = __asan_report_load4(r1 + 2);
      }
      v162 = *v161 * m2a;
      v163 = r2 + 2;
      v164 = *(float *)&v160 - v162;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 2);
      }
      *v163 = v164;
      v165 = r3 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 2);
      }
      LODWORD(v166) = *v165;
      v167 = r1 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) )
      {
        v166 = __asan_report_load4(r1 + 2);
      }
      v168 = *v167 * m3a;
      v169 = r3 + 2;
      v170 = *(float *)&v166 - v168;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 2);
      }
      *v169 = v170;
      v171 = r2 + 3;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 3);
      }
      LODWORD(v172) = *v171;
      v173 = r1 + 3;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) )
      {
        v172 = __asan_report_load4(r1 + 3);
      }
      v174 = *v173 * m2a;
      v175 = r2 + 3;
      v176 = *(float *)&v172 - v174;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r2 + 3);
      }
      *v175 = v176;
      v177 = r3 + 3;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 3);
      }
      LODWORD(v178) = *v177;
      v179 = r1 + 3;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) )
      {
        v178 = __asan_report_load4(r1 + 3);
      }
      v180 = *v179 * m3a;
      v181 = r3 + 3;
      v182 = *(float *)&v178 - v180;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(r3 + 3);
      }
      *v181 = v182;
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 4);
      }
      sg = r1[4];
      if ( sg != 0.0 )
      {
        v183 = r2 + 4;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r2 + 4);
        }
        v184 = *v183;
        v185 = r2 + 4;
        v186 = v184 - (float)(m2a * sg);
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r2 + 4);
        }
        *v185 = v186;
        v187 = r3 + 4;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 4);
        }
        v188 = *v187;
        v189 = r3 + 4;
        v190 = v188 - (float)(m3a * sg);
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 4);
        }
        *v189 = v190;
      }
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 5);
      }
      sh = r1[5];
      if ( sh != 0.0 )
      {
        v191 = r2 + 5;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r2 + 5);
        }
        v192 = *v191;
        v193 = r2 + 5;
        v194 = v192 - (float)(m2a * sh);
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r2 + 5);
        }
        *v193 = v194;
        v195 = r3 + 5;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 5);
        }
        v196 = *v195;
        v197 = r3 + 5;
        v198 = v196 - (float)(m3a * sh);
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 5);
        }
        *v197 = v198;
      }
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 6);
      }
      si = r1[6];
      if ( si != 0.0 )
      {
        v199 = r2 + 6;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r2 + 6);
        }
        v200 = *v199;
        v201 = r2 + 6;
        v202 = v200 - (float)(m2a * si);
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r2 + 6);
        }
        *v201 = v202;
        v203 = r3 + 6;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 6);
        }
        v204 = *v203;
        v205 = r3 + 6;
        v206 = v204 - (float)(m3a * si);
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 6);
        }
        *v205 = v206;
      }
      if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r1 + 7);
      }
      sj = r1[7];
      if ( sj != 0.0 )
      {
        v207 = r2 + 7;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r2 + 7);
        }
        v208 = *v207;
        v209 = r2 + 7;
        v210 = v208 - (float)(m2a * sj);
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r2 + 7);
        }
        *v209 = v210;
        v211 = r3 + 7;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 7);
        }
        v212 = *v211;
        v213 = r3 + 7;
        v214 = v212 - (float)(m3a * sj);
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 7);
        }
        *v213 = v214;
      }
      v215 = r3 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r3 + 2);
      }
      v453 = Abs(*v215);
      v216 = r2 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 2);
      }
      if ( v453 > Abs(*v216) )
      {
        _tmp_4 = r3;
        r3 = r2;
        r2 = _tmp_4;
      }
      v217 = r2 + 2;
      if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(r2 + 2);
      }
      if ( *v217 == 0.0 )
      {
        for ( i_1 = 0; i_1 <= 15; ++i_1 )
        {
          v218 = (unsigned __int64)&out[i_1];
          if ( *(_BYTE *)((v218 >> 3) + 0x7FFF8000) != 0
            && (char)(((4 * i_1 + (_BYTE)out) & 7) + 3) >= *(_BYTE *)((v218 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&out[i_1]);
          }
          *(_DWORD *)v218 = 0;
        }
        result = 0;
      }
      else
      {
        v219 = r3 + 2;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 2) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 2);
        }
        LODWORD(v220) = *v219;
        v221 = r2 + 2;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
        {
          v220 = __asan_report_load4(r2 + 2);
        }
        m3b = *(float *)&v220 / *v221;
        v222 = r3 + 3;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 3);
        }
        LODWORD(v223) = *v222;
        v224 = r2 + 3;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
        {
          v223 = __asan_report_load4(r2 + 3);
        }
        v225 = *v224 * m3b;
        v226 = r3 + 3;
        v227 = *(float *)&v223 - v225;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 3);
        }
        *v226 = v227;
        v228 = r3 + 4;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 4);
        }
        LODWORD(v229) = *v228;
        v230 = r2 + 4;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
        {
          v229 = __asan_report_load4(r2 + 4);
        }
        v231 = *v230 * m3b;
        v232 = r3 + 4;
        v233 = *(float *)&v229 - v231;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 4);
        }
        *v232 = v233;
        v234 = r3 + 5;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 5);
        }
        LODWORD(v235) = *v234;
        v236 = r2 + 5;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
        {
          v235 = __asan_report_load4(r2 + 5);
        }
        v237 = *v236 * m3b;
        v238 = r3 + 5;
        v239 = *(float *)&v235 - v237;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 5);
        }
        *v238 = v239;
        v240 = r3 + 6;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 6);
        }
        LODWORD(v241) = *v240;
        v242 = r2 + 6;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
        {
          v241 = __asan_report_load4(r2 + 6);
        }
        v243 = *v242 * m3b;
        v244 = r3 + 6;
        v245 = *(float *)&v241 - v243;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 6);
        }
        *v244 = v245;
        v246 = r3 + 7;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 7);
        }
        LODWORD(v247) = *v246;
        v248 = r2 + 7;
        if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
        {
          v247 = __asan_report_load4(r2 + 7);
        }
        v249 = *v248 * m3b;
        v250 = r3 + 7;
        v251 = *(float *)&v247 - v249;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(r3 + 7);
        }
        *v250 = v251;
        v252 = r3 + 3;
        if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(r3 + 3);
        }
        if ( *v252 == 0.0 )
        {
          for ( i_2 = 0; i_2 <= 15; ++i_2 )
          {
            v253 = (unsigned __int64)&out[i_2];
            if ( *(_BYTE *)((v253 >> 3) + 0x7FFF8000) != 0
              && (char)(((4 * i_2 + (_BYTE)out) & 7) + 3) >= *(_BYTE *)((v253 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(&out[i_2]);
            }
            *(_DWORD *)v253 = 0;
          }
          result = 0;
        }
        else
        {
          v254 = r3 + 3;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 3);
          }
          sk = 1.0 / *v254;
          v255 = r3 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 4);
          }
          v256 = *v255;
          v257 = r3 + 4;
          v258 = v256 * sk;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r3 + 4);
          }
          *v257 = v258;
          v259 = r3 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 5);
          }
          v260 = *v259;
          v261 = r3 + 5;
          v262 = v260 * sk;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r3 + 5);
          }
          *v261 = v262;
          v263 = r3 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 6);
          }
          v264 = *v263;
          v265 = r3 + 6;
          v266 = v264 * sk;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r3 + 6);
          }
          *v265 = v266;
          v267 = r3 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 7);
          }
          v268 = *v267;
          v269 = r3 + 7;
          v270 = v268 * sk;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r3 + 7);
          }
          *v269 = v270;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 3);
          }
          m2b = r2[3];
          v271 = r2 + 2;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 2) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 2);
          }
          sl = 1.0 / *v271;
          v272 = r2 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 4);
          }
          LODWORD(v273) = *v272;
          v274 = r3 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            v273 = __asan_report_load4(r3 + 4);
          }
          v275 = *v274 * m2b;
          v276 = r2 + 4;
          v277 = (float)(*(float *)&v273 - v275) * sl;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r2 + 4);
          }
          *v276 = v277;
          v278 = r2 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 5);
          }
          LODWORD(v279) = *v278;
          v280 = r3 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            v279 = __asan_report_load4(r3 + 5);
          }
          v281 = *v280 * m2b;
          v282 = r2 + 5;
          v283 = (float)(*(float *)&v279 - v281) * sl;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r2 + 5);
          }
          *v282 = v283;
          v284 = r2 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 6);
          }
          LODWORD(v285) = *v284;
          v286 = r3 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            v285 = __asan_report_load4(r3 + 6);
          }
          v287 = *v286 * m2b;
          v288 = r2 + 6;
          v289 = (float)(*(float *)&v285 - v287) * sl;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r2 + 6);
          }
          *v288 = v289;
          v290 = r2 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 7);
          }
          LODWORD(v291) = *v290;
          v292 = r3 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            v291 = __asan_report_load4(r3 + 7);
          }
          v293 = *v292 * m2b;
          v294 = r2 + 7;
          v295 = (float)(*(float *)&v291 - v293) * sl;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r2 + 7);
          }
          *v294 = v295;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 3);
          }
          m1a = r1[3];
          v296 = r1 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 4);
          }
          LODWORD(v297) = *v296;
          v298 = r3 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            v297 = __asan_report_load4(r3 + 4);
          }
          v299 = *v298 * m1a;
          v300 = r1 + 4;
          v301 = *(float *)&v297 - v299;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 4);
          }
          *v300 = v301;
          v302 = r1 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 5);
          }
          LODWORD(v303) = *v302;
          v304 = r3 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            v303 = __asan_report_load4(r3 + 5);
          }
          v305 = *v304 * m1a;
          v306 = r1 + 5;
          v307 = *(float *)&v303 - v305;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 5);
          }
          *v306 = v307;
          v308 = r1 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 6);
          }
          LODWORD(v309) = *v308;
          v310 = r3 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            v309 = __asan_report_load4(r3 + 6);
          }
          v311 = *v310 * m1a;
          v312 = r1 + 6;
          v313 = *(float *)&v309 - v311;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 6);
          }
          *v312 = v313;
          v314 = r1 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 7);
          }
          LODWORD(v315) = *v314;
          v316 = r3 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            v315 = __asan_report_load4(r3 + 7);
          }
          v317 = *v316 * m1a;
          v318 = r1 + 7;
          v319 = *(float *)&v315 - v317;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 7);
          }
          *v318 = v319;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 3) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 3);
          }
          m0 = r0[3];
          v320 = r0 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 4);
          }
          LODWORD(v321) = *v320;
          v322 = r3 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            v321 = __asan_report_load4(r3 + 4);
          }
          v323 = *v322 * m0;
          v324 = r0 + 4;
          v325 = *(float *)&v321 - v323;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 4);
          }
          *v324 = v325;
          v326 = r0 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 5);
          }
          LODWORD(v327) = *v326;
          v328 = r3 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            v327 = __asan_report_load4(r3 + 5);
          }
          v329 = *v328 * m0;
          v330 = r0 + 5;
          v331 = *(float *)&v327 - v329;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 5);
          }
          *v330 = v331;
          v332 = r0 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 6);
          }
          LODWORD(v333) = *v332;
          v334 = r3 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            v333 = __asan_report_load4(r3 + 6);
          }
          v335 = *v334 * m0;
          v336 = r0 + 6;
          v337 = *(float *)&v333 - v335;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 6);
          }
          *v336 = v337;
          v338 = r0 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 7);
          }
          LODWORD(v339) = *v338;
          v340 = r3 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            v339 = __asan_report_load4(r3 + 7);
          }
          v341 = *v340 * m0;
          v342 = r0 + 7;
          v343 = *(float *)&v339 - v341;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 7);
          }
          *v342 = v343;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 2) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 2);
          }
          m1b = r1[2];
          v344 = r1 + 1;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 1) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 1);
          }
          sm = 1.0 / *v344;
          v345 = r1 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 4);
          }
          LODWORD(v346) = *v345;
          v347 = r2 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
          {
            v346 = __asan_report_load4(r2 + 4);
          }
          v348 = *v347 * m1b;
          v349 = r1 + 4;
          v350 = (float)(*(float *)&v346 - v348) * sm;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 4);
          }
          *v349 = v350;
          v351 = r1 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 5);
          }
          LODWORD(v352) = *v351;
          v353 = r2 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
          {
            v352 = __asan_report_load4(r2 + 5);
          }
          v354 = *v353 * m1b;
          v355 = r1 + 5;
          v356 = (float)(*(float *)&v352 - v354) * sm;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 5);
          }
          *v355 = v356;
          v357 = r1 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 6);
          }
          LODWORD(v358) = *v357;
          v359 = r2 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
          {
            v358 = __asan_report_load4(r2 + 6);
          }
          v360 = *v359 * m1b;
          v361 = r1 + 6;
          v362 = (float)(*(float *)&v358 - v360) * sm;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 6);
          }
          *v361 = v362;
          v363 = r1 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 7);
          }
          LODWORD(v364) = *v363;
          v365 = r2 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
          {
            v364 = __asan_report_load4(r2 + 7);
          }
          v366 = *v365 * m1b;
          v367 = r1 + 7;
          v368 = (float)(*(float *)&v364 - v366) * sm;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r1 + 7);
          }
          *v367 = v368;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 2) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 2) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 2);
          }
          m0a = r0[2];
          v369 = r0 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 4);
          }
          LODWORD(v370) = *v369;
          v371 = r2 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
          {
            v370 = __asan_report_load4(r2 + 4);
          }
          v372 = *v371 * m0a;
          v373 = r0 + 4;
          v374 = *(float *)&v370 - v372;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 4);
          }
          *v373 = v374;
          v375 = r0 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 5);
          }
          LODWORD(v376) = *v375;
          v377 = r2 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
          {
            v376 = __asan_report_load4(r2 + 5);
          }
          v378 = *v377 * m0a;
          v379 = r0 + 5;
          v380 = *(float *)&v376 - v378;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 5);
          }
          *v379 = v380;
          v381 = r0 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 6);
          }
          LODWORD(v382) = *v381;
          v383 = r2 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
          {
            v382 = __asan_report_load4(r2 + 6);
          }
          v384 = *v383 * m0a;
          v385 = r0 + 6;
          v386 = *(float *)&v382 - v384;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 6);
          }
          *v385 = v386;
          v387 = r0 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 7);
          }
          LODWORD(v388) = *v387;
          v389 = r2 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
          {
            v388 = __asan_report_load4(r2 + 7);
          }
          v390 = *v389 * m0a;
          v391 = r0 + 7;
          v392 = *(float *)&v388 - v390;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 7);
          }
          *v391 = v392;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 1) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 1);
          }
          m0b = r0[1];
          if ( *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)r0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)r0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0);
          }
          sn = 1.0 / *r0;
          v393 = r0 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 4);
          }
          LODWORD(v394) = *v393;
          v395 = r1 + 4;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            v394 = __asan_report_load4(r1 + 4);
          }
          v396 = *v395 * m0b;
          v397 = r0 + 4;
          v398 = (float)(*(float *)&v394 - v396) * sn;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 4);
          }
          *v397 = v398;
          v399 = r0 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 5);
          }
          LODWORD(v400) = *v399;
          v401 = r1 + 5;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            v400 = __asan_report_load4(r1 + 5);
          }
          v402 = *v401 * m0b;
          v403 = r0 + 5;
          v404 = (float)(*(float *)&v400 - v402) * sn;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 5);
          }
          *v403 = v404;
          v405 = r0 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 6);
          }
          LODWORD(v406) = *v405;
          v407 = r1 + 6;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            v406 = __asan_report_load4(r1 + 6);
          }
          v408 = *v407 * m0b;
          v409 = r0 + 6;
          v410 = (float)(*(float *)&v406 - v408) * sn;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 6);
          }
          *v409 = v410;
          v411 = r0 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 7);
          }
          LODWORD(v412) = *v411;
          v413 = r1 + 7;
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            v412 = __asan_report_load4(r1 + 7);
          }
          v414 = *v413 * m0b;
          v415 = r0 + 7;
          v416 = (float)(*(float *)&v412 - v414) * sn;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(r0 + 7);
          }
          *v415 = v416;
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 4);
          }
          v417 = *((_DWORD *)r0 + 4);
          if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)out & 7) + 3) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(out);
          }
          *(_DWORD *)out = v417;
          v418 = (unsigned __int64)(out + 4);
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 5);
          }
          v419 = *((_DWORD *)r0 + 5);
          if ( *(_BYTE *)((v418 >> 3) + 0x7FFF8000) != 0
            && (char)((v418 & 7) + 3) >= *(_BYTE *)((v418 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v418);
          }
          *(_DWORD *)v418 = v419;
          v420 = (unsigned __int64)(out + 8);
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 6);
          }
          v421 = *((_DWORD *)r0 + 6);
          if ( *(_BYTE *)((v420 >> 3) + 0x7FFF8000) != 0
            && (char)((v420 & 7) + 3) >= *(_BYTE *)((v420 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v420);
          }
          *(_DWORD *)v420 = v421;
          v422 = (unsigned __int64)(out + 12);
          if ( *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r0 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r0 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r0 + 7);
          }
          v423 = *((_DWORD *)r0 + 7);
          if ( *(_BYTE *)((v422 >> 3) + 0x7FFF8000) != 0
            && (char)((v422 & 7) + 3) >= *(_BYTE *)((v422 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v422);
          }
          *(_DWORD *)v422 = v423;
          v424 = (unsigned __int64)(out + 1);
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 4);
          }
          v425 = *((_DWORD *)r1 + 4);
          if ( *(_BYTE *)((v424 >> 3) + 0x7FFF8000) != 0
            && (char)((v424 & 7) + 3) >= *(_BYTE *)((v424 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v424);
          }
          *(_DWORD *)v424 = v425;
          v426 = (unsigned __int64)(out + 5);
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 5);
          }
          v427 = *((_DWORD *)r1 + 5);
          if ( *(_BYTE *)((v426 >> 3) + 0x7FFF8000) != 0
            && (char)((v426 & 7) + 3) >= *(_BYTE *)((v426 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v426);
          }
          *(_DWORD *)v426 = v427;
          v428 = (unsigned __int64)(out + 9);
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 6);
          }
          v429 = *((_DWORD *)r1 + 6);
          if ( *(_BYTE *)((v428 >> 3) + 0x7FFF8000) != 0
            && (char)((v428 & 7) + 3) >= *(_BYTE *)((v428 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v428);
          }
          *(_DWORD *)v428 = v429;
          v430 = (unsigned __int64)(out + 13);
          if ( *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r1 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r1 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r1 + 7);
          }
          v431 = *((_DWORD *)r1 + 7);
          if ( *(_BYTE *)((v430 >> 3) + 0x7FFF8000) != 0
            && (char)((v430 & 7) + 3) >= *(_BYTE *)((v430 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v430);
          }
          *(_DWORD *)v430 = v431;
          v432 = (unsigned __int64)(out + 2);
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 4);
          }
          v433 = *((_DWORD *)r2 + 4);
          if ( *(_BYTE *)((v432 >> 3) + 0x7FFF8000) != 0
            && (char)((v432 & 7) + 3) >= *(_BYTE *)((v432 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v432);
          }
          *(_DWORD *)v432 = v433;
          v434 = (unsigned __int64)(out + 6);
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 5);
          }
          v435 = *((_DWORD *)r2 + 5);
          if ( *(_BYTE *)((v434 >> 3) + 0x7FFF8000) != 0
            && (char)((v434 & 7) + 3) >= *(_BYTE *)((v434 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v434);
          }
          *(_DWORD *)v434 = v435;
          v436 = (unsigned __int64)(out + 10);
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 6);
          }
          v437 = *((_DWORD *)r2 + 6);
          if ( *(_BYTE *)((v436 >> 3) + 0x7FFF8000) != 0
            && (char)((v436 & 7) + 3) >= *(_BYTE *)((v436 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v436);
          }
          *(_DWORD *)v436 = v437;
          v438 = (unsigned __int64)(out + 14);
          if ( *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r2 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r2 + 7);
          }
          v439 = *((_DWORD *)r2 + 7);
          if ( *(_BYTE *)((v438 >> 3) + 0x7FFF8000) != 0
            && (char)((v438 & 7) + 3) >= *(_BYTE *)((v438 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v438);
          }
          *(_DWORD *)v438 = v439;
          v440 = (unsigned __int64)(out + 3);
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 4) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 4);
          }
          v441 = *((_DWORD *)r3 + 4);
          if ( *(_BYTE *)((v440 >> 3) + 0x7FFF8000) != 0
            && (char)((v440 & 7) + 3) >= *(_BYTE *)((v440 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v440);
          }
          *(_DWORD *)v440 = v441;
          v442 = (unsigned __int64)(out + 7);
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 5) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 5);
          }
          v443 = *((_DWORD *)r3 + 5);
          if ( *(_BYTE *)((v442 >> 3) + 0x7FFF8000) != 0
            && (char)((v442 & 7) + 3) >= *(_BYTE *)((v442 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v442);
          }
          *(_DWORD *)v442 = v443;
          v444 = (unsigned __int64)(out + 11);
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 6) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 6);
          }
          v445 = *((_DWORD *)r3 + 6);
          if ( *(_BYTE *)((v444 >> 3) + 0x7FFF8000) != 0
            && (char)((v444 & 7) + 3) >= *(_BYTE *)((v444 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v444);
          }
          *(_DWORD *)v444 = v445;
          v446 = (unsigned __int64)(out + 15);
          if ( *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)r3 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(r3 + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(r3 + 7);
          }
          v447 = *((_DWORD *)r3 + 7);
          if ( *(_BYTE *)((v446 >> 3) + 0x7FFF8000) != 0
            && (char)((v446 & 7) + 3) >= *(_BYTE *)((v446 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v446);
          }
          *(_DWORD *)v446 = v447;
          result = 1;
        }
      }
    }
  }
  if ( v494 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 517: range 000000000CC1011F-000000000CC11ABA
bool __cdecl InvertMatrix4x4_General3D(const float *in, float *out)
{
  float v2; // xmm1_4
  float *v3; // rcx
  float v4; // xmm1_4
  float *v5; // rcx
  float *v6; // rcx
  float v7; // xmm1_4
  float *v8; // rcx
  float v9; // xmm1_4
  float *v10; // rcx
  float *v11; // rcx
  float v12; // xmm1_4
  float *v13; // rcx
  float v14; // xmm1_4
  float *v15; // rcx
  float *v16; // rcx
  float v17; // xmm1_4
  float *v18; // rcx
  float v19; // xmm1_4
  float *v20; // rcx
  float *v21; // rcx
  float v22; // xmm1_4
  float *v23; // rcx
  float v24; // xmm1_4
  float *v25; // rcx
  float v26; // xmm1_4
  float *v27; // rcx
  float v28; // xmm1_4
  float *v29; // rcx
  unsigned __int64 v30; // rcx
  float *v32; // rcx
  float v33; // xmm1_4
  float *v34; // rcx
  double v35; // xmm0_8
  float *v36; // rcx
  float v37; // xmm2_4
  float *v38; // rcx
  float v39; // xmm0_4
  float *v40; // rcx
  float v41; // xmm1_4
  float *v42; // rcx
  double v43; // xmm0_8
  float *v44; // rcx
  float v45; // xmm2_4
  float *v46; // rcx
  float v47; // xmm0_4
  float *v48; // rcx
  float v49; // xmm0_4
  float *v50; // rcx
  float v51; // xmm1_4
  float *v52; // rcx
  double v53; // xmm0_8
  float *v54; // rcx
  float v55; // xmm2_4
  float *v56; // rcx
  float v57; // xmm1_4
  float *v58; // rcx
  float v59; // xmm0_4
  float *v60; // rcx
  float v61; // xmm1_4
  float *v62; // rcx
  double v63; // xmm0_8
  float *v64; // rcx
  float v65; // xmm2_4
  float *v66; // rcx
  float v67; // xmm0_4
  float *v68; // rcx
  float v69; // xmm0_4
  float v70; // xmm1_4
  float *v71; // rcx
  double v72; // xmm0_8
  float *v73; // rcx
  float v74; // xmm2_4
  float *v75; // rcx
  float v76; // xmm1_4
  float *v77; // rcx
  float v78; // xmm0_4
  float v79; // xmm1_4
  float *v80; // rcx
  double v81; // xmm0_8
  float *v82; // rcx
  float v83; // xmm2_4
  float *v84; // rcx
  float v85; // xmm0_4
  float *v86; // rcx
  float v87; // xmm0_4
  float *v88; // rcx
  float v89; // xmm1_4
  float *v90; // rcx
  double v91; // xmm0_8
  float *v92; // rcx
  float v93; // xmm2_4
  float *v94; // rcx
  float v95; // xmm1_4
  float *v96; // rcx
  float v97; // xmm0_4
  float v98; // xmm1_4
  float *v99; // rcx
  double v100; // xmm0_8
  float *v101; // rcx
  float v102; // xmm2_4
  float *v103; // rcx
  float v104; // xmm0_4
  float *v105; // rcx
  float v106; // xmm0_4
  float v107; // xmm1_4
  float *v108; // rcx
  double v109; // xmm0_8
  float *v110; // rcx
  float v111; // xmm2_4
  float *v112; // rcx
  float v113; // xmm1_4
  float *v114; // rcx
  float v115; // xmm0_4
  float *v116; // rcx
  float v117; // xmm1_4
  float *v118; // rcx
  float v119; // xmm2_4
  float *v120; // rcx
  float v121; // xmm1_4
  float *v122; // rcx
  float v123; // xmm2_4
  float *v124; // rcx
  float v125; // xmm0_4
  float *v126; // rcx
  float v127; // xmm0_4
  float *v128; // rcx
  float v129; // xmm1_4
  float *v130; // rcx
  float v131; // xmm1_4
  float *v132; // rcx
  float v133; // xmm2_4
  float *v134; // rcx
  float v135; // xmm1_4
  float *v136; // rcx
  float v137; // xmm2_4
  float *v138; // rcx
  float v139; // xmm0_4
  float *v140; // rcx
  float v141; // xmm0_4
  float *v142; // rcx
  float v143; // xmm1_4
  float *v144; // rcx
  float v145; // xmm1_4
  float *v146; // rcx
  float v147; // xmm2_4
  float *v148; // rcx
  float v149; // xmm1_4
  float *v150; // rcx
  float v151; // xmm2_4
  float *v152; // rcx
  float v153; // xmm0_4
  float *v154; // rcx
  float v155; // xmm0_4
  float *v156; // rcx
  float *v157; // rcx
  float *v158; // rcx
  float *v159; // rcx
  float pos; // [rsp+1Ch] [rbp-14h]
  float neg; // [rsp+20h] [rbp-10h]
  int i; // [rsp+24h] [rbp-Ch]
  float t; // [rsp+28h] [rbp-8h]
  float ta; // [rsp+28h] [rbp-8h]
  float tb; // [rsp+28h] [rbp-8h]
  float tc; // [rsp+28h] [rbp-8h]
  float td; // [rsp+28h] [rbp-8h]
  float te; // [rsp+28h] [rbp-8h]
  float det; // [rsp+2Ch] [rbp-4h]

  neg = 0.0;
  pos = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)in & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in);
  }
  v2 = *in;
  v3 = (float *)(in + 5);
  if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 5);
  }
  v4 = v2 * *v3;
  v5 = (float *)(in + 10);
  if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 10);
  }
  t = *v5 * v4;
  if ( t < 0.0 )
    neg = t + 0.0;
  else
    pos = t + 0.0;
  v6 = (float *)(in + 1);
  if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 1);
  }
  v7 = *v6;
  v8 = (float *)(in + 6);
  if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 6);
  }
  v9 = v7 * *v8;
  v10 = (float *)(in + 8);
  if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 8);
  }
  ta = *v10 * v9;
  if ( ta < 0.0 )
    neg = neg + ta;
  else
    pos = pos + ta;
  v11 = (float *)(in + 2);
  if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 2);
  }
  v12 = *v11;
  v13 = (float *)(in + 4);
  if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 4);
  }
  v14 = v12 * *v13;
  v15 = (float *)(in + 9);
  if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 9);
  }
  tb = *v15 * v14;
  if ( tb < 0.0 )
    neg = neg + tb;
  else
    pos = pos + tb;
  v16 = (float *)(in + 2);
  if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 2);
  }
  v17 = -*v16;
  v18 = (float *)(in + 5);
  if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 5);
  }
  v19 = v17 * *v18;
  v20 = (float *)(in + 8);
  if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 8);
  }
  tc = *v20 * v19;
  if ( tc < 0.0 )
    neg = neg + tc;
  else
    pos = pos + tc;
  v21 = (float *)(in + 1);
  if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 1);
  }
  v22 = -*v21;
  v23 = (float *)(in + 4);
  if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 4);
  }
  v24 = v22 * *v23;
  v25 = (float *)(in + 10);
  if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 10);
  }
  td = *v25 * v24;
  if ( td < 0.0 )
    neg = neg + td;
  else
    pos = pos + td;
  if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)in & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in);
  }
  v26 = -*in;
  v27 = (float *)(in + 6);
  if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 6);
  }
  v28 = v26 * *v27;
  v29 = (float *)(in + 9);
  if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(in + 9);
  }
  te = *v29 * v28;
  if ( te < 0.0 )
    neg = neg + te;
  else
    pos = pos + te;
  if ( (float)((float)(pos + neg) * (float)(pos + neg)) >= 1.0e-25 )
  {
    det = 1.0 / (float)(pos + neg);
    v32 = (float *)(in + 5);
    if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 5);
    }
    v33 = *v32;
    v34 = (float *)(in + 10);
    if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 10);
    }
    *(float *)&v35 = *v34 * v33;
    v36 = (float *)(in + 6);
    if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
    {
      v35 = __asan_report_load4(in + 6);
    }
    v37 = *v36;
    v38 = (float *)(in + 9);
    if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
    {
      v35 = __asan_report_load4(in + 9);
    }
    v39 = (float)(*(float *)&v35 - (float)(*v38 * v37)) * det;
    if ( *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)out & 7) + 3) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out);
    }
    *out = v39;
    v40 = (float *)(in + 4);
    if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 4);
    }
    v41 = *v40;
    v42 = (float *)(in + 10);
    if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 10);
    }
    *(float *)&v43 = *v42 * v41;
    v44 = (float *)(in + 6);
    if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
    {
      v43 = __asan_report_load4(in + 6);
    }
    v45 = *v44;
    v46 = (float *)(in + 8);
    if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
    {
      v43 = __asan_report_load4(in + 8);
    }
    v47 = *(float *)&v43 - (float)(*v46 * v45);
    v48 = out + 4;
    v49 = (float)-v47 * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 4);
    }
    *v48 = v49;
    v50 = (float *)(in + 4);
    if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 4);
    }
    v51 = *v50;
    v52 = (float *)(in + 9);
    if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 9);
    }
    *(float *)&v53 = *v52 * v51;
    v54 = (float *)(in + 5);
    if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
    {
      v53 = __asan_report_load4(in + 5);
    }
    v55 = *v54;
    v56 = (float *)(in + 8);
    if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
    {
      v53 = __asan_report_load4(in + 8);
    }
    v57 = *v56 * v55;
    v58 = out + 8;
    v59 = (float)(*(float *)&v53 - v57) * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 8);
    }
    *v58 = v59;
    v60 = (float *)(in + 1);
    if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 1);
    }
    v61 = *v60;
    v62 = (float *)(in + 10);
    if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 10);
    }
    *(float *)&v63 = *v62 * v61;
    v64 = (float *)(in + 2);
    if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
    {
      v63 = __asan_report_load4(in + 2);
    }
    v65 = *v64;
    v66 = (float *)(in + 9);
    if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
    {
      v63 = __asan_report_load4(in + 9);
    }
    v67 = *(float *)&v63 - (float)(*v66 * v65);
    v68 = out + 1;
    v69 = (float)-v67 * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 1);
    }
    *v68 = v69;
    if ( *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)in & 7) + 3) >= *(_BYTE *)(((unsigned __int64)in >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in);
    }
    v70 = *in;
    v71 = (float *)(in + 10);
    if ( *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 10);
    }
    *(float *)&v72 = *v71 * v70;
    v73 = (float *)(in + 2);
    if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
    {
      v72 = __asan_report_load4(in + 2);
    }
    v74 = *v73;
    v75 = (float *)(in + 8);
    if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
    {
      v72 = __asan_report_load4(in + 8);
    }
    v76 = *v75 * v74;
    v77 = out + 5;
    v78 = (float)(*(float *)&v72 - v76) * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 5);
    }
    *v77 = v78;
    v79 = *in;
    v80 = (float *)(in + 9);
    if ( *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 9) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 9);
    }
    *(float *)&v81 = *v80 * v79;
    v82 = (float *)(in + 1);
    if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
    {
      v81 = __asan_report_load4(in + 1);
    }
    v83 = *v82;
    v84 = (float *)(in + 8);
    if ( *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 8) >> 3) + 0x7FFF8000) )
    {
      v81 = __asan_report_load4(in + 8);
    }
    v85 = *(float *)&v81 - (float)(*v84 * v83);
    v86 = out + 9;
    v87 = (float)-v85 * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 9) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 9);
    }
    *v86 = v87;
    v88 = (float *)(in + 1);
    if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 1);
    }
    v89 = *v88;
    v90 = (float *)(in + 6);
    if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 6);
    }
    *(float *)&v91 = *v90 * v89;
    v92 = (float *)(in + 2);
    if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
    {
      v91 = __asan_report_load4(in + 2);
    }
    v93 = *v92;
    v94 = (float *)(in + 5);
    if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
    {
      v91 = __asan_report_load4(in + 5);
    }
    v95 = *v94 * v93;
    v96 = out + 2;
    v97 = (float)(*(float *)&v91 - v95) * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 2);
    }
    *v96 = v97;
    v98 = *in;
    v99 = (float *)(in + 6);
    if ( *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 6) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 6);
    }
    *(float *)&v100 = *v99 * v98;
    v101 = (float *)(in + 2);
    if ( *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 2) >> 3) + 0x7FFF8000) )
    {
      v100 = __asan_report_load4(in + 2);
    }
    v102 = *v101;
    v103 = (float *)(in + 4);
    if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
    {
      v100 = __asan_report_load4(in + 4);
    }
    v104 = *(float *)&v100 - (float)(*v103 * v102);
    v105 = out + 6;
    v106 = (float)-v104 * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 6);
    }
    *v105 = v106;
    v107 = *in;
    v108 = (float *)(in + 5);
    if ( *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 5);
    }
    *(float *)&v109 = *v108 * v107;
    v110 = (float *)(in + 1);
    if ( *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 1) >> 3) + 0x7FFF8000) )
    {
      v109 = __asan_report_load4(in + 1);
    }
    v111 = *v110;
    v112 = (float *)(in + 4);
    if ( *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 4) >> 3) + 0x7FFF8000) )
    {
      v109 = __asan_report_load4(in + 4);
    }
    v113 = *v112 * v111;
    v114 = out + 10;
    v115 = (float)(*(float *)&v109 - v113) * det;
    if ( *(_BYTE *)(((unsigned __int64)(out + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 10);
    }
    *v114 = v115;
    v116 = (float *)(in + 12);
    if ( *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 12);
    }
    v117 = *v116 * *out;
    v118 = (float *)(in + 13);
    if ( *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 13);
    }
    v119 = *v118;
    v120 = out + 4;
    if ( *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 4);
    }
    v121 = v117 + (float)(*v120 * v119);
    v122 = (float *)(in + 14);
    if ( *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 14);
    }
    v123 = *v122;
    v124 = out + 8;
    if ( *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 8) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 8);
    }
    v125 = (float)(*v124 * v123) + v121;
    v126 = out + 12;
    v127 = -v125;
    if ( *(_BYTE *)(((unsigned __int64)(out + 12) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 12);
    }
    *v126 = v127;
    v128 = (float *)(in + 12);
    if ( *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 12);
    }
    v129 = *v128;
    v130 = out + 1;
    if ( *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 1);
    }
    v131 = v129 * *v130;
    v132 = (float *)(in + 13);
    if ( *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 13);
    }
    v133 = *v132;
    v134 = out + 5;
    if ( *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 5) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 5);
    }
    v135 = v131 + (float)(*v134 * v133);
    v136 = (float *)(in + 14);
    if ( *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 14);
    }
    v137 = *v136;
    v138 = out + 9;
    if ( *(_BYTE *)(((unsigned __int64)(out + 9) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 9) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 9);
    }
    v139 = (float)(*v138 * v137) + v135;
    v140 = out + 13;
    v141 = -v139;
    if ( *(_BYTE *)(((unsigned __int64)(out + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 13) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 13);
    }
    *v140 = v141;
    v142 = (float *)(in + 12);
    if ( *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 12);
    }
    v143 = *v142;
    v144 = out + 2;
    if ( *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 2) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 2);
    }
    v145 = v143 * *v144;
    v146 = (float *)(in + 13);
    if ( *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 13) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 13);
    }
    v147 = *v146;
    v148 = out + 6;
    if ( *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 6) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 6);
    }
    v149 = v145 + (float)(*v148 * v147);
    v150 = (float *)(in + 14);
    if ( *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)in + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(in + 14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(in + 14);
    }
    v151 = *v150;
    v152 = out + 10;
    if ( *(_BYTE *)(((unsigned __int64)(out + 10) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 10) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(out + 10);
    }
    v153 = (float)(*v152 * v151) + v149;
    v154 = out + 14;
    v155 = -v153;
    if ( *(_BYTE *)(((unsigned __int64)(out + 14) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 14) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 14);
    }
    *v154 = v155;
    v156 = out + 3;
    if ( *(_BYTE *)(((unsigned __int64)(out + 3) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 3);
    }
    *v156 = 0.0;
    v157 = out + 7;
    if ( *(_BYTE *)(((unsigned __int64)(out + 7) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 7);
    }
    *v157 = 0.0;
    v158 = out + 11;
    if ( *(_BYTE *)(((unsigned __int64)(out + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 11);
    }
    *v158 = 0.0;
    v159 = out + 15;
    if ( *(_BYTE *)(((unsigned __int64)(out + 15) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)out + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(out + 15) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(out + 15);
    }
    *v159 = 1.0;
    return 1;
  }
  else
  {
    for ( i = 0; i <= 15; ++i )
    {
      v30 = (unsigned __int64)&out[i];
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) != 0
        && (char)(((4 * i + (_BYTE)out) & 7) + 3) >= *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&out[i]);
      }
      *(_DWORD *)v30 = 0;
    }
    return 0;
  }
};

// Line 599: range 000000000CC11ABC-000000000CC11C2F
Matrix4x4f *__cdecl Matrix4x4f::Transpose(Matrix4x4f *const this)
{
  float *v1; // rbx
  float *v2; // rax
  float *v3; // rbx
  float *v4; // rax
  float *v5; // rbx
  float *v6; // rax
  float *v7; // rbx
  float *v8; // rax
  float *v9; // rbx
  float *v10; // rax
  float *v11; // rbx
  float *v12; // rax

  v1 = Matrix4x4f::Get(this, 1, 0);
  v2 = Matrix4x4f::Get(this, 0, 1);
  std::swap<float>(v2, v1);
  v3 = Matrix4x4f::Get(this, 2, 0);
  v4 = Matrix4x4f::Get(this, 0, 2);
  std::swap<float>(v4, v3);
  v5 = Matrix4x4f::Get(this, 3, 0);
  v6 = Matrix4x4f::Get(this, 0, 3);
  std::swap<float>(v6, v5);
  v7 = Matrix4x4f::Get(this, 2, 1);
  v8 = Matrix4x4f::Get(this, 1, 2);
  std::swap<float>(v8, v7);
  v9 = Matrix4x4f::Get(this, 3, 1);
  v10 = Matrix4x4f::Get(this, 1, 3);
  std::swap<float>(v10, v9);
  v11 = Matrix4x4f::Get(this, 3, 2);
  v12 = Matrix4x4f::Get(this, 2, 3);
  std::swap<float>(v12, v11);
  return this;
};

// Line 610: range 000000000CC11C30-000000000CC11D7C
Matrix4x4f *__cdecl Matrix4x4f::SetFromToRotation(Matrix4x4f *const this, const Vector3f *from, const Vector3f *to)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  Matrix4x4f *result; // rax
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 36 7 mat:611";
  *(_QWORD *)(v3 + 16) = Matrix4x4f::SetFromToRotation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -217841664;
  v5[536862723] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v3 + 48));
  Matrix3x3f::SetFromToRotation((Matrix3x3f *const)(v3 + 48), from, to);
  Matrix4x4f::operator=(this, (const Matrix3x3f *)(v3 + 48));
  result = this;
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

// Line 618: range 000000000CC11D7D-000000000CC11DF2
bool __cdecl CompareApproximately(const Matrix4x4f *lhs, const Matrix4x4f *rhs, float dist)
{
  float v3; // xmm0_4
  float f1; // [rsp+8h] [rbp-28h]
  int i; // [rsp+2Ch] [rbp-4h]

  for ( i = 0; i <= 15; ++i )
  {
    f1 = Matrix4x4f::operator[](rhs, i);
    v3 = Matrix4x4f::operator[](lhs, i);
    if ( !CompareApproximately(v3, f1, dist) )
      return 0;
  }
  return 1;
};

// Line 628: range 000000000CC11DF4-000000000CC11FD6
void __cdecl Matrix4x4f::SetTR(Matrix4x4f *const this, const Vector3f *pos, const Quaternionf *q)
{
  float *v3; // rax
  float *v4; // rdx
  float v5; // xmm0_4
  float *v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm0_4

  QuaternionToMatrix(q, this);
  v3 = (float *)Vector3f::operator[](pos, 0);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  v5 = *v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[12]);
  }
  this->m_Data[12] = v5;
  v6 = (float *)Vector3f::operator[](pos, 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[13]);
  }
  this->m_Data[13] = v8;
  v9 = (float *)Vector3f::operator[](pos, 2);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v11 = *v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[14]);
  }
  this->m_Data[14] = v11;
};

// Line 636: range 000000000CC11FD8-000000000CC12758
void __cdecl Matrix4x4f::SetTRS(Matrix4x4f *const this, const Vector3f *pos, const Quaternionf *q, const Vector3f *s)
{
  float *v4; // rax
  float *v5; // rdx
  float v6; // xmm1_4
  float *v7; // rax
  float *v8; // rdx
  float v9; // xmm1_4
  float *v10; // rax
  float *v11; // rdx
  float v12; // xmm1_4
  float *v13; // rax
  float *v14; // rdx
  float v15; // xmm1_4
  float *v16; // rax
  float *v17; // rdx
  float v18; // xmm1_4
  float *v19; // rax
  float *v20; // rdx
  float v21; // xmm1_4
  float *v22; // rax
  float *v23; // rdx
  float v24; // xmm1_4
  float *v25; // rax
  float *v26; // rdx
  float v27; // xmm1_4
  float *v28; // rax
  float *v29; // rdx
  float v30; // xmm1_4
  float *v31; // rax
  float *v32; // rdx
  float v33; // xmm0_4
  float *v34; // rax
  float *v35; // rdx
  float v36; // xmm0_4
  float *v37; // rax
  float *v38; // rdx
  float v39; // xmm0_4

  QuaternionToMatrix(q, this);
  v4 = (float *)Vector3f::operator[](s, 0);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  v6 = *v5;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  this->m_Data[0] = this->m_Data[0] * v6;
  v7 = (float *)Vector3f::operator[](s, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = *v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[1] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[1]);
  }
  this->m_Data[1] = this->m_Data[1] * v9;
  v10 = (float *)Vector3f::operator[](s, 0);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  v12 = *v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[2] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[2]);
  }
  this->m_Data[2] = this->m_Data[2] * v12;
  v13 = (float *)Vector3f::operator[](s, 1);
  v14 = v13;
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v13);
  }
  v15 = *v14;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[4]);
  }
  this->m_Data[4] = this->m_Data[4] * v15;
  v16 = (float *)Vector3f::operator[](s, 1);
  v17 = v16;
  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v16);
  }
  v18 = *v17;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[5] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[5]);
  }
  this->m_Data[5] = this->m_Data[5] * v18;
  v19 = (float *)Vector3f::operator[](s, 1);
  v20 = v19;
  if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v19);
  }
  v21 = *v20;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[6] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[6]);
  }
  this->m_Data[6] = this->m_Data[6] * v21;
  v22 = (float *)Vector3f::operator[](s, 2);
  v23 = v22;
  if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v22);
  }
  v24 = *v23;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[8] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[8]);
  }
  this->m_Data[8] = this->m_Data[8] * v24;
  v25 = (float *)Vector3f::operator[](s, 2);
  v26 = v25;
  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v25);
  }
  v27 = *v26;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[9] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[9]);
  }
  this->m_Data[9] = this->m_Data[9] * v27;
  v28 = (float *)Vector3f::operator[](s, 2);
  v29 = v28;
  if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v28);
  }
  v30 = *v29;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[10] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Data[10]);
  }
  this->m_Data[10] = this->m_Data[10] * v30;
  v31 = (float *)Vector3f::operator[](pos, 0);
  v32 = v31;
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v31);
  }
  v33 = *v32;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[12] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[12]);
  }
  this->m_Data[12] = v33;
  v34 = (float *)Vector3f::operator[](pos, 1);
  v35 = v34;
  if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v34);
  }
  v36 = *v35;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[13]);
  }
  this->m_Data[13] = v36;
  v37 = (float *)Vector3f::operator[](pos, 2);
  v38 = v37;
  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v37);
  }
  v39 = *v38;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Data[14] >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Data[14]);
  }
  this->m_Data[14] = v39;
};

// Line 657: range 000000000CC1275A-000000000CC128E2
void __cdecl Matrix4x4f::SetTRInverse(Matrix4x4f *const this, const Vector3f *pos, const Quaternionf *q)
{
  float *v3; // rax
  float *v4; // rdx
  float *v5; // rax
  float *v6; // rdx
  float *v7; // rax
  float *v8; // rdx
  float inY; // [rsp+0h] [rbp-40h]
  float inZ; // [rsp+4h] [rbp-3Ch]
  Vector3f inTrans; // [rsp+24h] [rbp-1Ch] BYREF
  Quaternionf v12; // [rsp+30h] [rbp-10h] BYREF

  v12 = Inverse(q);
  QuaternionToMatrix(&v12, this);
  v3 = (float *)Vector3f::operator[](pos, 2);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v3);
  }
  inZ = -*v4;
  v5 = (float *)Vector3f::operator[](pos, 1);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  inY = -*v6;
  v7 = (float *)Vector3f::operator[](pos, 0);
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  Vector3f::Vector3f(&inTrans, -*v8, inY, inZ);
  Matrix4x4f::Translate(this, &inTrans);
};

// Line 663: range 000000000CC128E3-000000000CC12B04
void __cdecl TransformPoints3x3(const Matrix4x4f *matrix, const Vector3f *in, Vector3f *out, int count)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const Vector3f *v7; // rsi
  Vector3f *v8; // r13
  int i; // [rsp+2Ch] [rbp-B4h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 36 5 m:664";
  *(_QWORD *)(v4 + 16) = TransformPoints3x3;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -217841664;
  v6[536862723] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v4 + 48), matrix);
  for ( i = 0; i < count; ++i )
  {
    v7 = &in[i];
    v8 = &out[i];
    if ( ((12 * i + (unsigned __int8)out) & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v8->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->z + 3) >> 3) + 0x7FFF8000) )
    {
      v7 = (const Vector3f *)12;
      __asan_report_store_n(v8, 12LL);
    }
    *v8 = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v4 + 48), v7);
  }
  if ( v13 == (char *)v4 )
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
};

// Line 670: range 000000000CC12B05-000000000CC12C04
void __cdecl TransformPoints3x4(const Matrix4x4f *matrix, const Vector3f *in, Vector3f *out, int count)
{
  const Vector3f *v4; // rsi
  Vector3f *v5; // rbx
  int i; // [rsp+2Ch] [rbp-14h]

  for ( i = 0; i < count; ++i )
  {
    v4 = &in[i];
    v5 = &out[i];
    if ( ((12 * i + (unsigned __int8)out) & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->z + 3) >> 3) + 0x7FFF8000) )
    {
      v4 = (const Vector3f *)12;
      __asan_report_store_n(v5, 12LL);
    }
    *v5 = Matrix4x4f::MultiplyPoint3(matrix, v4);
  }
};

// Line 676: range 000000000CC12C05-000000000CC12E3A
void __cdecl TransformPoints3x3(
        const Matrix4x4f *matrix,
        const Vector3f *in,
        size_t inStride,
        Vector3f *out,
        size_t outStride,
        int count)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  int i; // [rsp+3Ch] [rbp-A4h]
  char v15[160]; // [rsp+40h] [rbp-A0h] BYREF

  v6 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 48 36 5 m:677";
  *(_QWORD *)(v6 + 16) = TransformPoints3x3;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61937;
  v8[536862722] = -217841664;
  v8[536862723] = -202116109;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v6 + 48), matrix);
  for ( i = 0; i < count; ++i )
  {
    if ( ((unsigned __int8)out & 7) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&out->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)out + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&out->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(out, 12LL);
    }
    *out = Matrix3x3f::MultiplyPoint3((const Matrix3x3f *const)(v6 + 48), in);
    in = Stride<Vector3f const>(in, inStride);
    out = Stride<Vector3f>(out, outStride);
  }
  if ( v15 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 685: range 000000000CC12E3B-000000000CC12F39
void __cdecl TransformPoints3x4(
        const Matrix4x4f *matrix,
        const Vector3f *in,
        size_t inStride,
        Vector3f *out,
        size_t outStride,
        int count)
{
  int i; // [rsp+3Ch] [rbp-4h]

  for ( i = 0; i < count; ++i )
  {
    if ( ((unsigned __int8)out & 7) >= *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)out >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&out->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)out + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&out->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(out, 12LL);
    }
    *out = Matrix4x4f::MultiplyPoint3(matrix, in);
    in = Stride<Vector3f const>(in, inStride);
    out = Stride<Vector3f>(out, outStride);
  }
};
