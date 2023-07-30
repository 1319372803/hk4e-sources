// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/draft/player_draft_comp.h

// Line 25: range 00000000174899A4-0000000017489B30
void __cdecl DraftInfo::DraftInfo(DraftInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->draft_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->invite_deadline_time, v2, v3);
  this->invite_deadline_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->twice_confirm_deadline_time, v2, &this->twice_confirm_deadline_time);
  }
  this->twice_confirm_deadline_time = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->stage, v4, v5);
  this->stage = NONE_10;
  if ( *(char *)(((unsigned __int64)&this->is_single_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_single_mode, v4, &this->is_single_mode);
  this->is_single_mode = 0;
  std::vector<unsigned int>::vector(&this->invite_agree_uid_vec);
  std::vector<unsigned int>::vector(&this->invite_disagree_uid_vec);
  std::vector<unsigned int>::vector(&this->twice_agree_uid_vec);
  std::vector<unsigned int>::vector(&this->twice_disagree_uid_vec);
};

// Line 25: range 0000000017489B32-0000000017489B80
void __cdecl DraftInfo::~DraftInfo(DraftInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->twice_disagree_uid_vec);
  std::vector<unsigned int>::~vector(&this->twice_agree_uid_vec);
  std::vector<unsigned int>::~vector(&this->invite_disagree_uid_vec);
  std::vector<unsigned int>::~vector(&this->invite_agree_uid_vec);
};

// Line 42: range 00000000176B2A70-00000000176B2BC1
void __cdecl DraftInfo::clear(DraftInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->draft_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_deadline_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->invite_deadline_time, v2, v3);
  this->invite_deadline_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->twice_confirm_deadline_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->twice_confirm_deadline_time, v2, &this->twice_confirm_deadline_time);
  }
  this->twice_confirm_deadline_time = 0;
  std::vector<unsigned int>::clear(&this->invite_agree_uid_vec);
  std::vector<unsigned int>::clear(&this->invite_disagree_uid_vec);
  std::vector<unsigned int>::clear(&this->twice_agree_uid_vec);
  std::vector<unsigned int>::clear(&this->twice_disagree_uid_vec);
  v4 = (*(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->stage, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->stage = NONE_10;
};

// Line 57: range 000000001788716C-00000000178871DB
void __cdecl PlayerDraftComp::~PlayerDraftComp(PlayerDraftComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerDraftComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->twice_confirm_timer_);
  DraftInfo::~DraftInfo(&this->draft_info_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 57: range 00000000178871DC-0000000017887206
void __cdecl PlayerDraftComp::~PlayerDraftComp(PlayerDraftComp *const this)
{
  PlayerDraftComp::~PlayerDraftComp(this);
  operator delete(this, 0xF0uLL);
};

// Line 60: range 0000000017214911-000000001721491B
uint32_t __cdecl PlayerDraftComp::getType()
{
  return 51;
};

// Line 62: range 0000000017489B82-0000000017489D27
void __cdecl ZN15PlayerDraftCompCI214PlayerCompBaseER6Player(PlayerDraftComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerDraftComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerDraftComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerDraftComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerDraftComp::*)(long unsigned int),PlayerDraftComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerDraftComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  DraftInfo::DraftInfo(&this->draft_info_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerDraftComp *, unsigned __int64))PlayerDraftComp::onTwiceConfirmTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerDraftComp::*)(unsigned long),PlayerDraftComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerDraftComp::*)(unsigned long) ()(PlayerDraftComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->twice_confirm_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};
