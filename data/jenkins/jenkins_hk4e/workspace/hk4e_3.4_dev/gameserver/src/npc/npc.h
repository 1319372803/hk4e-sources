// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/npc/npc.h

// Line 22: range 0000000017094B0A-0000000017094B57
void __cdecl Npc::~Npc(Npc *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Npc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  Entity::~Entity((Entity *const)this);
};

// Line 22: range 0000000017094B58-0000000017094B82
void __cdecl Npc::~Npc(Npc *const this)
{
  Npc::~Npc(this);
  operator delete(this, 0x2F8uLL);
};

// Line 28: range 0000000016D5E0DC-0000000016D5E0EA
proto::ProtEntityType __cdecl Npc::getEntityType(const Npc *const this)
{
  return 3;
};

// Line 30: range 0000000016D5E0EC-0000000016D5E0FA
data::EntityType __cdecl Npc::getClientEntityType(const Npc *const this)
{
  return 12;
};

// Line 41: range 000000001666B84C-000000001666B89E
void __cdecl Npc::setParentQuestId(Npc *const this, uint32_t parent_quest_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id_);
  }
  this->parent_quest_id_ = parent_quest_id;
};

// Line 44: range 0000000013EB990E-0000000013EB9962
uint32_t __cdecl Npc::getNpcId(const Npc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->npc_id_;
};

// Line 163: range 000000001666B76E-000000001666B84B
void __cdecl Npc::Npc(Npc *const this, uint32_t npc_id)
{
  int (**v2)(...); // rdx

  Entity::Entity((Entity *const)this);
  v2 = (int (**)(...))(&`vtable for'Npc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_id_);
  }
  this->npc_id_ = npc_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id_);
  }
  this->parent_quest_id_ = 0;
};

// Line 213: range 0000000013EB98C0-0000000013EB990C
uint32_t __cdecl Npc::getParentQuestId(const Npc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->parent_quest_id_;
};
