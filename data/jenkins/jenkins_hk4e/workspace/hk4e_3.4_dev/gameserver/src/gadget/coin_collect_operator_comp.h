// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/coin_collect_operator_comp.h

// Line 20: range 00000000136115A8-00000000136115F5
void __cdecl CoinCollectOperatorComp::~CoinCollectOperatorComp(CoinCollectOperatorComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CoinCollectOperatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 20: range 00000000136115F6-0000000013611620
void __cdecl CoinCollectOperatorComp::~CoinCollectOperatorComp(CoinCollectOperatorComp *const this)
{
  CoinCollectOperatorComp::~CoinCollectOperatorComp(this);
  operator delete(this, 0x18uLL);
};
