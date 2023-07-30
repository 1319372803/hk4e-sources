// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/creature_buff_comp.h

// Line 23: range 00000000148398DA-0000000014839947
void __cdecl CreatureBuffComp::~CreatureBuffComp(CreatureBuffComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CreatureBuffComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  std::multimap<unsigned int,std::shared_ptr<Buff>>::~multimap(&this->buff_mmap_);
  CreatureCompBase::~CreatureCompBase(this);
};

// Line 23: range 0000000014839948-0000000014839972
void __cdecl CreatureBuffComp::~CreatureBuffComp(CreatureBuffComp *const this)
{
  CreatureBuffComp::~CreatureBuffComp(this);
  operator delete(this, 0x68uLL);
};

// Line 26: range 00000000146138CE-00000000146139FA
void __cdecl ZN16CreatureBuffCompCI216CreatureCompBaseER8Creature(CreatureBuffComp *const this, Creature *a2)
{
  int (**v2)(...); // rdx

  CreatureCompBase::CreatureCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'CreatureBuffComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v2;
  if ( *(char *)(((unsigned __int64)&this->has_entered_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_entered_scene_);
  this->has_entered_scene_ = 0;
  std::multimap<unsigned int,std::shared_ptr<Buff>>::multimap(&this->buff_mmap_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_server_buff_uid_);
  }
  this->last_server_buff_uid_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_);
  this->is_enable_ = 0;
};

// Line 75: range 0000000013841710-0000000013841758
bool __cdecl CreatureBuffComp::isEnable(const CreatureBuffComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_);
  return this->is_enable_;
};

// Line 19409: range 00000000155B64B2-00000000155B650A
uint32_t __cdecl CreatureBuffComp::getNextServerBuffUid(CreatureBuffComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_server_buff_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_server_buff_uid_);
  }
  return ++this->last_server_buff_uid_;
};
