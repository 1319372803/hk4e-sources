// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/Align.h

// Line 7: range 000000000CDB4EB0-000000000CDB4F03
unsigned int __cdecl AlignToPowerOfTwo<unsigned int,int>(unsigned int value, int alignment)
{
  if ( !IsPowerOfTwo<int>(alignment) )
  {
    __asan_handle_no_return((unsigned int)alignment);
    __assert_fail(
      "IsPowerOfTwo(alignment)",
      "./src/pathfinding/Internal/Utilities/Align.h",
      9u,
      "T AlignToPowerOfTwo(T, V) [with T = unsigned int; V = int]");
  }
  return (alignment + value - 1) & -alignment;
};

// Line 28: range 000000000CD6E715-000000000CD6E730
uint32_t __cdecl Align4(uint32_t size)
{
  return AlignToPowerOfTwo<unsigned int,int>(size, 4);
};
