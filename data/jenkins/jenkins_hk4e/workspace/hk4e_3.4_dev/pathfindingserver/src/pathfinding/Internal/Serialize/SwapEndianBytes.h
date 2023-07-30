// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Serialize/SwapEndianBytes.h

// Line 15: range 000000000CD6E2EF-000000000CD6E36F
void __cdecl SwapEndianBytes(uint32_t *i)
{
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)i & 7) + 3) >= *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(i);
  }
  *i = (*i << 24) | (*i << 8) & 0xFF0000 | (*i >> 8) & 0xFF00 | HIBYTE(*i);
};

// Line 17: range 000000000CD6E370-000000000CD6E389
void __cdecl SwapEndianBytes(int32_t *i)
{
  SwapEndianBytes((uint32_t *)i);
};
