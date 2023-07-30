// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/service/pathfinding_service.h

// Line 29: range 000000000CD7BE3C-000000000CD7BE66
void __cdecl PathfindingThreadLocal::PathfindingThreadLocal(PathfindingThreadLocal *const this)
{
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr);
  std::shared_ptr<NavMeshManager>::shared_ptr(&this->dynamic_navmesh_mgr);
};

// Line 29: range 000000000D094230-000000000D094270
void __cdecl PathfindingThreadLocal::PathfindingThreadLocal(
        PathfindingThreadLocal *const this,
        PathfindingThreadLocal *a2)
{
  std::shared_ptr<common::tools::TimerMgr>::shared_ptr(&this->timer_mgr_ptr, &a2->timer_mgr_ptr);
  std::shared_ptr<NavMeshManager>::shared_ptr(&this->dynamic_navmesh_mgr, &a2->dynamic_navmesh_mgr);
};

// Line 29: range 000000000CD7BF00-000000000CD7BF2A
void __cdecl PathfindingThreadLocal::~PathfindingThreadLocal(PathfindingThreadLocal *const this)
{
  std::shared_ptr<NavMeshManager>::~shared_ptr(&this->dynamic_navmesh_mgr);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&this->timer_mgr_ptr);
};

// Line 40: range 000000000CD56550-000000000CD5655E
uint32_t __cdecl PathfindingService::getServiceType(PathfindingService *const this)
{
  return 14;
};
