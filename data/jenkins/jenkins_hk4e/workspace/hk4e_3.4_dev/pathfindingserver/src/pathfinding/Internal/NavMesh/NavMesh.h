// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMesh.h

// Line 109: range 000000000CD7BB0E-000000000CD7BB48
void __cdecl OffMeshConnectionParams::OffMeshConnectionParams(OffMeshConnectionParams *const this)
{
  Vector3f::Vector3f(&this->startPos);
  Vector3f::Vector3f(&this->endPos);
  Vector3f::Vector3f(&this->up);
};

// Line 124: range 000000000CCB8860-000000000CCB88AB
void __cdecl OffMeshLinkEndPoint::OffMeshLinkEndPoint(OffMeshLinkEndPoint *const this)
{
  __int64 v1; // rbx
  Vector3f *mapped; // r12

  Vector3f::Vector3f(&this->pos);
  v1 = 1LL;
  mapped = this->mapped;
  while ( v1 >= 0 )
  {
    Vector3f::Vector3f(mapped++);
    --v1;
  }
};

// Line 131: range 000000000CD794EA-000000000CD79525
void __cdecl DynamicOffMeshConnection::DynamicOffMeshConnection(DynamicOffMeshConnection *const this)
{
  __int64 i; // rbx

  for ( i = 1LL; i >= 0; --i )
  {
    OffMeshLinkEndPoint::OffMeshLinkEndPoint(this->endPoints);
    this = (DynamicOffMeshConnection *const)((char *)this + 48);
  }
};

// Line 139: range 000000000CCB88AC-000000000CCB8C2D
void __cdecl OffMeshConnection::OffMeshConnection(OffMeshConnection *const this)
{
  __int64 v1; // rbx
  OffMeshLinkEndPoint *endPoints; // r12

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->agentTypeID = 0;
  MinMaxAABB::MinMaxAABB(&this->bounds);
  v1 = 1LL;
  endPoints = this->endPoints;
  while ( v1 >= 0 )
  {
    OffMeshLinkEndPoint::OffMeshLinkEndPoint(endPoints++);
    --v1;
  }
  Vector3f::Vector3f(&this->axisX);
  Vector3f::Vector3f(&this->axisY);
  Vector3f::Vector3f(&this->axisZ);
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width);
  }
  this->width = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->costModifier >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->costModifier >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->costModifier);
  }
  this->costModifier = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->linkDirection >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->linkDirection >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->linkDirection);
  }
  this->linkDirection = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flags >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->flags >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->flags);
  }
  this->flags = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->area >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->area);
  }
  this->area = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->linkType >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 74) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->linkType >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->linkType);
  }
  this->linkType = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->userID >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->userID >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->userID);
  }
  this->userID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->firstLink >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->firstLink >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->firstLink);
  }
  this->firstLink = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->salt);
  }
  this->salt = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->next >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next);
  }
  this->next = 0;
};

// Line 140: range 000000000CCB8C2E-000000000CCB8C38
void __cdecl OffMeshConnection::~OffMeshConnection(OffMeshConnection *const this)
{
  ;
};

// Line 176: range 000000000CD74DE4-000000000CD75196
void __cdecl NavMeshTile::NavMeshTile(NavMeshTile *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(this);
  }
  this->surfaceID = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dataIndex);
  }
  this->dataIndex = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->salt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->salt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->salt);
  }
  this->salt = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->header >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->header = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->polyLinks >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->polyLinks = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->polys >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->polys = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->verts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->verts = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->detailMeshes >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->detailMeshes = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->detailVerts >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->detailVerts = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->detailTris >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->detailTris = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->bvTree >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->bvTree = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->data >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->data = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->dataSize >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dataSize >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dataSize);
  }
  this->dataSize = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->flags >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->flags >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->flags);
  }
  this->flags = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->next);
  }
  this->next = 0;
  Quaternionf::Quaternionf(&this->rotation);
  Vector3f::Vector3f(&this->position);
  if ( *(_BYTE *)(((unsigned __int64)&this->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->transformed);
  }
  this->transformed = 0;
};

// Line 181: range 000000000D049588-000000000D0498FB
void __cdecl NavMesh::SurfaceData::SurfaceData(NavMesh::SurfaceData *const this, const NavMesh::SurfaceData *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 56LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 56LL);
  }
  v2 = *(_QWORD *)&a2->m_Settings.agentHeight;
  *(_QWORD *)&this->m_Settings.agentTypeID = *(_QWORD *)&a2->m_Settings.agentTypeID;
  *(_QWORD *)&this->m_Settings.agentHeight = v2;
  v3 = *(_QWORD *)&a2->m_Settings.maxJumpAcrossDistance;
  *(_QWORD *)&this->m_Settings.agentClimb = *(_QWORD *)&a2->m_Settings.agentClimb;
  *(_QWORD *)&this->m_Settings.maxJumpAcrossDistance = v3;
  v4 = *(_QWORD *)&a2->m_Settings.manualTileSize;
  *(_QWORD *)&this->m_Settings.manualCellSize = *(_QWORD *)&a2->m_Settings.manualCellSize;
  *(_QWORD *)&this->m_Settings.manualTileSize = v4;
  *(_QWORD *)&this->m_Settings.accuratePlacement = *(_QWORD *)&a2->m_Settings.accuratePlacement;
  if ( *(char *)(((unsigned __int64)&this->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_WorldBounds, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_WorldBounds, 24LL);
  }
  v5 = *(_QWORD *)&a2->m_WorldBounds.m_Min.z;
  *(_QWORD *)&this->m_WorldBounds.m_Min.x = *(_QWORD *)&a2->m_WorldBounds.m_Min.x;
  *(_QWORD *)&this->m_WorldBounds.m_Min.z = v5;
  *(_QWORD *)&this->m_WorldBounds.m_Max.y = *(_QWORD *)&a2->m_WorldBounds.m_Max.y;
  if ( *(_WORD *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->m_Rotation, a2);
  if ( *(_WORD *)(((unsigned __int64)&a2->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->m_Rotation);
  v6 = *(_QWORD *)&a2->m_Rotation.z;
  *(_QWORD *)&this->m_Rotation.x = *(_QWORD *)&a2->m_Rotation.x;
  *(_QWORD *)&this->m_Rotation.z = v6;
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_Position, 12LL);
  }
  this->m_Position = a2->m_Position;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->localConnectRegionId2Global,
    &a2->localConnectRegionId2Global);
};

// Line 184: range 000000000CF4B144-000000000CF4B4B7
void __cdecl NavMesh::SurfaceData::SurfaceData(NavMesh::SurfaceData *const this, NavMesh::SurfaceData *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 56LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 56LL);
  }
  v2 = *(_QWORD *)&a2->m_Settings.agentHeight;
  *(_QWORD *)&this->m_Settings.agentTypeID = *(_QWORD *)&a2->m_Settings.agentTypeID;
  *(_QWORD *)&this->m_Settings.agentHeight = v2;
  v3 = *(_QWORD *)&a2->m_Settings.maxJumpAcrossDistance;
  *(_QWORD *)&this->m_Settings.agentClimb = *(_QWORD *)&a2->m_Settings.agentClimb;
  *(_QWORD *)&this->m_Settings.maxJumpAcrossDistance = v3;
  v4 = *(_QWORD *)&a2->m_Settings.manualTileSize;
  *(_QWORD *)&this->m_Settings.manualCellSize = *(_QWORD *)&a2->m_Settings.manualCellSize;
  *(_QWORD *)&this->m_Settings.manualTileSize = v4;
  *(_QWORD *)&this->m_Settings.accuratePlacement = *(_QWORD *)&a2->m_Settings.accuratePlacement;
  if ( *(char *)(((unsigned __int64)&this->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_WorldBounds, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_WorldBounds, 24LL);
  }
  v5 = *(_QWORD *)&a2->m_WorldBounds.m_Min.z;
  *(_QWORD *)&this->m_WorldBounds.m_Min.x = *(_QWORD *)&a2->m_WorldBounds.m_Min.x;
  *(_QWORD *)&this->m_WorldBounds.m_Min.z = v5;
  *(_QWORD *)&this->m_WorldBounds.m_Max.y = *(_QWORD *)&a2->m_WorldBounds.m_Max.y;
  if ( *(_WORD *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->m_Rotation, a2);
  if ( *(_WORD *)(((unsigned __int64)&a2->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->m_Rotation);
  v6 = *(_QWORD *)&a2->m_Rotation.z;
  *(_QWORD *)&this->m_Rotation.x = *(_QWORD *)&a2->m_Rotation.x;
  *(_QWORD *)&this->m_Rotation.z = v6;
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_Position, 12LL);
  }
  this->m_Position = a2->m_Position;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->localConnectRegionId2Global,
    &a2->localConnectRegionId2Global);
};

// Line 207: range 000000000CD738C0-000000000CD73932
void __cdecl NavMeshProcessCallback::NavMeshProcessCallback(NavMeshProcessCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshProcessCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshProcessCallback = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_memoryCallback = 0LL;
};

// Line 213: range 000000000CD73CA6-000000000CD73D18
void __cdecl NavMeshMatchFirstCallback::NavMeshMatchFirstCallback(NavMeshMatchFirstCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshMatchFirstCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshMatchFirstCallback = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_memoryCallback >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->m_memoryCallback = 0LL;
};

// Line 239: range 000000000CE41F9E-000000000CE41FB8
void __cdecl TileLocation::TileLocation(TileLocation *const this)
{
  MinMaxAABB::MinMaxAABB(&this->m_Bounds);
};

// Line 250: range 000000000D0110A8-000000000D01141E
NavMesh::SurfaceData *__cdecl NavMesh::SurfaceData::operator=(
        NavMesh::SurfaceData *const this,
        NavMesh::SurfaceData *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Settings.generateDetailMap + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 56LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Settings.generateDetailMap + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 56LL);
  }
  v2 = *(_QWORD *)&a2->m_Settings.agentHeight;
  *(_QWORD *)&this->m_Settings.agentTypeID = *(_QWORD *)&a2->m_Settings.agentTypeID;
  *(_QWORD *)&this->m_Settings.agentHeight = v2;
  v3 = *(_QWORD *)&a2->m_Settings.maxJumpAcrossDistance;
  *(_QWORD *)&this->m_Settings.agentClimb = *(_QWORD *)&a2->m_Settings.agentClimb;
  *(_QWORD *)&this->m_Settings.maxJumpAcrossDistance = v3;
  v4 = *(_QWORD *)&a2->m_Settings.manualTileSize;
  *(_QWORD *)&this->m_Settings.manualCellSize = *(_QWORD *)&a2->m_Settings.manualCellSize;
  *(_QWORD *)&this->m_Settings.manualTileSize = v4;
  *(_QWORD *)&this->m_Settings.accuratePlacement = *(_QWORD *)&a2->m_Settings.accuratePlacement;
  if ( *(char *)(((unsigned __int64)&this->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_WorldBounds.m_Max.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_WorldBounds, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_WorldBounds >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 79) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_WorldBounds.m_Max.z + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_WorldBounds, 24LL);
  }
  v5 = *(_QWORD *)&a2->m_WorldBounds.m_Min.z;
  *(_QWORD *)&this->m_WorldBounds.m_Min.x = *(_QWORD *)&a2->m_WorldBounds.m_Min.x;
  *(_QWORD *)&this->m_WorldBounds.m_Min.z = v5;
  *(_QWORD *)&this->m_WorldBounds.m_Max.y = *(_QWORD *)&a2->m_WorldBounds.m_Max.y;
  if ( *(_WORD *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->m_Rotation, a2);
  if ( *(_WORD *)(((unsigned __int64)&a2->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->m_Rotation);
  v6 = *(_QWORD *)&a2->m_Rotation.z;
  *(_QWORD *)&this->m_Rotation.x = *(_QWORD *)&a2->m_Rotation.x;
  *(_QWORD *)&this->m_Rotation.z = v6;
  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->m_Position, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 107) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->m_Position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->m_Position, 12LL);
  }
  this->m_Position = a2->m_Position;
  std::unordered_map<unsigned int,unsigned int>::operator=(
    &this->localConnectRegionId2Global,
    &a2->localConnectRegionId2Global);
  return this;
};

// Line 250: range 000000000CE4CCE0-000000000CE4CD3A
void __cdecl NavMesh::SurfaceData::SurfaceData(NavMesh::SurfaceData *const this)
{
  NavMeshBuildSettings::NavMeshBuildSettings(&this->m_Settings);
  MinMaxAABB::MinMaxAABB(&this->m_WorldBounds);
  Quaternionf::Quaternionf(&this->m_Rotation);
  Vector3f::Vector3f(&this->m_Position);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->localConnectRegionId2Global);
};

// Line 250: range 000000000CE4CD3C-000000000CE4CD5A
void __cdecl NavMesh::SurfaceData::~SurfaceData(NavMesh::SurfaceData *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->localConnectRegionId2Global);
};

// Line 334: range 000000000CCB8C3A-000000000CCB8C57
int __cdecl NavMesh::GetMaxTiles(const NavMesh *const this)
{
  return FreeList<NavMeshTile,false>::Capacity(&this->m_tiles);
};

// Line 344: range 000000000CCB8C58-000000000CCB8C7D
const NavMeshTile *__cdecl NavMesh::GetTile(const NavMesh *const this, int i)
{
  return FreeList<NavMeshTile,false>::operator[](&this->m_tiles, i);
};

// Line 398: range 000000000CCB8C7E-000000000CCB8DB3
const NavMeshLink *__cdecl NavMesh::GetNextLink(const NavMesh *const this, const NavMeshLink *link)
{
  unsigned int next; // ebx
  FreeList<NavMeshLink,false> *p_m_links; // rdi
  FreeList<NavMeshLink,false> *v5; // rcx

  if ( !link )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&link->next);
  }
  if ( link->next == -1 )
    return 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&link->next);
  }
  next = link->next;
  p_m_links = &this->m_links;
  if ( next >= FreeList<NavMeshLink,false>::Capacity(&this->m_links) )
  {
    __asan_handle_no_return(p_m_links);
    __assert_fail(
      "link->next < m_links.Capacity()",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x192u,
      "const NavMeshLink* NavMesh::GetNextLink(const NavMeshLink*) const");
  }
  v5 = &this->m_links;
  if ( *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&link->next >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&link->next);
  }
  return FreeList<NavMeshLink,false>::operator[](v5, link->next);
};

// Line 406: range 000000000CCB8DB4-000000000CCB8E24
const NavMeshLink *__cdecl NavMesh::GetLink(const NavMesh *const this, unsigned int i)
{
  FreeList<NavMeshLink,false> *p_m_links; // rdi

  if ( i == -1 )
    return 0LL;
  p_m_links = &this->m_links;
  if ( i >= FreeList<NavMeshLink,false>::Capacity(&this->m_links) )
  {
    __asan_handle_no_return(p_m_links);
    __assert_fail(
      "i < m_links.Capacity()",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x199u,
      "const NavMeshLink* NavMesh::GetLink(unsigned int) const");
  }
  return FreeList<NavMeshLink,false>::operator[](&this->m_links, i);
};

// Line 413: range 000000000CCB8E26-000000000CCB8EA4
void __cdecl NavMesh::BumpTimeStamp(NavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_timeStamp);
  }
  if ( !++this->m_timeStamp )
    this->m_timeStamp = 1;
};

// Line 420: range 000000000CCB8EA6-000000000CCB8EFA
unsigned int __cdecl NavMesh::GetTimeStamp(const NavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_timeStamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_timeStamp);
  }
  return this->m_timeStamp;
};

// Line 474: range 000000000CCB8EFC-000000000CCB8F0D
TileLUT *__cdecl NavMesh::GetTileLUT(NavMesh *const this)
{
  return &this->m_TileLUT;
};

// Line 534: range 000000000CCB8F0E-000000000CCB8F5A
unsigned int __cdecl NavMesh::GetMaxRegionId(const NavMesh *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_maxRegionId >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->m_maxRegionId >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->m_maxRegionId);
  }
  return this->m_maxRegionId;
};

// Line 640: range 000000000CB59AA2-000000000CB59C31
unsigned int __cdecl GetPolyIndex(const NavMeshTile *tile, const NavMeshPoly *poly)
{
  const NavMeshDataHeader **p_header; // rax
  const NavMeshDataHeader *header; // rdx
  int *p_polyCount; // rdi
  const NavMeshTile *tilea; // [rsp+8h] [rbp-18h]
  unsigned int ip_0; // [rsp+1Ch] [rbp-4h]

  tilea = tile;
  if ( !poly )
  {
    __asan_handle_no_return(tile);
    __assert_fail(
      "poly",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x281u,
      "unsigned int GetPolyIndex(const NavMeshTile*, const NavMeshPoly*)");
  }
  if ( !tile )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(
      "tile",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x282u,
      "unsigned int GetPolyIndex(const NavMeshTile*, const NavMeshPoly*)");
  }
  p_header = &tile->header;
  if ( *(_BYTE *)(((unsigned __int64)&tile->header >> 3) + 0x7FFF8000) )
  {
    tile = (const NavMeshTile *)((char *)tile + 16);
    __asan_report_load8(p_header, poly);
  }
  if ( !tilea->header )
  {
    __asan_handle_no_return(tile);
    __assert_fail(
      "tile->header",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x283u,
      "unsigned int GetPolyIndex(const NavMeshTile*, const NavMeshPoly*)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&tilea->polys >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tilea->polys, poly);
  ip_0 = poly - tilea->polys;
  if ( *(_BYTE *)(((unsigned __int64)&tilea->header >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tilea->header, poly);
  header = tilea->header;
  p_polyCount = (int *)((((_BYTE)header + 20) & 7u) + 3);
  if ( *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)header + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&header->polyCount >> 3) + 0x7FFF8000) )
  {
    p_polyCount = &header->polyCount;
    __asan_report_load4(&header->polyCount);
  }
  if ( ip_0 >= header->polyCount )
  {
    __asan_handle_no_return(p_polyCount);
    __assert_fail(
      "ip < tile->header->polyCount",
      "./src/pathfinding/Internal/NavMesh/NavMesh.h",
      0x285u,
      "unsigned int GetPolyIndex(const NavMeshTile*, const NavMeshPoly*)");
  }
  return ip_0;
};

// Line 650: range 000000000CCB8F5B-000000000CCB91A3
Vector3f __cdecl TileToWorld(const NavMeshTile *tile, const Vector3f *position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float z; // xmm1_4
  __int64 v6; // xmm0_8
  Vector3f v7; // [rsp+34h] [rbp-ACh]
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 7 mat:654";
  *(_QWORD *)(v2 + 16) = TileToWorld;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v2 + 32));
    Matrix4x4f::SetTR((Matrix4x4f *const)(v2 + 32), &tile->position, &tile->rotation);
    v7 = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v2 + 32), position);
  }
  else
  {
    if ( ((unsigned __int8)position & 7) >= *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(position, 12LL);
    }
    v7 = *position;
  }
  z = v7.z;
  if ( v8 == (char *)v2 )
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
  v6 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = z;
  return result;
};

// Line 664: range 000000000CCB91A4-000000000CCB93EC
Vector3f __cdecl TileToWorldVector(const NavMeshTile *tile, const Vector3f *direction)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float z; // xmm1_4
  __int64 v6; // xmm0_8
  Vector3f v7; // [rsp+34h] [rbp-ACh]
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 7 mat:668";
  *(_QWORD *)(v2 + 16) = TileToWorldVector;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v2 + 32));
    Matrix4x4f::SetTR((Matrix4x4f *const)(v2 + 32), &tile->position, &tile->rotation);
    v7 = Matrix4x4f::MultiplyVector3((const Matrix4x4f *const)(v2 + 32), direction);
  }
  else
  {
    if ( ((unsigned __int8)direction & 7) >= *(_BYTE *)(((unsigned __int64)direction >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)direction >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&direction->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)direction + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&direction->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(direction, 12LL);
    }
    v7 = *direction;
  }
  z = v7.z;
  if ( v8 == (char *)v2 )
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
  v6 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = z;
  return result;
};

// Line 678: range 000000000CCB93ED-000000000CCB97CD
void __cdecl TileToWorld(Vector3f *worldPositions, const NavMeshTile *tile, int npositions, const Vector3f *positions)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const Vector3f *v7; // rsi
  Vector3f *v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int i; // [rsp+28h] [rbp-B8h]
  int i_0; // [rsp+2Ch] [rbp-B4h]
  char v15[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 64 7 mat:682";
  *(_QWORD *)(v4 + 16) = TileToWorld;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 32));
    Matrix4x4f::SetTR((Matrix4x4f *const)(v4 + 32), &tile->position, &tile->rotation);
    for ( i = 0; i < npositions; ++i )
    {
      v7 = &positions[i];
      v8 = &worldPositions[i];
      if ( ((12 * i + (unsigned __int8)worldPositions) & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v8->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v8 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->z + 3) >> 3) + 0x7FFF8000) )
      {
        v7 = (const Vector3f *)12;
        __asan_report_store_n(v8, 12LL);
      }
      *v8 = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v4 + 32), v7);
    }
  }
  else
  {
    for ( i_0 = 0; i_0 < npositions; ++i_0 )
    {
      v9 = (unsigned __int64)&positions[i_0];
      v10 = (unsigned __int64)&worldPositions[i_0];
      if ( (((unsigned __int8)worldPositions + 12 * i_0) & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)worldPositions + 12 * i_0 + 11) & 7) >= *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&worldPositions[i_0], 12LL);
      }
      if ( (char)(v9 & 7) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) && *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v9 + 11) & 7) >= *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v9, 12LL);
      }
      *(_QWORD *)v10 = *(_QWORD *)v9;
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v9 + 8);
    }
  }
  if ( v15 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 698: range 000000000CCB97CE-000000000CCB9A16
Vector3f __cdecl WorldToTile(const NavMeshTile *tile, const Vector3f *position)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float z; // xmm1_4
  __int64 v6; // xmm0_8
  Vector3f v7; // [rsp+34h] [rbp-ACh]
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 7 mat:702";
  *(_QWORD *)(v2 + 16) = WorldToTile;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v2 + 32));
    Matrix4x4f::SetTRInverse((Matrix4x4f *const)(v2 + 32), &tile->position, &tile->rotation);
    v7 = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v2 + 32), position);
  }
  else
  {
    if ( ((unsigned __int8)position & 7) >= *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(position, 12LL);
    }
    v7 = *position;
  }
  z = v7.z;
  if ( v8 == (char *)v2 )
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
  v6 = *(_QWORD *)&v7.x;
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  result.z = z;
  return result;
};

// Line 712: range 000000000CCB9A17-000000000CCB9DF7
void __cdecl WorldToTile(Vector3f *positions, const NavMeshTile *tile, int npositions, const Vector3f *worldPositions)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  Vector3f *v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int i; // [rsp+28h] [rbp-B8h]
  int i_0; // [rsp+2Ch] [rbp-B4h]
  char v16[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 64 7 mat:716";
  *(_QWORD *)(v4 + 16) = WorldToTile;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450892) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tile - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tile->transformed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->transformed);
  }
  if ( tile->transformed )
  {
    Matrix4x4f::Matrix4x4f((Matrix4x4f *const)(v4 + 32));
    Matrix4x4f::SetTRInverse((Matrix4x4f *const)(v4 + 32), &tile->position, &tile->rotation);
    for ( i = 0; i < npositions; ++i )
    {
      v7 = (unsigned __int64)&positions[i];
      v8 = (Vector3f *)v7;
      v9 = v7;
      if ( ((12 * i + (unsigned __int8)positions) & 7) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v9 + 11) & 7) >= *(_BYTE *)(((v9 + 11) >> 3) + 0x7FFF8000) )
      {
        v7 = 12LL;
        __asan_report_store_n(v9, 12LL);
      }
      *v8 = Matrix4x4f::MultiplyPoint3((const Matrix4x4f *const)(v4 + 32), (const Vector3f *)v7);
    }
  }
  else
  {
    for ( i_0 = 0; i_0 < npositions; ++i_0 )
    {
      v10 = (unsigned __int64)&worldPositions[i_0];
      v11 = (unsigned __int64)&positions[i_0];
      if ( (((unsigned __int8)positions + 12 * i_0) & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)positions + 12 * i_0 + 11) & 7) >= *(_BYTE *)(((v11 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&positions[i_0], 12LL);
      }
      if ( (char)(v10 & 7) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) && *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((v10 + 11) & 7) >= *(_BYTE *)(((v10 + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v10, 12LL);
      }
      *(_QWORD *)v11 = *(_QWORD *)v10;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v10 + 8);
    }
  }
  if ( v16 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 734: range 000000000CCB9DF8-000000000CCBA081
void __cdecl LocalBoundsToGrid(
        const MinMaxAABB *bounds,
        int tileSize,
        float cellSize,
        int *xmin,
        int *xmax,
        int *ymin,
        int *ymax)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  float tileWorldSize; // [rsp+3Ch] [rbp-14h]
  Vector3f *bmax; // [rsp+48h] [rbp-8h]

  bmax = &bounds->m_Max;
  tileWorldSize = (float)tileSize * cellSize;
  if ( *(_BYTE *)(((unsigned __int64)bounds >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bounds & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bounds >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bounds);
  }
  v7 = (int)Floorf(bounds->m_Min.x / tileWorldSize);
  if ( *(_BYTE *)(((unsigned __int64)xmin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)xmin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)xmin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(xmin);
  }
  *xmin = v7;
  if ( *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(bmax);
  }
  v8 = (int)Ceilf(bmax->x / tileWorldSize) - 1;
  if ( *(_BYTE *)(((unsigned __int64)xmax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)xmax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)xmax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(xmax);
  }
  *xmax = v8;
  if ( *(_BYTE *)(((unsigned __int64)&bounds->m_Min.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bounds + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bounds->m_Min.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&bounds->m_Min.z);
  }
  v9 = (int)Floorf(bounds->m_Min.z / tileWorldSize);
  if ( *(_BYTE *)(((unsigned __int64)ymin >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ymin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ymin >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ymin);
  }
  *ymin = v9;
  if ( *(_BYTE *)(((unsigned __int64)&bounds->m_Max.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)bounds + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bounds->m_Max.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&bounds->m_Max.z);
  }
  v10 = (int)Ceilf(bounds->m_Max.z / tileWorldSize) - 1;
  if ( *(_BYTE *)(((unsigned __int64)ymax >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ymax & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ymax >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ymax);
  }
  *ymax = v10;
};

// Line 758: range 000000000CD72732-000000000CD72773
void __cdecl NavMeshTileMemoryCallback::NavMeshTileMemoryCallback(NavMeshTileMemoryCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshTileMemoryCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v1;
};

// Line 760: range 000000000CD727B6-000000000CD727E0
void __cdecl NavMeshTileMemoryCallback::~NavMeshTileMemoryCallback(NavMeshTileMemoryCallback *const this)
{
  NavMeshTileMemoryCallback::~NavMeshTileMemoryCallback(this);
  operator delete(this, 8uLL);
};

// Line 760: range 000000000CD72774-000000000CD727B5
void __cdecl NavMeshTileMemoryCallback::~NavMeshTileMemoryCallback(NavMeshTileMemoryCallback *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NavMeshTileMemoryCallback + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NavMeshTileMemoryCallback = v1;
};

// Line 784: range 000000000CCBA082-000000000CCBA10A
unsigned int __cdecl NavMeshTileMemoryCallback::GetTileLink(
        const NavMeshTileMemoryCallback *const this,
        const NavMeshTile *tile,
        int ip_0)
{
  unsigned int *v3; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&tile->polyLinks >> 3) + 0x7FFF8000) )
    __asan_report_load8(&tile->polyLinks, tile);
  v3 = &tile->polyLinks[ip_0];
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(tile->polyLinks) + 4 * ip_0) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tile->polyLinks[ip_0]);
  }
  return *v3;
};

// Line 785: range 000000000CCBA10C-000000000CCBA11D
void __cdecl NavMeshTileMemoryCallback::RemoveTileLink(
        NavMeshTileMemoryCallback *const this,
        const NavMeshTile *tile,
        int ip_0)
{
  ;
};

// Line 786: range 000000000CCBA11E-000000000CCBA12C
void __cdecl NavMeshTileMemoryCallback::RemoveTileLinks(NavMeshTileMemoryCallback *const this, const NavMeshTile *tile)
{
  ;
};

// Line 787: range 000000000CCBA12E-000000000CCBA140
void __cdecl NavMeshTileMemoryCallback::ForeachTileLinks(
        NavMeshTileMemoryCallback *const this,
        const NavMeshTile *tile,
        const NavMeshTileMemoryCallback::ForeachTileLinkCallbackHandle *callback)
{
  ;
};

// Line 789: range 000000000CCBA142-000000000CCBA150
bool __cdecl NavMeshTileMemoryCallback::NeedCheckSourceTile(const NavMeshTileMemoryCallback *const this)
{
  return 0;
};

// Line 790: range 000000000CCBA152-000000000CCBA160
void __cdecl NavMeshTileMemoryCallback::QueryTileExtInfo(
        NavMeshTileMemoryCallback *const this,
        const NavMeshTile *tile)
{
  ;
};

// Line 791: range 000000000CCBA162-000000000CCBA16C
void __cdecl NavMeshTileMemoryCallback::ResetTileExtInfo(NavMeshTileMemoryCallback *const this)
{
  ;
};

// Line 793: range 000000000CCBA16E-000000000CCBA17C
DynamicUniqueTokenType __cdecl NavMeshTileMemoryCallback::GetUniqueTokon(NavMeshTileMemoryCallback *const this)
{
  return 0;
};

// Line 799: range 000000000CCBA17E-000000000CCBA22F
void __cdecl NavMeshTileMemoryQueryTileExtSample::NavMeshTileMemoryQueryTileExtSample(
        NavMeshTileMemoryQueryTileExtSample *const this,
        NavMeshTileMemoryCallback *c,
        const NavMeshTile *tile)
{
  NavMeshTileMemoryCallback *callback; // rdx
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->callback = c;
  if ( c )
  {
    callback = this->callback;
    p_vptr_NavMeshTileMemoryCallback = &this->callback->_vptr_NavMeshTileMemoryCallback;
    v5 = *(unsigned __int8 *)(((unsigned __int64)this->callback >> 3) + 0x7FFF8000);
    if ( (_BYTE)v5 )
      p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(this->callback, v5);
    v6 = *p_vptr_NavMeshTileMemoryCallback + 208LL;
    v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      v6 = __asan_report_load8(v6, v7);
    (*(void (__fastcall **)(NavMeshTileMemoryCallback *, const NavMeshTile *))v6)(callback, tile);
  }
};

// Line 807: range 000000000CCBA230-000000000CCBA2CC
void __cdecl NavMeshTileMemoryQueryTileExtSample::~NavMeshTileMemoryQueryTileExtSample(
        NavMeshTileMemoryQueryTileExtSample *const this)
{
  __int64 v1; // rsi
  NavMeshTileMemoryCallback *callback; // rdx
  _QWORD *p_vptr_NavMeshTileMemoryCallback; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this, v1);
  if ( this->callback )
  {
    callback = this->callback;
    p_vptr_NavMeshTileMemoryCallback = &this->callback->_vptr_NavMeshTileMemoryCallback;
    v4 = *(unsigned __int8 *)(((unsigned __int64)this->callback >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      p_vptr_NavMeshTileMemoryCallback = (_QWORD *)__asan_report_load8(this->callback, v4);
    v5 = *p_vptr_NavMeshTileMemoryCallback + 216LL;
    v6 = *(unsigned __int8 *)((v5 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 )
      v5 = __asan_report_load8(v5, v6);
    (*(void (__fastcall **)(NavMeshTileMemoryCallback *))v5)(callback);
  }
};
