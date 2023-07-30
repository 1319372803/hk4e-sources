// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget.h

// Line 46: range 00000000147FC100-00000000147FC12A
void __cdecl Gadget::~Gadget(Gadget *const this)
{
  Gadget::~Gadget(this);
  operator delete(this, 0xAE8uLL);
};

// Line 46: range 00000000147FC06A-00000000147FC0FF
void __cdecl Gadget::~Gadget(Gadget *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'Gadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::weak_ptr<Gadget>::~weak_ptr(&this->foundation_wtr_);
  std::vector<unsigned int>::~vector(&this->interect_uid_vec_);
  std::weak_ptr<Creature>::~weak_ptr(&this->prop_owner_wtr_);
  EcsBase<Gadget,GadgetCompBase,28u>::~EcsBase(&this->EcsBase<Gadget,GadgetCompBase,28>);
  Creature::~Creature(this);
};

// Line 52: range 0000000014614CEE-0000000014615137
void __cdecl Gadget::Gadget(Gadget *const this, uint32_t gadget_id)
{
  __int64 *v2; // rdx
  __int64 NowMs; // rax

  Creature::Creature(this);
  EcsBase<Gadget,GadgetCompBase,28u>::EcsBase(&this->EcsBase<Gadget,GadgetCompBase,28>);
  v2 = &`vtable for'Gadget + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id_);
  }
  this->gadget_id_ = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->master_uid_);
  }
  this->master_uid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_drop_);
  }
  this->is_ban_drop_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_begin_time_);
  }
  this->state_begin_time_ = 0;
  NowMs = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ms_ >> 3) + 0x7FFF8000) )
    NowMs = __asan_report_store8(&this->create_time_ms_);
  this->create_time_ms_ = NowMs;
  if ( *(char *)(((unsigned __int64)&this->is_by_quest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_by_quest_);
  this->is_by_quest_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_talk_state_);
  }
  this->gadget_talk_state_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type_);
  }
  this->born_type_ = GADGET_BORN_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_interact_);
  this->is_enable_interact_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop_);
  }
  this->guest_ban_drop_ = 0;
  std::weak_ptr<Creature>::weak_ptr(&this->prop_owner_wtr_);
  std::vector<unsigned int>::vector(&this->interect_uid_vec_);
  std::weak_ptr<Gadget>::weak_ptr(&this->foundation_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_config_id_);
  }
  this->point_config_id_ = 0;
};

// Line 63: range 000000001762F0E4-000000001762F0F2
proto::ProtEntityType __cdecl Gadget::getEntityType(const Gadget *const this)
{
  return 4;
};

// Line 79: range 00000000131D2FC2-00000000131D300E
uint32_t __cdecl Gadget::getState(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_;
};

// Line 83: range 000000001762F0F4-000000001762F141
bool __cdecl Gadget::isEnableInteract(const Gadget *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_interact_);
  return this->is_enable_interact_;
};

// Line 154: range 000000001666B6E6-000000001666B740
void __cdecl Gadget::setBornType(Gadget *const this, proto::GadgetBornType born_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->born_type_);
  }
  this->born_type_ = born_type;
};

// Line 155: range 000000001762F142-000000001762F196
proto::GadgetBornType __cdecl Gadget::getBornType(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->born_type_;
};

// Line 163: range 000000001666B742-000000001666B76D
void __cdecl Gadget::setPropOwner(Gadget *const this, CreaturePtr *p_owner_ptr)
{
  std::weak_ptr<Creature>::operator=<Creature>(&this->prop_owner_wtr_, p_owner_ptr);
};

// Line 164: range 0000000013841BEE-0000000013841C3F
CreaturePtr __cdecl Gadget::getPropOwner(const Gadget *const this)
{
  CreaturePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)this);
  result._M_ptr = &this->Creature;
  return result;
};

// Line 205: range 000000001762F198-000000001762F1C3
void __cdecl Gadget::setFoundationWtr(Gadget *const this, GadgetWtr *p_foundation_wtr)
{
  std::weak_ptr<Gadget>::operator=(&this->foundation_wtr_, p_foundation_wtr);
};

// Line 212: range 00000000131D3010-00000000131D305C
uint32_t __cdecl Gadget::getGadgetId(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->gadget_id_;
};

// Line 212: range 00000000131D305E-00000000131D30B1
void __cdecl Gadget::setGadgetId(Gadget *const this, uint32_t gadget_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id_);
  }
  this->gadget_id_ = gadget_id__out;
};

// Line 213: range 0000000013EB9864-0000000013EB98BF
void __cdecl Gadget::setMasterUid(Gadget *const this, uint32_t master_uid__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->master_uid_);
  }
  this->master_uid_ = master_uid__out;
};

// Line 214: range 000000001762F1C4-000000001762F217
void __cdecl Gadget::setDropId(Gadget *const this, uint32_t drop_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = drop_id__out;
};

// Line 215: range 000000001762F218-000000001762F26A
bool __cdecl Gadget::getIsBanDrop(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ban_drop_);
  }
  return this->is_ban_drop_;
};

// Line 216: range 00000000131D30B2-00000000131D30FE
uint32_t __cdecl Gadget::getStateBeginTime(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->state_begin_time_;
};

// Line 219: range 0000000016D5DEF8-0000000016D5DF4C
uint32_t __cdecl Gadget::getGadgetTalkState(const Gadget *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->gadget_talk_state_;
};

// Line 227: range 000000001762F26C-000000001762F2BF
void __cdecl Gadget::setPointConfigId(Gadget *const this, uint32_t point_config_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_config_id_);
  }
  this->point_config_id_ = point_config_id__out;
};
