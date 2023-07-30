// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/quest_gadget_comp.h

// Line 18: range 0000000014838B46-0000000014838B93
void __cdecl QuestGadgetComp::~QuestGadgetComp(QuestGadgetComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'QuestGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 18: range 0000000014838B94-0000000014838BBE
void __cdecl QuestGadgetComp::~QuestGadgetComp(QuestGadgetComp *const this)
{
  QuestGadgetComp::~QuestGadgetComp(this);
  operator delete(this, 0x10uLL);
};

// Line 22: range 0000000016819C00-0000000016819C58
void __cdecl ZN15QuestGadgetCompCI214GadgetCompBaseER6Gadget(QuestGadgetComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'QuestGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 27: range 000000001461DE06-000000001461DE14
proto::InteractType __cdecl QuestGadgetComp::getInteractType(const QuestGadgetComp *const this)
{
  return 14;
};
