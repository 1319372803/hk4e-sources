// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/monster.h

// Line 18: range 00000000008DA43E-00000000008DA4CE
void __cdecl Monster::Monster(Monster *const this)
{
  int (**v1)(...); // rdx

  Creature::Creature(this);
  v1 = (int (**)(...))(&`vtable for'Monster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id_);
  }
  this->monster_id_ = 0;
};

// Line 18: range 000000000096ADDC-000000000096AE29
void __cdecl Monster::~Monster(Monster *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Monster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  Creature::~Creature(this);
};

// Line 18: range 000000000096AE2A-000000000096AE54
void __cdecl Monster::~Monster(Monster *const this)
{
  Monster::~Monster(this);
  operator delete(this, 0xF0uLL);
};

// Line 28: range 00000000004E15CE-00000000004E161A
uint32_t __cdecl Monster::getMonsterId(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->monster_id_);
  }
  return this->monster_id_;
};

// Line 129: range 00000000004E15BE-00000000004E15CC
proto::ProtEntityType __cdecl Monster::getEntityType(const Monster *const this)
{
  return 2;
};
