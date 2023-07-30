// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_area_comp.h

// Line 20: range 0000000015F466AA-0000000015F46729
void __cdecl SceneAreaComp::~SceneAreaComp(SceneAreaComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneAreaComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<City>>::~unordered_map(&this->city_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_area_set_);
  std::unordered_map<unsigned int,std::shared_ptr<Area>>::~unordered_map(&this->area_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 20: range 0000000015F4672A-0000000015F46754
void __cdecl SceneAreaComp::~SceneAreaComp(SceneAreaComp *const this)
{
  SceneAreaComp::~SceneAreaComp(this);
  operator delete(this, 0xC0uLL);
};

// Line 26: range 0000000015BED31E-0000000015BED3A8
void __cdecl ZN13SceneAreaCompCI213SceneCompBaseER5Scene(SceneAreaComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneAreaComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<Area>>::unordered_map(&this->area_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_area_set_);
  std::unordered_map<unsigned int,std::shared_ptr<City>>::unordered_map(&this->city_map_);
};

// Line 260: range 0000000015A1A954-0000000015A1A965
std::unordered_set<unsigned int> *__cdecl SceneAreaComp::getAllUnlockArea(SceneAreaComp *const this)
{
  return &this->unlocked_area_set_;
};
