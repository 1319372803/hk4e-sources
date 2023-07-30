// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/custom_gadget_comp.h

// Line 26: range 00000000131E557A-00000000131E5617
void __cdecl CustomGadgetNodeInfo::CustomGadgetNodeInfo(CustomGadgetNodeInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = 0;
  std::string::basic_string(&this->slot_identifier);
};

// Line 26: range 00000000131E5618-00000000131E5636
void __cdecl CustomGadgetNodeInfo::~CustomGadgetNodeInfo(CustomGadgetNodeInfo *const this)
{
  std::string::~string(&this->slot_identifier);
};

// Line 38: range 0000000013611484-00000000136114E1
void __cdecl CustomGadgetComp::~CustomGadgetComp(CustomGadgetComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CustomGadgetComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::vector<CustomGadgetNodeInfo>::~vector(&this->node_vec_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 38: range 00000000136114E2-000000001361150C
void __cdecl CustomGadgetComp::~CustomGadgetComp(CustomGadgetComp *const this)
{
  CustomGadgetComp::~CustomGadgetComp(this);
  operator delete(this, 0x28uLL);
};

// Line 115: range 0000000013366AD2-0000000013366BEF
void __cdecl CustomGadgetNodeInfo::CustomGadgetNodeInfo(CustomGadgetNodeInfo *const this, CustomGadgetNodeInfo *a2)
{
  double v2; // xmm0_8
  int32_t parent_index; // ecx
  uint32_t config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4();
  }
  parent_index = a2->parent_index;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = parent_index;
  if ( *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->config_id >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4();
  }
  config_id = a2->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = config_id;
  std::string::basic_string(&this->slot_identifier, &a2->slot_identifier, v2);
};
