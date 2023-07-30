// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reunion/reunion.h

// Line 24: range 00000000172143B6-0000000017214491
void __cdecl ReunionSignInRecord::ReunionSignInRecord(ReunionSignInRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->reunion_sign_in_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->sign_in_count, v2, v3);
  this->sign_in_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_sign_in_time, v2, (_BYTE)this + 8);
  }
  this->last_sign_in_time = 0;
  std::vector<unsigned int>::vector(&this->reward_day_vec);
};

// Line 24: range 0000000016D73FBE-0000000016D73FDC
void __cdecl ReunionSignInRecord::~ReunionSignInRecord(ReunionSignInRecord *const this)
{
  std::vector<unsigned int>::~vector(&this->reward_day_vec);
};

// Line 36: range 0000000017214492-000000001721455E
void __cdecl ReunionMissionRecord::ReunionMissionRecord(ReunionMissionRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->mission_id = 0;
  std::set<unsigned int>::set(&this->taken_reward_watcher_set);
  std::set<unsigned int>::set(&this->finished_watcher_set);
  std::set<unsigned int>::set(&this->watcher_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score, v1, (_BYTE)this - 104);
  }
  this->cur_score = 0;
  std::vector<bool>::vector(&this->is_taken_reward_vec);
};

// Line 36: range 0000000016D73FDE-0000000016D7402E
void __cdecl ReunionMissionRecord::~ReunionMissionRecord(ReunionMissionRecord *const this)
{
  std::vector<bool>::~vector(&this->is_taken_reward_vec);
  std::set<unsigned int>::~set(&this->watcher_set);
  std::set<unsigned int>::~set(&this->finished_watcher_set);
  std::set<unsigned int>::~set(&this->taken_reward_watcher_set);
};

// Line 49: range 0000000017214560-0000000017214681
void __cdecl ReunionPrivilegeRecord::ReunionPrivilegeRecord(ReunionPrivilegeRecord *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->privilege_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->cur_day_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->cur_day_count = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->last_refresh_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->last_refresh_time = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->total_count, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->total_count = 0;
};

// Line 64: range 0000000017214682-00000000172148E4
void __cdecl Reunion::Reunion(Reunion *const this, Player *player, PlayerReunionComp *reunion_comp)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  __int64 v7; // rdx
  std::allocator<char> __a; // [rsp+2Fh] [rbp-11h] BYREF

  v3 = (int (**)(...))(&`vtable for'Reunion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_Reunion = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->reunion_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->reunion_comp_, player);
  this->reunion_comp_ = reunion_comp;
  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_first_gift_reward_, player, &this->is_taken_first_gift_reward_);
  this->is_taken_first_gift_reward_ = 0;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->first_gift_reward_id_, v4, v5);
  this->first_gift_reward_id_ = 0;
  ReunionSignInRecord::ReunionSignInRecord(&this->sign_in_record_);
  ReunionMissionRecord::ReunionMissionRecord(&this->mission_record_);
  ReunionPrivilegeRecord::ReunionPrivilegeRecord(&this->privilege_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_time_, v4, (_BYTE)this + 32);
  }
  this->finish_time_ = 0;
  v6 = ((_BYTE)this + 36) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_activated_, v6, v7);
  this->is_activated_ = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&this->game_version_, byte_25FB4240, &__a);
  std::allocator<char>::~allocator(&__a);
};

// Line 65: range 0000000017093EFE-0000000017093F71
void __cdecl Reunion::~Reunion(Reunion *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Reunion + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Reunion = v2;
  std::string::~string(&this->game_version_);
  ReunionMissionRecord::~ReunionMissionRecord(&this->mission_record_);
  ReunionSignInRecord::~ReunionSignInRecord(&this->sign_in_record_);
};

// Line 65: range 0000000017093F72-0000000017093F9C
void __cdecl Reunion::~Reunion(Reunion *const this)
{
  Reunion::~Reunion(this);
  operator delete(this, 0x148uLL);
};

// Line 78: range 0000000015D3DB60-0000000015D3DBB2
bool __cdecl Reunion::isActivated(const Reunion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated_);
  }
  return this->is_activated_;
};

// Line 79: range 0000000016D74030-0000000016D7407C
uint32_t __cdecl Reunion::getFinishTime(Reunion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  return this->finish_time_;
};

// Line 98: range 0000000016D7407E-0000000016D740CA
uint32_t __cdecl Reunion::getPrivilgeId(const Reunion *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->privilege_record_);
  }
  return this->privilege_record_.privilege_id;
};

// Line 128: range 0000000016D740CC-0000000016D740FB
std::string *__cdecl Reunion::getGameVersion[abi:cxx11](std::string *retstr, const Reunion *const this)
{
  std::string::basic_string(retstr, &this->game_version_);
  return retstr;
};
