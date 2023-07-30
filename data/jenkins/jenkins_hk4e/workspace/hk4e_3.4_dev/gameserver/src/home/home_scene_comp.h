// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_scene_comp.h

// Line 30: range 0000000014837DAA-0000000014837E17
void __cdecl HomeSceneComp::~HomeSceneComp(HomeSceneComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeSceneComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::~map(&this->home_module_data_map_);
  std::shared_ptr<HomeWorld>::~shared_ptr(&this->home_world_ptr_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 30: range 0000000014837E18-0000000014837E42
void __cdecl HomeSceneComp::~HomeSceneComp(HomeSceneComp *const this)
{
  HomeSceneComp::~HomeSceneComp(this);
  operator delete(this, 0x68uLL);
};

// Line 64: range 00000000131E8B44-00000000131E8B61
HomeWorld *__cdecl HomeSceneComp::getHomeWorld(const HomeSceneComp *const this)
{
  return std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_world_ptr_);
};

// Line 64: range 00000000131E8B62-00000000131E8BAF
void __cdecl HomeSceneComp::setCurModuleId(HomeSceneComp *const this, uint32_t module_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_module_id_);
  }
  this->cur_module_id_ = module_id;
};

// Line 67: range 0000000014621692-00000000146216D9
uint32_t __cdecl HomeSceneComp::getCurModuleId(const HomeSceneComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->cur_module_id_;
};

// Line 71: range 00000000146216DA-00000000146216EB
std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__cdecl HomeSceneComp::getModuleDataMap(
        HomeSceneComp *const this)
{
  return &this->home_module_data_map_;
};
