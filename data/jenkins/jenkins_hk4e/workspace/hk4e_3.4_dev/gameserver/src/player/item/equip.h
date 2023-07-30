// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/equip.h

// Line 20: range 0000000017887B8E-0000000017887BFB
void __cdecl Equip::~Equip(Equip *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Equip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Item = v2;
  std::weak_ptr<Avatar>::~weak_ptr(&this->avatar_wtr_);
  std::map<data::FightPropType,float>::~map(&this->prop_map_);
  Item::~Item(this);
};

// Line 20: range 0000000017887BFC-0000000017887C26
void __cdecl Equip::~Equip(Equip *const this)
{
  Equip::~Equip(this);
  operator delete(this, 0x80uLL);
};

// Line 23: range 0000000017F3F410-0000000017F3F5B9
void __fastcall ZN5EquipCI24ItemEjj(Equip *const this, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int (**v7)(...); // rdx
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN5EquipCI24ItemEjj;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = a2;
  *(_DWORD *)(v3 + 64) = a3;
  v6 = *(unsigned int *)(v3 + 48);
  Item::Item(this, v6, *(_DWORD *)(v3 + 64));
  v7 = (int (**)(...))(&`vtable for'Equip + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v6);
  this->_vptr_Item = v7;
  std::map<data::FightPropType,float>::map(&this->prop_map_);
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked_, v6, &this->is_locked_);
  this->is_locked_ = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 52: range 0000000013EBE888-0000000013EBE8D6
AvatarPtr __cdecl Equip::getOwner(const Equip *const this)
{
  AvatarPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)this);
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 54: range 000000001666D438-000000001666D449
const std::map<data::FightPropType,float> *__cdecl Equip::getProp(const Equip *const this)
{
  return &this->prop_map_;
};

// Line 61: range 0000000013EBE8D8-0000000013EBE920
bool __cdecl Equip::getIsLocked(const Equip *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_locked_);
  return this->is_locked_;
};

// Line 61: range 0000000016D6EC34-0000000016D6EC85
// local variable allocation has failed, the output may be wrong!
void __cdecl Equip::setIsLocked(Equip *const this, bool is_locked__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_locked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_locked_, is_locked__out, &this->is_locked_);
  this->is_locked_ = is_locked__out;
};
