// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/sign_in/player_sign_in_comp.h

// Line 49: range 0000000016D755DC-0000000016D756B7
void __cdecl SignInRecord::SignInRecord(SignInRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->schedule_id = 0;
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

// Line 49: range 0000000016FBEB94-0000000016FBED26
void __cdecl SignInRecord::SignInRecord(SignInRecord *const this, const SignInRecord *a2)
{
  uint32_t schedule_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t sign_in_count; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t last_sign_in_time; // ecx
  char v9; // al
  const SignInRecord *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  schedule_id = a2->schedule_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, (_BYTE)this);
  }
  this->schedule_id = schedule_id;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->sign_in_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->sign_in_count);
  }
  sign_in_count = v10->sign_in_count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->sign_in_count, v4, v7);
  this->sign_in_count = sign_in_count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->last_sign_in_time);
  }
  last_sign_in_time = v10->last_sign_in_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->last_sign_in_time, v4, (_BYTE)this + 8);
  }
  this->last_sign_in_time = last_sign_in_time;
  std::vector<unsigned int>::vector(&this->reward_day_vec, &v10->reward_day_vec);
};

// Line 49: range 0000000016D756B8-0000000016D756D6
void __cdecl SignInRecord::~SignInRecord(SignInRecord *const this)
{
  std::vector<unsigned int>::~vector(&this->reward_day_vec);
};

// Line 60: range 0000000016FBD7BC-0000000016FBD851
void __cdecl BonusActivityRecord::BonusActivityRecord(BonusActivityRecord *const this)
{
  bool v1; // dl
  bool v2; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->bonus_activity_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->state = BONUS_ACTIVITY_STATE_NONE;
};

// Line 69: range 0000000017093C0A-0000000017093C89
void __cdecl PlayerSignInComp::~PlayerSignInComp(PlayerSignInComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerSignInComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PlayerCompBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->refresh_op_activity_timer_);
  std::unordered_map<unsigned int,BonusActivityRecord>::~unordered_map(&this->bonus_activity_record_map_);
  std::unordered_map<unsigned int,SignInRecord>::~unordered_map(&this->sign_in_record_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 69: range 0000000017093C8A-0000000017093CB4
void __cdecl PlayerSignInComp::~PlayerSignInComp(PlayerSignInComp *const this)
{
  PlayerSignInComp::~PlayerSignInComp(this);
  operator delete(this, 0xE8uLL);
};

// Line 72: range 0000000017214021-000000001721402B
uint32_t __cdecl PlayerSignInComp::getType()
{
  return 28;
};

// Line 75: range 0000000017482328-00000000174824F3
void __cdecl ZN16PlayerSignInCompCI214PlayerCompBaseER6Player(PlayerSignInComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerSignInComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerSignInComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerSignInComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerSignInComp::*)(long unsigned int),PlayerSignInComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerSignInComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,SignInRecord>::unordered_map(&this->sign_in_record_map_);
  std::unordered_map<unsigned int,BonusActivityRecord>::unordered_map(&this->bonus_activity_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerSignInComp *, unsigned __int64))PlayerSignInComp::checkOpenOpActivityOnTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerSignInComp::*)(unsigned long),PlayerSignInComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerSignInComp::*)(unsigned long) ()(PlayerSignInComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->refresh_op_activity_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};
