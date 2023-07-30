// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget_play_comp.h

// Line 43: range 0000000017888270-000000001788829A
void __cdecl GadgetPlayComp::~GadgetPlayComp(GadgetPlayComp *const this)
{
  GadgetPlayComp::~GadgetPlayComp(this);
  operator delete(this, 0x20uLL);
};

// Line 43: range 0000000017888212-000000001788826F
void __cdecl GadgetPlayComp::~GadgetPlayComp(GadgetPlayComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<GadgetPlayBase>::~shared_ptr(&this->play_ptr_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 49: range 000000001681CB5E-000000001681CBCB
void __cdecl ZN14GadgetPlayCompCI214GadgetCompBaseER6Gadget(GadgetPlayComp *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetPlayComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  std::shared_ptr<GadgetPlayBase>::shared_ptr(&this->play_ptr_, 0LL);
};

// Line 86: range 000000001784E51E-000000001784E548
void __cdecl GadgetPlayBase::~GadgetPlayBase(GadgetPlayBase *const this)
{
  GadgetPlayBase::~GadgetPlayBase(this);
  operator delete(this, 0xF8uLL);
};

// Line 86: range 000000001784E468-000000001784E51D
void __cdecl GadgetPlayBase::~GadgetPlayBase(GadgetPlayBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetPlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetPlayBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->uid_watcher_map_);
  std::map<unsigned int,unsigned int>::~map(&this->uid_score_map_);
  std::vector<unsigned int>::~vector(&this->progress_stage_vec_);
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->stop_timer_ptr_);
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->cd_timer_ptr_);
  std::map<unsigned int,std::map<std::string,unsigned int>>::~map(&this->uid_value_map_);
  std::enable_shared_from_this<GadgetPlayBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<GadgetPlayBase>);
};

// Line 97: range 0000000017632B1C-0000000017632B68
uint32_t __cdecl GadgetPlayBase::getProgress(const GadgetPlayBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->progress_;
};

// Line 109: range 0000000017632B6A-0000000017632BC3
bool __cdecl GadgetPlayBase::isStarted(const GadgetPlayBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->start_time_ != 0;
};

// Line 114: range 0000000017632BC4-0000000017632BD6
int32_t __cdecl GadgetPlayBase::fillPlayDetailData(
        const GadgetPlayBase *const this,
        proto::GadgetPlayDataNotify *notify)
{
  return 0;
};

// Line 115: range 0000000017632BD8-0000000017632BE6
int32_t __cdecl GadgetPlayBase::checkBattleStart(const GadgetPlayBase *const this)
{
  return 0;
};

// Line 148: range 0000000017888150-00000000178881E5
void __cdecl GadgetCruciblePlay::~GadgetCruciblePlay(GadgetCruciblePlay *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetCruciblePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetPlayBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->uid_watcher_value_map_);
  std::vector<unsigned int>::~vector(&this->activie_uid_vec_);
  std::weak_ptr<Observer>::~weak_ptr(&this->mp_mode_observer_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->observer_wtr_);
  GadgetPlayBase::~GadgetPlayBase(this);
};

// Line 148: range 00000000178881E6-0000000017888210
void __cdecl GadgetCruciblePlay::~GadgetCruciblePlay(GadgetCruciblePlay *const this)
{
  GadgetCruciblePlay::~GadgetCruciblePlay(this);
  operator delete(this, 0x168uLL);
};

// Line 151: range 000000001784E54A-000000001784E62D
void __cdecl ZN18GadgetCruciblePlayCI214GadgetPlayBaseER6Gadget(GadgetCruciblePlay *const this, Gadget *a2)
{
  int (**v2)(...); // rdx

  GadgetPlayBase::GadgetPlayBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GadgetCruciblePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetPlayBase = v2;
  std::weak_ptr<Observer>::weak_ptr(&this->observer_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->mp_mode_observer_wtr_);
  std::vector<unsigned int>::vector(&this->activie_uid_vec_);
  std::map<unsigned int,unsigned int>::map(&this->uid_watcher_value_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id_);
  }
  this->mp_play_id_ = 0;
};

// Line 153: range 0000000017632BE8-0000000017632BF6
uint32_t __cdecl GadgetCruciblePlay::getPlayType(const GadgetCruciblePlay *const this)
{
  return 1;
};
