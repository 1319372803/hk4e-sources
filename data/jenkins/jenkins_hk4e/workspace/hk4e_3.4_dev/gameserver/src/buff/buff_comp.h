// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/buff_comp.h

// Line 23: range 000000001590130E-000000001590136B
void __cdecl BuffComp::~BuffComp(BuffComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BuffComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::multimap<unsigned int,std::shared_ptr<Buff>>::~multimap(&this->buff_mmap_);
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 23: range 000000001590136C-0000000015901396
void __cdecl BuffComp::~BuffComp(BuffComp *const this)
{
  BuffComp::~BuffComp(this);
  operator delete(this, 0x48uLL);
};

// Line 29: range 0000000013CCBD5E-0000000013CCBE01
void __cdecl ZN8BuffCompCI214AvatarCompBaseER6Avatar(BuffComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'BuffComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(char *)(((unsigned __int64)&this->is_buff_recovered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_buff_recovered_);
  this->is_buff_recovered_ = 0;
  std::multimap<unsigned int,std::shared_ptr<Buff>>::multimap(&this->buff_mmap_);
};
