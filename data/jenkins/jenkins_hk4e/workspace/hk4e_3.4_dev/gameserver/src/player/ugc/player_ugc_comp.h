// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ugc/player_ugc_comp.h

// Line 26: range 0000000017B8DD00-0000000017B8DD5D
void __cdecl PlayerUgcComp::~PlayerUgcComp(PlayerUgcComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerUgcComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::~unordered_map(&this->ugc_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 26: range 0000000017B8DD5E-0000000017B8DD88
void __cdecl PlayerUgcComp::~PlayerUgcComp(PlayerUgcComp *const this)
{
  PlayerUgcComp::~PlayerUgcComp(this);
  operator delete(this, 0x70uLL);
};

// Line 29: range 0000000017214A9C-0000000017214AA6
uint32_t __cdecl PlayerUgcComp::getType()
{
  return 67;
};

// Line 34: range 000000001748E8E4-000000001748EA85
void __cdecl ZN13PlayerUgcCompCI214PlayerCompBaseER6Player(PlayerUgcComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  bool v4; // dl
  bool v5; // dl

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerUgcComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->MAX_REQUEST_WAIT_TIME, a2, (_BYTE)this + 32);
  }
  this->MAX_REQUEST_WAIT_TIME = 10;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  v4 = *(_BYTE *)(((unsigned __int64)&this->MIN_RECORD_SAVE_INTERVAL >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->MIN_RECORD_SAVE_INTERVAL >> 3)
                                                        + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->MIN_RECORD_SAVE_INTERVAL, v3, v4);
  this->MIN_RECORD_SAVE_INTERVAL = 5;
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::unordered_map(&this->ugc_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_ugc_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_request_ugc_guid_, v3);
  this->last_request_ugc_guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_request_time_, v3, (_BYTE)this + 104);
  }
  this->last_request_time_ = 0;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->ban_publish_expire_time_, (((_BYTE)this + 108) & 7u) + 3, v5);
  this->ban_publish_expire_time_ = 0;
};

// Line 86: range 0000000017A07956-0000000017A07982
uint64_t __cdecl PlayerUgcComp::genUgcGuid(PlayerUgcComp *const this, uint32_t idx, uint32_t ugc_type, uint32_t uid)
{
  return ((unsigned __int64)ugc_type << 32) | ((unsigned __int64)idx << 40) | uid;
};

// Line 88: range 0000000016D60D40-0000000016D60D51
uint32_t __cdecl PlayerUgcComp::getUgcOwnerUid(PlayerUgcComp *const this, uint64_t ugc_guid)
{
  return ugc_guid;
};
