// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/item/equip_comp.h

// Line 22: range 0000000016832C82-0000000016832D67
void __cdecl EquipComp::~EquipComp(EquipComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EquipComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::unordered_map<unsigned int,unsigned long>::~unordered_map(&this->affix_id_to_start_time_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->affix_id_to_pass_cd_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->affix_id_to_cd_map_);
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::~multimap(&this->reliquary_set_affix_map_);
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::~multimap(&this->weapon_affix_map_);
  std::vector<std::shared_ptr<Equip>>::~vector(&this->temp_equip_vec_);
  std::vector<unsigned long>::~vector(&this->equip_guid_vec_);
  std::map<data::EquipType,std::shared_ptr<Equip>>::~map(&this->equip_map_);
  std::shared_ptr<AvatarWeaponGadget>::~shared_ptr(&this->weapon_gadget_ptr_);
  AvatarCompBase::~AvatarCompBase(this);
};

// Line 22: range 0000000016832D68-0000000016832D92
void __cdecl EquipComp::~EquipComp(EquipComp *const this)
{
  EquipComp::~EquipComp(this);
  operator delete(this, 0x190uLL);
};

// Line 28: range 0000000013CCB5A4-0000000013CCB6DC
void __cdecl ZN9EquipCompCI214AvatarCompBaseER6Avatar(EquipComp *const this, Avatar *a2)
{
  int (**v2)(...); // rdx

  AvatarCompBase::AvatarCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'EquipComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  std::shared_ptr<AvatarWeaponGadget>::shared_ptr(&this->weapon_gadget_ptr_, 0LL);
  std::map<data::EquipType,std::shared_ptr<Equip>>::map(&this->equip_map_);
  std::vector<unsigned long>::vector(&this->equip_guid_vec_);
  std::vector<std::shared_ptr<Equip>>::vector(&this->temp_equip_vec_);
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::multimap(&this->weapon_affix_map_);
  std::multimap<unsigned int,std::shared_ptr<EquipAffix>>::multimap(&this->reliquary_set_affix_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->affix_id_to_cd_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->affix_id_to_pass_cd_map_);
  std::unordered_map<unsigned int,unsigned long>::unordered_map(&this->affix_id_to_start_time_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_login_platform_type_);
  }
  this->last_login_platform_type_ = -1;
};

// Line 89: range 0000000013843C6C-0000000013843C7D
const std::map<data::EquipType,std::shared_ptr<Equip>> *__cdecl EquipComp::getEquipMap(const EquipComp *const this)
{
  return &this->equip_map_;
};

// Line 89: range 0000000013843C7E-0000000013843C91
const std::multimap<unsigned int,std::shared_ptr<EquipAffix>> *__cdecl EquipComp::getReliquarySetAffixMap(
        const EquipComp *const this)
{
  return &this->reliquary_set_affix_map_;
};

// Line 160: range 0000000013843D36-0000000013843D62
AvatarWeaponGadgetPtr __cdecl EquipComp::getWeaponGadget(const EquipComp *const this)
{
  const std::shared_ptr<AvatarWeaponGadget> *v1; // rsi
  AvatarWeaponGadgetPtr result; // rax

  std::shared_ptr<AvatarWeaponGadget>::shared_ptr((std::shared_ptr<AvatarWeaponGadget> *const)this, v1 + 1);
  result._M_ptr = (std::__shared_ptr<AvatarWeaponGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 178: range 00000000138DA626-00000000138DA763
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Weapon> __cdecl EquipComp::findEquip<Weapon>(EquipComp *const this, data::EquipType equip_type)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Weapon> result; // rax
  int equip_typea; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  equip_typea = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 equip_ptr:180";
  *(_QWORD *)(v3 + 16) = EquipComp::findEquip<Weapon>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  EquipComp::findEquip((const EquipComp *const)(v3 + 32), *(__int64 *)&equip_type, equip_typea);
  if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Weapon>::shared_ptr((std::shared_ptr<Weapon> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Weapon,Equip>((const std::shared_ptr<Equip> *)this);
  }
  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Weapon,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138DA4AC-00000000138DA5E9
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<Reliquary> __cdecl EquipComp::findEquip<Reliquary>(EquipComp *const this, data::EquipType equip_type)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<Reliquary> result; // rax
  int equip_typea; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  equip_typea = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 equip_ptr:180";
  *(_QWORD *)(v3 + 16) = EquipComp::findEquip<Reliquary>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  EquipComp::findEquip((const EquipComp *const)(v3 + 32), *(__int64 *)&equip_type, equip_typea);
  if ( std::operator==<Equip>((const std::shared_ptr<Equip> *)(v3 + 32), 0LL) )
  {
    std::shared_ptr<Reliquary>::shared_ptr((std::shared_ptr<Reliquary> *const)this, 0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::dynamic_pointer_cast<Reliquary,Equip>((const std::shared_ptr<Equip> *)this);
  }
  std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Reliquary,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
