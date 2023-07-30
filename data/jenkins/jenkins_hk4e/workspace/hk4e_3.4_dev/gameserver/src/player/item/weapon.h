// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/weapon.h

// Line 23: range 0000000017887C28-0000000017887C87
void __cdecl Weapon::~Weapon(Weapon *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Weapon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Item = v2;
  std::map<unsigned int,unsigned int>::~map(&this->affix_map_);
  Equip::~Equip((Equip *const)this);
};

// Line 23: range 0000000017887C88-0000000017887CB2
void __cdecl Weapon::~Weapon(Weapon *const this)
{
  Weapon::~Weapon(this);
  operator delete(this, 0xB8uLL);
};

// Line 26: range 0000000017F3FB24-0000000017F3FD5F
void __fastcall ZN6WeaponCI24ItemEjj(Weapon *const this, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v12[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN6WeaponCI24ItemEjj;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = a2;
  *(_DWORD *)(v3 + 64) = a3;
  v6 = *(unsigned int *)(v3 + 48);
  ZN5EquipCI24ItemEjj((Equip *const)this, v6, *(_DWORD *)(v3 + 64));
  v7 = (int (**)(...))(&`vtable for'Weapon + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v6);
  this->_vptr_Item = v7;
  v8 = (((_BYTE)this + 124) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->level_, v8, v9);
  this->level_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, v8, &this->exp_);
  }
  this->exp_ = 0;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->promote_level_, (((_BYTE)this - 124) & 7u) + 3, v10);
  this->promote_level_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->affix_map_);
  if ( v12 == (char *)v3 )
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

// Line 115: range 000000001385B3F0-000000001385B43F
uint32_t __cdecl Weapon::getLevel(const Weapon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 115: range 000000001623C020-000000001623C076
void __cdecl Weapon::setLevel(Weapon *const this, uint32_t level__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->level_, (((_BYTE)this + 124) & 7u) + 3, v2);
  this->level_ = level__out;
};

// Line 116: range 0000000017D68774-0000000017D687C5
// local variable allocation has failed, the output may be wrong!
void __cdecl Weapon::setExp(Weapon *const this, uint32_t exp__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, *(_QWORD *)&exp__out, &this->exp_);
  }
  this->exp_ = exp__out;
};

// Line 117: range 0000000015195EE2-0000000015195F36
uint32_t __cdecl Weapon::getPromoteLevel(const Weapon *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  return this->promote_level_;
};

// Line 117: range 000000001623C078-000000001623C0D3
void __cdecl Weapon::setPromoteLevel(Weapon *const this, uint32_t promote_level__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->promote_level_, (((_BYTE)this - 124) & 7u) + 3, v2);
  this->promote_level_ = promote_level__out;
};
