// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/mp_play_reward_comp.h

// Line 25: range 0000000014838D4E-0000000014838D9B
void __cdecl MpPlayRewardComp::~MpPlayRewardComp(MpPlayRewardComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MpPlayRewardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  GadgetBaseInteractComp::~GadgetBaseInteractComp(this);
};

// Line 25: range 0000000014838D9C-0000000014838DC6
void __cdecl MpPlayRewardComp::~MpPlayRewardComp(MpPlayRewardComp *const this)
{
  MpPlayRewardComp::~MpPlayRewardComp(this);
  operator delete(this, 0x18uLL);
};

// Line 31: range 00000000166706BA-0000000016670752
void __cdecl MpPlayRewardComp::MpPlayRewardComp(MpPlayRewardComp *const this, Gadget *gadget, uint32_t mp_play_id)
{
  int (**v3)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'MpPlayRewardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id_);
  }
  this->mp_play_id_ = mp_play_id;
};

// Line 39: range 000000001461D792-000000001461D7A0
proto::InteractType __cdecl MpPlayRewardComp::getInteractType(const MpPlayRewardComp *const this)
{
  return 6;
};
