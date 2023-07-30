// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/data_validator.cpp

// Line 6: range 000000000CC0129C-000000000CC013BC
bool __cdecl DataValidator::IsFinite(const ToTheMoonVector3 *v)
{
  if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v);
  }
  if ( std::abs(v->x) >= 10000000.0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->y);
  }
  if ( std::abs(v->y) >= 10000000.0 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v->z);
  }
  return std::abs(v->z) < 10000000.0;
};

// Line 11: range 000000000CC013BE-000000000CC014BD
bool __cdecl DataValidator::IsInvalidHalfExtent(const ToTheMoonVector3 *halfExtent)
{
  if ( *(_BYTE *)(((unsigned __int64)halfExtent >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)halfExtent & 7) + 3) >= *(_BYTE *)(((unsigned __int64)halfExtent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(halfExtent);
  }
  if ( halfExtent->x > 64.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&halfExtent->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)halfExtent + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&halfExtent->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&halfExtent->y);
  }
  if ( halfExtent->y > 64.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&halfExtent->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)halfExtent + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&halfExtent->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&halfExtent->z);
  }
  return halfExtent->z > 64.0;
};

// Line 16: range 000000000CC014BE-000000000CC0163A
bool __cdecl DataValidator::IsInvalidRotation(const ToTheMoonQuaternion *rotation)
{
  if ( *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rotation & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rotation);
  }
  if ( std::abs(rotation->x) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->y);
  }
  if ( std::abs(rotation->y) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->z);
  }
  if ( std::abs(rotation->z) > 1.0 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&rotation->w >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rotation + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rotation->w >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rotation->w);
  }
  return std::abs(rotation->w) > 1.0;
};
