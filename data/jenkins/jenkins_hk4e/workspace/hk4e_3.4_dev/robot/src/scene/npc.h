// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/npc.h

// Line 19: range 00000000008DA62A-00000000008DA6CC
void __cdecl Npc::Npc(Npc *const this)
{
  int (**v1)(...); // rdx

  Creature::Creature(this);
  v1 = (int (**)(...))(&`vtable for'Npc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->npc_id_);
  }
  this->npc_id_ = 0;
  std::vector<unsigned int>::vector(&this->talk_id_vec_);
};

// Line 19: range 000000000096AD50-000000000096ADAF
void __cdecl Npc::~Npc(Npc *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Npc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  std::vector<unsigned int>::~vector(&this->talk_id_vec_);
  Creature::~Creature(this);
};

// Line 19: range 000000000096ADB0-000000000096ADDA
void __cdecl Npc::~Npc(Npc *const this)
{
  Npc::~Npc(this);
  operator delete(this, 0x108uLL);
};

// Line 22: range 00000000004E161C-00000000004E162A
proto::ProtEntityType __cdecl Npc::getEntityType(const Npc *const this)
{
  return 3;
};

// Line 33: range 00000000004E162C-00000000004E1678
uint32_t __cdecl Npc::getNpcId(const Npc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->npc_id_);
  }
  return this->npc_id_;
};
