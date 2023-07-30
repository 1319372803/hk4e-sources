// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/item/equip_affix.h

// Line 23: range 0000000016869260-00000000168692AD
void __cdecl EquipAffix::~EquipAffix(EquipAffix *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EquipAffix + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseTalent = v1;
  BaseTalent::~BaseTalent(this);
};

// Line 26: range 000000001666F158-000000001666F24B
void __cdecl EquipAffix::EquipAffix(EquipAffix *const this, Avatar *avatar, uint32_t affix_id, uint32_t level)
{
  int (**v4)(...); // rdx

  BaseTalent::BaseTalent(this, avatar, level + 10 * affix_id);
  v4 = (int (**)(...))(&`vtable for'EquipAffix + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseTalent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = affix_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = level;
};
