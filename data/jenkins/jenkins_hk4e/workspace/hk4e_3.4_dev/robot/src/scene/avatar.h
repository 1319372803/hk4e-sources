// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/avatar.h

// Line 19: range 00000000008D6E14-00000000008D6F25
void __cdecl Avatar::Avatar(Avatar *const this)
{
  int (**v1)(...); // rdx

  Creature::Creature(this);
  v1 = (int (**)(...))(&`vtable for'Avatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = 0;
};

// Line 19: range 000000000096AEE2-000000000096AF2F
void __cdecl Avatar::~Avatar(Avatar *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Avatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  Creature::~Creature(this);
};

// Line 19: range 000000000096AF30-000000000096AF5A
void __cdecl Avatar::~Avatar(Avatar *const this)
{
  Avatar::~Avatar(this);
  operator delete(this, 0xF8uLL);
};

// Line 22: range 00000000004D7376-00000000004D7384
proto::ProtEntityType __cdecl Avatar::getEntityType(const Avatar *const this)
{
  return 1;
};

// Line 27: range 00000000004D7386-00000000004D73C5
uint64_t __cdecl Avatar::getGuid(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  return this->guid_;
};

// Line 28: range 00000000004D73C6-00000000004D741A
uint32_t __cdecl Avatar::getAvatarId(const Avatar *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};
