// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/TransformType.h

// Line 15: range 000000000CCB2006-000000000CCB201C
bool __cdecl HasFlag(const TransformType flags, const TransformType flagToTest)
{
  return (flagToTest & flags) != 0;
};

// Line 17: range 000000000CCB201D-000000000CCB202C
bool __cdecl IsNoScaleTransform(TransformType type)
{
  return type == kNoScaleTransform;
};

// Line 19: range 000000000CCB202D-000000000CCB2048
bool __cdecl IsNonUniformScaleTransform(TransformType type)
{
  return HasFlag(type, kNonUniformScaleTransform);
};
