// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/dungeon_handler.h

// Line 67: range 0000000013611954-00000000136119A1
void __cdecl DungeonHandler::~DungeonHandler(DungeonHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DungeonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 67: range 00000000136119A2-00000000136119CC
void __cdecl DungeonHandler::~DungeonHandler(DungeonHandler *const this)
{
  DungeonHandler::~DungeonHandler(this);
  operator delete(this, 0x20uLL);
};

// Line 70: range 0000000017490968-0000000017490A2F
void __cdecl ZN14DungeonHandlerCI217PlayerHandlerBaseER6Player(DungeonHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'DungeonHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_get_dungeon_entry_info_req_time_ms_);
  this->last_get_dungeon_entry_info_req_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_get_dungeon_entry_info_req_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_get_dungeon_entry_info_req_count_);
  }
  this->last_get_dungeon_entry_info_req_count_ = 0;
};
