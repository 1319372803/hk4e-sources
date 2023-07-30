// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/scene_handler.h

// Line 23: range 0000000015BF9FF2-0000000015BFA03F
void __cdecl SceneHandler::~SceneHandler(SceneHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SceneHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 23: range 0000000015BFA040-0000000015BFA06A
void __cdecl SceneHandler::~SceneHandler(SceneHandler *const this)
{
  SceneHandler::~SceneHandler(this);
  operator delete(this, 0x28uLL);
};

// Line 29: range 0000000017491F40-00000000174920D1
void __cdecl ZN12SceneHandlerCI217PlayerHandlerBaseER6Player(SceneHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_chat_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_chat_time_);
  }
  this->last_chat_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_start_time_);
  }
  this->cd_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chat_start_check_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chat_start_check_time_);
  }
  this->chat_start_check_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chat_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chat_num_);
  }
  this->chat_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_entity_ability_config_hash_notify_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_entity_ability_config_hash_notify_time_ms_);
  this->last_entity_ability_config_hash_notify_time_ms_ = 0LL;
};
