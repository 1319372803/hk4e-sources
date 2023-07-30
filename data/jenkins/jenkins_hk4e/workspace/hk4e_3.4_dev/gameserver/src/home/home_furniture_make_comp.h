// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_furniture_make_comp.h

// Line 23: range 0000000014837F7A-0000000014837FD7
void __cdecl HomeFurnitureMakeComp::~HomeFurnitureMakeComp(HomeFurnitureMakeComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeFurnitureMakeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::vector<FurnitureMakeData>::~vector(&this->make_slot_copy_vec_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 23: range 0000000014837FD8-0000000014838002
void __cdecl HomeFurnitureMakeComp::~HomeFurnitureMakeComp(HomeFurnitureMakeComp *const this)
{
  HomeFurnitureMakeComp::~HomeFurnitureMakeComp(this);
  operator delete(this, 0x38uLL);
};

// Line 29: range 000000001482180C-0000000014821874
void __cdecl ZN21HomeFurnitureMakeCompCI212HomeCompBaseER4Home(HomeFurnitureMakeComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeFurnitureMakeComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::vector<FurnitureMakeData>::vector(&this->make_slot_copy_vec_);
};
