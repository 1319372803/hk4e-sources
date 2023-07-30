// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/weapon_gadget.h

// Line 19: range 0000000015F4579C-0000000015F457E9
void __cdecl WeaponGadget::~WeaponGadget(WeaponGadget *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'WeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  Gadget::~Gadget(this);
};

// Line 19: range 0000000015F457EA-0000000015F45814
void __cdecl WeaponGadget::~WeaponGadget(WeaponGadget *const this)
{
  WeaponGadget::~WeaponGadget(this);
  operator delete(this, 0xAE8uLL);
};

// Line 22: range 00000000167F85BA-00000000167F86B7
void __fastcall ZN12WeaponGadgetCI26GadgetEj(WeaponGadget *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN12WeaponGadgetCI26GadgetEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  Gadget::Gadget(this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'WeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 22: range 00000000167F86B8-00000000167F87CC
void __fastcall ZN18AvatarWeaponGadgetCI26GadgetEj(AvatarWeaponGadget *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN18AvatarWeaponGadgetCI26GadgetEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN12WeaponGadgetCI26GadgetEj(this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'AvatarWeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  std::shared_ptr<Weapon>::shared_ptr(&this->weapon_ptr_, 0LL);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 27: range 0000000015D41082-0000000015D41090
proto::ProtEntityType __cdecl WeaponGadget::getEntityType(const WeaponGadget *const this)
{
  return 6;
};

// Line 29: range 0000000015D41092-0000000015D410A0
data::EntityType __cdecl WeaponGadget::getClientEntityType(const WeaponGadget *const this)
{
  return 8;
};

// Line 46: range 0000000015F45902-0000000015F4592C
void __cdecl AvatarWeaponGadget::~AvatarWeaponGadget(AvatarWeaponGadget *const this)
{
  AvatarWeaponGadget::~AvatarWeaponGadget(this);
  operator delete(this, 0xAF8uLL);
};

// Line 46: range 0000000015F458A2-0000000015F45901
void __cdecl AvatarWeaponGadget::~AvatarWeaponGadget(AvatarWeaponGadget *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'AvatarWeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::shared_ptr<Weapon>::~shared_ptr(&this->weapon_ptr_);
  WeaponGadget::~WeaponGadget(this);
};

// Line 61: range 000000001666F3A4-000000001666F3D0
void __cdecl AvatarWeaponGadget::setWeaponItem(AvatarWeaponGadget *const this, WeaponPtr *p_weapon_ptr__out)
{
  std::shared_ptr<Weapon>::operator=(&this->weapon_ptr_, p_weapon_ptr__out);
};

// Line 65: range 0000000015F45876-0000000015F458A0
void __cdecl MonsterWeaponGadget::~MonsterWeaponGadget(MonsterWeaponGadget *const this)
{
  MonsterWeaponGadget::~MonsterWeaponGadget(this);
  operator delete(this, 0xB08uLL);
};

// Line 65: range 0000000015F45816-0000000015F45875
void __cdecl MonsterWeaponGadget::~MonsterWeaponGadget(MonsterWeaponGadget *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'MonsterWeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::string::~string(&this->attach_to_);
  WeaponGadget::~WeaponGadget(this);
};

// Line 68: range 000000001743E41A-000000001743E529
void __fastcall ZN19MonsterWeaponGadgetCI26GadgetEj(MonsterWeaponGadget *const this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ZN19MonsterWeaponGadgetCI26GadgetEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  ZN12WeaponGadgetCI26GadgetEj(this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'MonsterWeaponGadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  std::string::basic_string(&this->attach_to_);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 74: range 000000001720E19C-000000001720E1C7
void __cdecl MonsterWeaponGadget::setAttachTo(MonsterWeaponGadget *const this, const std::string *attach_to)
{
  std::string::operator=(&this->attach_to_, attach_to);
};

// Line 129: range 000000001384424E-000000001384427D
WeaponPtr __cdecl AvatarWeaponGadget::getWeaponItem(const AvatarWeaponGadget *const this)
{
  __int64 v1; // rsi
  WeaponPtr result; // rax

  std::shared_ptr<Weapon>::shared_ptr(
    (std::shared_ptr<Weapon> *const)this,
    (const std::shared_ptr<Weapon> *)(v1 + 2792));
  result._M_ptr = (std::__shared_ptr<Weapon,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
