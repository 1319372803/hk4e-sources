// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_fish_farming/home_fish_farming_comp.h

// Line 33: range 000000001483769E-00000000148376FB
void __cdecl HomeFishFarmingComp::~HomeFishFarmingComp(HomeFishFarmingComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeFishFarmingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::~unordered_map(&this->module_fish_farming_data_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 33: range 00000000148376FC-0000000014837726
void __cdecl HomeFishFarmingComp::~HomeFishFarmingComp(HomeFishFarmingComp *const this)
{
  HomeFishFarmingComp::~HomeFishFarmingComp(this);
  operator delete(this, 0x58uLL);
};

// Line 39: range 0000000014822672-00000000148226DA
void __cdecl ZN19HomeFishFarmingCompCI212HomeCompBaseER4Home(HomeFishFarmingComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeFishFarmingComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::unordered_map(&this->module_fish_farming_data_map_);
};
