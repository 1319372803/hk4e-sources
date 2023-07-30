// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/BitUtility.h

// Line 208: range 000000000CDBD02E-000000000CDBD044
bool __cdecl IsPowerOfTwo<int>(int mask)
{
  return (mask & (mask - 1)) == 0;
};

// Line 215: range 000000000CD6E6D6-000000000CD6E714
uint32_t __cdecl NextPowerOfTwo(uint32_t v)
{
  uint32_t va; // [rsp+0h] [rbp-4h]
  unsigned int vb; // [rsp+0h] [rbp-4h]

  va = ((((v - 1) >> 16) | (v - 1)) >> 8) | ((v - 1) >> 16) | (v - 1);
  vb = (((va >> 4) | va) >> 2) | (va >> 4) | va;
  return ((vb >> 1) | vb) + 1;
};
