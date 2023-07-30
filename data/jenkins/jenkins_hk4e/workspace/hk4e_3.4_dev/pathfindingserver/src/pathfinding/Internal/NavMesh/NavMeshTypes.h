// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshTypes.h

// Line 83: range 000000000CCB827C-000000000CCB8291
bool __cdecl NavMeshStatusSucceed(NavMeshStatus status)
{
  return (status & 0x40000000) != 0;
};

// Line 89: range 000000000CCB8292-000000000CCB82A0
bool __cdecl NavMeshStatusFailed(NavMeshStatus status)
{
  return status >> 31;
};

// Line 95: range 000000000CCB82A1-000000000CCB82B6
bool __cdecl NavMeshStatusInProgress(NavMeshStatus status)
{
  return (status & 0x20000000) != 0;
};

// Line 101: range 000000000CCB82B7-000000000CCB82CD
bool __cdecl NavMeshStatusDetail(NavMeshStatus status, unsigned int detail)
{
  return (detail & status) != 0;
};

// Line 115: range 000000000CCB82CE-000000000CCB8305
unsigned int __cdecl NavMeshPolyRefHelper::EncodeGlobalRegionId(SurfaceIDType surfaceId, unsigned int regionId)
{
  unsigned int regionIda; // [rsp+0h] [rbp-8h]

  regionIda = regionId;
  if ( regionId > 0x7FFE )
    return regionId;
  if ( !regionId )
    regionIda = 0x7FFF;
  return (regionIda << 16) | surfaceId;
};

// Line 123: range 000000000CCB8306-000000000CCB834D
unsigned int __cdecl NavMeshPolyRefHelper::EncodeDynamicRegionId(
        NavMeshPolyRef tileRef,
        unsigned int ip_0,
        bool allocFlag)
{
  unsigned int v3; // eax
  unsigned int v4; // edx

  v3 = (NavMeshPolyRefHelper::DecodePolyIdTile(tileRef) << 16) & 0x3FFF0000 | (unsigned __int16)ip_0;
  if ( allocFlag )
    v4 = 0x80000000;
  else
    v4 = 0;
  return v4 | v3;
};

// Line 129: range 000000000CCB834E-000000000CCB8389
NavMeshPolyRef __cdecl NavMeshPolyRefHelper::EncodeLinkId(unsigned int salt, unsigned int ip_0, bool allocFlag)
{
  return NavMeshPolyRefHelper::EncodePolyId(salt, 0x7FFFFFFu, 1u, ip_0, allocFlag);
};

// Line 136: range 000000000CCB838A-000000000CCB83D0
NavMeshPolyRef __cdecl NavMeshPolyRefHelper::EncodePolyId(
        unsigned int salt,
        unsigned int it,
        unsigned int type,
        unsigned int ip_0,
        bool allocFlag)
{
  return ((unsigned __int64)type << 16) | ((unsigned __int64)it << 20) | ((unsigned __int64)allocFlag << 47) | ((unsigned __int64)salt << 48) | ip_0;
};

// Line 145: range 000000000CCB83D1-000000000CCB83EC
NavMeshPolyRef __cdecl NavMeshPolyRefHelper::EncodeBasePolyId(unsigned int type, unsigned int ip_0)
{
  return ((unsigned __int64)type << 16) | ip_0;
};

// Line 151: range 000000000CCB83ED-000000000CCB857E
void __cdecl NavMeshPolyRefHelper::DecodePolyId(
        unsigned int *salt,
        unsigned int *allocflag,
        unsigned int *it,
        unsigned int *type,
        unsigned int *ip_0,
        NavMeshPolyRef ref)
{
  unsigned int v6; // edi
  NavMeshPolyRef v7; // rcx
  NavMeshPolyRef v8; // rcx
  NavMeshPolyRef v9; // rcx
  unsigned int v10; // ecx

  v6 = HIWORD(ref);
  if ( *(_BYTE *)(((unsigned __int64)salt >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)salt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)salt >> 3) + 0x7FFF8000) )
  {
    v6 = (unsigned int)salt;
    __asan_report_store4(salt);
  }
  *salt = v6;
  v7 = (ref >> 47) & 1;
  if ( *(_BYTE *)(((unsigned __int64)allocflag >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)allocflag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)allocflag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(allocflag);
  }
  *allocflag = v7;
  v8 = (ref >> 20) & 0x7FFFFFF;
  if ( *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)it & 7) + 3) >= *(_BYTE *)(((unsigned __int64)it >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(it);
  }
  *it = v8;
  v9 = (ref >> 16) & 0xF;
  if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(type);
  }
  *type = v9;
  v10 = (unsigned __int16)ref;
  if ( *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ip_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ip_0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ip_0);
  }
  *ip_0 = v10;
};

// Line 161: range 000000000CCB857F-000000000CCB8590
unsigned int __cdecl NavMeshPolyRefHelper::DecodePolyIdSalt(NavMeshPolyRef ref)
{
  return HIWORD(ref);
};

// Line 166: range 000000000CCB8591-000000000CCB85A5
unsigned int __cdecl NavMeshPolyRefHelper::DecodeTileAllocFlag(NavMeshPolyRef ref)
{
  return (ref >> 47) & 1;
};

// Line 172: range 000000000CCB85A6-000000000CCB85BC
unsigned int __cdecl NavMeshPolyRefHelper::DecodePolyIdTile(NavMeshPolyRef ref)
{
  return (ref >> 20) & 0x7FFFFFF;
};

// Line 178: range 000000000CCB85BD-000000000CCB85D1
unsigned int __cdecl NavMeshPolyRefHelper::DecodePolyIdType(NavMeshPolyRef ref)
{
  return (ref >> 16) & 0xF;
};

// Line 184: range 000000000CCB85D2-000000000CCB85E2
unsigned int __cdecl NavMeshPolyRefHelper::DecodePolyIdPoly(NavMeshPolyRef ref)
{
  return (unsigned __int16)ref;
};

// Line 189: range 000000000CCB85E3-000000000CCB8609
bool __cdecl NavMeshPolyRefHelper::IsSameTile(NavMeshPolyRef a, NavMeshPolyRef b)
{
  return a >> 20 == b >> 20;
};

// Line 199: range 000000000CCB860A-000000000CCB86A3
void __cdecl TileLookUpData::TileLookUpData(TileLookUpData *const this, int tileindex, int dataTileIndex)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->tileNavMeshIndex = tileindex;
  if ( *(_BYTE *)(((unsigned __int64)&this->navMeshDataIndex >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->navMeshDataIndex >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->navMeshDataIndex);
  }
  this->navMeshDataIndex = dataTileIndex;
};

// Line 216: range 000000000CCB86A4-000000000CCB86B5
int __cdecl TileLUTHelper::OppositeTile(int side)
{
  return ((_BYTE)side + 4) & 7;
};

// Line 218: range 000000000CCB86B6-000000000CCB8833
void __cdecl TileLUTHelper::NeighbourLocation(int *x, int *y, int side)
{
  int nx; // [rsp+28h] [rbp-8h]
  int ny; // [rsp+2Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)x & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(x);
  }
  nx = *x;
  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(y);
  }
  ny = *y;
  switch ( side )
  {
    case 0:
      ++nx;
      break;
    case 1:
      ++nx;
      ++ny;
      break;
    case 2:
      ++ny;
      break;
    case 3:
      --nx;
      ++ny;
      break;
    case 4:
      --nx;
      break;
    case 5:
      --nx;
      --ny;
      break;
    case 6:
      --ny;
      break;
    case 7:
      ++nx;
      --ny;
      break;
    default:
      break;
  }
  if ( *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)x & 7) + 3) >= *(_BYTE *)(((unsigned __int64)x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(x);
  }
  *x = nx;
  if ( *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)y & 7) + 3) >= *(_BYTE *)(((unsigned __int64)y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(y);
  }
  *y = ny;
};
