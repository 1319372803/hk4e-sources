// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/player_handler.h

// Line 43: range 0000000016B7BA8E-0000000016B7BAEB
void __cdecl PlayerHandler::~PlayerHandler(PlayerHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  std::map<unsigned int,unsigned int>::~map(&this->union_cmd_count_map_);
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 43: range 0000000016B7BAEC-0000000016B7BB16
void __cdecl PlayerHandler::~PlayerHandler(PlayerHandler *const this)
{
  PlayerHandler::~PlayerHandler(this);
  operator delete(this, 0x58uLL);
};

// Line 47: range 000000001749258A-0000000017492732
void __cdecl ZN13PlayerHandlerCI217PlayerHandlerBaseER6Player(PlayerHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_cmd_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->union_cmd_freq_);
  }
  this->union_cmd_freq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->union_notify_freq_);
  }
  this->union_notify_freq_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->union_cmd_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_union_sec_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_union_sec_);
  }
  this->last_union_sec_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cheat_in_last_period_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_cheat_in_last_period_);
  }
  this->is_cheat_in_last_period_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_packet_cheat_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->union_packet_cheat_count_);
  }
  this->union_packet_cheat_count_ = 0;
};
