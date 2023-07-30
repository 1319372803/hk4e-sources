// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/NavMeshCarveTypes.cpp

// Line 6: range 000000000CC7797F-000000000CC77D47
bool __cdecl CompareCarveShapes(const NavMeshCarveShape *lhs, const NavMeshCarveShape *rhs)
{
  float x; // xmm1_4
  float v4; // xmm1_4
  float z; // xmm1_4
  float v6; // xmm1_4
  float y; // xmm1_4
  float v8; // xmm1_4
  float v9; // [rsp+Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&lhs->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center);
  }
  x = lhs->center.x;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center);
  }
  if ( rhs->center.x > x )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center);
  }
  v4 = rhs->center.x;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->center >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center);
  }
  if ( lhs->center.x > v4 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center.z);
  }
  z = lhs->center.z;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center.z);
  }
  if ( rhs->center.z > z )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center.z);
  }
  v6 = rhs->center.z;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->center.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center.z);
  }
  if ( lhs->center.z > v6 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->center.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center.y);
  }
  y = lhs->center.y;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center.y);
  }
  if ( rhs->center.y > y )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->center.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->center.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->center.y);
  }
  v8 = rhs->center.y;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->center.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->center.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->center.y);
  }
  if ( lhs->center.y > v8 )
    return 0;
  v9 = SqrMagnitude(&lhs->extents);
  return v9 > SqrMagnitude(&rhs->extents);
};

// Line 29: range 000000000CC77D48-000000000CC77DB7
bool __cdecl AnyOverlaps(const dynamic_array<MinMaxAABB,true,4> *arrayOfBounds, const MinMaxAABB *bounds)
{
  const MinMaxAABB *v2; // rdx
  size_t i; // [rsp+10h] [rbp-10h]
  size_t count; // [rsp+18h] [rbp-8h]

  count = dynamic_array<MinMaxAABB,true,4ul>::size(arrayOfBounds);
  for ( i = 0LL; i < count; ++i )
  {
    v2 = dynamic_array<MinMaxAABB,true,4ul>::operator[](arrayOfBounds, i);
    if ( IntersectAABBAABB(v2, bounds) )
      return 1;
  }
  return 0;
};
