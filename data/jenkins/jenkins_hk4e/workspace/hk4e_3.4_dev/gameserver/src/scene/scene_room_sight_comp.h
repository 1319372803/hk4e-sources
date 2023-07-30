// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_room_sight_comp.h

// Line 26: range 0000000015F452F0-0000000015F4535D
void __cdecl SceneRoomSightComp::~SceneRoomSightComp(SceneRoomSightComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneRoomSightComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::~unordered_map(&this->room_region_wtr_map_);
  std::unordered_map<unsigned int,std::set<std::weak_ptr<Entity>,std::owner_less<std::weak_ptr<Entity>>,std::allocator<std::weak_ptr<Entity>>>>::~unordered_map(&this->room_entity_wtr_map_);
  SceneSightComp::~SceneSightComp(this);
};

// Line 26: range 0000000015F4535E-0000000015F45388
void __cdecl SceneRoomSightComp::~SceneRoomSightComp(SceneRoomSightComp *const this)
{
  SceneRoomSightComp::~SceneRoomSightComp(this);
  operator delete(this, 0x98uLL);
};
