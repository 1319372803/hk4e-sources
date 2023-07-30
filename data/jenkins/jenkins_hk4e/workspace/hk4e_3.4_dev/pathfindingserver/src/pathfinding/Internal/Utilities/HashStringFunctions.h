// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/HashStringFunctions.h

// Line 28: range 000000000CB5AEAE-000000000CB5AF6A
uint32_t __cdecl ComputeFNV1aHash(const char *key)
{
  unsigned __int64 v1; // rax
  int hash; // [rsp+10h] [rbp-10h]

  for ( hash = -2128831035; ; hash = 16777619 * (hash ^ *(unsigned __int8 *)v1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)key & 7) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(key);
    }
    if ( !*key )
      break;
    v1 = (unsigned __int64)key++;
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)(v1 & 7) >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
      v1 = __asan_report_load1(v1);
  }
  return hash;
};

// Line 41: range 000000000CB5AF6B-000000000CB5B002
uint32_t __cdecl ComputeFNV1aHash(const void *data, size_t dataSize)
{
  unsigned __int64 v2; // rax
  int hash; // [rsp+18h] [rbp-18h]
  const uint8_t *ptr; // [rsp+20h] [rbp-10h]

  hash = -2128831035;
  for ( ptr = (const uint8_t *)data; ptr < (const uint8_t *)((char *)data + dataSize); ++ptr )
  {
    v2 = (unsigned __int64)ptr;
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)(v2 & 7) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load1(v2);
    hash = 16777619 * (hash ^ *(unsigned __int8 *)v2);
  }
  return hash;
};

// Line 79: range 000000000CD58BF4-000000000CD58C0D
uint32_t __cdecl ComputeShortStringHash32(const char *str)
{
  return ComputeFNV1aHash(str);
};
