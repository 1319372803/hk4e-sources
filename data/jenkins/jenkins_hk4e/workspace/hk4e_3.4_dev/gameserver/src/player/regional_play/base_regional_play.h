// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/base_regional_play.h

// Line 23: range 0000000015D372F8-0000000015D374DE
void __cdecl BaseRegionalPlay::BaseRegionalPlay(
        BaseRegionalPlay *const this,
        Player *player,
        const std::string *play_name,
        uint32_t play_type)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::enable_shared_from_this<BaseRegionalPlay>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseRegionalPlay>);
  v4 = (int (**)(...))(&`vtable for'BaseRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_BaseRegionalPlay = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  std::string::basic_string(&this->play_name_, play_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type_, play_name, (_BYTE)this + 64);
  }
  this->play_type_ = play_type;
  v5 = ((_BYTE)this + 68) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_enabled_, v5, v6);
  this->is_enabled_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->polygon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->polygon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->polygon_id_, v5, (_BYTE)this + 72);
  }
  this->polygon_id_ = 0;
  v7 = ((_BYTE)this + 76) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_in_region_, v7, v8);
  this->is_in_region_ = 1;
  std::shared_ptr<PlayerTimer>::shared_ptr(&this->timer_ptr_);
  std::string::basic_string(&this->regional_play_transaction_);
};

// Line 25: range 0000000015F289C4-0000000015F28A45
void __cdecl BaseRegionalPlay::~BaseRegionalPlay(BaseRegionalPlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseRegionalPlay = v2;
  std::string::~string(&this->regional_play_transaction_);
  std::shared_ptr<PlayerTimer>::~shared_ptr(&this->timer_ptr_);
  std::string::~string(&this->play_name_);
  std::enable_shared_from_this<BaseRegionalPlay>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseRegionalPlay>);
};

// Line 25: range 0000000015F28A46-0000000015F28A70
void __cdecl BaseRegionalPlay::~BaseRegionalPlay(BaseRegionalPlay *const this)
{
  BaseRegionalPlay::~BaseRegionalPlay(this);
  operator delete(this, 0x80uLL);
};

// Line 32: range 0000000015D374E0-0000000015D3750C
std::string *__cdecl BaseRegionalPlay::getPlayName[abi:cxx11](std::string *retstr, const BaseRegionalPlay *const this)
{
  std::string::basic_string(retstr, &this->play_name_);
  return retstr;
};

// Line 37: range 0000000015D3750E-0000000015D3751F
bool __cdecl BaseRegionalPlay::isVarCanBeModified(const BaseRegionalPlay *const this, uint32_t var_type)
{
  return 1;
};

// Line 43: range 0000000015D37520-0000000015D37530
float __cdecl BaseRegionalPlay::getBaseVarValue(const BaseRegionalPlay *const this, uint32_t var_type)
{
  return 0.0;
};

// Line 52: range 0000000015D37532-0000000015D37540
bool __cdecl BaseRegionalPlay::checkSpecialCanDestory(BaseRegionalPlay *const this)
{
  return 0;
};

// Line 55: range 0000000015D37542-0000000015D37550
bool __cdecl BaseRegionalPlay::checkSpecialIsInRegion(BaseRegionalPlay *const this)
{
  return 1;
};

// Line 59: range 0000000015D37552-0000000015D3755C
void __cdecl BaseRegionalPlay::update(BaseRegionalPlay *const this)
{
  ;
};

// Line 61: range 0000000015D3755E-0000000015D37568
void __cdecl BaseRegionalPlay::onEnabled(BaseRegionalPlay *const this)
{
  ;
};

// Line 63: range 0000000015D3756A-0000000015D37574
void __cdecl BaseRegionalPlay::onDisabled(BaseRegionalPlay *const this)
{
  ;
};

// Line 84: range 0000000015D37576-0000000015D375C3
bool __cdecl BaseRegionalPlay::getIsEnabled(const BaseRegionalPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enabled_);
  }
  return this->is_enabled_;
};
