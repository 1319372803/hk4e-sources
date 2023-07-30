// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/math.h

// Line 51: range 000000000CC2F588-000000000CC2F6B1
void __cdecl ToTheMoonQuaternion::ToTheMoonQuaternion(ToTheMoonQuaternion *const this)
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

// Line 80: range 000000000CC2F6B2-000000000CC2F78B
void __cdecl PlaneLine::PlaneLine(PlaneLine *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->start = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end);
  }
  this->end = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->incremental >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->incremental);
  }
  this->incremental = 0;
};

// Line 91: range 000000000CC2F78C-000000000CC2F7C6
void __cdecl Range3D::Range3D(Range3D *const this)
{
  PlaneLine::PlaneLine(&this->x_range);
  PlaneLine::PlaneLine(&this->y_range);
  PlaneLine::PlaneLine(&this->z_range);
};

// Line 116: range 000000000CC2F7C7-000000000CC2F80F
ToTheMoonVector3 __cdecl Geometry::CommonAxis::GetUp()
{
  float z; // xmm1_4
  __int64 v1; // xmm0_8
  ToTheMoonVector3 v2; // [rsp+28h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  ToTheMoonVector3::ToTheMoonVector3(&v2, 0.0, 1.0, 0.0);
  z = v2.z;
  v1 = *(_QWORD *)&v2.x;
  result.x = *(float *)&v1;
  result.y = *((float *)&v1 + 1);
  result.z = z;
  return result;
};

// Line 117: range 000000000CC2F810-000000000CC2F858
ToTheMoonVector3 __cdecl Geometry::CommonAxis::GetLeft()
{
  float z; // xmm1_4
  __int64 v1; // xmm0_8
  ToTheMoonVector3 v2; // [rsp+28h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  ToTheMoonVector3::ToTheMoonVector3(&v2, 0.0, 0.0, 1.0);
  z = v2.z;
  v1 = *(_QWORD *)&v2.x;
  result.x = *(float *)&v1;
  result.y = *((float *)&v1 + 1);
  result.z = z;
  return result;
};

// Line 118: range 000000000CC2F859-000000000CC2F8A1
ToTheMoonVector3 __cdecl Geometry::CommonAxis::GetFront()
{
  float z; // xmm1_4
  __int64 v1; // xmm0_8
  ToTheMoonVector3 v2; // [rsp+28h] [rbp-18h] BYREF
  ToTheMoonVector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  ToTheMoonVector3::ToTheMoonVector3(&v2, 1.0, 0.0, 0.0);
  z = v2.z;
  v1 = *(_QWORD *)&v2.x;
  result.x = *(float *)&v1;
  result.y = *((float *)&v1 + 1);
  result.z = z;
  return result;
};
