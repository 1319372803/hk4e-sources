// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_grid_comp.h

// Line 23: range 0000000015F4560E-0000000015F4566B
void __cdecl SceneGridComp::~SceneGridComp(SceneGridComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneGridComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::array<std::unique_ptr<GridMgr>,6ul>::~array(&this->grid_mgr_arr_);
  SceneSightComp::~SceneSightComp(this);
};

// Line 23: range 0000000015F4566C-0000000015F45696
void __cdecl SceneGridComp::~SceneGridComp(SceneGridComp *const this)
{
  SceneGridComp::~SceneGridComp(this);
  operator delete(this, 0x58uLL);
};

// Line 30: range 00000000136075EC-0000000013607654
void __cdecl ZN13SceneGridCompCI213SceneCompBaseER5Scene(SceneGridComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  ZN14SceneSightCompCI213SceneCompBaseER5Scene(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneGridComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::array<std::unique_ptr<GridMgr>,6ul>::array(&this->grid_mgr_arr_);
};
