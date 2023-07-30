// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/echo_shell_comp.h

// Line 21: range 0000000013611390-00000000136113DD
void __cdecl EchoShellComp::~EchoShellComp(EchoShellComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EchoShellComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 21: range 00000000136113DE-0000000013611408
void __cdecl EchoShellComp::~EchoShellComp(EchoShellComp *const this)
{
  EchoShellComp::~EchoShellComp(this);
  operator delete(this, 0x18uLL);
};

// Line 32: range 00000000131E5684-00000000131E5692
proto::InteractType __cdecl EchoShellComp::getInteractType(const EchoShellComp *const this)
{
  return 11;
};
