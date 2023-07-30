// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/extra_prop/extra_prop_comp.h

// Line 27: range 0000000015192DFE-0000000015192E93
void __cdecl ExtraProp::ExtraProp(ExtraProp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count);
  }
  this->count = 0;
};

// Line 37: range 00000000154CBD2C-00000000154CBD89
void __cdecl ExtraPropComp::~ExtraPropComp(ExtraPropComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExtraPropComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,ExtraProp>::~map(&this->extra_prop_map_);
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 37: range 00000000154CBD8A-00000000154CBDB4
void __cdecl ExtraPropComp::~ExtraPropComp(ExtraPropComp *const this)
{
  ExtraPropComp::~ExtraPropComp(this);
  operator delete(this, 0x40uLL);
};

// Line 43: range 0000000013CCC6CA-0000000013CCC732
void __cdecl ZN13ExtraPropCompCI214AvatarCompBaseER6Avatar(ExtraPropComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ExtraPropComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::map<unsigned int,ExtraProp>::map(&this->extra_prop_map_);
};
