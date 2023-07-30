// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/worktop_comp.h

// Line 20: range 0000000015F45698-0000000015F456F5
void __cdecl WorktopComp::~WorktopComp(WorktopComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WorktopComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::vector<unsigned int>::~vector(&this->option_vec_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 20: range 0000000015F456F6-0000000015F45720
void __cdecl WorktopComp::~WorktopComp(WorktopComp *const this)
{
  WorktopComp::~WorktopComp(this);
  operator delete(this, 0x38uLL);
};

// Line 51: range 0000000015193DF0-0000000015193E38
bool __cdecl WorktopComp::getIsGuestCanOperate(const WorktopComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_guest_can_operate_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_guest_can_operate_);
  return this->is_guest_can_operate_;
};
