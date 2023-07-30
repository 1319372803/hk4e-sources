// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/deshret_obelisk_comp.h

// Line 18: range 000000001361140A-0000000013611457
void __cdecl DeshretObeliskComp::~DeshretObeliskComp(DeshretObeliskComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DeshretObeliskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 18: range 0000000013611458-0000000013611482
void __cdecl DeshretObeliskComp::~DeshretObeliskComp(DeshretObeliskComp *const this)
{
  DeshretObeliskComp::~DeshretObeliskComp(this);
  operator delete(this, 0x10uLL);
};

// Line 24: range 0000000016670AB6-0000000016670B0E
void __cdecl DeshretObeliskComp::DeshretObeliskComp(DeshretObeliskComp *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v2 = (int (**)(...))(&`vtable for'DeshretObeliskComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
};

// Line 30: range 00000000131E5638-00000000131E5646
proto::InteractType __cdecl DeshretObeliskComp::getInteractType(const DeshretObeliskComp *const this)
{
  return 16;
};
