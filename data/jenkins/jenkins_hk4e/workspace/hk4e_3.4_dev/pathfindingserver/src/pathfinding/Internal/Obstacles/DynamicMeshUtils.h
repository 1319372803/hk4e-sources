// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicMeshUtils.h

// Line 19: range 000000000D04E28A-000000000D04E2CD
DetailHull *__cdecl DetailHull::operator=(DetailHull *const this, DetailHull *a2)
{
  dynamic_array<Plane,false,4ul>::operator=(&this->hull, &a2->hull);
  dynamic_array<int,false,4ul>::operator=(&this->polysIds, &a2->polysIds);
  return this;
};

// Line 19: range 000000000D04E340-000000000D04E383
DetailHull *__cdecl DetailHull::operator=(DetailHull *const this, const DetailHull *a2)
{
  dynamic_array<Plane,false,4ul>::operator=(&this->hull, &a2->hull);
  dynamic_array<int,false,4ul>::operator=(&this->polysIds, &a2->polysIds);
  return this;
};

// Line 19: range 000000000CF56530-000000000CF56593
void __cdecl DetailHull::DetailHull(DetailHull *const this, const DetailHull *a2)
{
  dynamic_array<Plane,false,4ul>::dynamic_array(&this->hull, &a2->hull);
  dynamic_array<int,false,4ul>::dynamic_array(&this->polysIds, &a2->polysIds);
};

// Line 19: range 000000000CD75B22-000000000CD75B4C
void __cdecl DetailHull::~DetailHull(DetailHull *const this)
{
  dynamic_array<int,false,4ul>::~dynamic_array(&this->polysIds);
  dynamic_array<Plane,false,4ul>::~dynamic_array(&this->hull);
};

// Line 21: range 000000000CD73EBE-000000000CD73EE8
void __cdecl DetailHull::DetailHull(DetailHull *const this)
{
  dynamic_array<Plane,false,4ul>::dynamic_array(&this->hull);
  dynamic_array<int,false,4ul>::dynamic_array(&this->polysIds);
};
