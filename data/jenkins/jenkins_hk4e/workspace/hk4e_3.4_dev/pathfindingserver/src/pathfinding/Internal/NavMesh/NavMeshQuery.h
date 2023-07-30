// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshQuery.h

// Line 31: range 000000000CD7BA04-000000000CD7BA22
void __cdecl NavMeshRaycastResult::NavMeshRaycastResult(NavMeshRaycastResult *const this)
{
  Vector3f::Vector3f(&this->normal);
};

// Line 280: range 000000000CD73C76-000000000CD73CA4
void __cdecl NavMeshQuery::NavMeshQueryData::NavMeshQueryData(NavMeshQuery::NavMeshQueryData *const this)
{
  Vector3f::Vector3f(&this->startPos);
  Vector3f::Vector3f(&this->endPos);
};
