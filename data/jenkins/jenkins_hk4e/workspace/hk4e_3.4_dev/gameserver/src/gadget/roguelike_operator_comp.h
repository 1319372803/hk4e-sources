// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/roguelike_operator_comp.h

// Line 21: range 0000000015F45BF0-0000000015F45C3D
void __cdecl RoguelikeOperatorComp::~RoguelikeOperatorComp(RoguelikeOperatorComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RoguelikeOperatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 21: range 0000000015F45C3E-0000000015F45C68
void __cdecl RoguelikeOperatorComp::~RoguelikeOperatorComp(RoguelikeOperatorComp *const this)
{
  RoguelikeOperatorComp::~RoguelikeOperatorComp(this);
  operator delete(this, 0x28uLL);
};
