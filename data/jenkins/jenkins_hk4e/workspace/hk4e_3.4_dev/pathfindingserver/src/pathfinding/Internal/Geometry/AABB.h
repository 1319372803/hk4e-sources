// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Geometry/AABB.h

// Line 24: range 000000000CCB3ADE-000000000CCB3B08
void __cdecl AABB::AABB(AABB *const this)
{
  Vector3f::Vector3f(&this->m_Center);
  Vector3f::Vector3f(&this->m_Extent);
};

// Line 36: range 000000000CCB3B0A-000000000CCB3D15
void __cdecl AABB::AABB(AABB *const this, const Vector3f *center, const Vector3f *extent)
{
  Vector3f::Vector3f(&this->m_Center);
  Vector3f::Vector3f(&this->m_Extent);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Extent, 12LL);
  }
  if ( ((unsigned __int8)extent & 7) >= *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&extent->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)extent + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&extent->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(extent, 12LL);
  }
  this->m_Extent = *extent;
};

// Line 39: range 000000000CCB3D16-000000000CCB3D57
void __cdecl AABB::AABB(AABB *const this, const MinMaxAABB *aabb)
{
  Vector3f::Vector3f(&this->m_Center);
  Vector3f::Vector3f(&this->m_Extent);
  AABB::FromMinMaxAABB(this, aabb);
};

// Line 43: range 000000000CCB3D58-000000000CCB3F47
void __cdecl AABB::SetCenterAndExtent(AABB *const this, const Vector3f *center, const Vector3f *extent)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(center, 12LL);
  }
  this->m_Center = *center;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Extent, 12LL);
  }
  if ( ((unsigned __int8)extent & 7) >= *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)extent >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&extent->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)extent + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&extent->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(extent, 12LL);
  }
  this->m_Extent = *extent;
};

// Line 63: range 000000000CCB3F48-000000000CCB3F55
const Vector3f *__cdecl AABB::GetCenter(const AABB *const this)
{
  return &this->m_Center;
};

// Line 64: range 000000000CCB3F56-000000000CCB3F67
const Vector3f *__cdecl AABB::GetExtent(const AABB *const this)
{
  return &this->m_Extent;
};

// Line 117: range 000000000CCB8834-000000000CCB885E
void __cdecl MinMaxAABB::MinMaxAABB(MinMaxAABB *const this)
{
  Vector3f::Vector3f(&this->m_Min);
  Vector3f::Vector3f(&this->m_Max);
};

// Line 118: range 000000000CCB3F68-000000000CCB3FA3
void __cdecl MinMaxAABB::MinMaxAABB(MinMaxAABB *const this, bool need_init)
{
  Vector3f::Vector3f(&this->m_Min);
  Vector3f::Vector3f(&this->m_Max);
  MinMaxAABB::Init(this);
};

// Line 119: range 000000000CCB3FA4-000000000CCB4193
void __cdecl MinMaxAABB::MinMaxAABB(MinMaxAABB *const this, const Vector3f *min, const Vector3f *max)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)min & 7) >= *(_BYTE *)(((unsigned __int64)min >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)min >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&min->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)min + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&min->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(min, 12LL);
  }
  this->m_Min = *min;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Max, 12LL);
  }
  if ( ((unsigned __int8)max & 7) >= *(_BYTE *)(((unsigned __int64)max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&max->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)max + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&max->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(max, 12LL);
  }
  this->m_Max = *max;
};

// Line 120: range 000000000CCB4194-000000000CCB41D5
void __cdecl MinMaxAABB::MinMaxAABB(MinMaxAABB *const this, const AABB *aabb)
{
  Vector3f::Vector3f(&this->m_Min);
  Vector3f::Vector3f(&this->m_Max);
  MinMaxAABB::FromAABB(this, aabb);
};

// Line 124: range 000000000CCB41D6-000000000CCB4245
// local variable allocation has failed, the output may be wrong!
Vector3f __cdecl MinMaxAABB::CalculateCenter(const MinMaxAABB *const this)
{
  __int64 v1; // xmm0_8
  float v2; // xmm1_4
  Vector3f inV; // [rsp+38h] [rbp-18h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  inV = operator+(&this->m_Max, &this->m_Min);
  *(Vector3f *)&v1 = operator*(0.5, &inV);
  result.x = *(float *)&v1;
  result.y = *((float *)&v1 + 1);
  result.z = v2;
  return result;
};

// Line 178: range 000000000CCB4246-000000000CCB449C
void __cdecl AABB::FromMinMaxAABB(AABB *const this, const MinMaxAABB *inAABB)
{
  Vector3f inV; // [rsp+14h] [rbp-3Ch] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  if ( MinMaxAABB::IsValid(inAABB) )
  {
    if ( !MinMaxAABB::IsValid(inAABB) )
    {
      common::milog::MiLogStream::create(
        &v3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/pathfinding/Internal/Geometry/AABB.h",
        "FromMinMaxAABB",
        181);
      common::milog::MiLogStream::operator()(&v3, "Converting invalid MinMaxAABB");
      common::milog::MiLogStream::~MiLogStream(&v3);
      __asan_handle_no_return(&v3);
      __assert_fail(
        "false",
        "./src/pathfinding/Internal/Geometry/AABB.h",
        0xB5u,
        "void AABB::FromMinMaxAABB(const MinMaxAABB&)");
    }
    inV = operator+(&inAABB->m_Min, &inAABB->m_Max);
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Center.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 12LL);
    }
    this->m_Center = operator*(&inV, 0.5);
    inV = operator-(&inAABB->m_Max, &inAABB->m_Min);
    if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->m_Extent >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extent.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->m_Extent, 12LL);
    }
    this->m_Extent = operator*(&inV, 0.5);
  }
};

// Line 188: range 000000000CCB449E-000000000CCB45E1
void __cdecl MinMaxAABB::Encapsulate(MinMaxAABB *const this, const Vector3f *inPoint)
{
  Vector3f *p_m_Max; // rdi

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->m_Min = min(&this->m_Min, inPoint);
  p_m_Max = &this->m_Max;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    p_m_Max = &this->m_Max;
    __asan_report_store_n(&this->m_Max, 12LL);
  }
  this->m_Max = max(p_m_Max, inPoint);
};

// Line 202: range 000000000CCB45E2-000000000CCB4727
void __cdecl MinMaxAABB::Encapsulate(MinMaxAABB *const this, const MinMaxAABB *other)
{
  __int64 p_m_Max; // rsi
  Vector3f *v3; // rdi
  const MinMaxAABB *othera; // [rsp+0h] [rbp-20h]

  othera = other;
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    other = (const MinMaxAABB *)12;
    __asan_report_store_n(this, 12LL);
  }
  this->m_Min = min(&this->m_Min, &other->m_Min);
  p_m_Max = (__int64)&othera->m_Max;
  v3 = &this->m_Max;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    p_m_Max = 12LL;
    v3 = &this->m_Max;
    __asan_report_store_n(&this->m_Max, 12LL);
  }
  this->m_Max = max(v3, (const Vector3f *)p_m_Max);
};

// Line 225: range 000000000CCB4728-000000000CCB479C
bool __cdecl MinMaxAABB::IsValid(const MinMaxAABB *const this)
{
  bool result; // al
  Vector3f v; // [rsp+14h] [rbp-Ch] BYREF

  result = 0;
  if ( !Vector3f::operator==(&this->m_Min, &Vector3f::infinityVec) )
  {
    v = Vector3f::operator-(&Vector3f::infinityVec);
    if ( !Vector3f::operator==(&this->m_Max, &v) )
      return 1;
  }
  return result;
};

// Line 230: range 000000000CCB479E-000000000CCB4935
void __cdecl MinMaxAABB::Init(MinMaxAABB *const this)
{
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( (char)((unsigned __int64)&Vector3f::infinityVec & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3f::infinityVec >> 3)
                                                                        + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&Vector3f::infinityVec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&Vector3f::infinityVec.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)&Vector3f::infinityVec.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3f::infinityVec.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load_n(&Vector3f::infinityVec, 12LL);
  }
  this->m_Min = Vector3f::infinityVec;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Max, 12LL);
  }
  this->m_Max = Vector3f::operator-(&Vector3f::infinityVec);
};

// Line 236: range 000000000CCB4936-000000000CCB4A7B
void __cdecl MinMaxAABB::FromAABB(MinMaxAABB *const this, const AABB *inAABB)
{
  Vector3f *p_m_Extent; // rsi
  const Vector3f *p_m_Center; // rdi
  Vector3f *v4; // rsi
  const AABB *p_m_Max; // rdi

  p_m_Extent = &inAABB->m_Extent;
  p_m_Center = &inAABB->m_Center;
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Min.z + 3) >> 3) + 0x7FFF8000) )
  {
    p_m_Extent = (Vector3f *)12;
    p_m_Center = &this->m_Min;
    __asan_report_store_n(this, 12LL);
  }
  this->m_Min = operator-(p_m_Center, p_m_Extent);
  v4 = &inAABB->m_Extent;
  p_m_Max = inAABB;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Max >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Max.z + 3) >> 3) + 0x7FFF8000) )
  {
    v4 = (Vector3f *)12;
    p_m_Max = (const AABB *)&this->m_Max;
    __asan_report_store_n(&this->m_Max, 12LL);
  }
  this->m_Max = operator+(&p_m_Max->m_Center, v4);
};

// Line 244: range 000000000CF46922-000000000CF46970
void __cdecl AABB::Transfer<StreamedBinaryRead<false>>(AABB *const this, StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::Transfer<Vector3f>(transfer, &this->m_Center, "m_Center", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<Vector3f>(transfer, &this->m_Extent, "m_Extent", kNoTransferFlags);
};
