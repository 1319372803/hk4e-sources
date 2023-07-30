// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_seal_comp.h

// Line 26: range 0000000017888124-000000001788814E
void __cdecl GadgetSealComp::~GadgetSealComp(GadgetSealComp *const this)
{
  GadgetSealComp::~GadgetSealComp(this);
  operator delete(this, 0x30uLL);
};

// Line 26: range 00000000178880B6-0000000017888123
void __cdecl GadgetSealComp::~GadgetSealComp(GadgetSealComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetSealComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  std::shared_ptr<SealBattleBase>::~shared_ptr(&this->battle_ptr_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 32: range 00000000168195C0-0000000016819638
void __cdecl ZN14GadgetSealCompCI214GadgetCompBaseER6Gadget(GadgetSealComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetSealComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  std::shared_ptr<SealBattleBase>::shared_ptr(&this->battle_ptr_);
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->update_timer_ptr_);
};

// Line 70: range 000000001762E7D0-000000001762E94F
void __cdecl SealBattleBase::SealBattleBase(
        SealBattleBase *const this,
        uint32_t radius,
        uint32_t max_progress,
        proto::SealBattleType battle_type)
{
  int (**v4)(...); // rdx

  std::enable_shared_from_this<SealBattleBase>::enable_shared_from_this(&this->std::enable_shared_from_this<SealBattleBase>);
  v4 = (int (**)(...))(&`vtable for'SealBattleBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v4;
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr_);
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius_);
  }
  this->radius_ = radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->progress_);
  }
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_progress_);
  }
  this->max_progress_ = max_progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_type_);
  }
  this->battle_type_ = battle_type;
};

// Line 73: range 000000001762E950-000000001762E9C1
void __cdecl SealBattleBase::~SealBattleBase(SealBattleBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SealBattleBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v1;
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr_);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr_);
  std::enable_shared_from_this<SealBattleBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<SealBattleBase>);
};

// Line 73: range 000000001762E9C2-000000001762E9EC
void __cdecl SealBattleBase::~SealBattleBase(SealBattleBase *const this)
{
  SealBattleBase::~SealBattleBase(this);
  operator delete(this, 0x48uLL);
};

// Line 80: range 000000001762E9EE-000000001762E9FB
void __cdecl SealBattleBase::onTimer(SealBattleBase *const this, uint32_t now)
{
  ;
};

// Line 82: range 000000001762E9FC-000000001762EA4A
PlayerPtr __cdecl SealBattleBase::getPlayerPtr(SealBattleBase *const this)
{
  PlayerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 83: range 000000001762EA4C-000000001762EA93
uint32_t __cdecl SealBattleBase::getRadius(const SealBattleBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->radius_;
};

// Line 84: range 000000001762EA94-000000001762EADB
uint32_t __cdecl SealBattleBase::getMaxProgress(const SealBattleBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->max_progress_;
};

// Line 85: range 000000001762EADC-000000001762EB2B
proto::SealBattleType __cdecl SealBattleBase::getBattleType(const SealBattleBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->battle_type_;
};

// Line 103: range 000000001788808A-00000000178880B4
void __cdecl SealKeepAliveBattle::~SealKeepAliveBattle(SealKeepAliveBattle *const this)
{
  SealKeepAliveBattle::~SealKeepAliveBattle(this);
  operator delete(this, 0x68uLL);
};

// Line 103: range 000000001788803C-0000000017888089
void __cdecl SealKeepAliveBattle::~SealKeepAliveBattle(SealKeepAliveBattle *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SealKeepAliveBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v1;
  SealBattleBase::~SealBattleBase(this);
};

// Line 106: range 000000001762EB2C-000000001762ED7B
void __cdecl SealKeepAliveBattle::SealKeepAliveBattle(
        SealKeepAliveBattle *const this,
        uint32_t radius,
        uint32_t max_progress,
        const SealKeepAliveParam *param)
{
  int (**v4)(...); // rdx

  SealBattleBase::SealBattleBase(this, radius, max_progress, SEAL_BATTLE_KEEP_ALIVE);
  v4 = (int (**)(...))(&`vtable for'SealKeepAliveBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v4;
  if ( *(char *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->param_.fail_time + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->param_.fail_time + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->param_, 12LL);
  }
  if ( ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&param->fail_time + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&param->fail_time + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(param, 12LL);
  }
  this->param_ = *param;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_tick_time_);
  }
  this->last_tick_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_inside_);
  this->is_inside_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->progress_);
  }
  this->progress_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fail_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fail_start_time_);
  }
  this->fail_start_time_ = 0;
};

// Line 125: range 0000000017888010-000000001788803A
void __cdecl SealKillMonsterBattle::~SealKillMonsterBattle(SealKillMonsterBattle *const this)
{
  SealKillMonsterBattle::~SealKillMonsterBattle(this);
  operator delete(this, 0x58uLL);
};

// Line 125: range 0000000017887FC2-000000001788800F
void __cdecl SealKillMonsterBattle::~SealKillMonsterBattle(SealKillMonsterBattle *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SealKillMonsterBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v1;
  SealBattleBase::~SealBattleBase(this);
};

// Line 128: range 000000001762ED7C-000000001762EEBB
void __cdecl SealKillMonsterBattle::SealKillMonsterBattle(
        SealKillMonsterBattle *const this,
        uint32_t radius,
        uint32_t max_progress,
        const SealKillMonsterParam *param)
{
  int (**v4)(...); // rdx

  SealBattleBase::SealBattleBase(this, radius, max_progress, SEAL_BATTLE_KILL_MONSTER);
  v4 = (int (**)(...))(&`vtable for'SealKillMonsterBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->param_);
  if ( ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&param->monster_group_id + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&param->monster_group_id + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(param, 8LL);
  }
  this->param_ = *param;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = 0;
};

// Line 152: range 0000000017887F96-0000000017887FC0
void __cdecl SealEnergyChargeBattle::~SealEnergyChargeBattle(SealEnergyChargeBattle *const this)
{
  SealEnergyChargeBattle::~SealEnergyChargeBattle(this);
  operator delete(this, 0x88uLL);
};

// Line 152: range 0000000017887F38-0000000017887F95
void __cdecl SealEnergyChargeBattle::~SealEnergyChargeBattle(SealEnergyChargeBattle *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SealEnergyChargeBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v1;
  std::string::~string(&this->transaction_no_);
  SealBattleBase::~SealBattleBase(this);
};

// Line 155: range 000000001762EEBC-000000001762F0E2
void __cdecl SealEnergyChargeBattle::SealEnergyChargeBattle(
        SealEnergyChargeBattle *const this,
        uint32_t radius,
        uint32_t max_progress,
        const SealEnergyChargeParam *param)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  SealBattleBase::SealBattleBase(this, radius, max_progress, SEAL_BATTLE_ENERGY_CHARGE);
  v4 = (int (**)(...))(&`vtable for'SealEnergyChargeBattle + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SealBattleBase = v4;
  if ( *(char *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->param_.default_kill_charge + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 91) & 7) >= *(_BYTE *)((((unsigned __int64)&this->param_.default_kill_charge + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->param_, 20LL);
  }
  if ( ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&param->default_kill_charge + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&param->default_kill_charge + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(param, 20LL);
  }
  v5 = *(_QWORD *)&param->auto_charge;
  *(_QWORD *)&this->param_.battle_time = *(_QWORD *)&param->battle_time;
  *(_QWORD *)&this->param_.auto_charge = v5;
  this->param_.default_kill_charge = param->default_kill_charge;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_time_);
  }
  this->start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_tick_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_tick_time_);
  }
  this->last_tick_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_inside_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_inside_);
  }
  this->is_inside_ = 0;
  std::string::basic_string(&this->transaction_no_);
};

// Line 171: range 0000000017A01514-0000000017A01540
std::string *__cdecl SealEnergyChargeBattle::getTransactionNo[abi:cxx11](
        std::string *retstr,
        const SealEnergyChargeBattle *const this)
{
  std::string::basic_string(retstr, &this->transaction_no_);
  return retstr;
};
