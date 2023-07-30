// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/expedition/expedition_comp.h

// Line 30: range 00000000154CC0E4-00000000154CC151
void __cdecl ExpeditionComp::~ExpeditionComp(ExpeditionComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExpeditionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->expedition_timer_ptr_);
  proto::AvatarExpeditionBin::~AvatarExpeditionBin(&this->bin_data_);
  FormalAvatarCompBase::~FormalAvatarCompBase(this);
};

// Line 30: range 00000000154CC152-00000000154CC17C
void __cdecl ExpeditionComp::~ExpeditionComp(ExpeditionComp *const this)
{
  ExpeditionComp::~ExpeditionComp(this);
  operator delete(this, 0x50uLL);
};

// Line 36: range 000000001634964A-00000000163496E5
void __cdecl ZN14ExpeditionCompCI220FormalAvatarCompBaseER12FormalAvatar(ExpeditionComp *const this, FormalAvatar *a2)
{
  int (**v2)(...); // rdx

  FormalAvatarCompBase::FormalAvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ExpeditionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  proto::AvatarExpeditionBin::AvatarExpeditionBin(&this->bin_data_);
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->expedition_timer_ptr_);
};

// Line 90: range 000000001518A738-000000001518A75A
bool __cdecl ExpeditionComp::isExpeditionNotNone(ExpeditionComp *const this)
{
  return proto::AvatarExpeditionBin::state(&this->bin_data_) != 0;
};

// Line 92: range 00000000131D9C58-00000000131D9C75
proto::AvatarExpeditionState __cdecl ExpeditionComp::getState(const ExpeditionComp *const this)
{
  return proto::AvatarExpeditionBin::state(&this->bin_data_);
};

// Line 94: range 0000000017216ACC-0000000017216AE9
uint32_t __cdecl ExpeditionComp::getExpeditionId(ExpeditionComp *const this)
{
  return proto::AvatarExpeditionBin::exp_id(&this->bin_data_);
};

// Line 97: range 0000000017D6918A-0000000017D6919B
const proto::AvatarExpeditionBin *__cdecl ExpeditionComp::binData(ExpeditionComp *const this)
{
  return &this->bin_data_;
};

// Line 117: range 0000000017D6919C-0000000017D691E4
uint32_t __cdecl ExpeditionComp::getSecOffsetGM()
{
  if ( *(_BYTE *)(((unsigned __int64)&ExpeditionComp::sec_offset_gm_ >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)&ExpeditionComp::sec_offset_gm_ & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ExpeditionComp::sec_offset_gm_ >> 3)
                                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&ExpeditionComp::sec_offset_gm_);
  }
  return ExpeditionComp::sec_offset_gm_;
};
