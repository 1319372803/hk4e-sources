// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_client_comp.h

// Line 19: range 00000000178883A0-00000000178883FD
void __cdecl GadgetClientComp::~GadgetClientComp(GadgetClientComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetClientComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::vector<unsigned int>::~vector(&this->target_entity_id_vec_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 19: range 00000000178883FE-0000000017888428
void __cdecl GadgetClientComp::~GadgetClientComp(GadgetClientComp *const this)
{
  GadgetClientComp::~GadgetClientComp(this);
  operator delete(this, 0x38uLL);
};
