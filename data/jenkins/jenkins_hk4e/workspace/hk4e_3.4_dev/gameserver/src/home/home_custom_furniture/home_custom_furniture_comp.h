// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_custom_furniture/home_custom_furniture_comp.h

// Line 25: range 0000000014837728-0000000014837785
void __cdecl HomeCustomFurnitureComp::~HomeCustomFurnitureComp(HomeCustomFurnitureComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeCustomFurnitureComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::~unordered_map(&this->module_custom_furniture_data_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 25: range 0000000014837786-00000000148377B0
void __cdecl HomeCustomFurnitureComp::~HomeCustomFurnitureComp(HomeCustomFurnitureComp *const this)
{
  HomeCustomFurnitureComp::~HomeCustomFurnitureComp(this);
  operator delete(this, 0x58uLL);
};

// Line 31: range 0000000014822AA0-0000000014822B08
void __cdecl ZN23HomeCustomFurnitureCompCI212HomeCompBaseER4Home(HomeCustomFurnitureComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeCustomFurnitureComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::unordered_map(&this->module_custom_furniture_data_map_);
};
