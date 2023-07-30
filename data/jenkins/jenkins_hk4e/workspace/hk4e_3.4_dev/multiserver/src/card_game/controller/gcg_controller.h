// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_controller.h

// Line 33: range 000000000D82AB94-000000000D82ABE5
void __cdecl GCGControllerBase::~GCGControllerBase(GCGControllerBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGControllerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v1;
  GCGControllerShowData::~GCGControllerShowData(&this->show_data_);
};

// Line 37: range 000000000D8279BC-000000000D827ABD
void __cdecl GCGControllerBase::GCGControllerBase(
        GCGControllerBase *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  int (**v3)(...); // rdx

  v3 = (int (**)(...))(&`vtable for'GCGControllerBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  GCGControllerShowData::GCGControllerShowData(&this->show_data_);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_think_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_think_);
  this->is_ignore_think_ = 0;
};

// Line 42: range 000000000D827ABE-000000000D827B0B
void __cdecl GCGControllerBase::setControllerId(GCGControllerBase *const this, GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
};

// Line 50: range 000000000D827B0C-000000000D827B53
GCGControllerValue __cdecl GCGControllerBase::getControllerId(const GCGControllerBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 52: range 000000000D827B54-000000000D827B8E
GCGGameMode *__cdecl GCGControllerBase::getGameMode(GCGControllerBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  return this->game_mode_;
};

// Line 55: range 000000000D827B90-000000000D827BA1
const GCGControllerShowData *__cdecl GCGControllerBase::getShowData(const GCGControllerBase *const this)
{
  return &this->show_data_;
};

// Line 57: range 000000000DF38050-000000000DF3805E
void __cdecl GCGControllerBase::sendMsgPack(
        GCGControllerBase *const this,
        const std::vector<std::shared_ptr<GCGMsgPack>> *msg_pack_ptr)
{
  ;
};

// Line 58: range 000000000DF38060-000000000DF3806A
void __cdecl GCGControllerBase::onGameStart(GCGControllerBase *const this)
{
  ;
};

// Line 59: range 000000000DF3806C-000000000DF38076
void __cdecl GCGControllerBase::onGameSettle(GCGControllerBase *const this)
{
  ;
};

// Line 61: range 000000000DF38078-000000000DF3808A
int32_t __cdecl GCGControllerBase::onTick(GCGControllerBase *const this, uint64_t now_ms)
{
  return -1;
};

// Line 65: range 000000000D827BA2-000000000D827BEA
void __cdecl GCGControllerBase::setIsIgnoreThink(GCGControllerBase *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_ignore_think_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_think_);
  this->is_ignore_think_ = 1;
};

// Line 67: range 000000000DF3808C-000000000DF380D4
bool __cdecl GCGControllerBase::getIsIgnoreThink(GCGControllerBase *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_ignore_think_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_ignore_think_);
  return this->is_ignore_think_;
};
