// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/scene/gadget.h

// Line 18: range 00000000008DA82E-00000000008DA8F3
void __cdecl Gadget::Gadget(Gadget *const this)
{
  int (**v1)(...); // rdx

  Entity::Entity(this);
  v1 = (int (**)(...))(&`vtable for'Gadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id_);
  }
  this->gadget_id_ = 0;
  proto::Item::Item(&this->item_);
};

// Line 18: range 000000000096AE56-000000000096AEB5
void __cdecl Gadget::~Gadget(Gadget *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'Gadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_Entity = v1;
  proto::Item::~Item(&this->item_);
  Entity::~Entity(this);
};

// Line 18: range 000000000096AEB6-000000000096AEE0
void __cdecl Gadget::~Gadget(Gadget *const this)
{
  Gadget::~Gadget(this);
  operator delete(this, 0xE8uLL);
};

// Line 22: range 00000000004E167A-00000000004E1688
proto::ProtEntityType __cdecl Gadget::getEntityType(const Gadget *const this)
{
  return 4;
};

// Line 28: range 00000000004E168A-00000000004E16A9
uint32_t __cdecl Gadget::getItemId(const Gadget *const this)
{
  return proto::Item::item_id(&this->item_);
};

// Line 31: range 00000000004E16AA-00000000004E16F6
uint32_t __cdecl Gadget::getGadgetId(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gadget_id_);
  }
  return this->gadget_id_;
};
