// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/massive_entity.h

// Line 19: range 0000000014838E42-0000000014838EA1
void __cdecl MassiveEntity::~MassiveEntity(MassiveEntity *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'MassiveEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::~variant(&this->entity_info_);
  Gadget::~Gadget((Gadget *const)this);
};

// Line 19: range 0000000014838EA2-0000000014838ECC
void __cdecl MassiveEntity::~MassiveEntity(MassiveEntity *const this)
{
  MassiveEntity::~MassiveEntity(this);
  operator delete(this, 0xB48uLL);
};

// Line 22: range 00000000147FC12C-00000000147FC31D
void __fastcall ZN13MassiveEntityCI26GadgetEj(MassiveEntity *const this, int a2)
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
  *(_QWORD *)(v2 + 16) = ZN13MassiveEntityCI26GadgetEj;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = a2;
  Gadget::Gadget((Gadget *const)this, *(_DWORD *)(v2 + 32));
  v5 = &`vtable for'MassiveEntity + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type_);
  }
  this->entity_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->obj_id_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->obj_id_);
  this->obj_id_ = 0LL;
  std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::variant(&this->entity_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_state_);
  }
  this->element_state_ = 0;
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

// Line 25: range 000000001461D686-000000001461D694
proto::ProtEntityType __cdecl MassiveEntity::getEntityType(const MassiveEntity *const this)
{
  return 10;
};

// Line 29: range 000000001461D696-000000001461D6EA
data::EntityType __cdecl MassiveEntity::getClientEntityType(const MassiveEntity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->entity_type_;
};

// Line 38: range 000000001461D6EC-000000001461D702
int32_t __cdecl MassiveEntity::doHurt(MassiveEntity *const this, Creature *a2, HurtContext *a3)
{
  return 0;
};

// Line 44: range 00000000131E1574-00000000131E15C7
void __cdecl MassiveEntity::setElementState(MassiveEntity *const this, uint32_t element_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->element_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_state_);
  }
  this->element_state_ = element_state__out;
};

// Line 47: range 00000000131E4036-00000000131E4180
void __cdecl MassiveEntityParam::MassiveEntityParam(MassiveEntityParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->config_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type);
  }
  this->entity_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id);
  }
  this->entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->obj_id >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->obj_id);
  this->obj_id = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->authority_peer_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->authority_peer_id);
  }
  this->authority_peer_id = 0;
  std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::variant(&this->entity_info);
};

// Line 47: range 00000000131E4648-00000000131E4666
void __cdecl MassiveEntityParam::~MassiveEntityParam(MassiveEntityParam *const this)
{
  std::variant<proto::MassiveWaterInfo,proto::MassiveGrassInfo,proto::MassiveBoxInfo>::~variant(&this->entity_info);
};
