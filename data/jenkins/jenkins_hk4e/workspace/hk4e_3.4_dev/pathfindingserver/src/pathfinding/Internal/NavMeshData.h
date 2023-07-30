// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMeshData.h

// Line 13: range 000000000D0B1E78-000000000D0B1EA2
void __cdecl AutoOffMeshLinkData::AutoOffMeshLinkData(AutoOffMeshLinkData *const this)
{
  Vector3f::Vector3f(&this->m_Start);
  Vector3f::Vector3f(&this->m_End);
};

// Line 15: range 000000000CCB8003-000000000CCB800D
bool __cdecl AutoOffMeshLinkData::AllowTransferOptimization()
{
  return 0;
};

// Line 25: range 000000000D047CA8-000000000D047D76
void __cdecl AutoOffMeshLinkData::Transfer<StreamedBinaryRead<false>>(
        AutoOffMeshLinkData *const this,
        StreamedBinaryRead<false> *transfer)
{
  StreamedBinaryRead<false>::Transfer<Vector3f>(transfer, &this->m_Start, "m_Start", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<Vector3f>(transfer, &this->m_End, "m_End", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<float>(transfer, &this->m_Radius, "m_Radius", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned short>(transfer, &this->m_LinkType, "m_LinkType", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(transfer, &this->m_Area, "m_Area", kNoTransferFlags);
  StreamedBinaryRead<false>::Transfer<unsigned char>(
    transfer,
    &this->m_LinkDirection,
    "m_LinkDirection",
    kNoTransferFlags);
};

// Line 37: range 000000000CF5EC32-000000000CF5EC75
NavMeshTileData *__cdecl NavMeshTileData::operator=(NavMeshTileData *const this, const NavMeshTileData *a2)
{
  dynamic_array<unsigned char,false,1ul>::operator=(&this->m_MeshData, &a2->m_MeshData);
  Hash128::operator=(&this->m_Hash, &a2->m_Hash);
  return this;
};

// Line 37: range 000000000CFA2E86-000000000CFA2EB0
void __cdecl NavMeshTileData::NavMeshTileData(NavMeshTileData *const this)
{
  dynamic_array<unsigned char,false,1ul>::dynamic_array(&this->m_MeshData);
  Hash128::Hash128(&this->m_Hash);
};

// Line 37: range 000000000CF5ED46-000000000CF5EDCF
void __cdecl NavMeshTileData::NavMeshTileData(NavMeshTileData *const this, const NavMeshTileData *a2)
{
  uint64_t v2; // rdx

  dynamic_array<unsigned char,false,1ul>::dynamic_array(&this->m_MeshData, &a2->m_MeshData);
  if ( *(_WORD *)(((unsigned __int64)&this->m_Hash >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->m_Hash, a2);
  if ( *(_WORD *)(((unsigned __int64)&a2->m_Hash >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->m_Hash);
  v2 = a2->m_Hash.hashData.u64[1];
  this->m_Hash.hashData.u64[0] = a2->m_Hash.hashData.u64[0];
  this->m_Hash.hashData.u64[1] = v2;
};

// Line 37: range 000000000CF5EBF6-000000000CF5EC10
void __cdecl NavMeshTileData::~NavMeshTileData(NavMeshTileData *const this)
{
  dynamic_array<unsigned char,false,1ul>::~dynamic_array(&this->m_MeshData);
};

// Line 39: range 000000000CCB800E-000000000CCB8018
bool __cdecl NavMeshTileData::AllowTransferOptimization()
{
  return 0;
};

// Line 44: range 000000000CD5BA76-000000000CD5BBC1
void __cdecl NavMeshObstacleData::NavMeshObstacleData(NavMeshObstacleData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_Shape >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_Shape);
  }
  this->m_Shape = kObstacleShapeBox;
  Vector3f::Vector3f(&this->m_Position);
  Vector3f::Vector3f(&this->m_Extend);
  Quaternionf::Quaternionf(&this->m_Rotation);
  if ( *(_BYTE *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&this->m_Carve >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->m_Carve);
  }
  this->m_Carve = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_MoveState >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->m_MoveState);
  }
  this->m_MoveState = kObstacleStationary;
};

// Line 56: range 000000000CD5A166-000000000CD5A34C
void __cdecl BlockInfo::BlockInfo(BlockInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->data_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->block_id);
  }
  this->block_id = -32640;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->polygon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->polygon_id);
  }
  this->polygon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_tag_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_tag_hash);
  }
  this->scene_tag_hash = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tile_pos_x >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tile_pos_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->tile_pos_x);
  }
  this->tile_pos_x = 0x80;
  if ( *(_BYTE *)(((unsigned __int64)&this->tile_pos_y >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tile_pos_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->tile_pos_y);
  }
  this->tile_pos_y = 0x80;
};

// Line 101: range 000000000CCB801A-000000000CCB802B
const NavMeshBuildSettings *__cdecl NavMeshData::GetNavMeshBuildSettings(const NavMeshData *const this)
{
  return &this->m_NavMeshBuildSettings;
};

// Line 110: range 000000000CCB802C-000000000CCB8080
int __cdecl NavMeshData::GetAgentTypeID(const NavMeshData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_AgentTypeID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_AgentTypeID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_AgentTypeID);
  }
  return this->m_AgentTypeID;
};

// Line 114: range 000000000CCB8082-000000000CCB8095
const AABB *__cdecl NavMeshData::GetSourceBounds(const NavMeshData *const this)
{
  return &this->m_SourceBounds;
};

// Line 117: range 000000000CCB8096-000000000CCB813A
Vector3f __cdecl NavMeshData::GetPosition(const NavMeshData *const this)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( *(char *)(((unsigned __int64)&this->m_Position >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 72 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->m_Position.z + 3) >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->m_Position, 12LL);
  }
  z = this->m_Position.z;
  v2 = *(_QWORD *)&this->m_Position.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 119: range 000000000CCB813C-000000000CCB819D
Quaternionf __cdecl NavMeshData::GetRotation(const NavMeshData *const this)
{
  __int64 v1; // xmm0_8
  __int64 v2; // xmm1_8
  const NavMeshData *thisa; // [rsp+8h] [rbp-18h]
  Quaternionf result; // 0:xmm0_8.8,8:xmm1_8.8

  thisa = this;
  if ( *(_WORD *)(((unsigned __int64)&this->m_Rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&this->m_Rotation);
  v1 = *(_QWORD *)&thisa->m_Rotation.x;
  v2 = *(_QWORD *)&thisa->m_Rotation.z;
  result.z = *(float *)&v2;
  result.w = *((float *)&v2 + 1);
  result.x = *(float *)&v1;
  result.y = *((float *)&v1 + 1);
  return result;
};

// Line 122: range 000000000CCB819E-000000000CCB81ED
uint32_t __cdecl NavMeshData::GetNavMeshDataID(const NavMeshData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_NavMeshDataID >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->m_NavMeshDataID >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->m_NavMeshDataID);
  }
  return this->m_NavMeshDataID;
};

// Line 123: range 000000000CCB81EE-000000000CCB8243
SurfaceIDType __cdecl NavMeshData::GetSurfaceID(const NavMeshData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->m_BlockInfo.block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->m_BlockInfo.block_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load2(&this->m_BlockInfo.block_id);
  }
  return this->m_BlockInfo.block_id;
};

// Line 124: range 000000000CCB8244-000000000CCB8257
const BlockInfo *__cdecl NavMeshData::GetBlockInfo(const NavMeshData *const this)
{
  return &this->m_BlockInfo;
};

// Line 151: range 000000000CCB8258-000000000CCB8269
const NavMeshTileDataVector *__cdecl NavMeshData::GetNavMeshTiles(const NavMeshData *const this)
{
  return &this->m_NavMeshTiles;
};

// Line 166: range 000000000CCB826A-000000000CCB827B
const OffMeshLinkDataVector *__cdecl NavMeshData::GetOffMeshLinks(const NavMeshData *const this)
{
  return &this->m_OffMeshLinks;
};
