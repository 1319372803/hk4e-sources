// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_transfer_guard_comp.h

// Line 58: range 0000000015199FE2-000000001519A194
void __cdecl TransferGuardParam::TransferGuardParam(TransferGuardParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  std::map<unsigned int,std::pair<Vector3,Vector3>>::map(&this->uid_location_map);
  std::set<proto::EnterReason>::set(&this->allow_enter_reason_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, v1, (_BYTE)this + 96);
  }
  this->duration = 0;
  std::set<unsigned int>::set(&this->enter_uid_set);
  if ( *(char *)(((unsigned __int64)&this->is_transfer_on_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_transfer_on_start, v1, &this->is_transfer_on_start);
  this->is_transfer_on_start = 0;
  v2 = (((_BYTE)this - 100) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->start_transfer_reason >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_transfer_reason >> 3)
                                                         + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->start_transfer_reason, v2, v3);
  this->start_transfer_reason = ENTER_REASON_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_transfer_on_timeout >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_transfer_on_timeout, v2, &this->is_transfer_on_timeout);
  this->is_transfer_on_timeout = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->match_id, (((_BYTE)this - 92) & 7u) + 3, v4);
  this->match_id = 0;
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::function(&this->player_enter_func);
  std::function<void ()(std::set<unsigned int> const&)>::function(&this->timeout_func);
};

// Line 58: range 000000001519A196-000000001519A1F4
void __cdecl TransferGuardParam::~TransferGuardParam(TransferGuardParam *const this)
{
  std::function<void ()(std::set<unsigned int> const&)>::~function(&this->timeout_func);
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::~function(&this->player_enter_func);
  std::set<unsigned int>::~set(&this->enter_uid_set);
  std::set<proto::EnterReason>::~set(&this->allow_enter_reason_set);
  std::map<unsigned int,std::pair<Vector3,Vector3>>::~map(&this->uid_location_map);
};

// Line 72: range 0000000018327C5C-0000000018327D45
void __cdecl SceneTransferGuardComp::~SceneTransferGuardComp(SceneTransferGuardComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneTransferGuardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  std::any::~any(&this->guard_context_);
  std::function<void ()(std::set<unsigned int> const&)>::~function(&this->timeout_func_);
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::~function(&this->player_enter_func_);
  std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::~map(&this->uid_start_location_map_);
  std::set<proto::EnterReason>::~set(&this->allow_enter_reason_set_);
  std::set<unsigned int>::~set(&this->punish_uid_set_);
  std::set<unsigned int>::~set(&this->leave_uid_set_);
  std::set<unsigned int>::~set(&this->enter_uid_set_);
  std::map<unsigned int,std::pair<Vector3,Vector3>>::~map(&this->uid_location_map_);
  SceneCompBase::~SceneCompBase(this);
};

// Line 72: range 0000000018327D46-0000000018327D70
void __cdecl SceneTransferGuardComp::~SceneTransferGuardComp(SceneTransferGuardComp *const this)
{
  SceneTransferGuardComp::~SceneTransferGuardComp(this);
  operator delete(this, 0x1A0uLL);
};

// Line 80: range 0000000015BEE038-0000000015BEE27C
void __cdecl ZN22SceneTransferGuardCompCI213SceneCompBaseER5Scene(SceneTransferGuardComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  SceneCompBase::SceneCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneTransferGuardComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  std::map<unsigned int,std::pair<Vector3,Vector3>>::map(&this->uid_location_map_);
  std::set<unsigned int>::set(&this->enter_uid_set_);
  std::set<unsigned int>::set(&this->leave_uid_set_);
  std::set<unsigned int>::set(&this->punish_uid_set_);
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start_, a2, &this->is_start_);
  this->is_start_ = 0;
  v3 = ((_BYTE)this - 39) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_attach_by_play_, v3, v4);
  this->is_attach_by_play_ = 0;
  std::set<proto::EnterReason>::set(&this->allow_enter_reason_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_, v3, (_BYTE)this + 16);
  }
  this->timeout_ = 0;
  v5 = ((_BYTE)this + 20) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_transfer_on_timeout_, v5, v6);
  this->is_transfer_on_timeout_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_, v5, (_BYTE)this + 24);
  }
  this->match_id_ = 0;
  std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::map(&this->uid_start_location_map_);
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::function(&this->player_enter_func_);
  std::function<void ()(std::set<unsigned int> const&)>::function(&this->timeout_func_);
  std::any::any(&this->guard_context_);
};

// Line 92: range 0000000017A03A60-0000000017A03AAD
bool __cdecl SceneTransferGuardComp::isActive(const SceneTransferGuardComp *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  return this->is_start_;
};

// Line 93: range 0000000017A03AAE-0000000017A03B00
bool __cdecl SceneTransferGuardComp::isAttachedByPlay(const SceneTransferGuardComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_attach_by_play_);
  }
  return this->is_attach_by_play_;
};

// Line 139: range 0000000017A18216-0000000017A182A8
std::optional<CoinCollectTransferGuardContext> *__cdecl SceneTransferGuardComp::getTransferGuardContext<CoinCollectTransferGuardContext>(
        std::optional<CoinCollectTransferGuardContext> *retstr,
        const SceneTransferGuardComp *const this)
{
  std::any *p_guard_context; // rsi

  p_guard_context = &this->guard_context_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 71) & 7) >= *(_BYTE *)(((unsigned __int64)(&retstr->_M_payload._M_engaged + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_guard_context = (std::any *)72;
    __asan_report_store_n(retstr, 72LL);
  }
  tryAnyCastOptional<CoinCollectTransferGuardContext>(retstr, p_guard_context);
  return retstr;
};
