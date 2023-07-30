// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_plant/home_plant_comp.h

// Line 29: range 0000000016B7C478-0000000016B7C4D5
void __cdecl HomePlantComp::~HomePlantComp(HomePlantComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomePlantComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::unordered_map<unsigned int,HomeModuleFieldData>::~unordered_map(&this->module_data_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 29: range 0000000016B7C4D6-0000000016B7C500
void __cdecl HomePlantComp::~HomePlantComp(HomePlantComp *const this)
{
  HomePlantComp::~HomePlantComp(this);
  operator delete(this, 0x60uLL);
};

// Line 35: range 000000001482220C-00000000148222B2
void __cdecl ZN13HomePlantCompCI212HomeCompBaseER4Home(HomePlantComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomePlantComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::unordered_map<unsigned int,HomeModuleFieldData>::unordered_map(&this->module_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = 0;
};
