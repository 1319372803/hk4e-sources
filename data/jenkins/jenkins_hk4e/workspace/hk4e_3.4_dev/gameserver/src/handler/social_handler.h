// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/handler/social_handler.h

// Line 51: range 00000000183270F6-0000000018327143
void __cdecl SocialHandler::~SocialHandler(SocialHandler *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SocialHandler + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerHandlerBase = v1;
  PlayerHandlerBase::~PlayerHandlerBase(this);
};

// Line 51: range 0000000018327144-000000001832716E
void __cdecl SocialHandler::~SocialHandler(SocialHandler *const this)
{
  SocialHandler::~SocialHandler(this);
  operator delete(this, 0x40uLL);
};

// Line 54: range 00000000174932CA-0000000017493508
void __cdecl ZN13SocialHandlerCI217PlayerHandlerBaseER6Player(SocialHandler *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerHandlerBase::PlayerHandlerBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'SocialHandler + 2);
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
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pull_private_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pull_private_num_);
  }
  this->pull_private_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_pull_private_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_check_pull_private_time_);
  this->last_check_pull_private_time_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pull_recent_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pull_recent_num_);
  }
  this->pull_recent_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_pull_recent_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_check_pull_recent_time_);
  this->last_check_pull_recent_time_ = 0LL;
};
