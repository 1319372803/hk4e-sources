// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/home_group_record_comp.h

// Line 23: range 000000001483758A-00000000148375E7
void __cdecl HomeGroupRecordComp::~HomeGroupRecordComp(HomeGroupRecordComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeGroupRecordComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::~map(&this->group_record_map_);
  HomeCompBase::~HomeCompBase(this);
};

// Line 23: range 00000000148375E8-0000000014837612
void __cdecl HomeGroupRecordComp::~HomeGroupRecordComp(HomeGroupRecordComp *const this)
{
  HomeGroupRecordComp::~HomeGroupRecordComp(this);
  operator delete(this, 0x50uLL);
};

// Line 29: range 000000001482316A-00000000148231D2
void __cdecl ZN19HomeGroupRecordCompCI212HomeCompBaseER4Home(HomeGroupRecordComp *const this, Home *a2)
{
  int (**v2)(...); // rdx

  HomeCompBase::HomeCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'HomeGroupRecordComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::map(&this->group_record_map_);
};
