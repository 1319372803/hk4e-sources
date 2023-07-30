// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Utils/HashStringFunctions.h

// Line 28: range 000000000CBAC231-000000000CBAC2ED
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
