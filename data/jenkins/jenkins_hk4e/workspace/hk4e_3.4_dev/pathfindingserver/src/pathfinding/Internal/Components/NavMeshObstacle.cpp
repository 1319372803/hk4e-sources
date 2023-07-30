// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Components/NavMeshObstacle.cpp

// Line 19: range 000000000CB79C4C-000000000CB7A2EE
void __cdecl NavMeshObstacle::NavMeshObstacle(NavMeshObstacle *const this, const NavMeshObstacleData *data)
{
  NavMeshObstacleShape m_Shape; // ecx
  __int64 v3; // rdx
  bool m_Carve; // cl
  int id; // ecx
  uint64_t NowMs; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_ManagerHandle = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Shape);
  }
  this->m_Shape = kObstacleShapeBox;
  Vector3f::Vector3f(&this->m_Center);
  Vector3f::Vector3f(&this->m_Extents);
  if ( *(char *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_Carve);
  this->m_Carve = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_MoveState);
  }
  this->m_MoveState = kObstacleStationary;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Status);
  }
  this->m_Status = 8;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_VersionStamp);
  }
  this->m_VersionStamp = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionTimestamp >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_VersionTimestamp = 0LL;
  Vector3f::Vector3f(&this->m_Position);
  Quaternionf::Quaternionf(&this->m_Rotation);
  ThreadSafeCountMgr::Add(CountTypeObstacle, 1);
  Vector3f::SetZero(&this->m_Center);
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Extents, 12LL);
  }
  if ( (((unsigned __int8)data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Extend >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Extend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Extend.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Extend.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&data->m_Extend, 12LL);
  }
  this->m_Extents = data->m_Extend;
  if ( *(_BYTE *)(((unsigned __int64)&data->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&data->m_Shape);
  }
  m_Shape = data->m_Shape;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Shape);
  }
  this->m_Shape = m_Shape;
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  if ( (((unsigned __int8)data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&data->m_Position, 12LL);
  }
  this->m_Position = data->m_Position;
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Rotation, 16LL);
  }
  if ( (((unsigned __int8)data + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&data->m_Rotation, 16LL);
  }
  v3 = *(_QWORD *)&data->m_Rotation.z;
  *(_QWORD *)&this->m_Rotation.x = *(_QWORD *)&data->m_Rotation.x;
  *(_QWORD *)&this->m_Rotation.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&data->m_Carve >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Carve >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&data->m_Carve);
  }
  m_Carve = data->m_Carve;
  if ( *(char *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->m_Carve);
  this->m_Carve = m_Carve;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  id = data->id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->m_ManagerHandle = id;
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionTimestamp >> 3) + 0x7FFF8000) )
    NowMs = __asan_report_store8();
  this->m_VersionTimestamp = NowMs;
};

// Line 35: range 000000000CB7A2F0-000000000CB7A30D
void __cdecl NavMeshObstacle::~NavMeshObstacle(NavMeshObstacle *const this)
{
  ThreadSafeCountMgr::Add(CountTypeObstacle, -1);
};

// Line 41: range 000000000CB7A30E-000000000CB7A76A
void __cdecl NavMeshObstacle::ToNavMeshObstacleData(NavMeshObstacle *const this, NavMeshObstacleData *data)
{
  NavMeshObstacleShape m_Shape; // ecx
  __int64 v3; // rdx
  bool m_Carve; // cl
  int m_ManagerHandle; // ecx

  if ( (((unsigned __int8)data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Extend >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Extend >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Extend.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Extend.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&data->m_Extend, 12LL);
  }
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Extents, 12LL);
  }
  data->m_Extend = this->m_Extents;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Shape);
  }
  m_Shape = this->m_Shape;
  if ( *(_BYTE *)(((unsigned __int64)&data->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&data->m_Shape);
  }
  data->m_Shape = m_Shape;
  if ( (((unsigned __int8)data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&data->m_Position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Position, 12LL);
  }
  data->m_Position = this->m_Position;
  if ( (((unsigned __int8)data + 32) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&data->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&data->m_Rotation, 16LL);
  }
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Rotation.w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Rotation, 16LL);
  }
  v3 = *(_QWORD *)&this->m_Rotation.z;
  *(_QWORD *)&data->m_Rotation.x = *(_QWORD *)&this->m_Rotation.x;
  *(_QWORD *)&data->m_Rotation.z = v3;
  if ( *(char *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->m_Carve);
  m_Carve = this->m_Carve;
  if ( *(_BYTE *)(((unsigned __int64)&data->m_Carve >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&data->m_Carve >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&data->m_Carve);
  }
  data->m_Carve = m_Carve;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  m_ManagerHandle = this->m_ManagerHandle;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(data);
  }
  data->id = m_ManagerHandle;
};

// Line 52: range 000000000CB7A76C-000000000CB7A80F
Vector3f __cdecl NavMeshObstacle::GetWorldExtents(const NavMeshObstacle *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->m_Extents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Extents.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Extents, 12LL);
  }
  z = this->m_Extents.z;
  v2 = *(_QWORD *)&this->m_Extents.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 70: range 000000000CB7A810-000000000CB7AC2C
void __cdecl NavMeshObstacle::GetCarveShape(const NavMeshObstacle *const this, NavMeshCarveShape *shape)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int m_Shape; // edi
  __int64 v6; // rdx
  Vector3f min; // [rsp+18h] [rbp-A8h] BYREF
  Vector3f max; // [rsp+24h] [rbp-9Ch] BYREF
  MinMaxAABB v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 15 worldExtents:76";
  *(_QWORD *)(v2 + 16) = NavMeshObstacle::GetCarveShape;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Shape);
  }
  m_Shape = this->m_Shape;
  if ( *(_BYTE *)(((unsigned __int64)&shape->shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)shape + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shape->shape >> 3) + 0x7FFF8000) )
  {
    m_Shape = (_DWORD)shape + 4;
    __asan_report_store4(&shape->shape);
  }
  shape->shape = m_Shape;
  if ( (((unsigned __int8)shape + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&shape->extents >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&shape->extents.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)shape + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&shape->extents.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&shape->extents, 12LL);
  }
  shape->extents = NavMeshObstacle::GetWorldExtents(this);
  NavMeshObstacle::GetWorldCenterAndAxes(this, &shape->center, &shape->xAxis, &shape->yAxis, &shape->zAxis);
  Vector3f::Vector3f((Vector3f *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_Shape);
  }
  if ( this->m_Shape )
    CalcBoxWorldExtents((Vector3f *)(v2 + 32), &shape->extents, &shape->xAxis, &shape->yAxis, &shape->zAxis);
  else
    CalcCapsuleWorldExtents((Vector3f *)(v2 + 32), &shape->extents, &shape->xAxis, &shape->yAxis, &shape->zAxis);
  max = operator+(&shape->center, (const Vector3f *)(v2 + 32));
  min = operator-(&shape->center, (const Vector3f *)(v2 + 32));
  MinMaxAABB::MinMaxAABB(&v10, &min, &max);
  if ( (((unsigned __int8)shape + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&shape->bounds >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)shape + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&shape->bounds.m_Max.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&shape->bounds, 24LL);
  }
  v6 = *(_QWORD *)&v10.m_Min.z;
  *(_QWORD *)&shape->bounds.m_Min.x = *(_QWORD *)&v10.m_Min.x;
  *(_QWORD *)&shape->bounds.m_Min.z = v6;
  *(_QWORD *)&shape->bounds.m_Max.y = *(_QWORD *)&v10.m_Max.y;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 89: range 000000000CB7AC2E-000000000CB7AD0B
void __cdecl NavMeshObstacle::UpdateState(NavMeshObstacle *const this)
{
  uint64_t NowMs; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_Status);
  }
  if ( (this->m_Status & 8) != 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_VersionStamp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->m_VersionStamp);
    }
    ++this->m_VersionStamp;
    NowMs = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->m_VersionTimestamp >> 3) + 0x7FFF8000) )
      NowMs = __asan_report_store8();
    this->m_VersionTimestamp = NowMs;
    NavMeshObstacle::SnapshotTransform(this);
  }
};

// Line 157: range 000000000CB7AD0C-000000000CB7AD58
void __cdecl NavMeshObstacle::SnapshotTransform(NavMeshObstacle *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_Status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->m_Status);
  }
  this->m_Status = 0;
};

// Line 215: range 000000000CB7AD5A-000000000CB7B197
void __cdecl NavMeshObstacle::GetWorldCenterAndAxes(
        const NavMeshObstacle *const this,
        Vector3f *center,
        Vector3f *xAxis,
        Vector3f *yAxis,
        Vector3f *zAxis)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // rbx
  Vector3f *p_m_Center; // rsi
  Quaternionf *Rotation; // rax
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v17[192]; // [rsp+30h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 16 12 rotation:219 80 36 18 rotationMatrix:221";
  *(_QWORD *)(v5 + 16) = NavMeshObstacle::GetWorldCenterAndAxes;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = -217841664;
  v7[536862724] = -202116109;
  p_m_Center = &this->m_Center;
  if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
  {
    p_m_Center = (Vector3f *)12;
    __asan_report_store_n(center, 12LL);
  }
  *center = NavMeshObstacle::TransformPoint(this, p_m_Center);
  Rotation = (Quaternionf *)NavMeshObstacle::GetRotation(this);
  v10 = (__int64 *)Rotation;
  if ( ((unsigned __int8)Rotation & 7) >= *(_BYTE *)(((unsigned __int64)Rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&Rotation->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)Rotation + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&Rotation->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(Rotation, 16LL);
  }
  v11 = *v10;
  v12 = v10[1];
  *(_QWORD *)(v5 + 48) = v11;
  *(_QWORD *)(v5 + 56) = v12;
  Matrix3x3f::Matrix3x3f((Matrix3x3f *const)(v5 + 80));
  QuaternionToMatrix((const Quaternionf *)(v5 + 48), (Matrix3x3f *)(v5 + 80));
  if ( ((unsigned __int8)xAxis & 7) >= *(_BYTE *)(((unsigned __int64)xAxis >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)xAxis >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&xAxis->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)xAxis + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&xAxis->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(xAxis, 12LL);
  }
  *xAxis = Matrix3x3f::GetColumn((const Matrix3x3f *const)(v5 + 80), 0);
  if ( ((unsigned __int8)yAxis & 7) >= *(_BYTE *)(((unsigned __int64)yAxis >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)yAxis >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&yAxis->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)yAxis + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&yAxis->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(yAxis, 12LL);
  }
  *yAxis = Matrix3x3f::GetColumn((const Matrix3x3f *const)(v5 + 80), 1);
  if ( ((unsigned __int8)zAxis & 7) >= *(_BYTE *)(((unsigned __int64)zAxis >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)zAxis >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&zAxis->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)zAxis + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&zAxis->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(zAxis, 12LL);
  }
  *zAxis = Matrix3x3f::GetColumn((const Matrix3x3f *const)(v5 + 80), 2);
  if ( v17 == (char *)v5 )
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
};

// Line 230: range 000000000CB7B198-000000000CB7B238
Vector3f __cdecl NavMeshObstacle::TransformPoint(const NavMeshObstacle *const this, const Vector3f *center)
{
  float z; // xmm1_4
  __int64 v3; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Position, 12LL);
  }
  z = this->m_Position.z;
  v3 = *(_QWORD *)&this->m_Position.x;
  result.x = *(float *)&v3;
  result.y = *((float *)&v3 + 1);
  result.z = z;
  return result;
};
