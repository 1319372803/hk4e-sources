// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_share_cd_comp.h

// Line 33: range 0000000017B8D76C-0000000017B8D7C9
void __cdecl PlayerShareCDComp::~PlayerShareCDComp(PlayerShareCDComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerShareCDComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,ShareCDInfo>::~map(&this->share_cd_info_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 33: range 0000000017B8D7CA-0000000017B8D7F4
void __cdecl PlayerShareCDComp::~PlayerShareCDComp(PlayerShareCDComp *const this)
{
  PlayerShareCDComp::~PlayerShareCDComp(this);
  operator delete(this, 0x50uLL);
};

// Line 36: range 0000000017214AB2-0000000017214ABC
uint32_t __cdecl PlayerShareCDComp::getType()
{
  return 66;
};

// Line 38: range 000000001748F02C-000000001748F094
void __cdecl ZN17PlayerShareCDCompCI214PlayerCompBaseER6Player(PlayerShareCDComp *const this, Player *a2)
{
  int (**v2)(...); // rdx

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerShareCDComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::map<unsigned int,ShareCDInfo>::map(&this->share_cd_info_map_);
};

// Line 353: range 0000000017B5118A-0000000017B51286
void __cdecl ShareCDInfo::ShareCDInfo(ShareCDInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->share_cd_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->config_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->config_index, v2, v3);
  this->config_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_use_time, v2);
  this->last_use_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_token >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_token >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cd_token, v2, &this->cd_token);
  }
  this->cd_token = 0;
};
