// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/fashion/fashion_comp.h

// Line 19: range 00000000154CC06A-00000000154CC0B7
void __cdecl FashionComp::~FashionComp(FashionComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FashionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 19: range 00000000154CC0B8-00000000154CC0E2
void __cdecl FashionComp::~FashionComp(FashionComp *const this)
{
  FashionComp::~FashionComp(this);
  operator delete(this, 0x18uLL);
};

// Line 25: range 0000000013CCC3A4-0000000013CCC480
void __cdecl ZN11FashionCompCI214AvatarCompBaseER6Avatar(FashionComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'FashionComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_wearing_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_wearing_flycloak_id_, a2, &this->cur_wearing_flycloak_id_);
  }
  this->cur_wearing_flycloak_id_ = 0;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->cur_wearing_costume_id_, (((_BYTE)this + 20) & 7u) + 3, v3);
  this->cur_wearing_costume_id_ = 0;
};

// Line 92: range 000000001385B490-000000001385B4DF
int32_t __cdecl FashionComp::getCostumeId(const FashionComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_wearing_costume_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_wearing_costume_id_);
  }
  return this->cur_wearing_costume_id_;
};
